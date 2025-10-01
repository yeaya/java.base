/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "OS.h"
#include "JavaThread.h"
#include "StackWalk.h"

#include <java/lang/Logger.h>
#include <java/lang/ObjectManagerInternal.h>
#include <jcpp.h>

#include <dlfcn.h>
#include <pthread.h>
#include <sys/mman.h>
#include <ucontext.h>
#include <thread>

#define USE_UNWIND_TRACE
#ifdef USE_UNWIND_TRACE
#include <unwind.h>
#else
#include <execinfo.h>
#endif

#ifdef USE_UNWIND_TRACE
struct BacktraceItem {
	address* stack;
	int frames;
	int toSkip;
	int count;
};

_Unwind_Reason_Code unwindTraceHandle(struct _Unwind_Context* uc, void* data) {
	BacktraceItem* item = (BacktraceItem*)data;
	if (item->toSkip > 0) {
		item->toSkip--;
		return _URC_NO_REASON;
	} else {
		if (item->frames > 0) {
			address ip = (address)_Unwind_GetIP(uc);
			if (ip != nullptr) {
				item->stack[0] = ip;
				item->stack++;
				item->frames--;
				item->count++;
				return _URC_NO_REASON;
			}
		}
		return _URC_NORMAL_STOP;
	}
}

int OS::getBackTrace(address* stack, int frames, int toSkip) {
	BacktraceItem bti;
	bti.stack = stack;
	bti.frames = frames;
	bti.toSkip = toSkip + 1;
	bti.count = 0;
	_Unwind_Backtrace(unwindTraceHandle, &bti);
	if (bti.count < frames) {
		stack[bti.count] = nullptr;
	}
	return bti.count;
}

#else // USE_UNWIND_TRACE

int OS::getBackTrace(address* stack, int frames, int toSkip) {
	int32_t skip = toSkip + 1;
	size_t size = backtrace((void**)stack, frames);
	if (size > skip) {
		size -= skip;
		for (int32_t index = 0; index < size; index++) {
			stack[index] = stack[index + skip];
		}
		for (int32_t index = size; index < frames; index++) {
			stack[index] = nullptr;
		}
		return size;
	} else {
		for (int32_t index = 0; index < frames; index++) {
			stack[index] = nullptr;
		}
		return 0;
	}
}
#endif // USE_UNWIND_TRACE

size_t OS::getLastErrorDesc(char* buf, size_t len) {
	if (errno == 0) {
		return 0;
	}
	const char* s = OS::getErrorDesc(errno);
	size_t n = ::strlen(s);
	if (n >= len) {
		n = len - 1;
	}
	::strncpy(buf, s, n);
	buf[n] = '\0';
	return n;
}

int OS::vsnprintf(char* buf, size_t len, const char* format, va_list args) {
	int result = ::vsnprintf(buf, len, format, args);
	if ((result < 0) && (len > 0)) {
		buf[len - 1] = '\0';
	}
	return result;
}

void OS::unloadLibrary(void* lib) {
	::dlclose(lib);
}

const char* OS::getCurrentDirectory(char* buf, int bufLen) {
	return getcwd(buf, bufLen);
}

void OS::exit(int num) {
	::exit(num);
}

void OS::nanoSleep(jlong ns) {
	struct timespec req;
	req.tv_sec = 0;
	req.tv_nsec = ns;
	::nanosleep(&req, NULL);
}

void OS::sleep(jlong ms) {
	OS::nanoSleep(millisToNanos(ms));
}

char* OS::Unix::realpath(const char* filename, char* outbuf, size_t outbuflen) {
	if (filename == NULL || outbuf == NULL || outbuflen < 1) {
		errno = EINVAL;
		return NULL;
	}
	char* result = NULL;
	char* p = ::realpath(filename, NULL);
	if (p != NULL) {
		if (strlen(p) < outbuflen) {
			strcpy(outbuf, p);
			result = outbuf;
		} else {
			errno = ENAMETOOLONG;
		}
		::free(p); // not OS::free
	} else {
		if (errno == EINVAL) {
			outbuf[outbuflen - 1] = '\0';
			p = ::realpath(filename, outbuf);
			if (p != NULL) {
				guarantee(outbuf[outbuflen - 1] == '\0', "realpath buffer overwrite detected.");
				result = p;
			}
		}
	}
	return result;
}

char* OS::toNativePath(char* path) {
	return path;
}

size_t OS::Unix::getInitialStackSize(size_t reqStackSize) {
	size_t stackSize;
	if (reqStackSize == 0) {
		stackSize = getDefaultStackSize();
	} else {
		stackSize = reqStackSize;
	}
	if (reqStackSize == 0 && JavaThread::getStackSizeAtCreate() > 0) {
		stackSize = JavaThread::getStackSizeAtCreate();
	}
	if (stackSize <= SIZE_MAX - getPageSize()) {
		stackSize = $align_up(stackSize, getPageSize());
	} else {
		stackSize = $align_down(stackSize, getPageSize());
	}
	return stackSize;
}

static pthread_condattr_t pthreadCondattr;
static pthread_mutexattr_t pthreadMutexattr;
static int (*_pthread_condattr_setclock)(pthread_condattr_t*, clockid_t) = NULL;
static bool _use_clock_monotonic_condattr = false;

