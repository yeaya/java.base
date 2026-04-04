#include <java/io/Serializable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace io {

$Class* Serializable::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.io.Serializable"
	};
	$loadClass(Serializable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Serializable);
	});
	return class$;
}

$Class* Serializable::class$ = nullptr;

	} // io
} // java