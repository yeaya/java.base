#include <LambdaClassFinal$Iser.h>
#include <LambdaClassFinal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* LambdaClassFinal$Iser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LambdaClassFinal$Iser, m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LambdaClassFinal$Iser", "LambdaClassFinal", "Iser", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"LambdaClassFinal$Iser",
		nullptr,
		"java.io.Serializable",
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
	$loadClass(LambdaClassFinal$Iser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaClassFinal$Iser);
	});
	return class$;
}

$Class* LambdaClassFinal$Iser::class$ = nullptr;