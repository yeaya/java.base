#ifndef _java_util_concurrent_Delayed_h_
#define _java_util_concurrent_Delayed_h_
//$ interface java.util.concurrent.Delayed
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

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

class $import Delayed : public ::java::lang::Comparable {
	$interface(Delayed, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	virtual int64_t getDelay(::java::util::concurrent::TimeUnit* unit) {return 0;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Delayed_h_