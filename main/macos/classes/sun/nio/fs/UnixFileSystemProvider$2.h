#ifndef _sun_nio_fs_UnixFileSystemProvider$2_h_
#define _sun_nio_fs_UnixFileSystemProvider$2_h_
//$ class sun.nio.fs.UnixFileSystemProvider$2
//$ extends sun.nio.fs.AbstractFileTypeDetector

#include <java/lang/Array.h>
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
			class UnixFileSystemProvider;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileSystemProvider$2 : public ::sun::nio::fs::AbstractFileTypeDetector {
	$class(UnixFileSystemProvider$2, $NO_CLASS_INIT, ::sun::nio::fs::AbstractFileTypeDetector)
public:
	UnixFileSystemProvider$2();
	void init$(::sun::nio::fs::UnixFileSystemProvider* this$0, $Array<::sun::nio::fs::AbstractFileTypeDetector>* val$detectors);
	virtual $String* implProbeContentType(::java::nio::file::Path* file) override;
	::sun::nio::fs::UnixFileSystemProvider* this$0 = nullptr;
	$Array<::sun::nio::fs::AbstractFileTypeDetector>* val$detectors = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileSystemProvider$2_h_