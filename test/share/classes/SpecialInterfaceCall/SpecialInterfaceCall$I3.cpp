#include <SpecialInterfaceCall/SpecialInterfaceCall$I3.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <java/lang/invoke/MethodHandle.h>
#include <jcpp.h>

using $SpecialInterfaceCall = ::SpecialInterfaceCall::SpecialInterfaceCall;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

void SpecialInterfaceCall$I3::invokeSpecialMH(SpecialInterfaceCall$I3* i) {
	$init(SpecialInterfaceCall$I3);
	$init($SpecialInterfaceCall);
	$nc($SpecialInterfaceCall::mh_I2_pub_m_from_I3)->invokeExact($$new($ObjectArray, {i}));
}

$Class* SpecialInterfaceCall$I3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"invokeSpecialMH", "(LSpecialInterfaceCall/SpecialInterfaceCall$I3;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpecialInterfaceCall$I3, invokeSpecialMH, void, SpecialInterfaceCall$I3*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpecialInterfaceCall.SpecialInterfaceCall$I3", "SpecialInterfaceCall.SpecialInterfaceCall", "I3", $STATIC | $INTERFACE | $ABSTRACT},
		{"SpecialInterfaceCall.SpecialInterfaceCall$I2", "SpecialInterfaceCall.SpecialInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"SpecialInterfaceCall.SpecialInterfaceCall$I3",
		nullptr,
		"SpecialInterfaceCall.SpecialInterfaceCall$I2",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SpecialInterfaceCall.SpecialInterfaceCall"
	};
	$loadClass(SpecialInterfaceCall$I3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecialInterfaceCall$I3);
	});
	return class$;
}

$Class* SpecialInterfaceCall$I3::class$ = nullptr;

} // SpecialInterfaceCall