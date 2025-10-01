#ifndef _NullThreadName_h_
#define _NullThreadName_h_
//$ class NullThreadName
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class $export NullThreadName : public ::java::lang::Object {
	$class(NullThreadName, 0, ::java::lang::Object)
public:
	NullThreadName();
	void init$();
	static void main($StringArray* args);
	static ::java::util::concurrent::CountDownLatch* done;
};

#endif // _NullThreadName_h_