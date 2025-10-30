#include <SpecialInterfaceCall/SpecialInterfaceCall$I3.h>

#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <java/lang/invoke/MethodHandle.h>
#include <jcpp.h>

using $SpecialInterfaceCall = ::SpecialInterfaceCall::SpecialInterfaceCall;
using $SpecialInterfaceCall$I2 = ::SpecialInterfaceCall::SpecialInterfaceCall$I2;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace SpecialInterfaceCall {

$MethodInfo _SpecialInterfaceCall$I3_MethodInfo_[] = {
	{"invokeSpecialMH", "(LSpecialInterfaceCall/SpecialInterfaceCall$I3;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(SpecialInterfaceCall$I3*)>(&SpecialInterfaceCall$I3::invokeSpecialMH)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _SpecialInterfaceCall$I3_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$I3", "SpecialInterfaceCall.SpecialInterfaceCall", "I3", $STATIC | $INTERFACE | $ABSTRACT},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I2", "SpecialInterfaceCall.SpecialInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpecialInterfaceCall$I3_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"SpecialInterfaceCall.SpecialInterfaceCall$I3",
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall$I2",
	nullptr,
	_SpecialInterfaceCall$I3_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$I3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall"
};

$Object* allocate$SpecialInterfaceCall$I3($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall$I3));
}

void SpecialInterfaceCall$I3::invokeSpecialMH(SpecialInterfaceCall$I3* i) {
	$init(SpecialInterfaceCall$I3);
	$init($SpecialInterfaceCall);
	$nc($SpecialInterfaceCall::mh_I2_pub_m_from_I3)->invokeExact($$new($ObjectArray, {$of(i)}));
}

$Class* SpecialInterfaceCall$I3::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$I3, name, initialize, &_SpecialInterfaceCall$I3_ClassInfo_, allocate$SpecialInterfaceCall$I3);
	return class$;
}

$Class* SpecialInterfaceCall$I3::class$ = nullptr;

} // SpecialInterfaceCall