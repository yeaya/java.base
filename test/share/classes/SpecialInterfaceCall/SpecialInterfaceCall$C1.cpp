#include <SpecialInterfaceCall/SpecialInterfaceCall$C1.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

void SpecialInterfaceCall$C1::init$() {
}

SpecialInterfaceCall$C1::SpecialInterfaceCall$C1() {
}

$Class* SpecialInterfaceCall$C1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SpecialInterfaceCall$C1, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpecialInterfaceCall.SpecialInterfaceCall$C1", "SpecialInterfaceCall.SpecialInterfaceCall", "C1", $STATIC},
		{"SpecialInterfaceCall.SpecialInterfaceCall$I1", "SpecialInterfaceCall.SpecialInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SpecialInterfaceCall.SpecialInterfaceCall$C1",
		"java.lang.Object",
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
	$loadClass(SpecialInterfaceCall$C1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecialInterfaceCall$C1);
	});
	return class$;
}

$Class* SpecialInterfaceCall$C1::class$ = nullptr;

} // SpecialInterfaceCall