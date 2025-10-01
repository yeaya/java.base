#include <sun/nio/ch/EPollPort.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
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
#include <sun/nio/ch/EPoll.h>
#include <sun/nio/ch/EPollPort$Event.h>
#include <sun/nio/ch/EPollPort$EventHandlerTask.h>
#include <sun/nio/ch/FileDispatcherImpl.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/Port$PollableChannel.h>
#include <sun/nio/ch/Port.h>
#include <sun/nio/ch/ThreadPool.h>
#include <jcpp.h>

#undef EXECUTE_TASK_OR_SHUTDOWN
#undef MAX_EPOLL_EVENTS
#undef ENOENT
#undef NEED_TO_POLL

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;
using $ArrayBlockingQueue = ::java::util::concurrent::ArrayBlockingQueue;
using $RejectedExecutionException = ::java::util::concurrent::RejectedExecutionException;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $EPoll = ::sun::nio::ch::EPoll;
using $EPollPort$Event = ::sun::nio::ch::EPollPort$Event;
using $EPollPort$EventHandlerTask = ::sun::nio::ch::EPollPort$EventHandlerTask;
using $FileDispatcherImpl = ::sun::nio::ch::FileDispatcherImpl;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $Port = ::sun::nio::ch::Port;
using $Port$PollableChannel = ::sun::nio::ch::Port$PollableChannel;
using $ThreadPool = ::sun::nio::ch::ThreadPool;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _EPollPort_FieldInfo_[] = {
	{"MAX_EPOLL_EVENTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EPollPort, MAX_EPOLL_EVENTS)},
	{"ENOENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EPollPort, ENOENT)},
	{"epfd", "I", nullptr, $PRIVATE | $FINAL, $field(EPollPort, epfd)},
	{"address", "J", nullptr, $PRIVATE | $FINAL, $field(EPollPort, address)},
	{"closed", "Z", nullptr, $PRIVATE, $field(EPollPort, closed)},
	{"sp", "[I", nullptr, $PRIVATE | $FINAL, $field(EPollPort, sp)},
	{"wakeupCount", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $FINAL, $field(EPollPort, wakeupCount)},
	{"queue", "Ljava/util/concurrent/ArrayBlockingQueue;", "Ljava/util/concurrent/ArrayBlockingQueue<Lsun/nio/ch/EPollPort$Event;>;", $PRIVATE | $FINAL, $field(EPollPort, queue)},
	{"NEED_TO_POLL", "Lsun/nio/ch/EPollPort$Event;", nullptr, $PRIVATE | $FINAL, $field(EPollPort, NEED_TO_POLL)},
	{"EXECUTE_TASK_OR_SHUTDOWN", "Lsun/nio/ch/EPollPort$Event;", nullptr, $PRIVATE | $FINAL, $field(EPollPort, EXECUTE_TASK_OR_SHUTDOWN)},
	{}
};

$MethodInfo _EPollPort_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/spi/AsynchronousChannelProvider;Lsun/nio/ch/ThreadPool;)V", nullptr, 0, $method(static_cast<void(EPollPort::*)($AsynchronousChannelProvider*,$ThreadPool*)>(&EPollPort::init$)), "java.io.IOException"},
	{"executeOnHandlerTask", "(Ljava/lang/Runnable;)V", nullptr, 0},
	{"implClose", "()V", nullptr, $PRIVATE, $method(static_cast<void(EPollPort::*)()>(&EPollPort::implClose))},
	{"shutdownHandlerTasks", "()V", nullptr, 0},
	{"start", "()Lsun/nio/ch/EPollPort;", nullptr, 0, $method(static_cast<EPollPort*(EPollPort::*)()>(&EPollPort::start))},
	{"startPoll", "(II)V", nullptr, 0},
	{"wakeup", "()V", nullptr, $PRIVATE, $method(static_cast<void(EPollPort::*)()>(&EPollPort::wakeup))},
	{}
};

