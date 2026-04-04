#include <java/util/RandomAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace util {

$Class* RandomAccess::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.RandomAccess"
	};
	$loadClass(RandomAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RandomAccess);
	});
	return class$;
}

$Class* RandomAccess::class$ = nullptr;

	} // util
} // java