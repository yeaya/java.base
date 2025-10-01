#include <MetafactoryArgValidationTest$C.h>

#include <MetafactoryArgValidationTest.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TYPE

using $MetafactoryArgValidationTest = ::MetafactoryArgValidationTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$FieldInfo _MetafactoryArgValidationTest$C_FieldInfo_[] = {
	{"lookup", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $staticField(MetafactoryArgValidationTest$C, lookup)},
	{"sv", "LMetafactoryArgValidationTest$C;", nullptr, $PUBLIC | $STATIC, $staticField(MetafactoryArgValidationTest$C, sv)},
	{"iv", "LMetafactoryArgValidationTest$C;", nullptr, $PUBLIC, $field(MetafactoryArgValidationTest$C, iv)},
	{}
};

$MethodInfo _MetafactoryArgValidationTest$C_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetafactoryArgValidationTest$C::*)()>(&MetafactoryArgValidationTest$C::init$))},
	{"getFieldMH", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&MetafactoryArgValidationTest$C::getFieldMH))},
	{"getStaticMH", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&MetafactoryArgValidationTest$C::getStaticMH))},
	{"im", "()V", nullptr, $PUBLIC},
	{"invokeInterfaceMH", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&MetafactoryArgValidationTest$C::invokeInterfaceMH))},
	{"invokeSpecialMH", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&MetafactoryArgValidationTest$C::invokeSpecialMH))},
	{"invokeStaticMH", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&MetafactoryArgValidationTest$C::invokeStaticMH))},
	{"invokeVirtualMH", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&MetafactoryArgValidationTest$C::invokeVirtualMH))},
	{"newInvokeSpecialMH", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&MetafactoryArgValidationTest$C::newInvokeSpecialMH))},
	{"putFieldMH", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&MetafactoryArgValidationTest$C::putFieldMH))},
	{"putStaticMH", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandle*(*)()>(&MetafactoryArgValidationTest$C::putStaticMH))},
	{"run", "()V", nullptr, $PUBLIC},
	{"sm", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&MetafactoryArgValidationTest$C::sm))},
	{}
};

$InnerClassInfo _MetafactoryArgValidationTest$C_InnerClassesInfo_[] = {
	{"MetafactoryArgValidationTest$C", "MetafactoryArgValidationTest", "C", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetafactoryArgValidationTest$C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetafactoryArgValidationTest$C",
	"java.lang.Object",
	"java.lang.Runnable",
	_MetafactoryArgValidationTest$C_FieldInfo_,
	_MetafactoryArgValidationTest$C_MethodInfo_,
	nullptr,
	nullptr,
	_MetafactoryArgValidationTest$C_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MetafactoryArgValidationTest"
};

$Object* allocate$MetafactoryArgValidationTest$C($Class* clazz) {
	return $of($alloc(MetafactoryArgValidationTest$C));
}

$MethodHandles$Lookup* MetafactoryArgValidationTest$C::lookup = nullptr;
MetafactoryArgValidationTest$C* MetafactoryArgValidationTest$C::sv = nullptr;

$MethodHandle* MetafactoryArgValidationTest$C::getFieldMH() {
	$init(MetafactoryArgValidationTest$C);
	try {
		return $nc(MetafactoryArgValidationTest$C::lookup)->findGetter(MetafactoryArgValidationTest$C::class$, "iv"_s, MetafactoryArgValidationTest$C::class$);
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$MethodHandle* MetafactoryArgValidationTest$C::getStaticMH() {
	$init(MetafactoryArgValidationTest$C);
	try {
		return $nc(MetafactoryArgValidationTest$C::lookup)->findStaticGetter(MetafactoryArgValidationTest$C::class$, "sv"_s, MetafactoryArgValidationTest$C::class$);
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$MethodHandle* MetafactoryArgValidationTest$C::putFieldMH() {
	$init(MetafactoryArgValidationTest$C);
	try {
		return $nc(MetafactoryArgValidationTest$C::lookup)->findSetter(MetafactoryArgValidationTest$C::class$, "iv"_s, MetafactoryArgValidationTest$C::class$);
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$MethodHandle* MetafactoryArgValidationTest$C::putStaticMH() {
	$init(MetafactoryArgValidationTest$C);
	try {
		return $nc(MetafactoryArgValidationTest$C::lookup)->findStaticSetter(MetafactoryArgValidationTest$C::class$, "sv"_s, MetafactoryArgValidationTest$C::class$);
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$MethodHandle* MetafactoryArgValidationTest$C::invokeVirtualMH() {
	$init(MetafactoryArgValidationTest$C);
	try {
		$init($Void);
		return $nc(MetafactoryArgValidationTest$C::lookup)->findVirtual(MetafactoryArgValidationTest$C::class$, "im"_s, $($MetafactoryArgValidationTest::mt($Void::TYPE, $$new($ClassArray, 0))));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$MethodHandle* MetafactoryArgValidationTest$C::invokeStaticMH() {
	$init(MetafactoryArgValidationTest$C);
	try {
		$init($Void);
		return $nc(MetafactoryArgValidationTest$C::lookup)->findStatic(MetafactoryArgValidationTest$C::class$, "sm"_s, $($MetafactoryArgValidationTest::mt($Void::TYPE, $$new($ClassArray, 0))));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$MethodHandle* MetafactoryArgValidationTest$C::invokeSpecialMH() {
	$init(MetafactoryArgValidationTest$C);
	try {
		$load($Object);
		$load($String);
		return $nc(MetafactoryArgValidationTest$C::lookup)->findSpecial($Object::class$, "toString"_s, $($MetafactoryArgValidationTest::mt($String::class$, $$new($ClassArray, 0))), MetafactoryArgValidationTest$C::class$);
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$MethodHandle* MetafactoryArgValidationTest$C::newInvokeSpecialMH() {
	$init(MetafactoryArgValidationTest$C);
	try {
		$init($Void);
		return $nc(MetafactoryArgValidationTest$C::lookup)->findConstructor(MetafactoryArgValidationTest$C::class$, $($MetafactoryArgValidationTest::mt($Void::TYPE, $$new($ClassArray, 0))));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$MethodHandle* MetafactoryArgValidationTest$C::invokeInterfaceMH() {
	$init(MetafactoryArgValidationTest$C);
	try {
		$load($Runnable);
		$init($Void);
		return $nc(MetafactoryArgValidationTest$C::lookup)->findVirtual($Runnable::class$, "run"_s, $($MetafactoryArgValidationTest::mt($Void::TYPE, $$new($ClassArray, 0))));
	} catch ($ReflectiveOperationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void MetafactoryArgValidationTest$C::sm() {
	$init(MetafactoryArgValidationTest$C);
}

void MetafactoryArgValidationTest$C::im() {
}

void MetafactoryArgValidationTest$C::init$() {
}

void MetafactoryArgValidationTest$C::run() {
}

void clinit$MetafactoryArgValidationTest$C($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(MetafactoryArgValidationTest$C::lookup, $MethodHandles::lookup());
}

MetafactoryArgValidationTest$C::MetafactoryArgValidationTest$C() {
}

$Class* MetafactoryArgValidationTest$C::load$($String* name, bool initialize) {
	$loadClass(MetafactoryArgValidationTest$C, name, initialize, &_MetafactoryArgValidationTest$C_ClassInfo_, clinit$MetafactoryArgValidationTest$C, allocate$MetafactoryArgValidationTest$C);
	return class$;
}

$Class* MetafactoryArgValidationTest$C::class$ = nullptr;