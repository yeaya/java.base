#include <PrivateInterfaceCall$C3.h>
#include <PrivateInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void PrivateInterfaceCall$C3::init$() {
}

PrivateInterfaceCall$C3::PrivateInterfaceCall$C3() {
}

$Class* PrivateInterfaceCall$C3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PrivateInterfaceCall$C3, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrivateInterfaceCall$C3", "PrivateInterfaceCall", "C3", $STATIC},
		{"PrivateInterfaceCall$I3", "PrivateInterfaceCall", "I3", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PrivateInterfaceCall$C3",
		"java.lang.Object",
		"PrivateInterfaceCall$I3",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PrivateInterfaceCall"
	};
	$loadClass(PrivateInterfaceCall$C3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$C3);
	});
	return class$;
}

$Class* PrivateInterfaceCall$C3::class$ = nullptr;