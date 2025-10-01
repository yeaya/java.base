#ifndef _java_util_concurrent_ConcurrentHashMap$CounterCell_h_
#define _java_util_concurrent_ConcurrentHashMap$CounterCell_h_
//$ class java.util.concurrent.ConcurrentHashMap$CounterCell
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$CounterCell : public ::java::lang::Object {
	$class(ConcurrentHashMap$CounterCell, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConcurrentHashMap$CounterCell();
	void init$(int64_t x);
	$volatile(int64_t) value = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$CounterCell_h_