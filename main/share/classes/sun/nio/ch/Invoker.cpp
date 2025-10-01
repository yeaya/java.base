#include <sun/nio/ch/Invoker.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/nio/channels/ShutdownChannelGroupException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/RejectedExecutionException.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <sun/nio/ch/Groupable.h>
#include <sun/nio/ch/Invoker$1.h>
#include <sun/nio/ch/Invoker$2.h>
#include <sun/nio/ch/Invoker$3.h>
#include <sun/nio/ch/Invoker$GroupAndInvokeCount.h>
#include <sun/nio/ch/PendingFuture.h>
#include <sun/security/action/GetIntegerAction.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $ShutdownChannelGroupException = ::java::nio::channels::ShutdownChannelGroupException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Executor = ::java::util::concurrent::Executor;
using $RejectedExecutionException = ::java::util::concurrent::RejectedExecutionException;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $Groupable = ::sun::nio::ch::Groupable;
using $Invoker$1 = ::sun::nio::ch::Invoker$1;
using $Invoker$2 = ::sun::nio::ch::Invoker$2;
using $Invoker$3 = ::sun::nio::ch::Invoker$3;
using $Invoker$GroupAndInvokeCount = ::sun::nio::ch::Invoker$GroupAndInvokeCount;
using $PendingFuture = ::sun::nio::ch::PendingFuture;
using $GetIntegerAction = ::sun::security::action::GetIntegerAction;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _Invoker_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Invoker, $assertionsDisabled)},
	{"maxHandlerInvokeCount", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Invoker, maxHandlerInvokeCount)},
	{"myGroupAndInvokeCount", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Lsun/nio/ch/Invoker$GroupAndInvokeCount;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Invoker, myGroupAndInvokeCount)},
	{}
};

