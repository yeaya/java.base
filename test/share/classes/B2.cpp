#include <B2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

$Class* B2::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"B2",
		nullptr,
		"D2"
	};
	$loadClass(B2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B2);
	});
	return class$;
}

$Class* B2::class$ = nullptr;