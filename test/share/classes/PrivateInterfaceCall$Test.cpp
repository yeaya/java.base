#include <PrivateInterfaceCall$Test.h>
#include <PrivateInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* PrivateInterfaceCall$Test::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PrivateInterfaceCall$Test, run, void), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrivateInterfaceCall$Test", "PrivateInterfaceCall", "Test", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"PrivateInterfaceCall$Test",
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
	$loadClass(PrivateInterfaceCall$Test, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateInterfaceCall$Test);
	});
	return class$;
}

$Class* PrivateInterfaceCall$Test::class$ = nullptr;