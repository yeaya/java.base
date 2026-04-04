#include <GetCloneable.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $doubleArray3 = $Array<double, 3>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* GetCloneable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "([[[D)Ljava/lang/Cloneable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GetCloneable, get, $Cloneable*, $doubleArray3*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"GetCloneable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetCloneable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetCloneable);
	});
	return class$;
}

$Class* GetCloneable::class$ = nullptr;