#ifndef _java_nio_file_TempFileHelper_h_
#define _java_nio_file_TempFileHelper_h_
//$ class java.nio.file.TempFileHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileAttribute;
			}
		}
	}
}
namespace java {
	namespace security {
		class SecureRandom;
	}
}

namespace java {
	namespace nio {
		namespace file {

class TempFileHelper : public ::java::lang::Object {
	$class(TempFileHelper, 0, ::java::lang::Object)
public:
	TempFileHelper();
	void init$();
	static ::java::nio::file::Path* create(::java::nio::file::Path* dir, $String* prefix, $String* suffix, bool createDirectory, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::file::Path* createTempDirectory(::java::nio::file::Path* dir, $String* prefix, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::file::Path* createTempFile(::java::nio::file::Path* dir, $String* prefix, $String* suffix, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::file::Path* generatePath($String* prefix, $String* suffix, ::java::nio::file::Path* dir);
	static ::java::nio::file::Path* tmpdir;
	static bool isPosix;
	static ::java::security::SecureRandom* random;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_TempFileHelper_h_