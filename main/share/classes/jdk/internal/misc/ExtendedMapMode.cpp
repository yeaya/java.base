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
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
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
		 return $of(ExtendedMapMode::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ExtendedMapMode$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ExtendedMapMode$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedMapMode$$Lambda$lambda$static$0::*)()>(&ExtendedMapMode$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ExtendedMapMode$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.misc.ExtendedMapMode$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	methodInfos
};
$Class* ExtendedMapMode$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(ExtendedMapMode$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ExtendedMapMode$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _ExtendedMapMode_FieldInfo_[] = {
	{"MAP_MODE_CONSTRUCTOR", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(ExtendedMapMode, MAP_MODE_CONSTRUCTOR)},
	{"READ_ONLY_SYNC", "Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedMapMode, READ_ONLY_SYNC)},
	{"READ_WRITE_SYNC", "Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExtendedMapMode, READ_WRITE_SYNC)},
	{}
};

$MethodInfo _ExtendedMapMode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedMapMode::*)()>(&ExtendedMapMode::init$))},
	{"lambda$static$0", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&ExtendedMapMode::lambda$static$0)), "java.lang.Exception"},
	{"newMapMode", "(Ljava/lang/String;)Ljava/nio/channels/FileChannel$MapMode;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FileChannel$MapMode*(*)($String*)>(&ExtendedMapMode::newMapMode))},
	{}
};

$ClassInfo _ExtendedMapMode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.misc.ExtendedMapMode",
	"java.lang.Object",
	nullptr,
	_ExtendedMapMode_FieldInfo_,
	_ExtendedMapMode_MethodInfo_
};

$Object* allocate$ExtendedMapMode($Class* clazz) {
	return $of($alloc(ExtendedMapMode));
}

$MethodHandle* ExtendedMapMode::MAP_MODE_CONSTRUCTOR = nullptr;
$FileChannel$MapMode* ExtendedMapMode::READ_ONLY_SYNC = nullptr;
$FileChannel$MapMode* ExtendedMapMode::READ_WRITE_SYNC = nullptr;

$FileChannel$MapMode* ExtendedMapMode::newMapMode($String* name) {
	$init(ExtendedMapMode);
	try {
		return $cast($FileChannel$MapMode, $nc(ExtendedMapMode::MAP_MODE_CONSTRUCTOR)->invoke($$new($ObjectArray, {$of(name)})));
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

void clinit$ExtendedMapMode($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		try {
			$var($PrivilegedExceptionAction, pae, static_cast<$PrivilegedExceptionAction*>($new(ExtendedMapMode$$Lambda$lambda$static$0)));
			$var($MethodHandles$Lookup, lookup, $cast($MethodHandles$Lookup, $AccessController::doPrivileged(pae)));
			$init($Void);
			$var($MethodType, methodType, $MethodType::methodType($Void::TYPE, $String::class$));
			$load($FileChannel$MapMode);
			$assignStatic(ExtendedMapMode::MAP_MODE_CONSTRUCTOR, $nc(lookup)->findConstructor($FileChannel$MapMode::class$, methodType));
		} catch ($Exception& e) {
			$throwNew($InternalError, static_cast<$Throwable*>(e));
		}
	}
	$assignStatic(ExtendedMapMode::READ_ONLY_SYNC, ExtendedMapMode::newMapMode("READ_ONLY_SYNC"_s));
	$assignStatic(ExtendedMapMode::READ_WRITE_SYNC, ExtendedMapMode::newMapMode("READ_WRITE_SYNC"_s));
}

ExtendedMapMode::ExtendedMapMode() {
}

$Class* ExtendedMapMode::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ExtendedMapMode$$Lambda$lambda$static$0::classInfo$.name)) {
			return ExtendedMapMode$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(ExtendedMapMode, name, initialize, &_ExtendedMapMode_ClassInfo_, clinit$ExtendedMapMode, allocate$ExtendedMapMode);
	return class$;
}

$Class* ExtendedMapMode::class$ = nullptr;

		} // misc
	} // internal
} // jdk