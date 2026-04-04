#include <java/lang/ProcessHandleImpl.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/ProcessHandle$Info.h>
#include <java/lang/ProcessHandle.h>
#include <java/lang/ProcessHandleImpl$1.h>
#include <java/lang/ProcessHandleImpl$ExitCompletion.h>
#include <java/lang/ProcessHandleImpl$Info.h>
#include <java/lang/ProcessImpl.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Optional.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/ThreadLocalRandom.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef MAX_PRIORITY
#undef NOT_A_CHILD
#undef REAPER_DEFAULT_STACKSIZE
#undef STARTTIME_ANY
#undef STARTTIME_PROCESS_UNKNOWN
#undef SUPPORTS_NORMAL_TERMINATION

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessHandle = ::java::lang::ProcessHandle;
using $ProcessHandle$Info = ::java::lang::ProcessHandle$Info;
using $ProcessHandleImpl$1 = ::java::lang::ProcessHandleImpl$1;
using $ProcessHandleImpl$ExitCompletion = ::java::lang::ProcessHandleImpl$ExitCompletion;
using $ProcessHandleImpl$Info = ::java::lang::ProcessHandleImpl$Info;
using $ProcessImpl = ::java::lang::ProcessImpl;
using $Runnable = ::java::lang::Runnable;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Optional = ::java::util::Optional;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $Executor = ::java::util::concurrent::Executor;
using $Executors = ::java::util::concurrent::Executors;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $ThreadLocalRandom = ::java::util::concurrent::ThreadLocalRandom;
using $BiFunction = ::java::util::function::BiFunction;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $IntStream = ::java::util::stream::IntStream;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace lang {

class ProcessHandleImpl$$Lambda$lambda$static$1 : public $PrivilegedAction {
	$class(ProcessHandleImpl$$Lambda$lambda$static$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return ProcessHandleImpl::lambda$static$1();
	}
};
$Class* ProcessHandleImpl$$Lambda$lambda$static$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProcessHandleImpl$$Lambda$lambda$static$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl$$Lambda$lambda$static$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.ProcessHandleImpl$$Lambda$lambda$static$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(ProcessHandleImpl$$Lambda$lambda$static$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessHandleImpl$$Lambda$lambda$static$1);
	});
	return class$;
}
$Class* ProcessHandleImpl$$Lambda$lambda$static$1::class$ = nullptr;

class ProcessHandleImpl$$Lambda$lambda$onExit$2$1 : public $BiFunction {
	$class(ProcessHandleImpl$$Lambda$lambda$onExit$2$1, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(ProcessHandleImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* exitStatus, Object$* unusedThrowable) override {
		 return $nc(inst$)->lambda$onExit$2($cast($Integer, exitStatus), $cast($Throwable, unusedThrowable));
	}
	ProcessHandleImpl* inst$ = nullptr;
};
$Class* ProcessHandleImpl$$Lambda$lambda$onExit$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ProcessHandleImpl$$Lambda$lambda$onExit$2$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ProcessHandleImpl;)V", nullptr, $PUBLIC, $method(ProcessHandleImpl$$Lambda$lambda$onExit$2$1, init$, void, ProcessHandleImpl*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl$$Lambda$lambda$onExit$2$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.ProcessHandleImpl$$Lambda$lambda$onExit$2$1",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProcessHandleImpl$$Lambda$lambda$onExit$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessHandleImpl$$Lambda$lambda$onExit$2$1);
	});
	return class$;
}
$Class* ProcessHandleImpl$$Lambda$lambda$onExit$2$1::class$ = nullptr;

class ProcessHandleImpl$$Lambda$lambda$children$3$2 : public $Predicate {
	$class(ProcessHandleImpl$$Lambda$lambda$children$3$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$(ProcessHandleImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* ph) override {
		 return $nc(inst$)->lambda$children$3($cast($ProcessHandle, ph));
	}
	ProcessHandleImpl* inst$ = nullptr;
};
$Class* ProcessHandleImpl$$Lambda$lambda$children$3$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ProcessHandleImpl$$Lambda$lambda$children$3$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ProcessHandleImpl;)V", nullptr, $PUBLIC, $method(ProcessHandleImpl$$Lambda$lambda$children$3$2, init$, void, ProcessHandleImpl*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl$$Lambda$lambda$children$3$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.ProcessHandleImpl$$Lambda$lambda$children$3$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProcessHandleImpl$$Lambda$lambda$children$3$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessHandleImpl$$Lambda$lambda$children$3$2);
	});
	return class$;
}
$Class* ProcessHandleImpl$$Lambda$lambda$children$3$2::class$ = nullptr;

