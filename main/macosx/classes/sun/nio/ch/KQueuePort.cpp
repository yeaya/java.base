#include <sun/nio/ch/KQueuePort.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <java/util/concurrent/ArrayBlockingQueue.h>
#include <java/util/concurrent/RejectedExecutionException.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <sun/nio/ch/FileDispatcherImpl.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/KQueue.h>
#include <sun/nio/ch/KQueuePort$Event.h>
#include <sun/nio/ch/KQueuePort$EventHandlerTask.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/Port$PollableChannel.h>
#include <sun/nio/ch/Port.h>
#include <sun/nio/ch/ThreadPool.h>
#include <jcpp.h>

#undef EXECUTE_TASK_OR_SHUTDOWN
#undef POLLIN
#undef MAX_KEVENTS_TO_POLL
#undef POLLOUT
#undef NEED_TO_POLL

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;
using $ArrayBlockingQueue = ::java::util::concurrent::ArrayBlockingQueue;
using $RejectedExecutionException = ::java::util::concurrent::RejectedExecutionException;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $FileDispatcherImpl = ::sun::nio::ch::FileDispatcherImpl;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $KQueue = ::sun::nio::ch::KQueue;
using $KQueuePort$Event = ::sun::nio::ch::KQueuePort$Event;
using $KQueuePort$EventHandlerTask = ::sun::nio::ch::KQueuePort$EventHandlerTask;
using $Net = ::sun::nio::ch::Net;
using $Port = ::sun::nio::ch::Port;
using $Port$PollableChannel = ::sun::nio::ch::Port$PollableChannel;
using $ThreadPool = ::sun::nio::ch::ThreadPool;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _KQueuePort_FieldInfo_[] = {
	{"MAX_KEVENTS_TO_POLL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KQueuePort, MAX_KEVENTS_TO_POLL)},
	{"kqfd", "I", nullptr, $PRIVATE | $FINAL, $field(KQueuePort, kqfd)},
	{"address", "J", nullptr, $PRIVATE | $FINAL, $field(KQueuePort, address)},
	{"closed", "Z", nullptr, $PRIVATE, $field(KQueuePort, closed)},
	{"sp", "[I", nullptr, $PRIVATE | $FINAL, $field(KQueuePort, sp)},
	{"wakeupCount", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $FINAL, $field(KQueuePort, wakeupCount)},
	{"queue", "Ljava/util/concurrent/ArrayBlockingQueue;", "Ljava/util/concurrent/ArrayBlockingQueue<Lsun/nio/ch/KQueuePort$Event;>;", $PRIVATE | $FINAL, $field(KQueuePort, queue)},
	{"NEED_TO_POLL", "Lsun/nio/ch/KQueuePort$Event;", nullptr, $PRIVATE | $FINAL, $field(KQueuePort, NEED_TO_POLL)},
	{"EXECUTE_TASK_OR_SHUTDOWN", "Lsun/nio/ch/KQueuePort$Event;", nullptr, $PRIVATE | $FINAL, $field(KQueuePort, EXECUTE_TASK_OR_SHUTDOWN)},
	{}
};

$MethodInfo _KQueuePort_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/spi/AsynchronousChannelProvider;Lsun/nio/ch/ThreadPool;)V", nullptr, 0, $method(static_cast<void(KQueuePort::*)($AsynchronousChannelProvider*,$ThreadPool*)>(&KQueuePort::init$)), "java.io.IOException"},
	{"executeOnHandlerTask", "(Ljava/lang/Runnable;)V", nullptr, 0},
	{"implClose", "()V", nullptr, $PRIVATE, $method(static_cast<void(KQueuePort::*)()>(&KQueuePort::implClose))},
	{"shutdownHandlerTasks", "()V", nullptr, 0},
	{"start", "()Lsun/nio/ch/KQueuePort;", nullptr, 0, $method(static_cast<KQueuePort*(KQueuePort::*)()>(&KQueuePort::start))},
	{"startPoll", "(II)V", nullptr, 0},
	{"wakeup", "()V", nullptr, $PRIVATE, $method(static_cast<void(KQueuePort::*)()>(&KQueuePort::wakeup))},
	{}
};

$InnerClassInfo _KQueuePort_InnerClassesInfo_[] = {
	{"sun.nio.ch.KQueuePort$EventHandlerTask", "sun.nio.ch.KQueuePort", "EventHandlerTask", $PRIVATE},
	{"sun.nio.ch.KQueuePort$Event", "sun.nio.ch.KQueuePort", "Event", $STATIC},
	{}
};

