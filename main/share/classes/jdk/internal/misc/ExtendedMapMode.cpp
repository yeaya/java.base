#include <jdk/internal/misc/ExtendedMapMode.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <jcpp.h>

#undef MAP_MODE_CONSTRUCTOR
#undef READ_ONLY_SYNC
#undef READ_WRITE_SYNC
#undef TYPE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;
using $AccessController = ::java::security::AccessController;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace jdk {
	namespace internal {
		namespace misc {

class ExtendedMapMode$$Lambda$lambda$static$0 : public $PrivilegedExceptionAction {
	$class(ExtendedMapMode$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return ExtendedMapMode::lambda$static$0();
	}
};
$Class* ExtendedMapMode$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExtendedMapMode$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ExtendedMapMode$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.misc.ExtendedMapMode$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(ExtendedMapMode$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedMapMode$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* ExtendedMapMode$$Lambda$lambda$static$0::class$ = nullptr;

$MethodHandle* ExtendedMapMode::MAP_MODE_CONSTRUCTOR = nullptr;
$FileChannel$MapMode* ExtendedMapMode::READ_ONLY_SYNC = nullptr;
$FileChannel$MapMode* ExtendedMapMode::READ_WRITE_SYNC = nullptr;

$FileChannel$MapMode* ExtendedMapMode::newMapMode($String* name) {
	$init(ExtendedMapMode);
	try {
		return $cast($FileChannel$MapMode, $nc(ExtendedMapMode::MAP_MODE_CONSTRUCTOR)->invoke($$new($ObjectArray, {name})));
	} catch ($Throwable& e) {
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

void ExtendedMapMode::init$() {
}

$MethodHandles$Lookup* ExtendedMapMode::lambda$static$0() {
	$init(ExtendedMapMode);
	$beforeCallerSensitive();
	$load($FileChannel$MapMode);
	return $MethodHandles::privateLookupIn($FileChannel$MapMode::class$, $($MethodHandles::lookup()));
}

void ExtendedMapMode::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		try {
			$var($PrivilegedExceptionAction, pae, $new(ExtendedMapMode$$Lambda$lambda$static$0));
			$var($MethodHandles$Lookup, lookup, $cast($MethodHandles$Lookup, $AccessController::doPrivileged(pae)));
			$var($MethodType, methodType, $MethodType::methodType($Void::TYPE, $String::class$));
			$load($FileChannel$MapMode);
			$assignStatic(ExtendedMapMode::MAP_MODE_CONSTRUCTOR, $nc(lookup)->findConstructor($FileChannel$MapMode::class$, methodType));
		} catch ($Exception& e) {
			$throwNew($InternalError, e);
		}
	}
	$assignStatic(ExtendedMapMode::READ_ONLY_SYNC, ExtendedMapMode::newMapMode("READ_ONLY_SYNC"_s));
	$assignStatic(ExtendedMapMode::READ_WRITE_SYNC, ExtendedMapMode::newMapMode("READ_WRITE_SYNC"_s));
}

ExtendedMapMode::ExtendedMapMode() {
}

$Class* ExtendedMapMode::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.misc.ExtendedMapMode$$Lambda$lambda$static$0")) {
			return ExtendedMapMode$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"MAP_MODE_CONSTRUCTOR", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(ExtendedMapMode, MAP_MODE_CONSTRUCTOR)},
		{"READ_ONLY_SYNC", "Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedMapMode, READ_ONLY_SYNC)},
		{"READ_WRITE_SYNC", "Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedMapMode, READ_WRITE_SYNC)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ExtendedMapMode, init$, void)},
		{"lambda$static$0", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ExtendedMapMode, lambda$static$0, $MethodHandles$Lookup*), "java.lang.Exception"},
		{"newMapMode", "(Ljava/lang/String;)Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PRIVATE | $STATIC, $staticMethod(ExtendedMapMode, newMapMode, $FileChannel$MapMode*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.misc.ExtendedMapMode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExtendedMapMode, name, initialize, &classInfo$$, ExtendedMapMode::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedMapMode);
	});
	return class$;
}

$Class* ExtendedMapMode::class$ = nullptr;

		} // misc
	} // internal
} // jdk