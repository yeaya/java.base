#ifndef _sun_nio_fs_BsdFileSystemProvider_h_
#define _sun_nio_fs_BsdFileSystemProvider_h_
//$ class sun.nio.fs.BsdFileSystemProvider
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
				class FileAttributeView;
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

class BsdFileSystemProvider : public ::sun::nio::fs::UnixFileSystemProvider {
	$class(BsdFileSystemProvider, $NO_CLASS_INIT, ::sun::nio::fs::UnixFileSystemProvider)
public:
	BsdFileSystemProvider();
	using ::sun::nio::fs::UnixFileSystemProvider::getFileStore;
	void init$();
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(::java::nio::file::Path* obj, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::sun::nio::fs::DynamicFileAttributeView* getFileAttributeView(::java::nio::file::Path* obj, $String* name, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::FileStore* getFileStore(::sun::nio::fs::UnixPath* path) override;
	using ::sun::nio::fs::UnixFileSystemProvider::newFileSystem;
	virtual ::sun::nio::fs::UnixFileSystem* newFileSystem($String* dir) override;
	using ::sun::nio::fs::UnixFileSystemProvider::readAttributes;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_BsdFileSystemProvider_h_