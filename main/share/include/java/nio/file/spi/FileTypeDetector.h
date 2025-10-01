#ifndef _java_nio_file_spi_FileTypeDetector_h_
#define _java_nio_file_spi_FileTypeDetector_h_
//$ class java.nio.file.spi.FileTypeDetector
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Void;
	}
}
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
			namespace spi {

class $import FileTypeDetector : public ::java::lang::Object {
	$class(FileTypeDetector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FileTypeDetector();
	void init$(::java::lang::Void* ignore);
	void init$();
	static ::java::lang::Void* checkPermission();
	virtual $String* probeContentType(::java::nio::file::Path* path) {return nullptr;}
};

			} // spi
		} // file
	} // nio
} // java

#endif // _java_nio_file_spi_FileTypeDetector_h_