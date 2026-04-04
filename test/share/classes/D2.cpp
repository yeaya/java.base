#include <D2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* D2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(D2, m, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"D2",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(D2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D2);
	});
	return class$;
}

$Class* D2::class$ = nullptr;