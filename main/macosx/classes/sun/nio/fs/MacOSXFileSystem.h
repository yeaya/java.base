#ifndef _sun_nio_fs_MacOSXFileSystem_h_
#define _sun_nio_fs_MacOSXFileSystem_h_
//$ class sun.nio.fs.MacOSXFileSystem
//$ extends sun.nio.fs.BsdFileSystem

#include <sun/nio/fs/BsdFileSystem.h>

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
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

class MacOSXFileSystem : public ::sun::nio::fs::BsdFileSystem {
	$class(MacOSXFileSystem, $NO_CLASS_INIT, ::sun::nio::fs::BsdFileSystem)
public:
	MacOSXFileSystem();
	void init$(::sun::nio::fs::UnixFileSystemProvider* provider, $String* dir);
	virtual ::java::util::regex::Pattern* compilePathMatchPattern($String* expr) override;
	virtual $String* normalizeJavaPath($String* path) override;
	virtual $String* normalizeNativePath($String* path) override;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_MacOSXFileSystem_h_