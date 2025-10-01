#ifndef _SimpleFileTypeDetector_h_
#define _SimpleFileTypeDetector_h_
//$ class SimpleFileTypeDetector
//$ extends java.nio.file.spi.FileTypeDetector

#include <java/nio/file/spi/FileTypeDetector.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class $export SimpleFileTypeDetector : public ::java::nio::file::spi::FileTypeDetector {
	$class(SimpleFileTypeDetector, $NO_CLASS_INIT, ::java::nio::file::spi::FileTypeDetector)
public:
	SimpleFileTypeDetector();
	void init$();
	virtual $String* probeContentType(::java::nio::file::Path* file) override;
};

#endif // _SimpleFileTypeDetector_h_