$MethodInfo _Invoker_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Invoker::*)()>(&Invoker::init$))},
	{"bindToGroup", "(Lsun/nio/ch/AsynchronousChannelGroupImpl;)V", nullptr, $STATIC, $method(static_cast<void(*)($AsynchronousChannelGroupImpl*)>(&Invoker::bindToGroup))},
	{"getGroupAndInvokeCount", "()Lsun/nio/ch/Invoker$GroupAndInvokeCount;", nullptr, $STATIC, $method(static_cast<$Invoker$GroupAndInvokeCount*(*)()>(&Invoker::getGroupAndInvokeCount))},
	{"invoke", "(Ljava/nio/channels/AsynchronousChannel;Ljava/nio/channels/CompletionHandler;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Throwable;)V", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(Ljava/nio/channels/AsynchronousChannel;Ljava/nio/channels/CompletionHandler<TV;-TA;>;TA;TV;Ljava/lang/Throwable;)V", $STATIC, $method(static_cast<void(*)($AsynchronousChannel*,$CompletionHandler*,Object$*,Object$*,$Throwable*)>(&Invoker::invoke))},
	{"invoke", "(Lsun/nio/ch/PendingFuture;)V", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(Lsun/nio/ch/PendingFuture<TV;TA;>;)V", $STATIC, $method(static_cast<void(*)($PendingFuture*)>(&Invoker::invoke))},
	{"invokeDirect", "(Lsun/nio/ch/Invoker$GroupAndInvokeCount;Ljava/nio/channels/CompletionHandler;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Throwable;)V", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(Lsun/nio/ch/Invoker$GroupAndInvokeCount;Ljava/nio/channels/CompletionHandler<TV;-TA;>;TA;TV;Ljava/lang/Throwable;)V", $STATIC, $method(static_cast<void(*)($Invoker$GroupAndInvokeCount*,$CompletionHandler*,Object$*,Object$*,$Throwable*)>(&Invoker::invokeDirect))},
	{"invokeIndirectly", "(Ljava/nio/channels/AsynchronousChannel;Ljava/nio/channels/CompletionHandler;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Throwable;)V", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(Ljava/nio/channels/AsynchronousChannel;Ljava/nio/channels/CompletionHandler<TV;-TA;>;TA;TV;Ljava/lang/Throwable;)V", $STATIC, $method(static_cast<void(*)($AsynchronousChannel*,$CompletionHandler*,Object$*,Object$*,$Throwable*)>(&Invoker::invokeIndirectly))},
	{"invokeIndirectly", "(Ljava/nio/channels/CompletionHandler;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Throwable;Ljava/util/concurrent/Executor;)V", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(Ljava/nio/channels/CompletionHandler<TV;-TA;>;TA;TV;Ljava/lang/Throwable;Ljava/util/concurrent/Executor;)V", $STATIC, $method(static_cast<void(*)($CompletionHandler*,Object$*,Object$*,$Throwable*,$Executor*)>(&Invoker::invokeIndirectly))},
	{"invokeIndirectly", "(Lsun/nio/ch/PendingFuture;)V", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(Lsun/nio/ch/PendingFuture<TV;TA;>;)V", $STATIC, $method(static_cast<void(*)($PendingFuture*)>(&Invoker::invokeIndirectly))},
	{"invokeOnThreadInThreadPool", "(Lsun/nio/ch/Groupable;Ljava/lang/Runnable;)V", nullptr, $STATIC, $method(static_cast<void(*)($Groupable*,$Runnable*)>(&Invoker::invokeOnThreadInThreadPool))},
	{"invokeUnchecked", "(Ljava/nio/channels/CompletionHandler;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Throwable;)V", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(Ljava/nio/channels/CompletionHandler<TV;-TA;>;TA;TV;Ljava/lang/Throwable;)V", $STATIC, $method(static_cast<void(*)($CompletionHandler*,Object$*,Object$*,$Throwable*)>(&Invoker::invokeUnchecked))},
	{"invokeUnchecked", "(Lsun/nio/ch/PendingFuture;)V", "<V:Ljava/lang/Object;A:Ljava/lang/Object;>(Lsun/nio/ch/PendingFuture<TV;TA;>;)V", $STATIC, $method(static_cast<void(*)($PendingFuture*)>(&Invoker::invokeUnchecked))},
	{"isBoundToAnyGroup", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&Invoker::isBoundToAnyGroup))},
	{"mayInvokeDirect", "(Lsun/nio/ch/Invoker$GroupAndInvokeCount;Lsun/nio/ch/AsynchronousChannelGroupImpl;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Invoker$GroupAndInvokeCount*,$AsynchronousChannelGroupImpl*)>(&Invoker::mayInvokeDirect))},
	{}
};

$InnerClassInfo _Invoker_InnerClassesInfo_[] = {
	{"sun.nio.ch.Invoker$GroupAndInvokeCount", "sun.nio.ch.Invoker", "GroupAndInvokeCount", $STATIC},
	{"sun.nio.ch.Invoker$3", nullptr, nullptr, 0},
	{"sun.nio.ch.Invoker$2", nullptr, nullptr, 0},
	{"sun.nio.ch.Invoker$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Invoker_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Invoker",
	"java.lang.Object",
	nullptr,
	_Invoker_FieldInfo_,
	_Invoker_MethodInfo_,
	nullptr,
	nullptr,
	_Invoker_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.Invoker$GroupAndInvokeCount,sun.nio.ch.Invoker$3,sun.nio.ch.Invoker$2,sun.nio.ch.Invoker$1"
};

$Object* allocate$Invoker($Class* clazz) {
	return $of($alloc(Invoker));
}

bool Invoker::$assertionsDisabled = false;
int32_t Invoker::maxHandlerInvokeCount = 0;
$ThreadLocal* Invoker::myGroupAndInvokeCount = nullptr;

void Invoker::init$() {
}

void Invoker::bindToGroup($AsynchronousChannelGroupImpl* group) {
	$init(Invoker);
	$nc(Invoker::myGroupAndInvokeCount)->set($$new($Invoker$GroupAndInvokeCount, group));
}

$Invoker$GroupAndInvokeCount* Invoker::getGroupAndInvokeCount() {
	$init(Invoker);
	return $cast($Invoker$GroupAndInvokeCount, $nc(Invoker::myGroupAndInvokeCount)->get());
}

bool Invoker::isBoundToAnyGroup() {
	$init(Invoker);
	return $nc(Invoker::myGroupAndInvokeCount)->get() != nullptr;
}

bool Invoker::mayInvokeDirect($Invoker$GroupAndInvokeCount* myGroupAndInvokeCount, $AsynchronousChannelGroupImpl* group) {
	$init(Invoker);
	bool var$0 = (myGroupAndInvokeCount != nullptr) && (myGroupAndInvokeCount->group() == group);
	if (var$0 && (myGroupAndInvokeCount->invokeCount() < Invoker::maxHandlerInvokeCount)) {
		return true;
	}
	return false;
}

void Invoker::invokeUnchecked($CompletionHandler* handler, Object$* attachment, Object$* value, $Throwable* exc) {
	$init(Invoker);
	if (exc == nullptr) {
		$nc(handler)->completed(value, attachment);
	} else {
		$nc(handler)->failed(exc, attachment);
	}
	$Thread::interrupted();
	if ($System::getSecurityManager() != nullptr) {
		$var($Thread, me, $Thread::currentThread());
		if ($instanceOf($InnocuousThread, me)) {
			$var($Invoker$GroupAndInvokeCount, thisGroupAndInvokeCount, $cast($Invoker$GroupAndInvokeCount, $nc(Invoker::myGroupAndInvokeCount)->get()));
			$nc(($cast($InnocuousThread, me)))->eraseThreadLocals();
			if (thisGroupAndInvokeCount != nullptr) {
				$nc(Invoker::myGroupAndInvokeCount)->set(thisGroupAndInvokeCount);
			}
		}
	}
}

void Invoker::invokeDirect($Invoker$GroupAndInvokeCount* myGroupAndInvokeCount, $CompletionHandler* handler, Object$* attachment, Object$* result, $Throwable* exc) {
	$init(Invoker);
	$nc(myGroupAndInvokeCount)->incrementInvokeCount();
	Invoker::invokeUnchecked(handler, attachment, result, exc);
}

void Invoker::invoke($AsynchronousChannel* channel, $CompletionHandler* handler, Object$* attachment, Object$* result, $Throwable* exc) {
	$init(Invoker);
	bool invokeDirect = false;
	bool identityOkay = false;
	$var($Invoker$GroupAndInvokeCount, thisGroupAndInvokeCount, $cast($Invoker$GroupAndInvokeCount, $nc(Invoker::myGroupAndInvokeCount)->get()));
	if (thisGroupAndInvokeCount != nullptr) {
		if (thisGroupAndInvokeCount->group() == $nc(($cast($Groupable, channel)))->group()) {
			identityOkay = true;
		}
		if (identityOkay && (thisGroupAndInvokeCount->invokeCount() < Invoker::maxHandlerInvokeCount)) {
			invokeDirect = true;
		}
	}
	if (invokeDirect) {
		Invoker::invokeDirect(thisGroupAndInvokeCount, handler, attachment, result, exc);
	} else {
		try {
			invokeIndirectly(channel, handler, attachment, result, exc);
		} catch ($RejectedExecutionException&) {
			$var($RejectedExecutionException, ree, $catch());
			if (identityOkay) {
				Invoker::invokeDirect(thisGroupAndInvokeCount, handler, attachment, result, exc);
			} else {
				$throwNew($ShutdownChannelGroupException);
			}
		}
	}
}

void Invoker::invokeIndirectly($AsynchronousChannel* channel, $CompletionHandler* handler, Object$* attachment, Object$* result, $Throwable* exc) {
	$init(Invoker);
	try {
		$nc($($nc(($cast($Groupable, channel)))->group()))->executeOnPooledThread($$new($Invoker$2, handler, attachment, result, exc));
	} catch ($RejectedExecutionException&) {
		$var($RejectedExecutionException, ree, $catch());
		$throwNew($ShutdownChannelGroupException);
	}
}

void Invoker::invokeIndirectly($CompletionHandler* handler, Object$* attachment, Object$* value, $Throwable* exc, $Executor* executor) {
	$init(Invoker);
	try {
		$nc(executor)->execute($$new($Invoker$3, handler, attachment, value, exc));
	} catch ($RejectedExecutionException&) {
		$var($RejectedExecutionException, ree, $catch());
		$throwNew($ShutdownChannelGroupException);
	}
}

void Invoker::invokeOnThreadInThreadPool($Groupable* channel, $Runnable* task) {
	$init(Invoker);
	bool invokeDirect = false;
	$var($Invoker$GroupAndInvokeCount, thisGroupAndInvokeCount, $cast($Invoker$GroupAndInvokeCount, $nc(Invoker::myGroupAndInvokeCount)->get()));
	$var($AsynchronousChannelGroupImpl, targetGroup, $nc(channel)->group());
	if (thisGroupAndInvokeCount == nullptr) {
		invokeDirect = false;
	} else {
		invokeDirect = ($nc(thisGroupAndInvokeCount)->group$ == targetGroup);
	}
	try {
		if (invokeDirect) {
			$nc(task)->run();
		} else {
			$nc(targetGroup)->executeOnPooledThread(task);
		}
	} catch ($RejectedExecutionException&) {
		$var($RejectedExecutionException, ree, $catch());
		$throwNew($ShutdownChannelGroupException);
	}
}

void Invoker::invokeUnchecked($PendingFuture* future) {
	$init(Invoker);
	if (!Invoker::$assertionsDisabled && !$nc(future)->isDone()) {
		$throwNew($AssertionError);
	}
	$var($CompletionHandler, handler, $nc(future)->handler());
	if (handler != nullptr) {
		$var($CompletionHandler, var$0, handler);
		$var($Object, var$1, future->attachment());
		$var($Object, var$2, future->value());
		invokeUnchecked(var$0, var$1, var$2, $(future->exception()));
	}
}

void Invoker::invoke($PendingFuture* future) {
	$init(Invoker);
	if (!Invoker::$assertionsDisabled && !$nc(future)->isDone()) {
		$throwNew($AssertionError);
	}
	$var($CompletionHandler, handler, $nc(future)->handler());
	if (handler != nullptr) {
		$var($AsynchronousChannel, var$0, future->channel());
		$var($CompletionHandler, var$1, handler);
		$var($Object, var$2, future->attachment());
		$var($Object, var$3, future->value());
		invoke(var$0, var$1, var$2, var$3, $(future->exception()));
	}
}

void Invoker::invokeIndirectly($PendingFuture* future) {
	$init(Invoker);
	if (!Invoker::$assertionsDisabled && !$nc(future)->isDone()) {
		$throwNew($AssertionError);
	}
	$var($CompletionHandler, handler, $nc(future)->handler());
	if (handler != nullptr) {
		$var($AsynchronousChannel, var$0, future->channel());
		$var($CompletionHandler, var$1, handler);
		$var($Object, var$2, future->attachment());
		$var($Object, var$3, future->value());
		invokeIndirectly(var$0, var$1, var$2, var$3, $(future->exception()));
	}
}

void clinit$Invoker($Class* class$) {
	$beforeCallerSensitive();
	Invoker::$assertionsDisabled = !Invoker::class$->desiredAssertionStatus();
	Invoker::maxHandlerInvokeCount = $nc(($cast($Integer, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetIntegerAction, "sun.nio.ch.maxCompletionHandlersOnStack"_s, 16)))))))->intValue();
	$assignStatic(Invoker::myGroupAndInvokeCount, $new($Invoker$1));
}

Invoker::Invoker() {
}

$Class* Invoker::load$($String* name, bool initialize) {
	$loadClass(Invoker, name, initialize, &_Invoker_ClassInfo_, clinit$Invoker, allocate$Invoker);
	return class$;
}

$Class* Invoker::class$ = nullptr;

		} // ch
	} // nio
} // sun