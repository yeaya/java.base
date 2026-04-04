#include <B4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* B4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"B4",
		nullptr,
		"D4",
		nullptr,
		methodInfos$$
	};
	$loadClass(B4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B4);
	});
	return class$;
}

$Class* B4::class$ = nullptr;