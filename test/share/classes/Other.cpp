#include <Other.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

$Class* Other::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"Other"
	};
	$loadClass(Other, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Other);
	});
	return class$;
}

$Class* Other::class$ = nullptr;