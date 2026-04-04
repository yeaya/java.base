#include <sun/nio/ch/WindowsAsynchronousFileChannelImpl$LockTask.h>
#include <java/io/IOException.h>
#include <java/lang/Runnable.h>
#include <java/nio/channels/AsynchronousCloseException.h>
#include <sun/nio/ch/FileLockImpl.h>
#include <sun/nio/ch/IOStatus.h>
#include <sun/nio/ch/Invoker.h>
#include <sun/nio/ch/PendingFuture.h>
#include <sun/nio/ch/PendingIoCache.h>
#include <sun/nio/ch/WindowsAsynchronousFileChannelImpl.h>
#include <jcpp.h>

#undef UNAVAILABLE

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AsynchronousCloseException = ::java::nio::channels::AsynchronousCloseException;
using $FileLockImpl = ::sun::nio::ch::FileLockImpl;
using $IOStatus = ::sun::nio::ch::IOStatus;
using $Invoker = ::sun::nio::ch::Invoker;
using $PendingFuture = ::sun::nio::ch::PendingFuture;
using $WindowsAsynchronousFileChannelImpl = ::sun::nio::ch::WindowsAsynchronousFileChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

int32_t WindowsAsynchronousFileChannelImpl$LockTask::hashCode() {
	 return this->$Runnable::hashCode();
}

bool WindowsAsynchronousFileChannelImpl$LockTask::equals(Object$* obj) {
	 return this->$Runnable::equals(obj);
}

$Object* WindowsAsynchronousFileChannelImpl$LockTask::clone() {
	 return this->$Runnable::clone();
}

$String* WindowsAsynchronousFileChannelImpl$LockTask::toString() {
	 return this->$Runnable::toString();
}

void WindowsAsynchronousFileChannelImpl$LockTask::finalize() {
	this->$Runnable::finalize();
}

void WindowsAsynchronousFileChannelImpl$LockTask::init$($WindowsAsynchronousFileChannelImpl* this$0, int64_t position, $FileLockImpl* fli, $PendingFuture* result) {
	$set(this, this$0, this$0);
	this->position = position;
	$set(this, fli, fli);
	$set(this, result, result);
}

void WindowsAsynchronousFileChannelImpl$LockTask::run() {
	$useLocalObjectStack();
	int64_t overlapped = 0;
	$var($Throwable, var$0, nullptr);
	bool return$1 = false;
	try {
		try {
			this->this$0->begin();
			overlapped = $nc(this->this$0->ioCache)->add(this->result);
			$synchronized(this->result) {
				int64_t var$2 = this->this$0->handle;
				int64_t var$3 = this->position;
				int64_t var$4 = $nc(this->fli)->size();
				int32_t n = $WindowsAsynchronousFileChannelImpl::lockFile(var$2, var$3, var$4, this->fli->isShared(), overlapped);
				if (n == $IOStatus::UNAVAILABLE) {
					return$1 = true;
					goto $finally;
				}
				this->result->setResult(this->fli);
			}
		} catch ($Throwable& x) {
			this->this$0->removeFromFileLockTable(this->fli);
			$nc(this->result)->setFailure($($WindowsAsynchronousFileChannelImpl::toIOException(x)));
			if (overlapped != 0) {
				$nc(this->this$0->ioCache)->remove(overlapped);
			}
		}
	} catch ($Throwable& var$5) {
		$assign(var$0, var$5);
	} $finally: {
		this->this$0->end();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return;
	}
	$Invoker::invoke(this->result);
}

void WindowsAsynchronousFileChannelImpl$LockTask::completed(int32_t bytesTransferred, bool canInvokeDirect) {
	$nc(this->result)->setResult(this->fli);
	if (canInvokeDirect) {
		$Invoker::invokeUnchecked(this->result);
	} else {
		$Invoker::invoke(this->result);
	}
}

void WindowsAsynchronousFileChannelImpl$LockTask::failed(int32_t error, $IOException* x) {
	this->this$0->removeFromFileLockTable(this->fli);
	if (this->this$0->isOpen()) {
		$nc(this->result)->setFailure(x);
	} else {
		$nc(this->result)->setFailure($$new($AsynchronousCloseException));
	}
	$Invoker::invoke(this->result);
}

WindowsAsynchronousFileChannelImpl$LockTask::WindowsAsynchronousFileChannelImpl$LockTask() {
}

$Class* WindowsAsynchronousFileChannelImpl$LockTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/WindowsAsynchronousFileChannelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsAsynchronousFileChannelImpl$LockTask, this$0)},
		{"position", "J", nullptr, $PRIVATE | $FINAL, $field(WindowsAsynchronousFileChannelImpl$LockTask, position)},
		{"fli", "Lsun/nio/ch/FileLockImpl;", nullptr, $PRIVATE | $FINAL, $field(WindowsAsynchronousFileChannelImpl$LockTask, fli)},
		{"result", "Lsun/nio/ch/PendingFuture;", "Lsun/nio/ch/PendingFuture<Ljava/nio/channels/FileLock;TA;>;", $PRIVATE | $FINAL, $field(WindowsAsynchronousFileChannelImpl$LockTask, result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/nio/ch/WindowsAsynchronousFileChannelImpl;JLsun/nio/ch/FileLockImpl;Lsun/nio/ch/PendingFuture;)V", "(JLsun/nio/ch/FileLockImpl;Lsun/nio/ch/PendingFuture<Ljava/nio/channels/FileLock;TA;>;)V", 0, $method(WindowsAsynchronousFileChannelImpl$LockTask, init$, void, $WindowsAsynchronousFileChannelImpl*, int64_t, $FileLockImpl*, $PendingFuture*)},
		{"completed", "(IZ)V", nullptr, $PUBLIC, $virtualMethod(WindowsAsynchronousFileChannelImpl$LockTask, completed, void, int32_t, bool)},
		{"failed", "(ILjava/io/IOException;)V", nullptr, $PUBLIC, $virtualMethod(WindowsAsynchronousFileChannelImpl$LockTask, failed, void, int32_t, $IOException*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsAsynchronousFileChannelImpl$LockTask, run, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.WindowsAsynchronousFileChannelImpl$LockTask", "sun.nio.ch.WindowsAsynchronousFileChannelImpl", "LockTask", $PRIVATE},
		{"sun.nio.ch.Iocp$ResultHandler", "sun.nio.ch.Iocp", "ResultHandler", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.WindowsAsynchronousFileChannelImpl$LockTask",
		"java.lang.Object",
		"java.lang.Runnable,sun.nio.ch.Iocp$ResultHandler",
		fieldInfos$$,
		methodInfos$$,
		"<A:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/Runnable;Lsun/nio/ch/Iocp$ResultHandler;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.WindowsAsynchronousFileChannelImpl"
	};
	$loadClass(WindowsAsynchronousFileChannelImpl$LockTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsAsynchronousFileChannelImpl$LockTask));
	});
	return class$;
}

$Class* WindowsAsynchronousFileChannelImpl$LockTask::class$ = nullptr;

		} // ch
	} // nio
} // sun