#ifndef _Pwrite_h_
#define _Pwrite_h_
//$ class Pwrite
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export Pwrite : public ::java::lang::Object {
	$class(Pwrite, 0, ::java::lang::Object)
public:
	Pwrite();
	void init$();
	static void genericTest();
	static void initTestFile(::java::io::File* blah);
	static void main($StringArray* args);
	static void testUnwritableChannel();
	static ::java::util::Random* generator;
	static ::java::io::File* blah;
};

#endif // _Pwrite_h_