class ProcessHandleImpl$$Lambda$lambda$children$4$3 : public $IntFunction {
	$class(ProcessHandleImpl$$Lambda$lambda$children$4$3, $NO_CLASS_INIT, $IntFunction)
public:
	void init$($longs* cpids, $longs* stimes) {
		$set(this, cpids, cpids);
		$set(this, stimes, stimes);
	}
	virtual $Object* apply(int32_t i) override {
		 return ProcessHandleImpl::lambda$children$4(cpids, stimes, i);
	}
	$longs* cpids = nullptr;
	$longs* stimes = nullptr;
};
$Class* ProcessHandleImpl$$Lambda$lambda$children$4$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cpids", "[J", nullptr, $PUBLIC, $field(ProcessHandleImpl$$Lambda$lambda$children$4$3, cpids)},
		{"stimes", "[J", nullptr, $PUBLIC, $field(ProcessHandleImpl$$Lambda$lambda$children$4$3, stimes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([J[J)V", nullptr, $PUBLIC, $method(ProcessHandleImpl$$Lambda$lambda$children$4$3, init$, void, $longs*, $longs*)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl$$Lambda$lambda$children$4$3, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.ProcessHandleImpl$$Lambda$lambda$children$4$3",
		"java.lang.Object",
		"java.util.function.IntFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProcessHandleImpl$$Lambda$lambda$children$4$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessHandleImpl$$Lambda$lambda$children$4$3);
	});
	return class$;
}
$Class* ProcessHandleImpl$$Lambda$lambda$children$4$3::class$ = nullptr;

class ProcessHandleImpl$$Lambda$lambda$static$0$4 : public $ThreadFactory {
	$class(ProcessHandleImpl$$Lambda$lambda$static$0$4, $NO_CLASS_INIT, $ThreadFactory)
public:
	void init$($ThreadGroup* systemThreadGroup, int64_t stackSize) {
		$set(this, systemThreadGroup, systemThreadGroup);
		this->stackSize = stackSize;
	}
	virtual $Thread* newThread($Runnable* grimReaper) override {
		 return ProcessHandleImpl::lambda$static$0(systemThreadGroup, stackSize, grimReaper);
	}
	$ThreadGroup* systemThreadGroup = nullptr;
	int64_t stackSize = 0;
};
$Class* ProcessHandleImpl$$Lambda$lambda$static$0$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"systemThreadGroup", "Ljava/lang/ThreadGroup;", nullptr, $PUBLIC, $field(ProcessHandleImpl$$Lambda$lambda$static$0$4, systemThreadGroup)},
		{"stackSize", "J", nullptr, $PUBLIC, $field(ProcessHandleImpl$$Lambda$lambda$static$0$4, stackSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ThreadGroup;J)V", nullptr, $PUBLIC, $method(ProcessHandleImpl$$Lambda$lambda$static$0$4, init$, void, $ThreadGroup*, int64_t)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl$$Lambda$lambda$static$0$4, newThread, $Thread*, $Runnable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.ProcessHandleImpl$$Lambda$lambda$static$0$4",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProcessHandleImpl$$Lambda$lambda$static$0$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessHandleImpl$$Lambda$lambda$static$0$4);
	});
	return class$;
}
$Class* ProcessHandleImpl$$Lambda$lambda$static$0$4::class$ = nullptr;

int64_t ProcessHandleImpl::REAPER_DEFAULT_STACKSIZE = 0;
ProcessHandleImpl* ProcessHandleImpl::current$ = nullptr;
$ConcurrentMap* ProcessHandleImpl::completions = nullptr;
$Executor* ProcessHandleImpl::processReaperExecutor = nullptr;

