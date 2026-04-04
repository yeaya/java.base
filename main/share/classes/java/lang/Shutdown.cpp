#include <java/lang/Shutdown.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Runnable.h>
#include <java/lang/Shutdown$Lock.h>
#include <java/lang/ThreadDeath.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef MAX_SYSTEM_HOOKS

using $RunnableArray = $Array<::java::lang::Runnable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Shutdown$Lock = ::java::lang::Shutdown$Lock;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $VM = ::jdk::internal::misc::VM;

namespace java {
	namespace lang {

$RunnableArray* Shutdown::hooks = nullptr;
int32_t Shutdown::currentRunningHook = 0;
$Object* Shutdown::lock = nullptr;
$Object* Shutdown::haltLock = nullptr;

void Shutdown::init$() {
}

void Shutdown::add(int32_t slot, bool registerShutdownInProgress, $Runnable* hook) {
	$init(Shutdown);
	$useLocalObjectStack();
	if (slot < 0 || slot >= Shutdown::MAX_SYSTEM_HOOKS) {
		$throwNew($IllegalArgumentException, $$str({"Invalid slot: "_s, $$str(slot)}));
	}
	$synchronized(Shutdown::lock) {
		if (Shutdown::hooks->get(slot) != nullptr) {
			$throwNew($InternalError, $$str({"Shutdown hook at slot "_s, $$str(slot), " already registered"_s}));
		}
		if (!registerShutdownInProgress) {
			if (Shutdown::currentRunningHook >= 0) {
				$throwNew($IllegalStateException, "Shutdown in progress"_s);
			}
		} else if ($VM::isShutdown() || slot <= Shutdown::currentRunningHook) {
			$throwNew($IllegalStateException, "Shutdown in progress"_s);
		}
		Shutdown::hooks->set(slot, hook);
	}
}

void Shutdown::runHooks() {
	$init(Shutdown);
	$useLocalObjectStack();
	$synchronized(Shutdown::lock) {
		if ($VM::isShutdown()) {
			return;
		}
	}
	for (int32_t i = 0; i < Shutdown::MAX_SYSTEM_HOOKS; ++i) {
		try {
			$var($Runnable, hook, nullptr);
			$synchronized(Shutdown::lock) {
				Shutdown::currentRunningHook = i;
				$assign(hook, Shutdown::hooks->get(i));
			}
			if (hook != nullptr) {
				hook->run();
			}
		} catch ($Throwable& t) {
			{
				$var($ThreadDeath, td, nullptr);
				bool var$0 = $instanceOf($ThreadDeath, t);
				if (var$0) {
					$assign(td, $cast($ThreadDeath, t));
					var$0 = true;
				}
				if (var$0) {
					$throw(td);
				}
			}
		}
	}
	$VM::shutdown();
}

void Shutdown::beforeHalt() {
	$init(Shutdown);
	$prepareNativeStatic(beforeHalt, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Shutdown::halt(int32_t status) {
	$init(Shutdown);
	$synchronized(Shutdown::haltLock) {
		halt0(status);
	}
}

void Shutdown::halt0(int32_t status) {
	$init(Shutdown);
	$prepareNativeStatic(halt0, void, int32_t status);
	$invokeNativeStatic(status);
	$finishNativeStatic();
}

void Shutdown::exit(int32_t status) {
	$init(Shutdown);
	$synchronized(Shutdown::lock) {
		if (status != 0 && $VM::isShutdown()) {
			halt(status);
		}
	}
	$synchronized(Shutdown::class$) {
		beforeHalt();
		runHooks();
		halt(status);
	}
}

void Shutdown::shutdown() {
	$init(Shutdown);
	$synchronized(Shutdown::class$) {
		runHooks();
	}
}

void Shutdown::clinit$($Class* clazz) {
	$assignStatic(Shutdown::hooks, $new($RunnableArray, Shutdown::MAX_SYSTEM_HOOKS));
	Shutdown::currentRunningHook = -1;
	$assignStatic(Shutdown::lock, $new($Shutdown$Lock));
	$assignStatic(Shutdown::haltLock, $new($Shutdown$Lock));
}

Shutdown::Shutdown() {
}

$Class* Shutdown::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MAX_SYSTEM_HOOKS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Shutdown, MAX_SYSTEM_HOOKS)},
		{"hooks", "[Ljava/lang/Runnable;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Shutdown, hooks)},
		{"currentRunningHook", "I", nullptr, $PRIVATE | $STATIC, $staticField(Shutdown, currentRunningHook)},
		{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(Shutdown, lock)},
		{"haltLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(Shutdown, haltLock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Shutdown, init$, void)},
		{"add", "(IZLjava/lang/Runnable;)V", nullptr, $STATIC, $staticMethod(Shutdown, add, void, int32_t, bool, $Runnable*)},
		{"beforeHalt", "()V", nullptr, $STATIC | $NATIVE, $staticMethod(Shutdown, beforeHalt, void)},
		{"exit", "(I)V", nullptr, $STATIC, $staticMethod(Shutdown, exit, void, int32_t)},
		{"halt", "(I)V", nullptr, $STATIC, $staticMethod(Shutdown, halt, void, int32_t)},
		{"halt0", "(I)V", nullptr, $STATIC | $NATIVE, $staticMethod(Shutdown, halt0, void, int32_t)},
		{"runHooks", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Shutdown, runHooks, void)},
		{"shutdown", "()V", nullptr, $STATIC, $staticMethod(Shutdown, shutdown, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Shutdown$Lock", "java.lang.Shutdown", "Lock", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Shutdown",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.Shutdown$Lock"
	};
	$loadClass(Shutdown, name, initialize, &classInfo$$, Shutdown::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Shutdown);
	});
	return class$;
}

$Class* Shutdown::class$ = nullptr;

	} // lang
} // java