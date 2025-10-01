#ifndef _Pread_h_
#define _Pread_h_
//$ class Pread
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHARS_PER_LINE")
#undef CHARS_PER_LINE

namespace java {
	namespace io {
		class File;
		class PrintStream;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export Pread : public ::java::lang::Object {
	$class(Pread, 0, ::java::lang::Object)
public:
	Pread();
	void init$();
	static void genericTest();
	static void initTestFile(::java::io::File* blah);
	static void main($StringArray* args);
	static void testNegativePosition();
	static void testUnreadableChannel();
	static ::java::io::PrintStream* err;
	static ::java::util::Random* generator;
	static int32_t CHARS_PER_LINE;
};

#pragma pop_macro("CHARS_PER_LINE")

#endif // _Pread_h_