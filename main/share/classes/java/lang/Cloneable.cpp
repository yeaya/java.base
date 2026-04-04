#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace lang {

$Class* Cloneable::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.Cloneable"
	};
	$loadClass(Cloneable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cloneable);
	});
	return class$;
}

$Class* Cloneable::class$ = nullptr;

	} // lang
} // java