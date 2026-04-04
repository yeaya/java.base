#include <SpecialInterfaceCall/SpecialInterfaceCall$E.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

void SpecialInterfaceCall$E::init$() {
}

void SpecialInterfaceCall$E::pub_m() {
}

void SpecialInterfaceCall$E::priv_m() {
}

SpecialInterfaceCall$E::SpecialInterfaceCall$E() {
}

$Class* SpecialInterfaceCall$E::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SpecialInterfaceCall$E, init$, void)},
		{"priv_m", "()V", nullptr, $PRIVATE, $method(SpecialInterfaceCall$E, priv_m, void)},
		{"pub_m", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$E, pub_m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpecialInterfaceCall.SpecialInterfaceCall$E", "SpecialInterfaceCall.SpecialInterfaceCall", "E", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SpecialInterfaceCall.SpecialInterfaceCall$E",
		"java.lang.Object",
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
	$loadClass(SpecialInterfaceCall$E, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecialInterfaceCall$E);
	});
	return class$;
}

$Class* SpecialInterfaceCall$E::class$ = nullptr;

} // SpecialInterfaceCall