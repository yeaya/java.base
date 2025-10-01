#ifndef _java_util_concurrent_CountDownLatch_h_
#define _java_util_concurrent_CountDownLatch_h_
//$ class java.util.concurrent.CountDownLatch
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch$Sync;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import CountDownLatch : public ::java::lang::Object {
	$class(CountDownLatch, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CountDownLatch();
	void init$(int32_t count);
	virtual void await();
	virtual bool await(int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	virtual void countDown();
	virtual int64_t getCount();
	virtual $String* toString() override;
	::java::util::concurrent::CountDownLatch$Sync* sync = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CountDownLatch_h_