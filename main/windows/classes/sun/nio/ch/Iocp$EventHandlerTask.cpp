#include <sun/nio/ch/Iocp$EventHandlerTask.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <sun/nio/ch/Invoker$GroupAndInvokeCount.h>
#include <sun/nio/ch/Invoker.h>
#include <sun/nio/ch/Iocp$CompletionStatus.h>
#include <sun/nio/ch/Iocp$OverlappedChannel.h>
#include <sun/nio/ch/Iocp$ResultHandler.h>
#include <sun/nio/ch/Iocp.h>
#include <sun/nio/ch/PendingFuture.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Map = ::java::util::Map;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $Invoker = ::sun::nio::ch::Invoker;
using $Invoker$GroupAndInvokeCount = ::sun::nio::ch::Invoker$GroupAndInvokeCount;
using $Iocp = ::sun::nio::ch::Iocp;
using $Iocp$CompletionStatus = ::sun::nio::ch::Iocp$CompletionStatus;
using $Iocp$OverlappedChannel = ::sun::nio::ch::Iocp$OverlappedChannel;
using $Iocp$ResultHandler = ::sun::nio::ch::Iocp$ResultHandler;
using $PendingFuture = ::sun::nio::ch::PendingFuture;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _Iocp$EventHandlerTask_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/Iocp;", nullptr, $FINAL | $SYNTHETIC, $field(Iocp$EventHandlerTask, this$0)},
	{}
};

$MethodInfo _Iocp$EventHandlerTask_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/Iocp;)V", nullptr, $PRIVATE, $method(static_cast<void(Iocp$EventHandlerTask::*)($Iocp*)>(&Iocp$EventHandlerTask::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Iocp$EventHandlerTask_InnerClassesInfo_[] = {
	{"sun.nio.ch.Iocp$EventHandlerTask", "sun.nio.ch.Iocp", "EventHandlerTask", $PRIVATE},
	{}
};

$ClassInfo _Iocp$EventHandlerTask_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Iocp$EventHandlerTask",
	"java.lang.Object",
	"java.lang.Runnable",
	_Iocp$EventHandlerTask_FieldInfo_,
	_Iocp$EventHandlerTask_MethodInfo_,
	nullptr,
	nullptr,
	_Iocp$EventHandlerTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Iocp"
};

$Object* allocate$Iocp$EventHandlerTask($Class* clazz) {
	return $of($alloc(Iocp$EventHandlerTask));
}

void Iocp$EventHandlerTask::init$($Iocp* this$0) {
	$set(this, this$0, this$0);
}

void Iocp$EventHandlerTask::run() {
	$var($Invoker$GroupAndInvokeCount, myGroupAndInvokeCount, $Invoker::getGroupAndInvokeCount());
	bool canInvokeDirect = (myGroupAndInvokeCount != nullptr);
	$var($Iocp$CompletionStatus, ioResult, $new($Iocp$CompletionStatus));
	bool replaceMe = false;
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			for (;;) {
				if (myGroupAndInvokeCount != nullptr) {
					myGroupAndInvokeCount->resetInvokeCount();
				}
				replaceMe = false;
				try {
					$Iocp::getQueuedCompletionStatus(this->this$0->port, ioResult);
				} catch ($IOException&) {
					$var($IOException, x, $catch());
					x->printStackTrace();
					return;
				}
				bool var$2 = ioResult->completionKey() == 0;
				if (var$2 && ioResult->overlapped() == (int64_t)0) {
					$var($Runnable, task, this->this$0->pollTask());
					if (task == nullptr) {
						return$1 = true;
						goto $finally;
					}
					replaceMe = true;
					$nc(task)->run();
					continue;
				}
				$var($Iocp$OverlappedChannel, ch, nullptr);
				$nc($($nc(this->this$0->keyToChannelLock)->readLock()))->lock();
				{
					$var($Throwable, var$3, nullptr);
					bool continue$4 = false;
					try {
						$assign(ch, $cast($Iocp$OverlappedChannel, $nc(this->this$0->keyToChannel)->get($($Integer::valueOf(ioResult->completionKey())))));
						if (ch == nullptr) {
							this->this$0->checkIfStale(ioResult->overlapped());
							// continue;
							continue$4 = true;
							goto $finally1;
						}
					} catch ($Throwable&) {
						$assign(var$3, $catch());
					} $finally1: {
						$nc($($nc(this->this$0->keyToChannelLock)->readLock()))->unlock();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
					if (continue$4) {
						continue;
					}
				}
				$var($PendingFuture, result, $nc(ch)->getByOverlapped(ioResult->overlapped()));
				if (result == nullptr) {
					this->this$0->checkIfStale(ioResult->overlapped());
					continue;
				}
				$synchronized(result) {
					if ($nc(result)->isDone()) {
						continue;
					}
				}
				int32_t error = ioResult->error();
				$var($Iocp$ResultHandler, rh, $cast($Iocp$ResultHandler, $nc(result)->getContext()));
				replaceMe = true;
				if (error == 0) {
					$nc(rh)->completed(ioResult->bytesTransferred(), canInvokeDirect);
				} else {
					$nc(rh)->failed(error, $($Iocp::translateErrorToIOException(error)));
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

Iocp$EventHandlerTask::Iocp$EventHandlerTask() {
}

$Class* Iocp$EventHandlerTask::load$($String* name, bool initialize) {
	$loadClass(Iocp$EventHandlerTask, name, initialize, &_Iocp$EventHandlerTask_ClassInfo_, allocate$Iocp$EventHandlerTask);
	return class$;
}

$Class* Iocp$EventHandlerTask::class$ = nullptr;

		} // ch
	} // nio
} // sun