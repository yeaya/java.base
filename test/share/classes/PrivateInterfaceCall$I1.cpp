#include <PrivateInterfaceCall$I1.h>
#include <PrivateInterfaceCall.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void PrivateInterfaceCall$I1::priv_m() {
	$throwNew($Error, "Should not call this"_s);
}

$Class* PrivateInterfaceCall$I1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"priv_m", "()V", nullptr, $PRIVATE, $method(PrivateInterfaceCall$I1, priv_m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrivateInterfaceCall$I1", "PrivateInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"PrivateInterfaceCall$I1",
		nullptr,
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
	$loadClass(PrivateInterfaceCall$I1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$I1);
	});
	return class$;
}

$Class* PrivateInterfaceCall$I1::class$ = nullptr;