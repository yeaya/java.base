#include <Int.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* Int::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"main", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Int, main, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"Int",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Int, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Int);
	});
	return class$;
}

$Class* Int::class$ = nullptr;