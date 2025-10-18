#ifndef _sun_nio_fs_UTIFileTypeDetector_h_
#define _sun_nio_fs_UTIFileTypeDetector_h_
//$ class sun.nio.fs.UTIFileTypeDetector
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

class UTIFileTypeDetector : public ::sun::nio::fs::AbstractFileTypeDetector {
	$class(UTIFileTypeDetector, 0, ::sun::nio::fs::AbstractFileTypeDetector)
public:
	UTIFileTypeDetector();
	void init$();
	virtual $String* implProbeContentType(::java::nio::file::Path* path) override;
	$String* probe0($String* fileExtension);
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UTIFileTypeDetector_h_