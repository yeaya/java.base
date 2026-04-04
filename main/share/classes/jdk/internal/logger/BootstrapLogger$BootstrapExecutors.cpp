#include <jdk/internal/logger/BootstrapLogger$BootstrapExecutors.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jdk/internal/logger/BootstrapLogger$BootstrapExecutors$1.h>
#include <jdk/internal/logger/BootstrapLogger$LogEvent.h>
#include <jdk/internal/logger/BootstrapLogger.h>
#include <jcpp.h>

#undef KEEP_EXECUTOR_ALIVE_SECONDS
#undef SECONDS

using $PermissionArray = $Array<::java::security::Permission>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $BootstrapLogger$BootstrapExecutors$1 = ::jdk::internal::logger::BootstrapLogger$BootstrapExecutors$1;
using $BootstrapLogger$LogEvent = ::jdk::internal::logger::BootstrapLogger$LogEvent;

namespace jdk {
	namespace internal {
		namespace logger {

class BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0 : public $Runnable {
	$class(BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		BootstrapLogger$BootstrapExecutors::lambda$awaitPendingTasks$0();
	}
};
$Class* BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.logger.BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0);
	});
	return class$;
}
$Class* BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0::class$ = nullptr;

$volatile($WeakReference*) BootstrapLogger$BootstrapExecutors::executorRef = nullptr;
$BootstrapLogger$LogEvent* BootstrapLogger$BootstrapExecutors::head = nullptr;
$BootstrapLogger$LogEvent* BootstrapLogger$BootstrapExecutors::tail = nullptr;

void BootstrapLogger$BootstrapExecutors::init$() {
}

$ExecutorService* BootstrapLogger$BootstrapExecutors::getExecutor() {
	$init(BootstrapLogger$BootstrapExecutors);
	$useLocalObjectStack();
	$var($WeakReference, ref, BootstrapLogger$BootstrapExecutors::executorRef);
	$var($ExecutorService, executor, ref == nullptr ? ($ExecutorService*)nullptr : $cast($ExecutorService, ref->get()));
	if (executor != nullptr) {
		return executor;
	}
	$synchronized(BootstrapLogger$BootstrapExecutors::class$) {
		$assign(ref, BootstrapLogger$BootstrapExecutors::executorRef);
		$assign(executor, ref == nullptr ? ($ExecutorService*)nullptr : $cast($ExecutorService, ref->get()));
		if (executor == nullptr) {
			$init($TimeUnit);
			$var($TimeUnit, var$0, $TimeUnit::SECONDS);
			$var($BlockingQueue, var$1, $new($LinkedBlockingQueue));
			$assign(executor, $new($ThreadPoolExecutor, 0, 1, BootstrapLogger$BootstrapExecutors::KEEP_EXECUTOR_ALIVE_SECONDS, var$0, var$1, $$new(BootstrapLogger$BootstrapExecutors)));
		}
		$assignStatic(BootstrapLogger$BootstrapExecutors::executorRef, $new($WeakReference, executor));
		return $cast($ExecutorService, $nc(BootstrapLogger$BootstrapExecutors::executorRef)->get());
	}
}

$Thread* BootstrapLogger$BootstrapExecutors::newThread($Runnable* r) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ExecutorService, owner, getExecutor());
	$var($PrivilegedAction, var$0, $new($BootstrapLogger$BootstrapExecutors$1, this, owner, r));
	$var($Thread, thread, $cast($Thread, $AccessController::doPrivileged(var$0, nullptr, $$new($PermissionArray, {$$new($RuntimePermission, "enableContextClassLoaderOverride"_s)}))));
	$nc(thread)->setDaemon(true);
	return thread;
}

void BootstrapLogger$BootstrapExecutors::submit($Runnable* r) {
	$init(BootstrapLogger$BootstrapExecutors);
	$$nc(getExecutor())->execute(r);
}

void BootstrapLogger$BootstrapExecutors::join($Runnable* r) {
	$init(BootstrapLogger$BootstrapExecutors);
	$useLocalObjectStack();
	try {
		$$nc($$nc(getExecutor())->submit(r))->get();
	} catch ($InterruptedException& ex) {
		$throwNew($RuntimeException, ex);
	} catch ($ExecutionException& ex) {
		$throwNew($RuntimeException, ex);
	}
}

void BootstrapLogger$BootstrapExecutors::awaitPendingTasks() {
	$init(BootstrapLogger$BootstrapExecutors);
	$useLocalObjectStack();
	$var($WeakReference, ref, BootstrapLogger$BootstrapExecutors::executorRef);
	$var($ExecutorService, executor, ref == nullptr ? ($ExecutorService*)nullptr : $cast($ExecutorService, ref->get()));
	if (ref == nullptr) {
		$synchronized(BootstrapLogger$BootstrapExecutors::class$) {
			$assign(ref, BootstrapLogger$BootstrapExecutors::executorRef);
			$assign(executor, ref == nullptr ? ($ExecutorService*)nullptr : $cast($ExecutorService, ref->get()));
		}
	}
	if (executor != nullptr) {
		join($$new(BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0));
	}
}

bool BootstrapLogger$BootstrapExecutors::isAlive() {
	$init(BootstrapLogger$BootstrapExecutors);
	$var($WeakReference, ref, BootstrapLogger$BootstrapExecutors::executorRef);
	if (ref != nullptr && !ref->refersTo(nullptr)) {
		return true;
	}
	$synchronized(BootstrapLogger$BootstrapExecutors::class$) {
		$assign(ref, BootstrapLogger$BootstrapExecutors::executorRef);
		return ref != nullptr && !ref->refersTo(nullptr);
	}
}