$ClassInfo _KQueuePort_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.ch.KQueuePort",
	"sun.nio.ch.Port",
	nullptr,
	_KQueuePort_FieldInfo_,
	_KQueuePort_MethodInfo_,
	nullptr,
	nullptr,
	_KQueuePort_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.KQueuePort$EventHandlerTask,sun.nio.ch.KQueuePort$Event"
};

$Object* allocate$KQueuePort($Class* clazz) {
	return $of($alloc(KQueuePort));
}

void KQueuePort::init$($AsynchronousChannelProvider* provider, $ThreadPool* pool) {
	$Port::init$(provider, pool);
	$set(this, wakeupCount, $new($AtomicInteger));
	$set(this, NEED_TO_POLL, $new($KQueuePort$Event, nullptr, 0));
	$set(this, EXECUTE_TASK_OR_SHUTDOWN, $new($KQueuePort$Event, nullptr, 0));
	this->kqfd = $KQueue::create();
	this->address = $KQueue::allocatePollArray(KQueuePort::MAX_KEVENTS_TO_POLL);
	try {
		int64_t fds = $IOUtil::makePipe(true);
		$set(this, sp, $new($ints, {
			(int32_t)((int64_t)((uint64_t)fds >> 32)),
			(int32_t)fds
		}));
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$KQueue::freePollArray(this->address);
		$FileDispatcherImpl::closeIntFD(this->kqfd);
		$throw(ioe);
	}
	$KQueue::register$(this->kqfd, $nc(this->sp)->get(0), -1, 1);
	$set(this, queue, $new($ArrayBlockingQueue, KQueuePort::MAX_KEVENTS_TO_POLL));
	$nc(this->queue)->offer(this->NEED_TO_POLL);
}

KQueuePort* KQueuePort::start() {
	startThreads($$new($KQueuePort$EventHandlerTask, this));
	return this;
}

void KQueuePort::implClose() {
	$synchronized(this) {
		if (this->closed) {
			return;
		}
		this->closed = true;
	}
	try {
		$FileDispatcherImpl::closeIntFD(this->kqfd);
	} catch ($IOException&) {
		$catch();
	}
	try {
		$FileDispatcherImpl::closeIntFD($nc(this->sp)->get(0));
	} catch ($IOException&) {
		$catch();
	}
	try {
		$FileDispatcherImpl::closeIntFD($nc(this->sp)->get(1));
	} catch ($IOException&) {
		$catch();
	}
	$KQueue::freePollArray(this->address);
}

void KQueuePort::wakeup() {
	if ($nc(this->wakeupCount)->incrementAndGet() == 1) {
		try {
			$IOUtil::write1($nc(this->sp)->get(1), (int8_t)0);
		} catch ($IOException&) {
			$var($IOException, x, $catch());
			$throwNew($AssertionError, $of(x));
		}
	}
}

void KQueuePort::executeOnHandlerTask($Runnable* task) {
	$synchronized(this) {
		if (this->closed) {
			$throwNew($RejectedExecutionException);
		}
		offerTask(task);
		wakeup();
	}
}

void KQueuePort::shutdownHandlerTasks() {
	int32_t nThreads = threadCount();
	if (nThreads == 0) {
		implClose();
	} else {
		while (nThreads-- > 0) {
			wakeup();
		}
	}
}

void KQueuePort::startPoll(int32_t fd, int32_t events) {
	int32_t err = 0;
	int32_t flags = (1 | 16);
	$init($Net);
	if (((int32_t)(events & (uint32_t)(int32_t)$Net::POLLIN)) > 0) {
		err = $KQueue::register$(this->kqfd, fd, -1, flags);
	}
	if (err == 0 && ((int32_t)(events & (uint32_t)(int32_t)$Net::POLLOUT)) > 0) {
		err = $KQueue::register$(this->kqfd, fd, -2, flags);
	}
	if (err != 0) {
		$throwNew($InternalError, $$str({"kevent failed: "_s, $$str(err)}));
	}
}

KQueuePort::KQueuePort() {
}

$Class* KQueuePort::load$($String* name, bool initialize) {
	$loadClass(KQueuePort, name, initialize, &_KQueuePort_ClassInfo_, allocate$KQueuePort);
	return class$;
}

$Class* KQueuePort::class$ = nullptr;

		} // ch
	} // nio
} // sun