void ProcessHandleImpl::initNative() {
	$init(ProcessHandleImpl);
	$prepareNativeStatic(initNative, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$CompletableFuture* ProcessHandleImpl::completion(int64_t pid, bool shouldReap) {
	$init(ProcessHandleImpl);
	$useLocalObjectStack();
	$var($ProcessHandleImpl$ExitCompletion, completion, $cast($ProcessHandleImpl$ExitCompletion, ProcessHandleImpl::completions->get($($Long::valueOf(pid)))));
	while (completion == nullptr || (shouldReap && !completion->isReaping)) {
		$var($ProcessHandleImpl$ExitCompletion, newCompletion, $new($ProcessHandleImpl$ExitCompletion, shouldReap));
		if (completion == nullptr) {
			$assign(completion, $cast($ProcessHandleImpl$ExitCompletion, ProcessHandleImpl::completions->putIfAbsent($($Long::valueOf(pid)), newCompletion)));
		} else {
			$assign(completion, ProcessHandleImpl::completions->replace($($Long::valueOf(pid)), completion, newCompletion) ? ($ProcessHandleImpl$ExitCompletion*)nullptr : $cast($ProcessHandleImpl$ExitCompletion, ProcessHandleImpl::completions->get($($Long::valueOf(pid)))));
		}
		if (completion == nullptr) {
			$assign(completion, newCompletion);
			$nc(ProcessHandleImpl::processReaperExecutor)->execute($$new($ProcessHandleImpl$1, pid, shouldReap, newCompletion));
		}
	}
	return completion;
}

$CompletableFuture* ProcessHandleImpl::onExit() {
	$useLocalObjectStack();
	if (this->equals(ProcessHandleImpl::current$)) {
		$throwNew($IllegalStateException, "onExit for current process not allowed"_s);
	}
	return $cast($CompletableFuture, $$nc(ProcessHandleImpl::completion(pid(), false))->handleAsync($$new(ProcessHandleImpl$$Lambda$lambda$onExit$2$1, this)));
}

int32_t ProcessHandleImpl::waitForProcessExit0(int64_t pid, bool reapvalue) {
	$init(ProcessHandleImpl);
	$prepareNativeStatic(waitForProcessExit0, int32_t, int64_t pid, bool reapvalue);
	int32_t $ret = $invokeNativeStatic(pid, reapvalue);
	$finishNativeStatic();
	return $ret;
}

void ProcessHandleImpl::init$(int64_t pid, int64_t startTime) {
	this->pid$ = pid;
	this->startTime = startTime;
}

$Optional* ProcessHandleImpl::get(int64_t pid) {
	$init(ProcessHandleImpl);
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "manageProcess"_s));
	}
	int64_t start = isAlive0(pid);
	return (start >= 0) ? $Optional::of($$new(ProcessHandleImpl, pid, start)) : $Optional::empty();
}

ProcessHandleImpl* ProcessHandleImpl::getInternal(int64_t pid) {
	$init(ProcessHandleImpl);
	return $new(ProcessHandleImpl, pid, isAlive0(pid));
}

int64_t ProcessHandleImpl::pid() {
	return this->pid$;
}

ProcessHandleImpl* ProcessHandleImpl::current() {
	$init(ProcessHandleImpl);
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "manageProcess"_s));
	}
	return ProcessHandleImpl::current$;
}

int64_t ProcessHandleImpl::getCurrentPid0() {
	$init(ProcessHandleImpl);
	$prepareNativeStatic(getCurrentPid0, int64_t);
	int64_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$Optional* ProcessHandleImpl::parent() {
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "manageProcess"_s));
	}
	int64_t ppid = parent0(this->pid$, this->startTime);
	if (ppid <= 0) {
		return $Optional::empty();
	}
	return get(ppid);
}

int64_t ProcessHandleImpl::parent0(int64_t pid, int64_t startTime) {
	$init(ProcessHandleImpl);
	$prepareNativeStatic(parent0, int64_t, int64_t pid, int64_t startTime);
	int64_t $ret = $invokeNativeStatic(pid, startTime);
	$finishNativeStatic();
	return $ret;
}

