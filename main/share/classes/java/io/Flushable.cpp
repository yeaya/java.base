#include <java/io/Flushable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$Class* Flushable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Flushable, flush, void), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.io.Flushable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Flushable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Flushable);
	});
	return class$;
}

$Class* Flushable::class$ = nullptr;

	} // io
} // java