#include <PrivateInterfaceCall$D1.h>
#include <PrivateInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void PrivateInterfaceCall$D1::init$() {
}

PrivateInterfaceCall$D1::PrivateInterfaceCall$D1() {
}

$Class* PrivateInterfaceCall$D1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PrivateInterfaceCall$D1, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrivateInterfaceCall$D1", "PrivateInterfaceCall", "D1", $STATIC},
		{"PrivateInterfaceCall$I1", "PrivateInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PrivateInterfaceCall$D1",
		"java.lang.Object",
		"PrivateInterfaceCall$I1",
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
	$loadClass(PrivateInterfaceCall$D1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$D1);
	});
	return class$;
}

$Class* PrivateInterfaceCall$D1::class$ = nullptr;