void OS::Unix::init(void) {
	_pthread_condattr_setclock = (int (*)(pthread_condattr_t*, clockid_t))dlsym(RTLD_DEFAULT, "pthread_condattr_setclock");
	int status = pthread_condattr_init(&pthreadCondattr);
	if (status != 0) {
		fatal("pthread_condattr_init: %s", OS::getErrorDesc(status));
	}
	status = pthread_mutexattr_init(&pthreadMutexattr);
	if (status != 0) {
		fatal("pthread_mutexattr_init: %s", OS::getErrorDesc(status));
	}
	status = pthread_mutexattr_settype(&pthreadMutexattr, PTHREAD_MUTEX_NORMAL);
	if (status != 0) {
		fatal("pthread_mutexattr_settype: %s", OS::getErrorDesc(status));
	}

	if (_pthread_condattr_setclock != NULL) {
		status = _pthread_condattr_setclock(&pthreadCondattr, CLOCK_MONOTONIC);
		if (status != 0) {
			if (status == EINVAL) {
				_use_clock_monotonic_condattr = false;
				reportWarning("Unable to use monotonic clock with relative timed-waits - changes to the time-of-day clock may have adverse affects");
			} else {
				fatal("pthread_condattr_setclock: %s", OS::getErrorDesc(status));
			}
		} else {
			_use_clock_monotonic_condattr = true;
		}
	}
}

#define MAX_SECS 100000000

static void calcRelTime(jlong timeout, jlong now_sec, jlong now_part_sec, jlong unit, timespec* abstime) {
	time_t max_secs = now_sec + MAX_SECS;
	jlong seconds = timeout / NANOSECS_PER_SEC;
	if (seconds >= MAX_SECS) {
		abstime->tv_sec = max_secs;
		abstime->tv_nsec = 0;
	} else {
		timeout %= NANOSECS_PER_SEC; // remaining nanos
		abstime->tv_sec = now_sec + seconds;
		long nanos = (now_part_sec * (NANOSECS_PER_SEC / unit)) + timeout;
		if (nanos >= NANOSECS_PER_SEC) { // overflow
			abstime->tv_sec += 1;
			nanos -= NANOSECS_PER_SEC;
		}
		abstime->tv_nsec = nanos;
	}
}

static void unpackAbsTime(jlong deadline, jlong now_sec, timespec* abstime) {
	time_t max_secs = now_sec + MAX_SECS;
	jlong seconds = deadline / MILLISEC_PER_SEC;
	if (seconds >= max_secs) {
		abstime->tv_sec = max_secs;
		abstime->tv_nsec = 0;
	} else {
		jlong millis = deadline % MILLISEC_PER_SEC;
		abstime->tv_sec = seconds;
		abstime->tv_nsec = millisToNanos(millis);
	}
}

static jlong boundedMillisToNanos(jlong millis) {
	if (millis / MILLISEC_PER_SEC > MAX_SECS) {
		millis = jlong(MAX_SECS) * MILLISEC_PER_SEC;
	}
	return millisToNanos(millis);
}

static void toAbstime(jlong timeout, bool isAbsolute, bool isRealtime, timespec* abstime) {
	if (timeout < 0) {
		timeout = 0;
	}
	clockid_t clock = CLOCK_MONOTONIC;
	if (isAbsolute || (!_use_clock_monotonic_condattr || isRealtime)) {
		clock = CLOCK_REALTIME;
	}
	struct timespec now;
	clock_gettime(clock, &now);
	if (!isAbsolute) {
		calcRelTime(timeout, now.tv_sec, now.tv_nsec, NANOSECS_PER_SEC, abstime);
	} else {
		unpackAbsTime(timeout, now.tv_sec, abstime);
	}
}

void OS::Unix::toRtcAbstime(int64_t millis, timespec* abstime) {
	toAbstime(boundedMillisToNanos(millis), false, true, abstime);
}

jlong OS::getTimeMillis() {
	struct timespec ts;
	clock_gettime(CLOCK_REALTIME, &ts);
	return jlong(ts.tv_sec) * MILLISEC_PER_SEC + jlong(ts.tv_nsec) / NANOSECS_PER_MILLISEC;
}

void OS::getTimeSystemUTC(jlong& seconds, jlong& nanos) {
	struct timespec ts;
	clock_gettime(CLOCK_REALTIME, &ts);
	seconds = jlong(ts.tv_sec);
	nanos = jlong(ts.tv_nsec);
}

jlong OS::getTimeNanos() {
	struct timespec tp;
	clock_gettime(CLOCK_MONOTONIC, &tp);
	jlong result = jlong(tp.tv_sec) * NANOSECS_PER_SEC + jlong(tp.tv_nsec);
	return result;
}

OS::ParkEvent::ParkEvent() {
	pthread_cond_init(&cond, &pthreadCondattr);
	pthread_mutex_init(&mutex, &pthreadMutexattr);
	event = 0;
	nParked = 0;
}

OS::ParkEvent::~ParkEvent() {
	pthread_mutex_destroy(&mutex);
	pthread_cond_destroy(&cond);
}

void OS::ParkEvent::park() {
	int oldEvent = event.load(std::memory_order_relaxed);
	while (true) {
		if (event.compare_exchange_weak(oldEvent, oldEvent - 1, std::memory_order_release, std::memory_order_relaxed)) {
			break;
		}
	}
	guarantee(oldEvent >= 0, "invariant");
	if (oldEvent == 0) {
		pthread_mutex_lock(&mutex);
		guarantee(nParked == 0, "invariant");
		++nParked;
		while (event < 0) {
			pthread_cond_wait(&cond, &mutex);
		}
		--nParked;
		event = 0;
		pthread_mutex_unlock(&mutex);
		$fence();
	}
	guarantee(event >= 0, "invariant");
}

