#include <B3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* B3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"B3",
		nullptr,
		"D3",
		nullptr,
		methodInfos$$
	};
	$loadClass(B3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B3);
	});
	return class$;
}

$Class* B3::class$ = nullptr;