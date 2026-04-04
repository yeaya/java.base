#include <LambdaConstructorMethodHandleUnbox$IntFunction.h>
#include <LambdaConstructorMethodHandleUnbox.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* LambdaConstructorMethodHandleUnbox$IntFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "(Ljava/lang/Object;)I", "(TX;)I", $PUBLIC | $ABSTRACT, $virtualMethod(LambdaConstructorMethodHandleUnbox$IntFunction, m, int32_t, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LambdaConstructorMethodHandleUnbox$IntFunction", "LambdaConstructorMethodHandleUnbox", "IntFunction", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"LambdaConstructorMethodHandleUnbox$IntFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<X:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LambdaConstructorMethodHandleUnbox"
	};
	$loadClass(LambdaConstructorMethodHandleUnbox$IntFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaConstructorMethodHandleUnbox$IntFunction);
	});
	return class$;
}

$Class* LambdaConstructorMethodHandleUnbox$IntFunction::class$ = nullptr;