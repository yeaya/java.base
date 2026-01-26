#include <sun/nio/ch/EPollPort$EventHandlerTask.h>

#include <java/io/IOException.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ArrayBlockingQueue.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <sun/nio/ch/EPoll.h>
#include <sun/nio/ch/EPollPort$Event.h>
#include <sun/nio/ch/EPollPort.h>
#include <sun/nio/ch/IOStatus.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/Invoker$GroupAndInvokeCount.h>
#include <sun/nio/ch/Invoker.h>
#include <sun/nio/ch/Port$PollableChannel.h>
#include <jcpp.h>

#undef EXECUTE_TASK_OR_SHUTDOWN
#undef INTERRUPTED
#undef NEED_TO_POLL

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Map = ::java::util::Map;
using $ArrayBlockingQueue = ::java::util::concurrent::ArrayBlockingQueue;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $EPoll = ::sun::nio::ch::EPoll;
using $EPollPort = ::sun::nio::ch::EPollPort;
using $EPollPort$Event = ::sun::nio::ch::EPollPort$Event;
using $IOStatus = ::sun::nio::ch::IOStatus;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $Invoker = ::sun::nio::ch::Invoker;
using $Invoker$GroupAndInvokeCount = ::sun::nio::ch::Invoker$GroupAndInvokeCount;
using $Port$PollableChannel = ::sun::nio::ch::Port$PollableChannel;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _EPollPort$EventHandlerTask_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/EPollPort;", nullptr, $FINAL | $SYNTHETIC, $field(EPollPort$EventHandlerTask, this$0)},
	{}
};

$MethodInfo _EPollPort$EventHandlerTask_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/EPollPort;)V", nullptr, $PRIVATE, $method(EPollPort$EventHandlerTask, init$, void, $EPollPort*)},
	{"poll", "()Lsun/nio/ch/EPollPort$Event;", nullptr, $PRIVATE, $method(EPollPort$EventHandlerTask, poll, $EPollPort$Event*), "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(EPollPort$EventHandlerTask, run, void)},
	{}
};

$InnerClassInfo _EPollPort$EventHandlerTask_InnerClassesInfo_[] = {
	{"sun.nio.ch.EPollPort$EventHandlerTask", "sun.nio.ch.EPollPort", "EventHandlerTask", $PRIVATE},
	{}
};

$ClassInfo _EPollPort$EventHandlerTask_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.EPollPort$EventHandlerTask",
	"java.lang.Object",
	"java.lang.Runnable",
	_EPollPort$EventHandlerTask_FieldInfo_,
	_EPollPort$EventHandlerTask_MethodInfo_,
	nullptr,
	nullptr,
	_EPollPort$EventHandlerTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.EPollPort"
};

$Object* allocate$EPollPort$EventHandlerTask($Class* clazz) {
	return $of($alloc(EPollPort$EventHandlerTask));
}

void EPollPort$EventHandlerTask::init$($EPollPort* this$0) {
	$set(this, this$0, this$0);
}

$EPollPort$Event* EPollPort$EventHandlerTask::poll() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($EPollPort$Event, var$2, nullptr);
		bool return$1 = false;
		try {
			for (;;) {
				int32_t n = 0;
				do {
					n = $EPoll::wait(this->this$0->epfd, this->this$0->address, 512, -1);
				} while (n == $IOStatus::INTERRUPTED);
				$nc($($nc(this->this$0->fdToChannelLock)->readLock()))->lock();
				{
					$var($Throwable, var$3, nullptr);
					$var($EPollPort$Event, var$5, nullptr);
					bool return$4 = false;
					try {
						while (n-- > 0) {
							int64_t eventAddress = $EPoll::getEvent(this->this$0->address, n);
							int32_t fd = $EPoll::getDescriptor(eventAddress);
							if (fd == $nc(this->this$0->sp)->get(0)) {
								if ($nc(this->this$0->wakeupCount)->decrementAndGet() == 0) {
									int32_t nread = 0;
									do {
										nread = $IOUtil::drain1($nc(this->this$0->sp)->get(0));
									} while (nread == $IOStatus::INTERRUPTED);
								}
								if (n > 0) {
									$nc(this->this$0->queue)->offer(this->this$0->EXECUTE_TASK_OR_SHUTDOWN);
									continue;
								}
								$assign(var$5, this->this$0->EXECUTE_TASK_OR_SHUTDOWN);
								return$4 = true;
								goto $finally1;
							}
							$var($Port$PollableChannel, channel, $cast($Port$PollableChannel, $nc(this->this$0->fdToChannel)->get($($Integer::valueOf(fd)))));
							if (channel != nullptr) {
								int32_t events = $EPoll::getEvents(eventAddress);
								$var($EPollPort$Event, ev, $new($EPollPort$Event, channel, events));
								if (n > 0) {
									$nc(this->this$0->queue)->offer(ev);
								} else {
									$assign(var$5, ev);
									return$4 = true;
									goto $finally1;
								}
							}
						}
					} catch ($Throwable& var$6) {
						$assign(var$3, var$6);
					} $finally1: {
						$nc($($nc(this->this$0->fdToChannelLock)->readLock()))->unlock();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
					if (return$4) {
						$assign(var$2, var$5);
						return$1 = true;
						goto $finally;
					}
				}
			}
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			$nc(this->this$0->queue)->offer(this->this$0->NEED_TO_POLL);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void EPollPort$EventHandlerTask::run() {
	$useLocalCurrentObjectStackCache();
	$var($Invoker$GroupAndInvokeCount, myGroupAndInvokeCount, $Invoker::getGroupAndInvokeCount());
	bool isPooledThread = (myGroupAndInvokeCount != nullptr);
	bool replaceMe = false;
	$var($EPollPort$Event, ev, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			for (;;) {
				if (isPooledThread) {
					myGroupAndInvokeCount->resetInvokeCount();
				}
				try {
					replaceMe = false;
					$assign(ev, $cast($EPollPort$Event, $nc(this->this$0->queue)->take()));
					if (ev == this->this$0->NEED_TO_POLL) {
						try {
							$assign(ev, poll());
						} catch ($IOException& x) {
							x->printStackTrace();
							return$1 = true;
							goto $finally;
						}
					}
				} catch ($InterruptedException& x) {
					continue;
				}
				if (ev == this->this$0->EXECUTE_TASK_OR_SHUTDOWN) {
					$var($Runnable, task, this->this$0->pollTask());
					if (task == nullptr) {
						return$1 = true;
						goto $finally;
					}
					replaceMe = true;
					$nc(task)->run();
					continue;
				}
				try {
					$nc($($nc(ev)->channel()))->onEvent(ev->events(), isPooledThread);
				} catch ($Error& x) {
					replaceMe = true;
					$throw(x);
				} catch ($RuntimeException& x) {
					replaceMe = true;
					$throw(x);
				}
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			int32_t remaining = this->this$0->threadExit(this, replaceMe);
			if (remaining == 0 && this->this$0->isShutdown()) {
				this->this$0->implClose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

EPollPort$EventHandlerTask::EPollPort$EventHandlerTask() {
}

$Class* EPollPort$EventHandlerTask::load$($String* name, bool initialize) {
	$loadClass(EPollPort$EventHandlerTask, name, initialize, &_EPollPort$EventHandlerTask_ClassInfo_, allocate$EPollPort$EventHandlerTask);
	return class$;
}

$Class* EPollPort$EventHandlerTask::class$ = nullptr;

		} // ch
	} // nio
} // sun