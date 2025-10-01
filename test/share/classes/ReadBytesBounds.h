#ifndef _ReadBytesBounds_h_
#define _ReadBytesBounds_h_
//$ class ReadBytesBounds
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class FileInputStream;
		class RandomAccessFile;
	}
}

class $export ReadBytesBounds : public ::java::lang::Object {
	$class(ReadBytesBounds, 0, ::java::lang::Object)
public:
	ReadBytesBounds();
	void init$();
	static void main($StringArray* argv);
	static void testRead(int32_t off, int32_t len, bool expected);
	static ::java::io::FileInputStream* fis;
	static ::java::io::RandomAccessFile* raf;
	static $bytes* b;
};

#endif // _ReadBytesBounds_h_