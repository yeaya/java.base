#ifndef _java_nio_file_Files$FileTypeDetectors_h_
#define _java_nio_file_Files$FileTypeDetectors_h_
//$ class java.nio.file.Files$FileTypeDetectors
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			namespace spi {
				class FileTypeDetector;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace nio {
		namespace file {

class Files$FileTypeDetectors : public ::java::lang::Object {
	$class(Files$FileTypeDetectors, 0, ::java::lang::Object)
public:
	Files$FileTypeDetectors();
	void init$();
	static ::java::nio::file::spi::FileTypeDetector* createDefaultFileTypeDetector();
	static ::java::util::List* loadInstalledDetectors();
	static ::java::nio::file::spi::FileTypeDetector* defaultFileTypeDetector;
	static ::java::util::List* installedDetectors;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_Files$FileTypeDetectors_h_