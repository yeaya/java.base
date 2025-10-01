#ifndef _sun_nio_fs_DefaultFileTypeDetector_h_
#define _sun_nio_fs_DefaultFileTypeDetector_h_
//$ class sun.nio.fs.DefaultFileTypeDetector
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

namespace sun {
	namespace nio {
		namespace fs {

class $export DefaultFileTypeDetector : public ::java::lang::Object {
	$class(DefaultFileTypeDetector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultFileTypeDetector();
	void init$();
	static ::java::nio::file::spi::FileTypeDetector* create();
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_DefaultFileTypeDetector_h_