#ifndef _RacyHandler_h_
#define _RacyHandler_h_
//$ class RacyHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NUM_THREADS")
#undef NUM_THREADS

namespace java {
	namespace net {
		class URLStreamHandler;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class $export RacyHandler : public ::java::lang::Object {
	$class(RacyHandler, 0, ::java::lang::Object)
public:
	RacyHandler();
	void init$();
	virtual ::java::net::URLStreamHandler* getURLStreamHandler();
	::java::net::URLStreamHandler* lambda$runTest$0($String* proto);
	void lambda$runTest$1();
	void lambda$runTest$2();
	static void main($StringArray* args);
	virtual void runTest();
	static $volatile(bool) factorySet;
	static int32_t NUM_THREADS;
	static ::java::util::concurrent::CountDownLatch* cdl;
};

#pragma pop_macro("NUM_THREADS")

#endif // _RacyHandler_h_