int OS::ParkEvent::park(jlong millis) {
	int oldEvent = event.load(std::memory_order_relaxed);
	while (true) {
		if (event.compare_exchange_weak(oldEvent, oldEvent - 1, std::memory_order_release, std::memory_order_relaxed)) {
			break;
		}
	}
	guarantee(oldEvent >= 0, "invariant");
	if (oldEvent == 0) {
		struct timespec abst;
		toAbstime(boundedMillisToNanos(millis), false, false, &abst);
		int ret = OS_TIMEOUT;
		pthread_mutex_lock(&mutex);
		guarantee(nParked == 0, "invariant");
		++nParked;
		while (event < 0) {
			int status = pthread_cond_timedwait(&cond, &mutex, &abst);
			if (status == ETIMEDOUT) {
				break;
			}
		}
		--nParked;
		if (event >= 0) {
			ret = OS_OK;
		}
		event = 0;
		pthread_mutex_unlock(&mutex);
		$fence();
		return ret;
	}
	return OS_OK;
}

void OS::ParkEvent::unpark() {
	if (event.exchange(1) >= 0) {
		return;
	}
	pthread_mutex_lock(&mutex);
	int anyWaiters = nParked;
	pthread_mutex_unlock(&mutex);
	if (anyWaiters != 0) {
		pthread_cond_signal(&cond);
	}
}

OS::Parker::Parker() : counter(0), curCond(nullptr) {
	pthread_cond_init(&relCond, &pthreadCondattr);
	pthread_cond_init(&absCond, nullptr);
	pthread_mutex_init(&mutex, &pthreadMutexattr);
}

OS::Parker::~Parker() {
	pthread_cond_destroy(&relCond);
	pthread_cond_destroy(&absCond);
	pthread_mutex_destroy(&mutex);
}

void OS::Parker::park(bool isAbsolute, jlong time) {
	if (counter.exchange(0) > 0) {
		return;
	}
	JavaThread* jt = JavaThread::sureCurrentThread();
	if (jt->isInterrupted(false)) {
		return;
	}
	if (time < 0 || (isAbsolute && time == 0)) {
		return;
	}
	JavaThreadStateInVMBlock tbivm(jt);
	if (pthread_mutex_trylock(&mutex) != 0) {
		return;
	}
	if (counter > 0) { // no wait needed
		counter = 0;
		pthread_mutex_unlock(&mutex);
		$fence();
		return;
	}

	if (time == 0) {
		curCond = &relCond;
		pthread_cond_wait(curCond, &mutex);
	} else {
		struct timespec absTime;
		toAbstime(time, isAbsolute, false, &absTime);
		curCond = isAbsolute ? &absCond : &relCond;
		pthread_cond_timedwait(curCond, &mutex, &absTime);
	}
	curCond = nullptr;

	counter = 0;
	pthread_mutex_unlock(&mutex);
	$fence();
}

void OS::Parker::unpark() {
	pthread_mutex_lock(&mutex);
	const int oldCounter = counter;
	counter = 1;
	// must capture correct cond before unlocking
	pthread_cond_t* cond = curCond;
	pthread_mutex_unlock(&mutex);
	if (oldCounter < 1 && cond != nullptr) {
		// thread is definitely parked
		pthread_cond_signal(cond);
	}
}

OS::PlatformMutex::PlatformMutex() {
	pthread_mutex_init(&mutex, &pthreadMutexattr);
}

OS::PlatformMutex::~PlatformMutex() {
	pthread_mutex_destroy(&mutex);
}

OS::PlatformMonitor::PlatformMonitor() {
	pthread_cond_init(&cond, &pthreadCondattr);
}

OS::PlatformMonitor::~PlatformMonitor() {
	pthread_cond_destroy(&cond);
}

bool OS::PlatformMonitor::wait(jlong millis) {
	if (millis > 0) {
		struct timespec abst;
		if (millis / MILLISEC_PER_SEC > MAX_SECS) {
			millis = jlong(MAX_SECS) * MILLISEC_PER_SEC;
		}
		toAbstime(millisToNanos(millis), false, false, &abst);
		int status = pthread_cond_timedwait(&cond, &mutex, &abst);
		return status == 0;
	} else {
		pthread_cond_wait(&cond, &mutex);
		return true;
	}
}

void OS::shutdown() {
}

void OS::abort(bool dumpCore, void* siginfo, const void* context) {
	OS::shutdown();
	if (dumpCore) {
		::abort();
	}
	::_exit(1);
}

void OS::die() {
	::abort();
}


using namespace ::java::lang;

#ifdef __APPLE__
#include <mach/mach.h>
#endif

#define HANDLER_IS(handler, address)    ((void*)(handler) == (void*)(address))
#define HANDLER_IS_IGN(handler)         (HANDLER_IS(handler, SIG_IGN))
#define HANDLER_IS_DFL(handler)         (HANDLER_IS(handler, SIG_DFL))
#define HANDLER_IS_IGN_OR_DFL(handler)  (HANDLER_IS_IGN(handler) || HANDLER_IS_DFL(handler))

/*
	signal order:
	sun.misc.Signal
	signal chaining
	signal handling (except suspend/resume)
	suspend/resume
*/

static int getSanitizedFlags(const struct sigaction* sa) {
#ifdef LINUX
	const int sa_restorer = 0x04000000;
	return sa->sa_flags & ~sa_restorer;
#else
	return sa->sa_flags;;
#endif // LINUX
}

