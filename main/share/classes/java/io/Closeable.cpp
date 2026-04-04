#include <java/io/Closeable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$Class* Closeable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.io.Closeable",
		nullptr,
		"java.lang.AutoCloseable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Closeable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Closeable);
	});
	return class$;
}

$Class* Closeable::class$ = nullptr;

	} // io
} // java