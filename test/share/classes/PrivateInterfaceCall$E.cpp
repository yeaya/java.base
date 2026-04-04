#include <PrivateInterfaceCall$E.h>
#include <PrivateInterfaceCall.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void PrivateInterfaceCall$E::init$() {
}

void PrivateInterfaceCall$E::priv_m() {
	$throwNew($Error, "Should not call this"_s);
}

PrivateInterfaceCall$E::PrivateInterfaceCall$E() {
}

$Class* PrivateInterfaceCall$E::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PrivateInterfaceCall$E, init$, void)},
		{"priv_m", "()V", nullptr, $PRIVATE, $method(PrivateInterfaceCall$E, priv_m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrivateInterfaceCall$E", "PrivateInterfaceCall", "E", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PrivateInterfaceCall$E",
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
		"PrivateInterfaceCall"
	};
	$loadClass(PrivateInterfaceCall$E, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$E);
	});
	return class$;
}

$Class* PrivateInterfaceCall$E::class$ = nullptr;