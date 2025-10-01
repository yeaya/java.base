#ifndef _NegativeAvailable_h_
#define _NegativeAvailable_h_
//$ class NegativeAvailable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class FileInputStream;
	}
}

class $export NegativeAvailable : public ::java::lang::Object {
	$class(NegativeAvailable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NegativeAvailable();
	void init$();
	static void main($StringArray* args);
	static int64_t skipBytes(::java::io::FileInputStream* fis, int32_t toSkip, int64_t space);
};

#endif // _NegativeAvailable_h_