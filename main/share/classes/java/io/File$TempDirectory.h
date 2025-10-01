#ifndef _java_io_File$TempDirectory_h_
#define _java_io_File$TempDirectory_h_
//$ class java.io.File$TempDirectory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace security {
		class SecureRandom;
	}
}

namespace java {
	namespace io {

class File$TempDirectory : public ::java::lang::Object {
	$class(File$TempDirectory, 0, ::java::lang::Object)
public:
	File$TempDirectory();
	void init$();
	static ::java::io::File* generateFile($String* prefix, $String* suffix, ::java::io::File* dir);
	static ::java::io::File* location();
	static int32_t shortenSubName(int32_t subNameLength, int32_t excess, int32_t nameMin);
	static ::java::io::File* tmpdir;
	static ::java::security::SecureRandom* random;
};

	} // io
} // java

#endif // _java_io_File$TempDirectory_h_