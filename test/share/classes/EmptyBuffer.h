#ifndef _EmptyBuffer_h_
#define _EmptyBuffer_h_
//$ class EmptyBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}

class $export EmptyBuffer : public ::java::lang::Object {
	$class(EmptyBuffer, 0, ::java::lang::Object)
public:
	EmptyBuffer();
	void init$();
	static void main($StringArray* args);
	static void test();
	static ::java::io::PrintStream* log;
};

#endif // _EmptyBuffer_h_