void BootstrapLogger$BootstrapExecutors::enqueue($BootstrapLogger$LogEvent* event) {
	$init(BootstrapLogger$BootstrapExecutors);
	if ($nc(event)->next != nullptr) {
		return;
	}
	$synchronized(BootstrapLogger$BootstrapExecutors::class$) {
		if (event->next != nullptr) {
			return;
		}
		$set(event, next, event);
		if (BootstrapLogger$BootstrapExecutors::tail == nullptr) {
			$assignStatic(BootstrapLogger$BootstrapExecutors::head, $assignStatic(BootstrapLogger$BootstrapExecutors::tail, event));
		} else {
			$set(BootstrapLogger$BootstrapExecutors::tail, next, event);
			$assignStatic(BootstrapLogger$BootstrapExecutors::tail, event);
		}
	}
}

void BootstrapLogger$BootstrapExecutors::flush() {
	$init(BootstrapLogger$BootstrapExecutors);
	$useLocalObjectStack();
	$var($BootstrapLogger$LogEvent, event, nullptr);
	$synchronized(BootstrapLogger$BootstrapExecutors::class$) {
		$assign(event, BootstrapLogger$BootstrapExecutors::head);
		$assignStatic(BootstrapLogger$BootstrapExecutors::head, $assignStatic(BootstrapLogger$BootstrapExecutors::tail, nullptr));
	}
	while (event != nullptr) {
		$BootstrapLogger$LogEvent::log(event);
		$synchronized(BootstrapLogger$BootstrapExecutors::class$) {
			$var($BootstrapLogger$LogEvent, prev, event);
			$assign(event, event->next == event ? ($BootstrapLogger$LogEvent*)nullptr : event->next);
			$set(prev, next, nullptr);
		}
	}
}

void BootstrapLogger$BootstrapExecutors::lambda$awaitPendingTasks$0() {
	$init(BootstrapLogger$BootstrapExecutors);
}

BootstrapLogger$BootstrapExecutors::BootstrapLogger$BootstrapExecutors() {
}

$Class* BootstrapLogger$BootstrapExecutors::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.logger.BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0")) {
			return BootstrapLogger$BootstrapExecutors$$Lambda$lambda$awaitPendingTasks$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"KEEP_EXECUTOR_ALIVE_SECONDS", "J", nullptr, $STATIC | $FINAL, $constField(BootstrapLogger$BootstrapExecutors, KEEP_EXECUTOR_ALIVE_SECONDS)},
		{"executorRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/util/concurrent/ExecutorService;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(BootstrapLogger$BootstrapExecutors, executorRef)},
		{"head", "Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $STATIC, $staticField(BootstrapLogger$BootstrapExecutors, head)},
		{"tail", "Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $STATIC, $staticField(BootstrapLogger$BootstrapExecutors, tail)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BootstrapLogger$BootstrapExecutors, init$, void)},
		{"awaitPendingTasks", "()V", nullptr, $STATIC, $staticMethod(BootstrapLogger$BootstrapExecutors, awaitPendingTasks, void)},
		{"enqueue", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;)V", nullptr, $STATIC, $staticMethod(BootstrapLogger$BootstrapExecutors, enqueue, void, $BootstrapLogger$LogEvent*)},
		{"flush", "()V", nullptr, $STATIC, $staticMethod(BootstrapLogger$BootstrapExecutors, flush, void)},
		{"getExecutor", "()Ljava/util/concurrent/ExecutorService;", nullptr, $PRIVATE | $STATIC, $staticMethod(BootstrapLogger$BootstrapExecutors, getExecutor, $ExecutorService*)},
		{"isAlive", "()Z", nullptr, $STATIC, $staticMethod(BootstrapLogger$BootstrapExecutors, isAlive, bool)},
		{"join", "(Ljava/lang/Runnable;)V", nullptr, $STATIC, $staticMethod(BootstrapLogger$BootstrapExecutors, join, void, $Runnable*)},
		{"lambda$awaitPendingTasks$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BootstrapLogger$BootstrapExecutors, lambda$awaitPendingTasks$0, void)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(BootstrapLogger$BootstrapExecutors, newThread, $Thread*, $Runnable*)},
		{"submit", "(Ljava/lang/Runnable;)V", nullptr, $STATIC, $staticMethod(BootstrapLogger$BootstrapExecutors, submit, void, $Runnable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.BootstrapLogger$BootstrapExecutors", "jdk.internal.logger.BootstrapLogger", "BootstrapExecutors", $PRIVATE | $STATIC},
		{"jdk.internal.logger.BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask", "jdk.internal.logger.BootstrapLogger$BootstrapExecutors", "BootstrapMessageLoggerTask", $PRIVATE | $STATIC},
		{"jdk.internal.logger.BootstrapLogger$BootstrapExecutors$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.logger.BootstrapLogger$BootstrapExecutors",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.logger.BootstrapLogger"
	};
	$loadClass(BootstrapLogger$BootstrapExecutors, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BootstrapLogger$BootstrapExecutors);
	});
	return class$;
}

$Class* BootstrapLogger$BootstrapExecutors::class$ = nullptr;

		} // logger
	} // internal
} // jdk