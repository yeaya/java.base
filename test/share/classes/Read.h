#ifndef _Read_h_
#define _Read_h_
//$ class Read
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

class $export Read : public ::java::lang::Object {
	$class(Read, 0, ::java::lang::Object)
public:
	Read();
	void init$();
	static void initTestFile(::java::io::File* blah);
	static void main($StringArray* args);
	static ::java::io::PrintStream* err;
	static ::java::util::Random* generator;
	static int32_t CHARS_PER_LINE;
	static ::java::io::File* blah;
};

#pragma pop_macro("CHARS_PER_LINE")

#endif // _Read_h_