#include <SpecialInterfaceCall/SpecialInterfaceCall$C3.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

void SpecialInterfaceCall$C3::init$() {
}

SpecialInterfaceCall$C3::SpecialInterfaceCall$C3() {
}

$Class* SpecialInterfaceCall$C3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SpecialInterfaceCall$C3, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpecialInterfaceCall.SpecialInterfaceCall$C3", "SpecialInterfaceCall.SpecialInterfaceCall", "C3", $STATIC},
		{"SpecialInterfaceCall.SpecialInterfaceCall$I3", "SpecialInterfaceCall.SpecialInterfaceCall", "I3", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SpecialInterfaceCall.SpecialInterfaceCall$C3",
		"java.lang.Object",
		"SpecialInterfaceCall.SpecialInterfaceCall$I3",
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
	$loadClass(SpecialInterfaceCall$C3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecialInterfaceCall$C3);
	});
	return class$;
}

$Class* SpecialInterfaceCall$C3::class$ = nullptr;

} // SpecialInterfaceCall