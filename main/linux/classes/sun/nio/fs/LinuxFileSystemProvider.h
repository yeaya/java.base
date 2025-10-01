#ifndef _sun_nio_fs_LinuxFileSystemProvider_h_
#define _sun_nio_fs_LinuxFileSystemProvider_h_
//$ class sun.nio.fs.LinuxFileSystemProvider
//$ extends sun.nio.fs.UnixFileSystemProvider

#include <java/lang/Array.h>
#include <sun/nio/fs/UnixFileSystemProvider.h>

namespace java {
	namespace nio {
		namespace file {
			class FileStore;
			class LinkOption;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class FileAttributeView;
			}
		}
	}
}
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
			class DynamicFileAttributeView;
			class UnixFileSystem;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class LinuxFileSystemProvider : public ::sun::nio::fs::UnixFileSystemProvider {
	$class(LinuxFileSystemProvider, $NO_CLASS_INIT, ::sun::nio::fs::UnixFileSystemProvider)
public:
	LinuxFileSystemProvider();
	using ::sun::nio::fs::UnixFileSystemProvider::getFileStore;
	void init$();
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(::java::nio::file::Path* obj, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::sun::nio::fs::DynamicFileAttributeView* getFileAttributeView(::java::nio::file::Path* obj, $String* name, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::FileStore* getFileStore(::sun::nio::fs::UnixPath* path) override;
	virtual ::java::nio::file::spi::FileTypeDetector* getFileTypeDetector() override;
	using ::sun::nio::fs::UnixFileSystemProvider::newFileSystem;
	virtual ::sun::nio::fs::UnixFileSystem* newFileSystem($String* dir) override;
	using ::sun::nio::fs::UnixFileSystemProvider::readAttributes;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes(::java::nio::file::Path* file, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_LinuxFileSystemProvider_h_