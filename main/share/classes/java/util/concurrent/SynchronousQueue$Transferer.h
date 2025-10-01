#ifndef _java_util_concurrent_SynchronousQueue$Transferer_h_
#define _java_util_concurrent_SynchronousQueue$Transferer_h_
//$ class java.util.concurrent.SynchronousQueue$Transferer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export SynchronousQueue$Transferer : public ::java::lang::Object {
	$class(SynchronousQueue$Transferer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SynchronousQueue$Transferer();
	void init$();
	virtual $Object* transfer(Object$* e, bool timed, int64_t nanos) {return nullptr;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_SynchronousQueue$Transferer_h_