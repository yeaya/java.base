#ifndef _sun_nio_fs_RegistryFileTypeDetector_h_
#define _sun_nio_fs_RegistryFileTypeDetector_h_
//$ class sun.nio.fs.RegistryFileTypeDetector
//$ extends sun.nio.fs.AbstractFileTypeDetector

#include <sun/nio/fs/AbstractFileTypeDetector.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class $import RegistryFileTypeDetector : public ::sun::nio::fs::AbstractFileTypeDetector {
	$class(RegistryFileTypeDetector, 0, ::sun::nio::fs::AbstractFileTypeDetector)
public:
	RegistryFileTypeDetector();
	void init$();
	virtual $String* implProbeContentType(::java::nio::file::Path* file) override;
	static $String* queryStringValue(int64_t subKey, int64_t name);
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_RegistryFileTypeDetector_h_