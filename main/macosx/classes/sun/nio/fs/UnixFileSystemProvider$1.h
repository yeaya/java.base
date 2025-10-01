#ifndef _sun_nio_fs_UnixFileSystemProvider$1_h_
#define _sun_nio_fs_UnixFileSystemProvider$1_h_
//$ class sun.nio.fs.UnixFileSystemProvider$1
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
			class UnixFileSystemProvider;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileSystemProvider$1 : public ::sun::nio::fs::AbstractFileTypeDetector {
	$class(UnixFileSystemProvider$1, $NO_CLASS_INIT, ::sun::nio::fs::AbstractFileTypeDetector)
public:
	UnixFileSystemProvider$1();
	void init$(::sun::nio::fs::UnixFileSystemProvider* this$0);
	virtual $String* implProbeContentType(::java::nio::file::Path* file) override;
	::sun::nio::fs::UnixFileSystemProvider* this$0 = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileSystemProvider$1_h_