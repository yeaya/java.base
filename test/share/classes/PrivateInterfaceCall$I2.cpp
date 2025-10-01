#include <PrivateInterfaceCall$I2.h>

#include <PrivateInterfaceCall.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TYPE

using $PrivateInterfaceCall = ::PrivateInterfaceCall;
using $PrivateInterfaceCall$I1 = ::PrivateInterfaceCall$I1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$MethodInfo _PrivateInterfaceCall$I2_MethodInfo_[] = {
	{"init", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall$I2::init)), "java.lang.Throwable"},
	{"invokeDirect", "(LPrivateInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(PrivateInterfaceCall$I2*)>(&PrivateInterfaceCall$I2::invokeDirect))},
	{"invokeInterfaceMH", "(LPrivateInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(PrivateInterfaceCall$I2*)>(&PrivateInterfaceCall$I2::invokeInterfaceMH)), "java.lang.Throwable"},
	{"invokeInterfaceObjectFinalMH", "(LPrivateInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(PrivateInterfaceCall$I2*)>(&PrivateInterfaceCall$I2::invokeInterfaceObjectFinalMH)), "java.lang.Throwable"},
	{"invokeInterfaceObjectMH", "(LPrivateInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(PrivateInterfaceCall$I2*)>(&PrivateInterfaceCall$I2::invokeInterfaceObjectMH)), "java.lang.Throwable"},
	{"priv_m", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrivateInterfaceCall$I2::*)()>(&PrivateInterfaceCall$I2::priv_m))},
	{}
};

$InnerClassInfo _PrivateInterfaceCall$I2_InnerClassesInfo_[] = {
	{"PrivateInterfaceCall$I2", "PrivateInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
	{"PrivateInterfaceCall$I1", "PrivateInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrivateInterfaceCall$I2_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"PrivateInterfaceCall$I2",
	nullptr,
	"PrivateInterfaceCall$I1",
	nullptr,
	_PrivateInterfaceCall$I2_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$I2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrivateInterfaceCall"
};

$Object* allocate$PrivateInterfaceCall$I2($Class* clazz) {
	return $of($alloc(PrivateInterfaceCall$I2));
}

void PrivateInterfaceCall$I2::priv_m() {
}

void PrivateInterfaceCall$I2::invokeDirect(PrivateInterfaceCall$I2* i) {
	$init(PrivateInterfaceCall$I2);
	$nc(i)->priv_m();
}

void PrivateInterfaceCall$I2::invokeInterfaceMH(PrivateInterfaceCall$I2* i) {
	$init(PrivateInterfaceCall$I2);
	$init($PrivateInterfaceCall);
	$nc($PrivateInterfaceCall::mh_I2_priv_m_from_I2)->invokeExact($$new($ObjectArray, {$of(i)}));
}

void PrivateInterfaceCall$I2::invokeInterfaceObjectMH(PrivateInterfaceCall$I2* i) {
	$init(PrivateInterfaceCall$I2);
	$init($PrivateInterfaceCall);
	$var($String, s, $cast($String, $nc($PrivateInterfaceCall::mh_I2_toString_from_I2)->invokeExact($$new($ObjectArray, {$of(i)}))));
}

void PrivateInterfaceCall$I2::invokeInterfaceObjectFinalMH(PrivateInterfaceCall$I2* i) {
	$init(PrivateInterfaceCall$I2);
	$init($PrivateInterfaceCall);
	$Class* c = $cast($Class, $nc($PrivateInterfaceCall::mh_I2_getClass_from_I2)->invokeExact($$new($ObjectArray, {$of(i)})));
}

void PrivateInterfaceCall$I2::init() {
	$init(PrivateInterfaceCall$I2);
	$beforeCallerSensitive();
	$init($Void);
	$var($MethodType, mt, $MethodType::methodType($Void::TYPE));
	$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
	$init($PrivateInterfaceCall);
	$assignStatic($PrivateInterfaceCall::mh_I2_priv_m_from_I2, $nc(lookup)->findVirtual(PrivateInterfaceCall$I2::class$, "priv_m"_s, mt));
	$load($String);
	$assign(mt, $MethodType::methodType($String::class$));
	$assignStatic($PrivateInterfaceCall::mh_I2_toString_from_I2, lookup->findVirtual(PrivateInterfaceCall$I2::class$, "toString"_s, mt));
	$load($Class);
	$assign(mt, $MethodType::methodType($Class::class$));
	$assignStatic($PrivateInterfaceCall::mh_I2_getClass_from_I2, lookup->findVirtual(PrivateInterfaceCall$I2::class$, "getClass"_s, mt));
}

$Class* PrivateInterfaceCall$I2::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$I2, name, initialize, &_PrivateInterfaceCall$I2_ClassInfo_, allocate$PrivateInterfaceCall$I2);
	return class$;
}

$Class* PrivateInterfaceCall$I2::class$ = nullptr;