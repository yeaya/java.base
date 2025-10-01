#ifndef _MapTest_h_
#define _MapTest_h_
//$ class MapTest
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
	namespace nio {
		namespace channels {
			class FileChannel;
			class FileChannel$MapMode;
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export MapTest : public ::java::lang::Object {
	$class(MapTest, 0, ::java::lang::Object)
public:
	MapTest();
	void init$();
	static void checkException(::java::nio::channels::FileChannel* fc, ::java::nio::channels::FileChannel$MapMode* mode, int64_t position, int64_t size, $ClassArray* expected);
	static void initTestFile(::java::io::File* blah);
	static void main($StringArray* args);
	static void testExceptions();
	static void testExceptions(::java::nio::channels::FileChannel* fc);
	static void testForce();
	static void testHighOffset();
	static void testRead();
	static void testWrite();
	static void testZero();
	static ::java::io::PrintStream* out;
	static ::java::io::PrintStream* err;
	static ::java::util::Random* generator;
	static int32_t CHARS_PER_LINE;
	static ::java::io::File* blah;
};

#pragma pop_macro("CHARS_PER_LINE")

#endif // _MapTest_h_