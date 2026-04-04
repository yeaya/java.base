#include <sun/nio/ch/UnixAsynchronousSocketChannelImpl$2.h>
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
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $InterruptedByTimeoutException = ::java::nio::channels::InterruptedByTimeoutException;
using $Invoker = ::sun::nio::ch::Invoker;
using $PendingFuture = ::sun::nio::ch::PendingFuture;
using $UnixAsynchronousSocketChannelImpl = ::sun::nio::ch::UnixAsynchronousSocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

void UnixAsynchronousSocketChannelImpl$2::init$($UnixAsynchronousSocketChannelImpl* this$0) {
	$set(this, this$0, this$0);
}

void UnixAsynchronousSocketChannelImpl$2::run() {
	$useLocalObjectStack();
	$var($CompletionHandler, handler, nullptr);
	$var($Object, att, nullptr);
	$var($PendingFuture, future, nullptr);
	$synchronized(this->this$0->updateLock) {
		if (!this->this$0->writePending) {
			return;
		}
		this->this$0->writePending = false;
		$assign(handler, this->this$0->writeHandler);
		$assign(att, this->this$0->writeAttachment);
		$assign(future, this->this$0->writeFuture);
	}
	this->this$0->enableWriting(true);
	$var($Exception, exc, $new($InterruptedByTimeoutException));
	if (handler != nullptr) {
		$Invoker::invokeIndirectly(this->this$0, handler, att, nullptr, exc);
	} else {
		$nc(future)->setFailure(exc);
	}
}

UnixAsynchronousSocketChannelImpl$2::UnixAsynchronousSocketChannelImpl$2() {
}

$Class* UnixAsynchronousSocketChannelImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/UnixAsynchronousSocketChannelImpl;", nullptr, $FINAL | $SYNTHETIC, $field(UnixAsynchronousSocketChannelImpl$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/UnixAsynchronousSocketChannelImpl;)V", nullptr, 0, $method(UnixAsynchronousSocketChannelImpl$2, init$, void, $UnixAsynchronousSocketChannelImpl*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(UnixAsynchronousSocketChannelImpl$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.UnixAsynchronousSocketChannelImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.UnixAsynchronousSocketChannelImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.UnixAsynchronousSocketChannelImpl$2",
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
	$loadClass(UnixAsynchronousSocketChannelImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixAsynchronousSocketChannelImpl$2);
	});
	return class$;
}

$Class* UnixAsynchronousSocketChannelImpl$2::class$ = nullptr;

		} // ch
	} // nio
} // sun