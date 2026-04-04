#include <TransferTo$Thrower.h>
#include <TransferTo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* TransferTo$Thrower::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransferTo$Thrower, run, void), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TransferTo$Thrower", "TransferTo", "Thrower", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"TransferTo$Thrower",
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
		"TransferTo"
	};
	$loadClass(TransferTo$Thrower, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransferTo$Thrower);
	});
	return class$;
}

$Class* TransferTo$Thrower::class$ = nullptr;