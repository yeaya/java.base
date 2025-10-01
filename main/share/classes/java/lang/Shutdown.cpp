#include <java/lang/Shutdown.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Shutdown$Lock.h>
#include <java/lang/String.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Shutdown$Lock = ::java::lang::Shutdown$Lock;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $VM = ::jdk::internal::misc::VM;

namespace java {
	namespace lang {

$FieldInfo _Shutdown_FieldInfo_[] = {
	{"MAX_SYSTEM_HOOKS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Shutdown, MAX_SYSTEM_HOOKS)},
	{"hooks", "[Ljava/lang/Runnable;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Shutdown, hooks)},
	{"currentRunningHook", "I", nullptr, $PRIVATE | $STATIC, $staticField(Shutdown, currentRunningHook)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(Shutdown, lock)},
	{"haltLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(Shutdown, haltLock)},
	{}
};

$MethodInfo _Shutdown_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Shutdown::*)()>(&Shutdown::init$))},
	{"add", "(IZLjava/lang/Runnable;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,bool,$Runnable*)>(&Shutdown::add))},
	{"beforeHalt", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Shutdown::beforeHalt))},
	{"exit", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&Shutdown::exit))},
	{"halt", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&Shutdown::halt))},
	{"halt0", "(I)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t)>(&Shutdown::halt0))},
	{"runHooks", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Shutdown::runHooks))},
	{"shutdown", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Shutdown::shutdown))},
	{}
};

#define _METHOD_INDEX_beforeHalt 2
#define _METHOD_INDEX_halt0 5

$InnerClassInfo _Shutdown_InnerClassesInfo_[] = {
	{"java.lang.Shutdown$Lock", "java.lang.Shutdown", "Lock", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Shutdown_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Shutdown",
	"java.lang.Object",
	nullptr,
	_Shutdown_FieldInfo_,
	_Shutdown_MethodInfo_,
	nullptr,
	nullptr,
	_Shutdown_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.Shutdown$Lock"
};

$Object* allocate$Shutdown($Class* clazz) {
	return $of($alloc(Shutdown));
}

$RunnableArray* Shutdown::hooks = nullptr;
int32_t Shutdown::currentRunningHook = 0;
$Object* Shutdown::lock = nullptr;
$Object* Shutdown::haltLock = nullptr;

void Shutdown::init$() {
}

void Shutdown::add(int32_t slot, bool registerShutdownInProgress, $Runnable* hook) {
	$init(Shutdown);
	if (slot < 0 || slot >= Shutdown::MAX_SYSTEM_HOOKS) {
		$throwNew($IllegalArgumentException, $$str({"Invalid slot: "_s, $$str(slot)}));
	}
	$synchronized(Shutdown::lock) {
		if ($nc(Shutdown::hooks)->get(slot) != nullptr) {
			$throwNew($InternalError, $$str({"Shutdown hook at slot "_s, $$str(slot), " already registered"_s}));
		}
		if (!registerShutdownInProgress) {
			if (Shutdown::currentRunningHook >= 0) {
				$throwNew($IllegalStateException, "Shutdown in progress"_s);
			}
		} else {
			if ($VM::isShutdown() || slot <= Shutdown::currentRunningHook) {
				$throwNew($IllegalStateException, "Shutdown in progress"_s);
			}
		}
		$nc(Shutdown::hooks)->set(slot, hook);
	}
}

void Shutdown::runHooks() {
	$init(Shutdown);
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
				$assign(hook, $nc(Shutdown::hooks)->get(i));
			}
			if (hook != nullptr) {
				hook->run();
			}
		} catch ($Throwable&) {
			$var($Throwable, t, $catch());
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
	$prepareNativeStatic(Shutdown, beforeHalt, void);
	$invokeNativeStatic(Shutdown, beforeHalt);
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
	$prepareNativeStatic(Shutdown, halt0, void, int32_t status);
	$invokeNativeStatic(Shutdown, halt0, status);
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

void clinit$Shutdown($Class* class$) {
	$assignStatic(Shutdown::hooks, $new($RunnableArray, Shutdown::MAX_SYSTEM_HOOKS));
	Shutdown::currentRunningHook = -1;
	$assignStatic(Shutdown::lock, $new($Shutdown$Lock));
	$assignStatic(Shutdown::haltLock, $new($Shutdown$Lock));
}

Shutdown::Shutdown() {
}

$Class* Shutdown::load$($String* name, bool initialize) {
	$loadClass(Shutdown, name, initialize, &_Shutdown_ClassInfo_, clinit$Shutdown, allocate$Shutdown);
	return class$;
}

$Class* Shutdown::class$ = nullptr;

	} // lang
} // java