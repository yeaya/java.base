#include <LambdaClassFinal$I.h>
#include <LambdaClassFinal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* LambdaClassFinal$I::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LambdaClassFinal$I, m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LambdaClassFinal$I", "LambdaClassFinal", "I", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"LambdaClassFinal$I",
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
		"LambdaClassFinal"
	};
	$loadClass(LambdaClassFinal$I, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaClassFinal$I);
	});
	return class$;
}

$Class* LambdaClassFinal$I::class$ = nullptr;