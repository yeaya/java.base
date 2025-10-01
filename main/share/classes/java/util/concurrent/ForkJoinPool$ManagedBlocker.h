#ifndef _java_util_concurrent_ForkJoinPool$ManagedBlocker_h_
#define _java_util_concurrent_ForkJoinPool$ManagedBlocker_h_
//$ interface java.util.concurrent.ForkJoinPool$ManagedBlocker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export ForkJoinPool$ManagedBlocker : public ::java::lang::Object {
	$interface(ForkJoinPool$ManagedBlocker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool block() {return false;}
	virtual bool isReleasable() {return false;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ForkJoinPool$ManagedBlocker_h_