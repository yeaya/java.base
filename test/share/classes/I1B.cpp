#include <I1B.h>
#include <jcpp.h>

#undef I1B

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* I1B::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"foo", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TX2;)TX1;", $PUBLIC | $ABSTRACT, $virtualMethod(I1B, foo, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"I1B",
		nullptr,
		"I3B",
		nullptr,
		methodInfos$$,
		"<X1:Ljava/lang/Object;X2:Ljava/lang/Object;>Ljava/lang/Object;LI3B;"
	};
	$loadClass(I1B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(I1B);
	});
	return class$;
}

$Class* I1B::class$ = nullptr;