#include <D1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* D1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(D1, m, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"D1",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(D1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D1);
	});
	return class$;
}

$Class* D1::class$ = nullptr;