#include <LambdaReturn$I.h>
#include <LambdaReturn.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* LambdaReturn$I::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LambdaReturn$I, m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LambdaReturn$I", "LambdaReturn", "I", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"LambdaReturn$I",
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
		"LambdaReturn"
	};
	$loadClass(LambdaReturn$I, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaReturn$I);
	});
	return class$;
}

$Class* LambdaReturn$I::class$ = nullptr;