$InnerClassInfo _EPollPort_InnerClassesInfo_[] = {
	{"sun.nio.ch.EPollPort$EventHandlerTask", "sun.nio.ch.EPollPort", "EventHandlerTask", $PRIVATE},
	{"sun.nio.ch.EPollPort$Event", "sun.nio.ch.EPollPort", "Event", $STATIC},
	{}
};

$ClassInfo _EPollPort_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.ch.EPollPort",
	"sun.nio.ch.Port",
	nullptr,
	_EPollPort_FieldInfo_,
	_EPollPort_MethodInfo_,
	nullptr,
	nullptr,
	_EPollPort_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.EPollPort$EventHandlerTask,sun.nio.ch.EPollPort$Event"
};

$Object* allocate$EPollPort($Class* clazz) {
	return $of($alloc(EPollPort));
}

void EPollPort::init$($AsynchronousChannelProvider* provider, $ThreadPool* pool) {
	$Port::init$(provider, pool);
	$set(this, wakeupCount, $new($AtomicInteger));
	$set(this, NEED_TO_POLL, $new($EPollPort$Event, nullptr, 0));
	$set(this, EXECUTE_TASK_OR_SHUTDOWN, $new($EPollPort$Event, nullptr, 0));
	this->epfd = $EPoll::create();
	this->address = $EPoll::allocatePollArray(EPollPort::MAX_EPOLL_EVENTS);
	try {
		int64_t fds = $IOUtil::makePipe(true);
		$set(this, sp, $new($ints, {
			(int32_t)((int64_t)((uint64_t)fds >> 32)),
			(int32_t)fds
		}));
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$EPoll::freePollArray(this->address);
		$FileDispatcherImpl::closeIntFD(this->epfd);
		$throw(ioe);
	}
	$EPoll::ctl(this->epfd, 1, $nc(this->sp)->get(0), 1);
	$set(this, queue, $new($ArrayBlockingQueue, EPollPort::MAX_EPOLL_EVENTS));
	$nc(this->queue)->offer(this->NEED_TO_POLL);
}

EPollPort* EPollPort::start() {
	startThreads($$new($EPollPort$EventHandlerTask, this));
	return this;
}

void EPollPort::implClose() {
	$synchronized(this) {
		if (this->closed) {
			return;
		}
		this->closed = true;
	}
	try {
		$FileDispatcherImpl::closeIntFD(this->epfd);
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
	$EPoll::freePollArray(this->address);
}

void EPollPort::wakeup() {
	if ($nc(this->wakeupCount)->incrementAndGet() == 1) {
		try {
			$IOUtil::write1($nc(this->sp)->get(1), (int8_t)0);
		} catch ($IOException&) {
			$var($IOException, x, $catch());
			$throwNew($AssertionError, $of(x));
		}
	}
}

void EPollPort::executeOnHandlerTask($Runnable* task) {
	$synchronized(this) {
		if (this->closed) {
			$throwNew($RejectedExecutionException);
		}
		offerTask(task);
		wakeup();
	}
}

void EPollPort::shutdownHandlerTasks() {
	int32_t nThreads = threadCount();
	if (nThreads == 0) {
		implClose();
	} else {
		while (nThreads-- > 0) {
			wakeup();
		}
	}
}

void EPollPort::startPoll(int32_t fd, int32_t events) {
	int32_t err = $EPoll::ctl(this->epfd, 3, fd, (events | 0x40000000));
	if (err == EPollPort::ENOENT) {
		err = $EPoll::ctl(this->epfd, 1, fd, (events | 0x40000000));
	}
	if (err != 0) {
		$throwNew($AssertionError);
	}
}

EPollPort::EPollPort() {
}

$Class* EPollPort::load$($String* name, bool initialize) {
	$loadClass(EPollPort, name, initialize, &_EPollPort_ClassInfo_, allocate$EPollPort);
	return class$;
}

$Class* EPollPort::class$ = nullptr;

		} // ch
	} // nio
} // sun