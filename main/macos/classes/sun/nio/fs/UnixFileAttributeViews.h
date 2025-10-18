#ifndef _sun_nio_fs_UnixFileAttributeViews_h_
#define _sun_nio_fs_UnixFileAttributeViews_h_
//$ class sun.nio.fs.UnixFileAttributeViews
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {
			class FileOwnerAttributeViewImpl;
			class UnixFileAttributeViews$Basic;
			class UnixFileAttributeViews$Posix;
			class UnixFileAttributeViews$Unix;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileAttributeViews : public ::java::lang::Object {
	$class(UnixFileAttributeViews, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UnixFileAttributeViews();
	void init$();
	static ::sun::nio::fs::UnixFileAttributeViews$Basic* createBasicView(::sun::nio::fs::UnixPath* file, bool followLinks);
	static ::sun::nio::fs::FileOwnerAttributeViewImpl* createOwnerView(::sun::nio::fs::UnixPath* file, bool followLinks);
	static ::sun::nio::fs::UnixFileAttributeViews$Posix* createPosixView(::sun::nio::fs::UnixPath* file, bool followLinks);
	static ::sun::nio::fs::UnixFileAttributeViews$Unix* createUnixView(::sun::nio::fs::UnixPath* file, bool followLinks);
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileAttributeViews_h_