#include <C4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

$Class* C4::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"C4",
		nullptr,
		"D4"
	};
	$loadClass(C4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C4);
	});
	return class$;
}

$Class* C4::class$ = nullptr;