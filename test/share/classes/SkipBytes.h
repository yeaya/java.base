#ifndef _SkipBytes_h_
#define _SkipBytes_h_
//$ class SkipBytes
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class RandomAccessFile;
	}
}

class $export SkipBytes : public ::java::lang::Object {
	$class(SkipBytes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SkipBytes();
	void init$();
	static void doTest(::java::io::RandomAccessFile* raf, int32_t start, int32_t num_to_skip);
	static void main($StringArray* args);
};

#endif // _SkipBytes_h_