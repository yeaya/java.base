#include <I2B.h>
#include <jcpp.h>

#undef I2B

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* I2B::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"bar", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE3;)TE1;^TE2;", $PUBLIC | $ABSTRACT, $virtualMethod(I2B, bar, $Object*, Object$*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"I2B",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<E1:Ljava/lang/Object;E2:Ljava/lang/Throwable;E3:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(I2B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(I2B);
	});
	return class$;
}

$Class* I2B::class$ = nullptr;