#include <PrivateInterfaceCall$C2.h>
#include <PrivateInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void PrivateInterfaceCall$C2::init$() {
}

PrivateInterfaceCall$C2::PrivateInterfaceCall$C2() {
}

$Class* PrivateInterfaceCall$C2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PrivateInterfaceCall$C2, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrivateInterfaceCall$C2", "PrivateInterfaceCall", "C2", $STATIC},
		{"PrivateInterfaceCall$I2", "PrivateInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PrivateInterfaceCall$C2",
		"java.lang.Object",
		"PrivateInterfaceCall$I2",
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
	$loadClass(PrivateInterfaceCall$C2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$C2);
	});
	return class$;
}

$Class* PrivateInterfaceCall$C2::class$ = nullptr;