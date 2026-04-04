#include <B1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

$Class* B1::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"B1",
		nullptr,
		"D1"
	};
	$loadClass(B1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B1);
	});
	return class$;
}

$Class* B1::class$ = nullptr;