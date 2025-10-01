#ifndef _java_util_concurrent_Executors$PrivilegedThreadFactory$1_h_
#define _java_util_concurrent_Executors$PrivilegedThreadFactory$1_h_
//$ class java.util.concurrent.Executors$PrivilegedThreadFactory$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Executors$PrivilegedThreadFactory;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$PrivilegedThreadFactory$1 : public ::java::lang::Runnable {
	$class(Executors$PrivilegedThreadFactory$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Executors$PrivilegedThreadFactory$1();
	void init$(::java::util::concurrent::Executors$PrivilegedThreadFactory* this$0, ::java::lang::Runnable* val$r);
	virtual void run() override;
	::java::util::concurrent::Executors$PrivilegedThreadFactory* this$0 = nullptr;
	::java::lang::Runnable* val$r = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$PrivilegedThreadFactory$1_h_