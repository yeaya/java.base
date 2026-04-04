#include <SpecialInterfaceCall/SpecialInterfaceCall$C4.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

void SpecialInterfaceCall$C4::init$() {
}

SpecialInterfaceCall$C4::SpecialInterfaceCall$C4() {
}

$Class* SpecialInterfaceCall$C4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SpecialInterfaceCall$C4, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpecialInterfaceCall.SpecialInterfaceCall$C4", "SpecialInterfaceCall.SpecialInterfaceCall", "C4", $STATIC},
		{"SpecialInterfaceCall.SpecialInterfaceCall$I4", "SpecialInterfaceCall.SpecialInterfaceCall", "I4", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SpecialInterfaceCall.SpecialInterfaceCall$C4",
		"java.lang.Object",
		"SpecialInterfaceCall.SpecialInterfaceCall$I4",
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
	$loadClass(SpecialInterfaceCall$C4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecialInterfaceCall$C4);
	});
	return class$;
}

$Class* SpecialInterfaceCall$C4::class$ = nullptr;

} // SpecialInterfaceCall