#include <sun/nio/ch/KQueuePort$EventHandlerTask.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ArrayBlockingQueue.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <sun/nio/ch/IOStatus.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/Invoker$GroupAndInvokeCount.h>
#include <sun/nio/ch/Invoker.h>
#include <sun/nio/ch/KQueue.h>
#include <sun/nio/ch/KQueuePort$Event.h>
#include <sun/nio/ch/KQueuePort.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/Port$PollableChannel.h>
#include <jcpp.h>

#undef EXECUTE_TASK_OR_SHUTDOWN
#undef POLLIN
#undef POLLOUT
#undef NEED_TO_POLL
#undef INTERRUPTED

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Map = ::java::util::Map;
using $ArrayBlockingQueue = ::java::util::concurrent::ArrayBlockingQueue;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $IOStatus = ::sun::nio::ch::IOStatus;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $Invoker = ::sun::nio::ch::Invoker;
using $Invoker$GroupAndInvokeCount = ::sun::nio::ch::Invoker$GroupAndInvokeCount;
using $KQueue = ::sun::nio::ch::KQueue;
using $KQueuePort = ::sun::nio::ch::KQueuePort;
using $KQueuePort$Event = ::sun::nio::ch::KQueuePort$Event;
using $Net = ::sun::nio::ch::Net;
using $Port = ::sun::nio::ch::Port;
using $Port$PollableChannel = ::sun::nio::ch::Port$PollableChannel;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _KQueuePort$EventHandlerTask_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/KQueuePort;", nullptr, $FINAL | $SYNTHETIC, $field(KQueuePort$EventHandlerTask, this$0)},
	{}
};

$MethodInfo _KQueuePort$EventHandlerTask_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/KQueuePort;)V", nullptr, $PRIVATE, $method(static_cast<void(KQueuePort$EventHandlerTask::*)($KQueuePort*)>(&KQueuePort$EventHandlerTask::init$))},
	{"poll", "()Lsun/nio/ch/KQueuePort$Event;", nullptr, $PRIVATE, $method(static_cast<$KQueuePort$Event*(KQueuePort$EventHandlerTask::*)()>(&KQueuePort$EventHandlerTask::poll)), "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KQueuePort$EventHandlerTask_InnerClassesInfo_[] = {
	{"sun.nio.ch.KQueuePort$EventHandlerTask", "sun.nio.ch.KQueuePort", "EventHandlerTask", $PRIVATE},
	{}
};

$ClassInfo _KQueuePort$EventHandlerTask_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.KQueuePort$EventHandlerTask",
	"java.lang.Object",
	"java.lang.Runnable",
	_KQueuePort$EventHandlerTask_FieldInfo_,
	_KQueuePort$EventHandlerTask_MethodInfo_,
	nullptr,
	nullptr,
	_KQueuePort$EventHandlerTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.KQueuePort"
};

$Object* allocate$KQueuePort$EventHandlerTask($Class* clazz) {
	return $of($alloc(KQueuePort$EventHandlerTask));
}

void KQueuePort$EventHandlerTask::init$($KQueuePort* this$0) {
	$set(this, this$0, this$0);
}

$KQueuePort$Event* KQueuePort$EventHandlerTask::poll() {
	{
		$var($Throwable, var$0, nullptr);
		$var($KQueuePort$Event, var$2, nullptr);
		bool return$1 = false;
		try {
			for (;;) {
				int32_t n = 0;
				do {
					n = $KQueue::poll(this->this$0->kqfd, this->this$0->address, 512, -1);
				} while (n == $IOStatus::INTERRUPTED);
				$nc($($nc(this->this$0->fdToChannelLock)->readLock()))->lock();
				{
					$var($Throwable, var$3, nullptr);
					$var($KQueuePort$Event, var$5, nullptr);
					bool return$4 = false;
					try {
						while (n-- > 0) {
							int64_t keventAddress = $KQueue::getEvent(this->this$0->address, n);
							int32_t fd = $KQueue::getDescriptor(keventAddress);
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
								int32_t filter = $KQueue::getFilter(keventAddress);
								int32_t events = 0;
								if (filter == -1) {
									$init($Net);
									events = $Net::POLLIN;
								} else if (filter == -2) {
									$init($Net);
									events = $Net::POLLOUT;
								}
								$var($KQueuePort$Event, ev, $new($KQueuePort$Event, channel, events));
								if (n > 0) {
									$nc(this->this$0->queue)->offer(ev);
								} else {
									$assign(var$5, ev);
									return$4 = true;
									goto $finally1;
								}
							}
						}
					} catch ($Throwable&) {
						$assign(var$3, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

void KQueuePort$EventHandlerTask::run() {
	$var($Invoker$GroupAndInvokeCount, myGroupAndInvokeCount, $Invoker::getGroupAndInvokeCount());
	bool isPooledThread = (myGroupAndInvokeCount != nullptr);
	bool replaceMe = false;
	$var($KQueuePort$Event, ev, nullptr);
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
					$assign(ev, $cast($KQueuePort$Event, $nc(this->this$0->queue)->take()));
					if (ev == this->this$0->NEED_TO_POLL) {
						try {
							$assign(ev, poll());
						} catch ($IOException&) {
							$var($IOException, x, $catch());
							x->printStackTrace();
							return;
						}
					}
				} catch ($InterruptedException&) {
					$var($InterruptedException, x, $catch());
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
				} catch ($Error&) {
					$var($Error, x, $catch());
					replaceMe = true;
					$throw(x);
				} catch ($RuntimeException&) {
					$var($RuntimeException, x, $catch());
					replaceMe = true;
					$throw(x);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

KQueuePort$EventHandlerTask::KQueuePort$EventHandlerTask() {
}

$Class* KQueuePort$EventHandlerTask::load$($String* name, bool initialize) {
	$loadClass(KQueuePort$EventHandlerTask, name, initialize, &_KQueuePort$EventHandlerTask_ClassInfo_, allocate$KQueuePort$EventHandlerTask);
	return class$;
}

$Class* KQueuePort$EventHandlerTask::class$ = nullptr;

		} // ch
	} // nio
} // sun