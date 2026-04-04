#include <SpecialInterfaceCall/SpecialInterfaceCall$I1.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

void SpecialInterfaceCall$I1::pub_m() {
}

void SpecialInterfaceCall$I1::priv_m() {
}

$Class* SpecialInterfaceCall$I1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"priv_m", "()V", nullptr, $PRIVATE, $method(SpecialInterfaceCall$I1, priv_m, void)},
		{"pub_m", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$I1, pub_m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpecialInterfaceCall.SpecialInterfaceCall$I1", "SpecialInterfaceCall.SpecialInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"SpecialInterfaceCall.SpecialInterfaceCall$I1",
		nullptr,
		nullptr,
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
	$loadClass(SpecialInterfaceCall$I1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecialInterfaceCall$I1);
	});
	return class$;
}

$Class* SpecialInterfaceCall$I1::class$ = nullptr;

} // SpecialInterfaceCall