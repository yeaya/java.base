#ifndef _java_util_concurrent_Flow$Publisher_h_
#define _java_util_concurrent_Flow$Publisher_h_
//$ interface java.util.concurrent.Flow$Publisher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Flow$Subscriber;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import Flow$Publisher : public ::java::lang::Object {
	$interface(Flow$Publisher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void subscribe(::java::util::concurrent::Flow$Subscriber* subscriber) {}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Flow$Publisher_h_