extern "C" {
	typedef void (*sa_handler_t)(int);
	typedef void (*sa_sigaction_t)(int, siginfo_t*, void*);
}

class SavedSignalHandlers {
	struct sigaction* sigactions[NSIG];

	bool checkSignal(int sig) const {
		return sig > 0 && sig < NSIG;
	}

public:

	SavedSignalHandlers() {
		::memset(sigactions, 0, sizeof(sigactions));
	}

	~SavedSignalHandlers() {
		for (int i = 0; i < NSIG; i++) {
			$freeRaw(sigactions[i]);
		}
	}

	void set(int sig, const struct sigaction* act) {
		if (checkSignal(sig)) {
			sigactions[sig] = $allocRaw<struct sigaction>(1);
			*sigactions[sig] = *act;
		}
	}

	const struct sigaction* get(int sig) const {
		if (checkSignal(sig)) {
			return sigactions[sig];
		}
		return NULL;
	}
};

static sigset_t unblocked_sigs, vm_sigs, preinstalled_sigs;

static SavedSignalHandlers chainedHandlers;

// sun.misc.Signal support
static Semaphore* sigSemaphore = NULL;
static std::atomic_int pendingSignals[NSIG + 1] = { 0 };

static const OS::SignalInfo signalInfos[] = {
	DEFINE_SIGNAL_INFO(SIGABRT),
#ifdef SIGAIO
	DEFINE_SIGNAL_INFO(SIGAIO),
#endif
	DEFINE_SIGNAL_INFO(SIGALRM),
#ifdef SIGALRM1
	DEFINE_SIGNAL_INFO(SIGALRM1),
#endif
	DEFINE_SIGNAL_INFO(SIGBUS),
#ifdef SIGCANCEL
	DEFINE_SIGNAL_INFO(SIGCANCEL),
#endif
	DEFINE_SIGNAL_INFO(SIGCHLD),
#ifdef SIGCLD
	DEFINE_SIGNAL_INFO(SIGCLD),
#endif
	DEFINE_SIGNAL_INFO(SIGCONT),
#ifdef SIGCPUFAIL
	DEFINE_SIGNAL_INFO(SIGCPUFAIL),
#endif
#ifdef SIGDANGER
	DEFINE_SIGNAL_INFO(SIGDANGER),
#endif
#ifdef SIGDIL
	DEFINE_SIGNAL_INFO(SIGDIL),
#endif
#ifdef SIGEMT
	DEFINE_SIGNAL_INFO(SIGEMT),
#endif
	DEFINE_SIGNAL_INFO(SIGFPE),
#ifdef SIGFREEZE
	DEFINE_SIGNAL_INFO(SIGFREEZE),
#endif
#ifdef SIGGFAULT
	DEFINE_SIGNAL_INFO(SIGGFAULT),
#endif
#ifdef SIGGRANT
	DEFINE_SIGNAL_INFO(SIGGRANT),
#endif
	DEFINE_SIGNAL_INFO(SIGHUP),
	DEFINE_SIGNAL_INFO(SIGILL),
#ifdef SIGINFO
	DEFINE_SIGNAL_INFO(SIGINFO),
#endif
	DEFINE_SIGNAL_INFO(SIGINT),
#ifdef SIGIO
	DEFINE_SIGNAL_INFO(SIGIO),
#endif
#ifdef SIGIOINT
	DEFINE_SIGNAL_INFO(SIGIOINT),
#endif
#ifdef SIGIOT
#if (SIGIOT != SIGABRT )
	DEFINE_SIGNAL_INFO(SIGIOT),
#endif
#endif
#ifdef SIGKAP
	DEFINE_SIGNAL_INFO(SIGKAP),
#endif
	DEFINE_SIGNAL_INFO(SIGKILL),
#ifdef SIGLOST
	DEFINE_SIGNAL_INFO(SIGLOST),
#endif
#ifdef SIGLWP
	DEFINE_SIGNAL_INFO(SIGLWP),
#endif
#ifdef SIGLWPTIMER
	DEFINE_SIGNAL_INFO(SIGLWPTIMER),
#endif
#ifdef SIGMIGRATE
	DEFINE_SIGNAL_INFO(SIGMIGRATE),
#endif
#ifdef SIGMSG
	DEFINE_SIGNAL_INFO(SIGMSG),
#endif
	DEFINE_SIGNAL_INFO(SIGPIPE),
#ifdef SIGPOLL
	DEFINE_SIGNAL_INFO(SIGPOLL),
#endif
#ifdef SIGPRE
	DEFINE_SIGNAL_INFO(SIGPRE),
#endif
	DEFINE_SIGNAL_INFO(SIGPROF),
#ifdef SIGPTY
	DEFINE_SIGNAL_INFO(SIGPTY),
#endif
#ifdef SIGPWR
	DEFINE_SIGNAL_INFO(SIGPWR),
#endif
	DEFINE_SIGNAL_INFO(SIGQUIT),
#ifdef SIGRECONFIG
	DEFINE_SIGNAL_INFO(SIGRECONFIG),
#endif
#ifdef SIGRECOVERY
	DEFINE_SIGNAL_INFO(SIGRECOVERY),
#endif
#ifdef SIGRESERVE
	DEFINE_SIGNAL_INFO(SIGRESERVE),
#endif
#ifdef SIGRETRACT
	DEFINE_SIGNAL_INFO(SIGRETRACT),
#endif
#ifdef SIGSAK
	DEFINE_SIGNAL_INFO(SIGSAK),
#endif
	DEFINE_SIGNAL_INFO(SIGSEGV),
#ifdef SIGSOUND
	DEFINE_SIGNAL_INFO(SIGSOUND),
#endif
#ifdef SIGSTKFLT
	DEFINE_SIGNAL_INFO(SIGSTKFLT),
#endif
	DEFINE_SIGNAL_INFO(SIGSTOP),
	DEFINE_SIGNAL_INFO(SIGSYS),
#ifdef SIGSYSERROR
	DEFINE_SIGNAL_INFO(SIGSYSERROR),
#endif
#ifdef SIGTALRM
	DEFINE_SIGNAL_INFO(SIGTALRM),
#endif
	DEFINE_SIGNAL_INFO(SIGTERM),
#ifdef SIGTHAW
	DEFINE_SIGNAL_INFO(SIGTHAW),
#endif
	DEFINE_SIGNAL_INFO(SIGTRAP),
#ifdef SIGTSTP
	DEFINE_SIGNAL_INFO(SIGTSTP),
#endif
	DEFINE_SIGNAL_INFO(SIGTTIN),
	DEFINE_SIGNAL_INFO(SIGTTOU),
#ifdef SIGURG
	DEFINE_SIGNAL_INFO(SIGURG),
#endif
	DEFINE_SIGNAL_INFO(SIGUSR1),
	DEFINE_SIGNAL_INFO(SIGUSR2),
#ifdef SIGVIRT
	DEFINE_SIGNAL_INFO(SIGVIRT),
#endif
	DEFINE_SIGNAL_INFO(SIGVTALRM),
#ifdef SIGWAITING
	DEFINE_SIGNAL_INFO(SIGWAITING),
#endif
#ifdef SIGWINCH
	DEFINE_SIGNAL_INFO(SIGWINCH),
#endif
#ifdef SIGWINDOW
	DEFINE_SIGNAL_INFO(SIGWINDOW),
#endif
	DEFINE_SIGNAL_INFO(SIGXCPU),
	DEFINE_SIGNAL_INFO(SIGXFSZ),
#ifdef SIGXRES
	DEFINE_SIGNAL_INFO(SIGXRES),
#endif
	{ -1, nullptr }
};