int32_t ProcessHandleImpl::getProcessPids0(int64_t pid, $longs* pids, $longs* ppids, $longs* starttimes) {
	$init(ProcessHandleImpl);
	$prepareNativeStatic(getProcessPids0, int32_t, int64_t pid, $longs* pids, $longs* ppids, $longs* starttimes);
	int32_t $ret = $invokeNativeStatic(pid, pids, ppids, starttimes);
	$finishNativeStatic();
	return $ret;
}

bool ProcessHandleImpl::destroyProcess(bool force) {
	if (this->equals(ProcessHandleImpl::current$)) {
		$throwNew($IllegalStateException, "destroy of current process not allowed"_s);
	}
	return destroy0(this->pid$, this->startTime, force);
}

bool ProcessHandleImpl::destroy0(int64_t pid, int64_t startTime, bool forcibly) {
	$init(ProcessHandleImpl);
	$prepareNativeStatic(destroy0, bool, int64_t pid, int64_t startTime, bool forcibly);
	bool $ret = $invokeNativeStatic(pid, startTime, forcibly);
	$finishNativeStatic();
	return $ret;
}

bool ProcessHandleImpl::destroy() {
	return destroyProcess(false);
}

bool ProcessHandleImpl::destroyForcibly() {
	return destroyProcess(true);
}

bool ProcessHandleImpl::supportsNormalTermination() {
	return $ProcessImpl::SUPPORTS_NORMAL_TERMINATION;
}

bool ProcessHandleImpl::isAlive() {
	int64_t start = isAlive0(this->pid$);
	return (start >= 0 && (start == this->startTime || start == 0 || this->startTime == 0));
}

int64_t ProcessHandleImpl::isAlive0(int64_t pid) {
	$init(ProcessHandleImpl);
	$prepareNativeStatic(isAlive0, int64_t, int64_t pid);
	int64_t $ret = $invokeNativeStatic(pid);
	$finishNativeStatic();
	return $ret;
}

$Stream* ProcessHandleImpl::children() {
	$useLocalObjectStack();
	return $$nc(children(this->pid$))->filter($$new(ProcessHandleImpl$$Lambda$lambda$children$3$2, this));
}

$Stream* ProcessHandleImpl::children(int64_t pid) {
	$init(ProcessHandleImpl);
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "manageProcess"_s));
	}
	int32_t size = 100;
	$var($longs, childpids, nullptr);
	$var($longs, starttimes, nullptr);
	while (childpids == nullptr || size > childpids->length) {
		$assign(childpids, $new($longs, size));
		$assign(starttimes, $new($longs, size));
		size = getProcessPids0(pid, childpids, nullptr, starttimes);
	}
	$var($longs, cpids, childpids);
	$var($longs, stimes, starttimes);
	return $$nc($IntStream::range(0, size))->mapToObj($$new(ProcessHandleImpl$$Lambda$lambda$children$4$3, cpids, stimes));
}

$Stream* ProcessHandleImpl::descendants() {
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "manageProcess"_s));
	}
	int32_t size = 100;
	$var($longs, pids, nullptr);
	$var($longs, ppids, nullptr);
	$var($longs, starttimes, nullptr);
	while (pids == nullptr || size > pids->length) {
		$assign(pids, $new($longs, size));
		$assign(ppids, $new($longs, size));
		$assign(starttimes, $new($longs, size));
		size = getProcessPids0(0, pids, ppids, starttimes);
	}
	int32_t next = 0;
	int32_t count = -1;
	int64_t ppid = this->pid$;
	int64_t ppStart = 0;
	for (int32_t i = 0; i < size; ++i) {
		if ($nc(pids)->get(i) == ppid) {
			ppStart = $nc(starttimes)->get(i);
			break;
		}
	}
	do {
		for (int32_t i = next; i < size; ++i) {
			if ($nc(ppids)->get(i) == ppid && ppStart <= $nc(starttimes)->get(i)) {
				swap(pids, i, next);
				swap(ppids, i, next);
				swap(starttimes, i, next);
				++next;
			}
		}
		ppid = $nc(pids)->get(++count);
		ppStart = $nc(starttimes)->get(count);
	} while (count < next);
	$var($longs, cpids, pids);
	$var($longs, stimes, starttimes);
	return $$nc($IntStream::range(0, count))->mapToObj($$new(ProcessHandleImpl$$Lambda$lambda$children$4$3, cpids, stimes));
}

