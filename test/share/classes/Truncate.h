#ifndef _Truncate_h_
#define _Truncate_h_
//$ class Truncate
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export Truncate : public ::java::lang::Object {
	$class(Truncate, 0, ::java::lang::Object)
public:
	Truncate();
	void init$();
	static void appendTest(::java::io::File* blah);
	static void basicTest(::java::io::File* blah);
	static void checkException(::java::nio::channels::FileChannel* fc, int64_t size, $ClassArray* expected);
	static void exceptionTests(::java::io::File* blah);
	static void initTestFile(::java::io::File* blah, int64_t size);
	static void main($StringArray* args);
	static ::java::util::Random* generator;
};

#endif // _Truncate_h_