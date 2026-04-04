#include <C3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* C3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"C3",
		nullptr,
		"D3",
		nullptr,
		methodInfos$$
	};
	$loadClass(C3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C3);
	});
	return class$;
}

$Class* C3::class$ = nullptr;