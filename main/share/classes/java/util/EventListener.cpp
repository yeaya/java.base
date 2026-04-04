#include <java/util/EventListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace util {

$Class* EventListener::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.EventListener"
	};
	$loadClass(EventListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventListener);
	});
	return class$;
}

$Class* EventListener::class$ = nullptr;

	} // util
} // java