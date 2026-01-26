#include <PrivateInterfaceCall$I2.h>

#include <PrivateInterfaceCall.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef TYPE

using $PrivateInterfaceCall = ::PrivateInterfaceCall;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$MethodInfo _PrivateInterfaceCall$I2_MethodInfo_[] = {
	{"init", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(PrivateInterfaceCall$I2, init, void), "java.lang.Throwable"},
	{"invokeDirect", "(LPrivateInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PrivateInterfaceCall$I2, invokeDirect, void, PrivateInterfaceCall$I2*)},
	{"invokeInterfaceMH", "(LPrivateInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PrivateInterfaceCall$I2, invokeInterfaceMH, void, PrivateInterfaceCall$I2*), "java.lang.Throwable"},
	{"invokeInterfaceObjectFinalMH", "(LPrivateInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PrivateInterfaceCall$I2, invokeInterfaceObjectFinalMH, void, PrivateInterfaceCall$I2*), "java.lang.Throwable"},
	{"invokeInterfaceObjectMH", "(LPrivateInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PrivateInterfaceCall$I2, invokeInterfaceObjectMH, void, PrivateInterfaceCall$I2*), "java.lang.Throwable"},
	{"priv_m", "()V", nullptr, $PRIVATE, $method(PrivateInterfaceCall$I2, priv_m, void)},
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($Void);
	$var($MethodType, mt, $MethodType::methodType($Void::TYPE));
	$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
	$init($PrivateInterfaceCall);
	$assignStatic($PrivateInterfaceCall::mh_I2_priv_m_from_I2, $nc(lookup)->findVirtual(PrivateInterfaceCall$I2::class$, "priv_m"_s, mt));
	$assign(mt, $MethodType::methodType($String::class$));
	$assignStatic($PrivateInterfaceCall::mh_I2_toString_from_I2, lookup->findVirtual(PrivateInterfaceCall$I2::class$, "toString"_s, mt));
	$assign(mt, $MethodType::methodType($Class::class$));
	$assignStatic($PrivateInterfaceCall::mh_I2_getClass_from_I2, lookup->findVirtual(PrivateInterfaceCall$I2::class$, "getClass"_s, mt));
}

$Class* PrivateInterfaceCall$I2::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$I2, name, initialize, &_PrivateInterfaceCall$I2_ClassInfo_, allocate$PrivateInterfaceCall$I2);
	return class$;
}

$Class* PrivateInterfaceCall$I2::class$ = nullptr;