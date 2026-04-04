#include <D3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* D3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(D3, m, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"D3",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(D3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3);
	});
	return class$;
}

$Class* D3::class$ = nullptr;