#include <SpecialInterfaceCall/SpecialInterfaceCall$C2.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

void SpecialInterfaceCall$C2::init$() {
}

SpecialInterfaceCall$C2::SpecialInterfaceCall$C2() {
}

$Class* SpecialInterfaceCall$C2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SpecialInterfaceCall$C2, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpecialInterfaceCall.SpecialInterfaceCall$C2", "SpecialInterfaceCall.SpecialInterfaceCall", "C2", $STATIC},
		{"SpecialInterfaceCall.SpecialInterfaceCall$I2", "SpecialInterfaceCall.SpecialInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SpecialInterfaceCall.SpecialInterfaceCall$C2",
		"java.lang.Object",
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
	$loadClass(SpecialInterfaceCall$C2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecialInterfaceCall$C2);
	});
	return class$;
}

$Class* SpecialInterfaceCall$C2::class$ = nullptr;

} // SpecialInterfaceCall