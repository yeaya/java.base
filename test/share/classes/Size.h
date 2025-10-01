#ifndef _Size_h_
#define _Size_h_
//$ class Size
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export Size : public ::java::lang::Object {
	$class(Size, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Size();
	void init$();
	static void initTestFile(::java::io::File* f, int64_t size);
	static void main($StringArray* args);
	static void testLargeFile();
	static void testSmallFile();
};

#endif // _Size_h_