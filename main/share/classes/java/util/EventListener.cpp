#include <java/util/EventListener.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace util {

$ClassInfo _EventListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.EventListener"
};

$Object* allocate$EventListener($Class* clazz) {
	return $of($alloc(EventListener));
}

$Class* EventListener::load$($String* name, bool initialize) {
	$loadClass(EventListener, name, initialize, &_EventListener_ClassInfo_, allocate$EventListener);
	return class$;
}

$Class* EventListener::class$ = nullptr;

	} // util
} // java