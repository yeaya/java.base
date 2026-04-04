#include <PrivateInterfaceCall$C4.h>
#include <PrivateInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void PrivateInterfaceCall$C4::init$() {
}

PrivateInterfaceCall$C4::PrivateInterfaceCall$C4() {
}

$Class* PrivateInterfaceCall$C4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PrivateInterfaceCall$C4, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrivateInterfaceCall$C4", "PrivateInterfaceCall", "C4", $STATIC},
		{"PrivateInterfaceCall$I4", "PrivateInterfaceCall", "I4", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PrivateInterfaceCall$C4",
		"java.lang.Object",
		"PrivateInterfaceCall$I4",
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
	$loadClass(PrivateInterfaceCall$C4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$C4);
	});
	return class$;
}

$Class* PrivateInterfaceCall$C4::class$ = nullptr;