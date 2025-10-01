#ifndef _java_util_concurrent_Flow$Subscriber_h_
#define _java_util_concurrent_Flow$Subscriber_h_
//$ interface java.util.concurrent.Flow$Subscriber
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Flow$Subscription;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import Flow$Subscriber : public ::java::lang::Object {
	$interface(Flow$Subscriber, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void onComplete() {}
	virtual void onError($Throwable* throwable) {}
	virtual void onNext(Object$* item) {}
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) {}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Flow$Subscriber_h_