#include <GetObject.h>
#include <jcpp.h>

using $doubleArray3 = $Array<double, 3>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* GetObject::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "([[[D)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GetObject, get, $Object*, $doubleArray3*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"GetObject",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetObject);
	});
	return class$;
}

$Class* GetObject::class$ = nullptr;