void ProcessHandleImpl::swap($longs* array, int32_t x, int32_t y) {
	$init(ProcessHandleImpl);
	int64_t v = $nc(array)->get(x);
	array->set(x, array->get(y));
	array->set(y, v);
}

$ProcessHandle$Info* ProcessHandleImpl::info() {
	return $ProcessHandleImpl$Info::info(this->pid$, this->startTime);
}

int32_t ProcessHandleImpl::compareTo($ProcessHandle* other) {
	return $Long::compare(this->pid$, $nc($cast(ProcessHandleImpl, other))->pid$);
}

$String* ProcessHandleImpl::toString() {
	return $Long::toString(this->pid$);
}

int32_t ProcessHandleImpl::hashCode() {
	return $Long::hashCode(this->pid$);
}

bool ProcessHandleImpl::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(ProcessHandleImpl, other, nullptr);
	bool var$2 = $instanceOf(ProcessHandleImpl, obj);
	if (var$2) {
		$assign(other, $cast(ProcessHandleImpl, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && (this->pid$ == $nc(other)->pid$);
	return var$0 && (this->startTime == other->startTime || this->startTime == 0 || other->startTime == 0);
}

int32_t ProcessHandleImpl::compareTo(Object$* other) {
	return this->compareTo($cast($ProcessHandle, other));
}

$ProcessHandle* ProcessHandleImpl::lambda$children$4($longs* cpids, $longs* stimes, int32_t i) {
	$init(ProcessHandleImpl);
	return $new(ProcessHandleImpl, $nc(cpids)->get(i), $nc(stimes)->get(i));
}

bool ProcessHandleImpl::lambda$children$3($ProcessHandle* ph) {
	return this->startTime <= $nc($cast(ProcessHandleImpl, ph))->startTime;
}

$ProcessHandle* ProcessHandleImpl::lambda$onExit$2($Integer* exitStatus, $Throwable* unusedThrowable) {
	return this;
}

$Executor* ProcessHandleImpl::lambda$static$1() {
	$init(ProcessHandleImpl);
	$useLocalObjectStack();
	$ThreadLocalRandom::current();
	$var($ThreadGroup, tg, $($Thread::currentThread())->getThreadGroup());
	while ($nc(tg)->getParent() != nullptr) {
		$assign(tg, tg->getParent());
	}
	$var($ThreadGroup, systemThreadGroup, tg);
	int32_t debugDelta = "release"_s->equals($($System::getProperty("jdk.debug"_s))) ? 0 : (4 * 4096);
	int64_t stackSize = $Boolean::getBoolean("jdk.lang.processReaperUseDefaultStackSize"_s) ? 0 : ProcessHandleImpl::REAPER_DEFAULT_STACKSIZE + debugDelta;
	$var($ThreadFactory, threadFactory, $new(ProcessHandleImpl$$Lambda$lambda$static$0$4, systemThreadGroup, stackSize));
	return $Executors::newCachedThreadPool(threadFactory);
}

$Thread* ProcessHandleImpl::lambda$static$0($ThreadGroup* systemThreadGroup, int64_t stackSize, $Runnable* grimReaper) {
	$init(ProcessHandleImpl);
	$var($Thread, t, $new($Thread, systemThreadGroup, grimReaper, "process reaper"_s, stackSize, false));
	t->setDaemon(true);
	t->setPriority($Thread::MAX_PRIORITY);
	return t;
}

void ProcessHandleImpl::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	ProcessHandleImpl::REAPER_DEFAULT_STACKSIZE = 128 * 1024;
	$assignStatic(ProcessHandleImpl::completions, $new($ConcurrentHashMap));
	{
		ProcessHandleImpl::initNative();
		int64_t pid = ProcessHandleImpl::getCurrentPid0();
		$assignStatic(ProcessHandleImpl::current$, $new(ProcessHandleImpl, pid, ProcessHandleImpl::isAlive0(pid)));
	}
	$assignStatic(ProcessHandleImpl::processReaperExecutor, $cast($Executor, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(ProcessHandleImpl$$Lambda$lambda$static$1)))));
}

