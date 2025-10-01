#ifndef _java_util_concurrent_Flow$Subscription_h_
#define _java_util_concurrent_Flow$Subscription_h_
//$ interface java.util.concurrent.Flow$Subscription
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export Flow$Subscription : public ::java::lang::Object {
	$interface(Flow$Subscription, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void cancel() {}
	virtual void request(int64_t n) {}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Flow$Subscription_h_