void OS::notifySignal(int sig) {
	if (sigSemaphore != NULL) {
		pendingSignals[sig].fetch_add(1);
		sigSemaphore->signal();
	}
}

int OS::waitSignal() {
	while (true) {
		for (int i = 0; i < NSIG + 1; i++) {
			jint n = pendingSignals[i];
			if (n > 0) {
				pendingSignals[i].fetch_add(-1);
				// printf("!!!!!!!!!!%d\n", i);
				return i;
			}
		}
		JavaThread::sureCurrentThread()->waitSignal(sigSemaphore);
	}
	shouldNotReachHere();
	return 0;
}

bool OS::Unix::handleChained(int sig, siginfo_t* siginfo, ucontext_t* uc) {
	struct sigaction* actp = const_cast<struct sigaction*>(chainedHandlers.get(sig));
	if (actp != nullptr) {
		if (actp->sa_handler == SIG_DFL) {
			return false;
		} else if (actp->sa_handler != SIG_IGN) {
			if ((actp->sa_flags & SA_NODEFER) == 0) {
				// automaticlly block
				sigaddset(&(actp->sa_mask), sig);
			}

			if ((actp->sa_flags & SA_RESETHAND) != 0) {
				actp->sa_handler = SIG_DFL;
			}

			// try to honor
			sigset_t oset;
			sigemptyset(&oset);
			pthread_sigmask(SIG_SETMASK, &(actp->sa_mask), &oset);

			// call into the chained handler
			if ((actp->sa_flags & SA_SIGINFO) != 0) {
				sa_sigaction_t sa = actp->sa_sigaction;
				(*sa)(sig, siginfo, uc);
			} else {
				sa_handler_t hand = actp->sa_handler;
				(*hand)(sig);
			}

			// restore
			pthread_sigmask(SIG_SETMASK, &oset, nullptr);
		}
		return true;
	}
	return false;
}

static void addErrorSignals(sigset_t* set) {
	sigaddset(set, SIGILL);
	sigaddset(set, SIGBUS);
	sigaddset(set, SIGFPE);
	sigaddset(set, SIGSEGV);
	sigaddset(set, SIGTRAP);
}

static void deleteErrorSignals(sigset_t* set) {
	sigdelset(set, SIGILL);
	sigdelset(set, SIGBUS);
	sigdelset(set, SIGFPE);
	sigdelset(set, SIGSEGV);
	sigdelset(set, SIGTRAP);
}

void OS::Unix::unblockErrorSignals() {
	sigset_t set;
	sigemptyset(&set);
	addErrorSignals(&set);
	::pthread_sigmask(SIG_UNBLOCK, &set, nullptr);
}

class ErrnoPreserver {
	const int _saved;
public:
	ErrnoPreserver() : _saved(errno) {}
	~ErrnoPreserver() {
		errno = _saved;
	}
};

//void* throwNPEAddress = nullptr;
int8_t* throwNPECode = nullptr;

void throwNPEImpl() {
	printf("throwNPEImpl\n");
	$Object0::throwNullPointerException();
}

