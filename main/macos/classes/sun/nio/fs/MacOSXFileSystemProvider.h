#ifndef _sun_nio_fs_MacOSXFileSystemProvider_h_
#define _sun_nio_fs_MacOSXFileSystemProvider_h_
//$ class sun.nio.fs.MacOSXFileSystemProvider
//$ extends sun.nio.fs.BsdFileSystemProvider

#include <sun/nio/fs/BsdFileSystemProvider.h>

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
			class UnixFileSystem;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class MacOSXFileSystemProvider : public ::sun::nio::fs::BsdFileSystemProvider {
	$class(MacOSXFileSystemProvider, $NO_CLASS_INIT, ::sun::nio::fs::BsdFileSystemProvider)
public:
	MacOSXFileSystemProvider();
	using ::sun::nio::fs::BsdFileSystemProvider::getFileStore;
	void init$();
	virtual ::java::nio::file::spi::FileTypeDetector* getFileTypeDetector() override;
	using ::sun::nio::fs::BsdFileSystemProvider::newFileSystem;
	virtual ::sun::nio::fs::UnixFileSystem* newFileSystem($String* dir) override;
	using ::sun::nio::fs::BsdFileSystemProvider::readAttributes;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_MacOSXFileSystemProvider_h_