#include <SpecialInterfaceCall/SpecialInterfaceCall$I2.h>

#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SpecialInterfaceCall = ::SpecialInterfaceCall::SpecialInterfaceCall;
using $SpecialInterfaceCall$I1 = ::SpecialInterfaceCall::SpecialInterfaceCall$I1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace SpecialInterfaceCall {

$MethodInfo _SpecialInterfaceCall$I2_MethodInfo_[] = {
	{"invokeDirect", "(LSpecialInterfaceCall/SpecialInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(SpecialInterfaceCall$I2*)>(&SpecialInterfaceCall$I2::invokeDirect))},
	{"invokeSpecialMH", "(LSpecialInterfaceCall/SpecialInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(SpecialInterfaceCall$I2*)>(&SpecialInterfaceCall$I2::invokeSpecialMH)), "java.lang.Throwable"},
	{"invokeSpecialObjectFinalMH", "(LSpecialInterfaceCall/SpecialInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(SpecialInterfaceCall$I2*)>(&SpecialInterfaceCall$I2::invokeSpecialObjectFinalMH)), "java.lang.Throwable"},
	{"invokeSpecialObjectMH", "(LSpecialInterfaceCall/SpecialInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(SpecialInterfaceCall$I2*)>(&SpecialInterfaceCall$I2::invokeSpecialObjectMH)), "java.lang.Throwable"},
	{"priv_m", "()V", nullptr, $PRIVATE, $method(static_cast<void(SpecialInterfaceCall$I2::*)()>(&SpecialInterfaceCall$I2::priv_m))},
	{"pub_m", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SpecialInterfaceCall$I2_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$I2", "SpecialInterfaceCall.SpecialInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I1", "SpecialInterfaceCall.SpecialInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpecialInterfaceCall$I2_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"SpecialInterfaceCall.SpecialInterfaceCall$I2",
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall$I1",
	nullptr,
	_SpecialInterfaceCall$I2_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$I2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall"
};

$Object* allocate$SpecialInterfaceCall$I2($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall$I2));
}

void SpecialInterfaceCall$I2::pub_m() {
}

void SpecialInterfaceCall$I2::priv_m() {
}

void SpecialInterfaceCall$I2::invokeDirect(SpecialInterfaceCall$I2* i) {
	$init(SpecialInterfaceCall$I2);
	$nc(i)->priv_m();
}

void SpecialInterfaceCall$I2::invokeSpecialMH(SpecialInterfaceCall$I2* i) {
	$init(SpecialInterfaceCall$I2);
	$init($SpecialInterfaceCall);
	$nc($SpecialInterfaceCall::mh_I2_priv_m_from_I2)->invokeExact($$new($ObjectArray, {$of(i)}));
}

void SpecialInterfaceCall$I2::invokeSpecialObjectMH(SpecialInterfaceCall$I2* i) {
	$init(SpecialInterfaceCall$I2);
	$useLocalCurrentObjectStackCache();
	$init($SpecialInterfaceCall);
	$var($String, s, $cast($String, $nc($SpecialInterfaceCall::mh_I1_toString_from_I2)->invokeExact($$new($ObjectArray, {$of(i)}))));
}

void SpecialInterfaceCall$I2::invokeSpecialObjectFinalMH(SpecialInterfaceCall$I2* i) {
	$init(SpecialInterfaceCall$I2);
	$init($SpecialInterfaceCall);
	$Class* c = $cast($Class, $nc($SpecialInterfaceCall::mh_I1_getClass_from_I2)->invokeExact($$new($ObjectArray, {$of(i)})));
}

$Class* SpecialInterfaceCall$I2::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$I2, name, initialize, &_SpecialInterfaceCall$I2_ClassInfo_, allocate$SpecialInterfaceCall$I2);
	return class$;
}

$Class* SpecialInterfaceCall$I2::class$ = nullptr;

} // SpecialInterfaceCall