void throwNPEInit() {
	int32_t bufSize = 128;
	int8_t* buf = (int8_t*)mmap(0, bufSize,
		PROT_READ | PROT_WRITE | PROT_EXEC,
		MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
	throwNPECode = buf;
	int32_t off = 0;
	/*
	buf[off++] = (int8_t)0xf3; // endbr64
	buf[off++] = 0x0f;
	buf[off++] = 0x1e;
	buf[off++] = (int8_t)0xfa;

	buf[off++] = 0x55; // push(rbp);
	// mov(rbp, rsp);
	buf[off++] = 0x48;
	buf[off++] = 0x89;
	buf[off++] = 0xE5;
	*/
	/*
		// sub 0x10, rsp
		buf[off++] = 0x48;
		buf[off++] = 0x83;
		buf[off++] = 0xEC;
		buf[off++] = 0x10;
	*/



	/*
		int8_t* pc = buf + off;
		buf[off++] = 0xE8; // call
		// function address
			*(int32_t*)(buf + off) = (int8_t*)throwNPEImpl - pc - 5; // long_size = 5;
		off += sizeof(int32_t);
		buf[off++] = 0xC9; // leaveq
	 //	 buf[off++] = 0xC3; // retq
	*/
	int8_t* pc3 = buf + off;
	buf[off++] = 0x48; // mov
	buf[off++] = (int8_t)0xB8; // rax

	int8_t* pc2 = buf + off + 10;
	// function address
	*(int64_t*)(buf + off) = (int64_t)throwNPEImpl + 8;
	off += sizeof(int64_t);
	buf[off++] = (int8_t)0xff; // jmp
	buf[off++] = (int8_t)0xe0; // rax

	/*
		ucontext_t curContext;
		getcontext(&curContext);
		if (throwNPEAddress == nullptr) {
		throwNPEAddress = OS::Unix::getPc(&curContext);
		return;
		}
		throwNPEImpl();
	*/
}

int8_t* makrNPECode(void* fromPc) {
	int32_t bufSize = 128;
	int8_t* buf = (int8_t*)mmap(0, bufSize,
		PROT_READ | PROT_WRITE | PROT_EXEC,
		MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
	int32_t off = 0;
	/*
	buf[off++] = (int8_t)0xf3; // endbr64
	buf[off++] = 0x0f;
	buf[off++] = 0x1e;
	buf[off++] = (int8_t)0xfa;

	buf[off++] = 0x55; // push(rbp);
	// mov(rbp, rsp);
	buf[off++] = 0x48;
	buf[off++] = 0x89;
	buf[off++] = 0xE5;
	*/
	/*
		// sub 0x10, rsp
		buf[off++] = 0x48;
		buf[off++] = 0x83;
		buf[off++] = 0xEC;
		buf[off++] = 0x10;
	*/
	//		__asm__ __volatile__("push %rax");

	buf[off++] = 0x48; // mov
	buf[off++] = (int8_t)0xB8; // rax
	//	int8_t* pc2 = buf + off + 10;
		// function address
	*(int64_t*)(buf + off) = (int64_t)fromPc + 6; // 1, TODO, why its work?
	off += sizeof(int64_t);
	buf[off++] = (int8_t)0x50; // push rax
	//	 buf[off++] = (int8_t)0x50; // push rax

	 /*
		 buf[off++] = 0x55; // push rbp
		 // move rsp, rbp
		 buf[off++] = 0x48;
		 buf[off++] = 0x89;
		 buf[off++] = 0xE5;
	 */
	 /*
		 int8_t* pc = buf + off;
		 buf[off++] = 0xE8; // call
		 // function address
			 *(int32_t*)(buf + off) = (int8_t*)throwNPEImpl - pc - 5 + 8; // long_size = 5;
		 off += sizeof(int32_t);
		 buf[off++] = 0xC9; // leaveq
		 buf[off++] = 0xC3; // retq
	 */

	int8_t* pc3 = buf + off;
	buf[off++] = 0x48; // mov
	buf[off++] = (int8_t)0xB8; // rax

	//	int8_t* pc2 = buf + off + 10;
		// function address
	*(int64_t*)(buf + off) = (int64_t)throwNPEImpl;
	off += sizeof(int64_t);
	buf[off++] = (int8_t)0xff; // jmp
	buf[off++] = (int8_t)0xe0; // rax
	buf[off++] = 0xC9; // leaveq
	buf[off++] = 0xC3; // retq
	return buf;
}

void saveStackObject(JavaThread* thread) {
	thread->snapshotStackObjects();
	uint64_t* stackBase = (uint64_t*)thread->getStackBase();
	uint64_t* stackEnd = (uint64_t*)thread->getStackEnd();
	int64_t stackSize = thread->getStackSize();
	uint64_t rsp = OS::getCurrentStackPointer();
	int64_t begin = $align_up(rsp, 8);
	uint64_t* ptr = (uint64_t*)begin;
	if (ptr < stackEnd) {
		return;
	}
	int32_t count = 0;
	while (ptr < stackBase) {
		uint64_t value = *ptr;
		thread->saveStackObject((void*)value);
		ptr++;
		count++;
	}
	thread->setStackObjectsSaved();
	// pid_t tid = gettid();
	// printf("tid=%d, rsp=%p count=%d\n", tid, rsp, count);
}

bool snapshotStackObjectsNativeStack(JavaThread* thread) {
	bool isCurrentThread = thread == JavaThread::getCurrentThread();
#ifndef LINUX // getcontext will damage stack in macos, why?
	isCurrentThread = false;
#endif
	if (isCurrentThread) {
		saveStackObject(thread);
		ucontext_t uc;
		getcontext(&uc);
		OS::Unix::saveStackObjectRegs(&uc, thread);
	} else {
		thread->clearStackObjects();
		int ret = pthread_kill(thread->getOsThread()->getPthreadId(), SIGUSR2);
		if (ret == ESRCH) {
			return false;
		}
		// log_info("pthread_kill %ld %s ret:%d\n", thread->getOsThread()->getPthreadId(), thread->getName(), ret);
		int64_t last = System::currentTimeMillis();
		int64_t diff = 0;
		int64_t cost = 0;
		int64_t timeout = 2;
		while (!thread->isStackObjectsSaved()) {
			if (thread->threadObject == nullptr || thread->threadObject->threadStatus == (int32_t)JavaThread::Status::TERMINATED) {
				return false;
			}
			std::this_thread::yield();
			// printf("isStackObjectsSaved %ld\n", thread->getOsThread()->getPthreadId());
			int64_t currentMS = System::currentTimeMillis();
			if (currentMS >= last) {
				diff += currentMS - last;
			}
			last = currentMS;

			if (diff > timeout) {
				thread->clearStackObjects();
				ret = pthread_kill(thread->getOsThread()->getPthreadId(), SIGUSR2);
				if (ret == ESRCH) {
					return false;
				}
				cost += diff;
				if (timeout < 25) {
					timeout++;
				}
#ifndef JCPP_USE_NATIVE_OBJECT_STACK
				if (cost > 500) {
					saveStackObject(thread);
					log_info("pthread_kill saveStackObject %ld %s ret:%d cost:%" PRId64 "\n", thread->getOsThread()->getPthreadId(), thread->getName(), ret, cost);
					return true;
				}
#endif
				// log_info("pthread_kill %ld %s ret:%d cost:%" PRId64 "\n", thread->getOsThread()->getPthreadId(), thread->getName(), ret, cost);
				diff = 0;
			}
		}
	}
	return true;
}

void snapshotStackObjectsDefault(JavaThread* thread) {
	bool isCurrentThread = thread == JavaThread::getCurrentThread();
	if (isCurrentThread) {
		thread->snapshotStackObjects();
	} else {
		for (int i = 0; i < 2; i++) {
			thread->snapshotStackObjects();
		}
	}
}

bool OS::snapshotStackObjects(void* jthread) {
	if (jthread == nullptr) {
		return false;
	}
	JavaThread* thread = (JavaThread*)jthread;
	if (thread->threadObject == nullptr || thread->threadObject->threadStatus == (int32_t)JavaThread::Status::TERMINATED) {
		return false;
	}
	snapshotStackObjectsDefault(thread);

	ObjectStackType objectStackType = ObjectManagerInternal::getObjectStackType();
	bool ret = true;
	if (objectStackType == OBJECT_STACK_TYPE_NATIVE || objectStackType == OBJECT_STACK_TYPE_NATIVE_MAGIC) {
		// ret = snapshotStackObjectsNativeStack(thread, objectStackType);
	}
	return ret;
}

extern "C" JNIEXPORT
int JVM_HANDLE_XXX_SIGNAL(int sig, siginfo_t* info, void* ucVoid) {
	// pid_t tid = gettid();

	int64_t currentThreadId = OS::getCurrentThreadId();
	// printf("tid=%d, sig=%d, info->si_code=%d\n", tid, sig, info->si_code);
	// StackWalk::printStackTrace();

	ErrnoPreserver ep;
	OS::Unix::unblockErrorSignals();
	ucontext_t* const uc = (ucontext_t*)ucVoid;
	JavaThread* const currentThread = JavaThread::getCurrentThread();

	// if (currentThread != nullptr) {
	//	 log_info("JVM_HANDLE_XXX_SIGNAL name=%s, sig=%d\n", currentThread->getName(), sig);
	// } else {
	//	 log_info("JVM_HANDLE_XXX_SIGNAL sig=%d\n", sig);
	// }

	// for gc
	if (sig == SIGUSR2) {
		if (currentThread != nullptr) {
			OS::Unix::saveStackObjectRegs(uc, currentThread);
			saveStackObject(currentThread);
			// log_info("JVM_HANDLE_XXX_SIGNAL name=%s, sig=%d done\n", currentThread->getName(), sig);
		}

		return true;
	}

	bool handled = false;

	// TODO, need double check/test
	// handle null pointer access
	if (sig == SIGSEGV) {
		if (info->si_code == SEGV_MAPERR || info->si_code == 128) {
			log_debug("tid=%" PRId64 ", sig=%d, si_addr=%p\n", currentThreadId, sig, info->si_addr);

			$throwNew(::java::lang::NullPointerException);

			// address ucpc = OS::Unix::getPc(uc);
			// OS::Unix::setPc(uc, (address)makrNPECode(ucpc));
			return true;
		}
		// throw OutOfMemoryError("");
	}
	log_debug("tid=%" PRId64 ", sig=%d, info->si_code=%d\n", currentThreadId, sig, info->si_code);

	if (!handled && (sig == SIGPIPE || sig == SIGXFSZ)) {
		OS::Unix::handleChained(sig, info, uc);
		handled = true;
	}

	if (!handled) {
		handled = OS::Unix::handleSignal(sig, info, uc, currentThread);
	}

	if (!handled) {
		handled = OS::Unix::handleChained(sig, info, uc);
	}

	if (!handled) {
		OS::die();
	}
	return handled;
}

static void javaSignalHandler(int sig, siginfo_t* info, void* ucVoid) {
	JVM_HANDLE_XXX_SIGNAL(sig, info, ucVoid);
}

static void UserHandler(int sig, void* siginfo, void* context) {
	OS::Unix::unblockErrorSignals();
	if (sig == SIGINT) {
		// printf("UserHandler SIGINT\n");
		OS::die();
	}
	OS::notifySignal(sig);
}

static address getSignalHandler(const struct sigaction* action) {
	bool siginfo_flag_set = (action->sa_flags & SA_SIGINFO) != 0;
	if (siginfo_flag_set) {
		return (address)action->sa_sigaction;
	} else {
		return (address)action->sa_handler;
	}
}

static bool handlerEquals(const struct sigaction* sa1, const struct sigaction* sa2) {
	return (getSignalHandler(sa1) == getSignalHandler(sa2)) && (getSanitizedFlags(sa1) == getSanitizedFlags(sa2));
}

void* OS::getUserHandler() {
	return (void*)UserHandler;
}

void* OS::signal(int signal_number, void* handler) {
	struct sigaction sigAct, oldSigAct;

	sigfillset(&(sigAct.sa_mask));
	deleteErrorSignals(&(sigAct.sa_mask));

	sigAct.sa_flags = SA_RESTART | SA_SIGINFO;
	sigAct.sa_handler = reinterpret_cast<sa_handler_t>(handler);

	if (sigaction(signal_number, &sigAct, &oldSigAct)) {
		// -1 : failed
		return (void*)-1;
	}

	return getSignalHandler(&oldSigAct);
}

void OS::raiseSignal(int sig) {
	::raise(sig);
}

int32_t OS::getSignalNumber(const char* signalName) {
	return getSignalNumber0(signalName, signalInfos);
}

void setSignalHandler(int sig) {
	struct sigaction oldAct;
	sigaction(sig, (struct sigaction*)NULL, &oldAct);

	void* oldhand = getSignalHandler(&oldAct);
	if (!HANDLER_IS_IGN_OR_DFL(oldhand) && !HANDLER_IS(oldhand, javaSignalHandler)) {
		chainedHandlers.set(sig, &oldAct);
	}

	struct sigaction sigAct;
	sigfillset(&sigAct.sa_mask);
	deleteErrorSignals(&sigAct.sa_mask);
	sigAct.sa_sigaction = javaSignalHandler;
	sigAct.sa_flags = SA_SIGINFO | SA_RESTART;
#if defined(__APPLE__)
	if (sig == SIGSEGV) {
		sigAct.sa_flags |= SA_ONSTACK;
	}
#endif

	int ret = sigaction(sig, &sigAct, &oldAct);
}

bool OS::Unix::isIgnoredSig(int sig) {
	struct sigaction sigAct;
	sigaction(sig, (struct sigaction*)NULL, &sigAct);
	if (HANDLER_IS_IGN(getSignalHandler(&sigAct))) {
		return true;
	} else {
		return false;
	}
}

void OS::Unix::initSigMask(OSThread* osThread) {
	sigset_t callerSigMask;
	pthread_sigmask(SIG_BLOCK, NULL, &callerSigMask);
	osThread->setCallerSigMask(callerSigMask);
	pthread_sigmask(SIG_UNBLOCK, &unblocked_sigs, NULL);
	pthread_sigmask(SIG_BLOCK, &vm_sigs, NULL);
}

void OS::Unix::deinitSigMask(OSThread* osThread) {
	sigset_t sigmask = osThread->getCallerSigMask();
	pthread_sigmask(SIG_SETMASK, &sigmask, NULL);
}

bool OS::Unix::initSignals() {
	// init signal sets
	sigemptyset(&preinstalled_sigs);
	sigemptyset(&unblocked_sigs);
	sigaddset(&unblocked_sigs, SIGILL);
	sigaddset(&unblocked_sigs, SIGSEGV);
	sigaddset(&unblocked_sigs, SIGBUS);
	sigaddset(&unblocked_sigs, SIGFPE);
	if (!OS::Unix::isIgnoredSig(SHUTDOWN1_SIGNAL)) {
		sigaddset(&unblocked_sigs, SHUTDOWN1_SIGNAL);
	}
	if (!OS::Unix::isIgnoredSig(SHUTDOWN2_SIGNAL)) {
		sigaddset(&unblocked_sigs, SHUTDOWN2_SIGNAL);
	}
	if (!OS::Unix::isIgnoredSig(SHUTDOWN3_SIGNAL)) {
		sigaddset(&unblocked_sigs, SHUTDOWN3_SIGNAL);
	}
	sigemptyset(&vm_sigs);
	sigaddset(&vm_sigs, BREAK_SIGNAL);

	// set handlers
	setSignalHandler(SIGSEGV);
	setSignalHandler(SIGPIPE);
	setSignalHandler(SIGBUS);
	setSignalHandler(SIGILL);
	setSignalHandler(SIGFPE);
	setSignalHandler(SIGXFSZ);
	setSignalHandler(SIGUSR2);
#if defined(__APPLE__)
	exception_mask_t mask = EXC_MASK_BAD_ACCESS | EXC_MASK_ARITHMETIC AARCH64_ONLY(| EXC_MASK_BAD_INSTRUCTION);
	task_set_exception_ports(mach_task_self(), mask, MACH_PORT_NULL, EXCEPTION_STATE_IDENTITY, MACHINE_THREAD_STATE);
#endif

	// sun.misc.Signal support
	sigSemaphore = new Semaphore();

	//throwNPEInit();
	return true;
}