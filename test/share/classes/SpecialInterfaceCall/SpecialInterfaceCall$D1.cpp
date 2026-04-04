#include <SpecialInterfaceCall/SpecialInterfaceCall$D1.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

void SpecialInterfaceCall$D1::init$() {
}

SpecialInterfaceCall$D1::SpecialInterfaceCall$D1() {
}

$Class* SpecialInterfaceCall$D1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SpecialInterfaceCall$D1, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpecialInterfaceCall.SpecialInterfaceCall$D1", "SpecialInterfaceCall.SpecialInterfaceCall", "D1", $STATIC},
		{"SpecialInterfaceCall.SpecialInterfaceCall$I1", "SpecialInterfaceCall.SpecialInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SpecialInterfaceCall.SpecialInterfaceCall$D1",
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
	$loadClass(SpecialInterfaceCall$D1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecialInterfaceCall$D1);
	});
	return class$;
}

$Class* SpecialInterfaceCall$D1::class$ = nullptr;

} // SpecialInterfaceCall