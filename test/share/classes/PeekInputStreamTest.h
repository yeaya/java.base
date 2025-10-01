#ifndef _PeekInputStreamTest_h_
#define _PeekInputStreamTest_h_
//$ class PeekInputStreamTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class $export PeekInputStreamTest : public ::java::lang::Object {
	$class(PeekInputStreamTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PeekInputStreamTest();
	void init$();
	static ::java::io::InputStream* createPeekInputStream(::java::io::InputStream* underlying);
	static void main($StringArray* args);
	static void peek(::java::io::InputStream* pin);
};

#endif // _PeekInputStreamTest_h_