#include <GetArray.h>
#include <jcpp.h>

using $doubleArray3 = $Array<double, 3>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* GetArray::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "([[[D)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GetArray, get, $ObjectArray*, $doubleArray3*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"GetArray",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetArray);
	});
	return class$;
}

$Class* GetArray::class$ = nullptr;