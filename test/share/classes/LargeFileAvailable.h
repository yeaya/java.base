#ifndef _LargeFileAvailable_h_
#define _LargeFileAvailable_h_
//$ class LargeFileAvailable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
	}
}

class $export LargeFileAvailable : public ::java::lang::Object {
	$class(LargeFileAvailable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LargeFileAvailable();
	void init$();
	static void createLargeFile(int64_t filesize, ::java::io::File* file);
	static void main($StringArray* args);
	static int64_t skipBytes(::java::io::InputStream* is, int64_t toSkip, int64_t avail);
};

#endif // _LargeFileAvailable_h_