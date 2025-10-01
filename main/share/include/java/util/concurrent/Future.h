#ifndef _java_util_concurrent_Future_h_
#define _java_util_concurrent_Future_h_
//$ interface java.util.concurrent.Future
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import Future : public ::java::lang::Object {
	$interface(Future, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool cancel(bool mayInterruptIfRunning) {return false;}
	virtual $Object* get() {return nullptr;}
	virtual $Object* get(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return nullptr;}
	virtual bool isCancelled() {return false;}
	virtual bool isDone() {return false;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Future_h_