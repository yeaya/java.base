#include <SAM.h>
#include <jcpp.h>

#undef SAM

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* SAM::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()Ljava/lang/Object;", "()TP1;", $PUBLIC | $ABSTRACT, $virtualMethod(SAM, m, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"SAM",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<P1:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(SAM, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SAM);
	});
	return class$;
}

$Class* SAM::class$ = nullptr;