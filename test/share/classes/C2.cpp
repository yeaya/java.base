#include <C2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

$Class* C2::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"C2",
		nullptr,
		"D2"
	};
	$loadClass(C2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C2);
	});
	return class$;
}

$Class* C2::class$ = nullptr;