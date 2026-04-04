#include <SpecialInterfaceCall/SpecialInterfaceCall$I2.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <java/lang/invoke/MethodHandle.h>
#include <jcpp.h>

using $SpecialInterfaceCall = ::SpecialInterfaceCall::SpecialInterfaceCall;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

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
	$nc($SpecialInterfaceCall::mh_I2_priv_m_from_I2)->invokeExact($$new($ObjectArray, {i}));
}

void SpecialInterfaceCall$I2::invokeSpecialObjectMH(SpecialInterfaceCall$I2* i) {
	$init(SpecialInterfaceCall$I2);
	$useLocalObjectStack();
	$init($SpecialInterfaceCall);
	$var($String, s, $cast($String, $nc($SpecialInterfaceCall::mh_I1_toString_from_I2)->invokeExact($$new($ObjectArray, {i}))));
}

void SpecialInterfaceCall$I2::invokeSpecialObjectFinalMH(SpecialInterfaceCall$I2* i) {
	$init(SpecialInterfaceCall$I2);
	$init($SpecialInterfaceCall);
	$Class* c = $cast($Class, $nc($SpecialInterfaceCall::mh_I1_getClass_from_I2)->invokeExact($$new($ObjectArray, {i})));
}

$Class* SpecialInterfaceCall$I2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"invokeDirect", "(LSpecialInterfaceCall/SpecialInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpecialInterfaceCall$I2, invokeDirect, void, SpecialInterfaceCall$I2*)},
		{"invokeSpecialMH", "(LSpecialInterfaceCall/SpecialInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpecialInterfaceCall$I2, invokeSpecialMH, void, SpecialInterfaceCall$I2*), "java.lang.Throwable"},
		{"invokeSpecialObjectFinalMH", "(LSpecialInterfaceCall/SpecialInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpecialInterfaceCall$I2, invokeSpecialObjectFinalMH, void, SpecialInterfaceCall$I2*), "java.lang.Throwable"},
		{"invokeSpecialObjectMH", "(LSpecialInterfaceCall/SpecialInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpecialInterfaceCall$I2, invokeSpecialObjectMH, void, SpecialInterfaceCall$I2*), "java.lang.Throwable"},
		{"priv_m", "()V", nullptr, $PRIVATE, $method(SpecialInterfaceCall$I2, priv_m, void)},
		{"pub_m", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$I2, pub_m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpecialInterfaceCall.SpecialInterfaceCall$I2", "SpecialInterfaceCall.SpecialInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
		{"SpecialInterfaceCall.SpecialInterfaceCall$I1", "SpecialInterfaceCall.SpecialInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"SpecialInterfaceCall.SpecialInterfaceCall$I2",
		nullptr,
		"SpecialInterfaceCall.SpecialInterfaceCall$I1",
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
	$loadClass(SpecialInterfaceCall$I2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecialInterfaceCall$I2);
	});
	return class$;
}

$Class* SpecialInterfaceCall$I2::class$ = nullptr;

} // SpecialInterfaceCall