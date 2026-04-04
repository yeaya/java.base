#include <C1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

$Class* C1::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"C1",
		nullptr,
		"D1"
	};
	$loadClass(C1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C1);
	});
	return class$;
}

$Class* C1::class$ = nullptr;