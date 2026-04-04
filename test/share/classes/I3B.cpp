#include <I3B.h>
#include <jcpp.h>

#undef I3B

using $ClassInfo = ::java::lang::ClassInfo;

$Class* I3B::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"I3B"
	};
	$loadClass(I3B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(I3B);
	});
	return class$;
}

$Class* I3B::class$ = nullptr;