ProcessHandleImpl::ProcessHandleImpl() {
}

$Class* ProcessHandleImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.ProcessHandleImpl$$Lambda$lambda$static$1")) {
			return ProcessHandleImpl$$Lambda$lambda$static$1::load$(name, initialize);
		}
		if (name->equals("java.lang.ProcessHandleImpl$$Lambda$lambda$onExit$2$1")) {
			return ProcessHandleImpl$$Lambda$lambda$onExit$2$1::load$(name, initialize);
		}
		if (name->equals("java.lang.ProcessHandleImpl$$Lambda$lambda$children$3$2")) {
			return ProcessHandleImpl$$Lambda$lambda$children$3$2::load$(name, initialize);
		}
		if (name->equals("java.lang.ProcessHandleImpl$$Lambda$lambda$children$4$3")) {
			return ProcessHandleImpl$$Lambda$lambda$children$4$3::load$(name, initialize);
		}
		if (name->equals("java.lang.ProcessHandleImpl$$Lambda$lambda$static$0$4")) {
			return ProcessHandleImpl$$Lambda$lambda$static$0$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"REAPER_DEFAULT_STACKSIZE", "J", nullptr, $PRIVATE | $STATIC, $staticField(ProcessHandleImpl, REAPER_DEFAULT_STACKSIZE)},
		{"NOT_A_CHILD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessHandleImpl, NOT_A_CHILD)},
		{"current", "Ljava/lang/ProcessHandleImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProcessHandleImpl, current$)},
		{"completions", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Long;Ljava/lang/ProcessHandleImpl$ExitCompletion;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ProcessHandleImpl, completions)},
		{"processReaperExecutor", "Ljava/util/concurrent/Executor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProcessHandleImpl, processReaperExecutor)},
		{"pid", "J", nullptr, $PRIVATE | $FINAL, $field(ProcessHandleImpl, pid$)},
		{"startTime", "J", nullptr, $PRIVATE | $FINAL, $field(ProcessHandleImpl, startTime)},
		{"STARTTIME_ANY", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessHandleImpl, STARTTIME_ANY)},
		{"STARTTIME_PROCESS_UNKNOWN", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProcessHandleImpl, STARTTIME_PROCESS_UNKNOWN)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JJ)V", nullptr, $PRIVATE, $method(ProcessHandleImpl, init$, void, int64_t, int64_t)},
		{"children", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/ProcessHandle;>;", $PUBLIC, $virtualMethod(ProcessHandleImpl, children, $Stream*)},
		{"children", "(J)Ljava/util/stream/Stream;", "(J)Ljava/util/stream/Stream<Ljava/lang/ProcessHandle;>;", $STATIC, $staticMethod(ProcessHandleImpl, children, $Stream*, int64_t)},
		{"compareTo", "(Ljava/lang/ProcessHandle;)I", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl, compareTo, int32_t, $ProcessHandle*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ProcessHandleImpl, compareTo, int32_t, Object$*)},
		{"completion", "(JZ)Ljava/util/concurrent/CompletableFuture;", "(JZ)Ljava/util/concurrent/CompletableFuture<Ljava/lang/Integer;>;", $STATIC, $staticMethod(ProcessHandleImpl, completion, $CompletableFuture*, int64_t, bool)},
		{"current", "()Ljava/lang/ProcessHandleImpl;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessHandleImpl, current, ProcessHandleImpl*)},
		{"descendants", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/ProcessHandle;>;", $PUBLIC, $virtualMethod(ProcessHandleImpl, descendants, $Stream*)},
		{"destroy", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl, destroy, bool)},
		{"destroy0", "(JJZ)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ProcessHandleImpl, destroy0, bool, int64_t, int64_t, bool)},
		{"destroyForcibly", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl, destroyForcibly, bool)},
		{"destroyProcess", "(Z)Z", nullptr, 0, $method(ProcessHandleImpl, destroyProcess, bool, bool)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl, equals, bool, Object$*)},
		{"get", "(J)Ljava/util/Optional;", "(J)Ljava/util/Optional<Ljava/lang/ProcessHandle;>;", $STATIC, $staticMethod(ProcessHandleImpl, get, $Optional*, int64_t)},
		{"getCurrentPid0", "()J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ProcessHandleImpl, getCurrentPid0, int64_t)},
		{"getInternal", "(J)Ljava/lang/ProcessHandleImpl;", nullptr, $STATIC, $staticMethod(ProcessHandleImpl, getInternal, ProcessHandleImpl*, int64_t)},
		{"getProcessPids0", "(J[J[J[J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ProcessHandleImpl, getProcessPids0, int32_t, int64_t, $longs*, $longs*, $longs*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl, hashCode, int32_t)},
		{"info", "()Ljava/lang/ProcessHandle$Info;", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl, info, $ProcessHandle$Info*)},
		{"initNative", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ProcessHandleImpl, initNative, void)},
		{"isAlive", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl, isAlive, bool)},
		{"isAlive0", "(J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ProcessHandleImpl, isAlive0, int64_t, int64_t)},
		{"lambda$children$3", "(Ljava/lang/ProcessHandle;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(ProcessHandleImpl, lambda$children$3, bool, $ProcessHandle*)},
		{"lambda$children$4", "([J[JI)Ljava/lang/ProcessHandle;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ProcessHandleImpl, lambda$children$4, $ProcessHandle*, $longs*, $longs*, int32_t)},
		{"lambda$onExit$2", "(Ljava/lang/Integer;Ljava/lang/Throwable;)Ljava/lang/ProcessHandle;", nullptr, $PRIVATE | $SYNTHETIC, $method(ProcessHandleImpl, lambda$onExit$2, $ProcessHandle*, $Integer*, $Throwable*)},
		{"lambda$static$0", "(Ljava/lang/ThreadGroup;JLjava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ProcessHandleImpl, lambda$static$0, $Thread*, $ThreadGroup*, int64_t, $Runnable*)},
		{"lambda$static$1", "()Ljava/util/concurrent/Executor;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ProcessHandleImpl, lambda$static$1, $Executor*)},
		{"onExit", "()Ljava/util/concurrent/CompletableFuture;", "()Ljava/util/concurrent/CompletableFuture<Ljava/lang/ProcessHandle;>;", $PUBLIC, $virtualMethod(ProcessHandleImpl, onExit, $CompletableFuture*)},
		{"parent", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/ProcessHandle;>;", $PUBLIC, $virtualMethod(ProcessHandleImpl, parent, $Optional*)},
		{"parent0", "(JJ)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ProcessHandleImpl, parent0, int64_t, int64_t, int64_t)},
		{"pid", "()J", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl, pid, int64_t)},
		{"supportsNormalTermination", "()Z", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl, supportsNormalTermination, bool)},
		{"swap", "([JII)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ProcessHandleImpl, swap, void, $longs*, int32_t, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessHandleImpl, toString, $String*)},
		{"waitForProcessExit0", "(JZ)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ProcessHandleImpl, waitForProcessExit0, int32_t, int64_t, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessHandleImpl$Info", "java.lang.ProcessHandleImpl", "Info", $STATIC},
		{"java.lang.ProcessHandleImpl$ExitCompletion", "java.lang.ProcessHandleImpl", "ExitCompletion", $PRIVATE | $STATIC},
		{"java.lang.ProcessHandleImpl$1", nullptr, nullptr, 0},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/ValueBased;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.ProcessHandleImpl",
		"java.lang.Object",
		"java.lang.ProcessHandle",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"java.lang.ProcessHandleImpl$Info,java.lang.ProcessHandleImpl$ExitCompletion,java.lang.ProcessHandleImpl$1"
	};
	$loadClass(ProcessHandleImpl, name, initialize, &classInfo$$, ProcessHandleImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessHandleImpl);
	});
	return class$;
}

$Class* ProcessHandleImpl::class$ = nullptr;

	} // lang
} // java