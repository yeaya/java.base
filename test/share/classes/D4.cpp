#include <D4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* D4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(D4, m, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"D4",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(D4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D4);
	});
	return class$;
}

$Class* D4::class$ = nullptr;