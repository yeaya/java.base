#include <sun/nio/ch/UnixAsynchronousSocketChannelImpl$1.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/nio/channels/InterruptedByTimeoutException.h>
#include <sun/nio/ch/Invoker.h>
#include <sun/nio/ch/PendingFuture.h>
#include <sun/nio/ch/UnixAsynchronousSocketChannelImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $InterruptedByTimeoutException = ::java::nio::channels::InterruptedByTimeoutException;
using $Invoker = ::sun::nio::ch::Invoker;
using $PendingFuture = ::sun::nio::ch::PendingFuture;
using $UnixAsynchronousSocketChannelImpl = ::sun::nio::ch::UnixAsynchronousSocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

void UnixAsynchronousSocketChannelImpl$1::init$($UnixAsynchronousSocketChannelImpl* this$0) {
	$set(this, this$0, this$0);
}

void UnixAsynchronousSocketChannelImpl$1::run() {
	$useLocalObjectStack();
	$var($CompletionHandler, handler, nullptr);
	$var($Object, att, nullptr);
	$var($PendingFuture, future, nullptr);
	$synchronized(this->this$0->updateLock) {
		if (!this->this$0->readPending) {
			return;
		}
		this->this$0->readPending = false;
		$assign(handler, this->this$0->readHandler);
		$assign(att, this->this$0->readAttachment);
		$assign(future, this->this$0->readFuture);
	}
	this->this$0->enableReading(true);
	$var($Exception, exc, $new($InterruptedByTimeoutException));
	if (handler == nullptr) {
		$nc(future)->setFailure(exc);
	} else {
		$var($AsynchronousChannel, ch, this->this$0);
		$Invoker::invokeIndirectly(ch, handler, att, nullptr, exc);
	}
}

UnixAsynchronousSocketChannelImpl$1::UnixAsynchronousSocketChannelImpl$1() {
}

$Class* UnixAsynchronousSocketChannelImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/UnixAsynchronousSocketChannelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(UnixAsynchronousSocketChannelImpl$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/UnixAsynchronousSocketChannelImpl;)V", nullptr, 0, $method(UnixAsynchronousSocketChannelImpl$1, init$, void, $UnixAsynchronousSocketChannelImpl*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(UnixAsynchronousSocketChannelImpl$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.UnixAsynchronousSocketChannelImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.UnixAsynchronousSocketChannelImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.UnixAsynchronousSocketChannelImpl$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.UnixAsynchronousSocketChannelImpl"
	};
	$loadClass(UnixAsynchronousSocketChannelImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixAsynchronousSocketChannelImpl$1);
	});
	return class$;
}

$Class* UnixAsynchronousSocketChannelImpl$1::class$ = nullptr;

		} // ch
	} // nio
} // sun