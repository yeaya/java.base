#ifndef _sun_nio_fs_UnixFileSystemProvider_h_
#define _sun_nio_fs_UnixFileSystemProvider_h_
//$ class sun.nio.fs.UnixFileSystemProvider
//$ extends sun.nio.fs.AbstractFileSystemProvider

#include <java/lang/Array.h>
#include <sun/nio/fs/AbstractFileSystemProvider.h>

#pragma push_macro("USER_DIR")
#undef USER_DIR
#pragma push_macro("EMPTY_PATH")
#undef EMPTY_PATH

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousFileChannel;
			class FileChannel;
			class SeekableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class AccessMode;
			class CopyOption;
			class DirectoryStream;
			class DirectoryStream$Filter;
			class FileStore;
			class FileSystem;
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
				class FileAttribute;
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
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class AbstractFileTypeDetector;
			class DynamicFileAttributeView;
			class UnixFileSystem;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class $import UnixFileSystemProvider : public ::sun::nio::fs::AbstractFileSystemProvider {
	$class(UnixFileSystemProvider, 0, ::sun::nio::fs::AbstractFileSystemProvider)
public:
	UnixFileSystemProvider();
	void init$();
	::java::nio::file::spi::FileTypeDetector* chain($Array<::sun::nio::fs::AbstractFileTypeDetector>* detectors);
	virtual void checkAccess(::java::nio::file::Path* obj, $Array<::java::nio::file::AccessMode>* modes) override;
	virtual ::sun::nio::fs::UnixPath* checkPath(::java::nio::file::Path* obj);
	void checkUri(::java::net::URI* uri);
	virtual void copy(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) override;
	virtual void createDirectory(::java::nio::file::Path* obj, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual void createLink(::java::nio::file::Path* obj1, ::java::nio::file::Path* obj2) override;
	virtual void createSymbolicLink(::java::nio::file::Path* obj1, ::java::nio::file::Path* obj2, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual bool exists(::java::nio::file::Path* obj) override;
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(::java::nio::file::Path* obj, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::sun::nio::fs::DynamicFileAttributeView* getFileAttributeView(::java::nio::file::Path* obj, $String* name, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::FileStore* getFileStore(::sun::nio::fs::UnixPath* path) {return nullptr;}
	virtual ::java::nio::file::FileStore* getFileStore(::java::nio::file::Path* obj) override;
	virtual ::java::nio::file::FileSystem* getFileSystem(::java::net::URI* uri) override;
	virtual ::java::nio::file::spi::FileTypeDetector* getFileTypeDetector();
	virtual ::java::nio::file::Path* getPath(::java::net::URI* uri) override;
	virtual $String* getScheme() override;
	virtual $bytes* getSunPathForSocketFile(::java::nio::file::Path* obj) override;
	virtual bool implDelete(::java::nio::file::Path* obj, bool failIfNotExists) override;
	virtual bool isDirectory(::java::nio::file::Path* obj) override;
	virtual bool isHidden(::java::nio::file::Path* obj) override;
	virtual bool isRegularFile(::java::nio::file::Path* obj) override;
	virtual bool isSameFile(::java::nio::file::Path* obj1, ::java::nio::file::Path* obj2) override;
	virtual void move(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) override;
	virtual ::java::nio::channels::AsynchronousFileChannel* newAsynchronousFileChannel(::java::nio::file::Path* obj, ::java::util::Set* options, ::java::util::concurrent::ExecutorService* executor, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual ::java::nio::channels::SeekableByteChannel* newByteChannel(::java::nio::file::Path* obj, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual ::java::nio::file::DirectoryStream* newDirectoryStream(::java::nio::file::Path* obj, ::java::nio::file::DirectoryStream$Filter* filter) override;
	virtual ::java::nio::channels::FileChannel* newFileChannel(::java::nio::file::Path* obj, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	using ::sun::nio::fs::AbstractFileSystemProvider::newFileSystem;
	virtual ::sun::nio::fs::UnixFileSystem* newFileSystem($String* dir) {return nullptr;}
	virtual ::java::nio::file::FileSystem* newFileSystem(::java::net::URI* uri, ::java::util::Map* env) override;
	using ::sun::nio::fs::AbstractFileSystemProvider::readAttributes;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes(::java::nio::file::Path* file, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::Path* readSymbolicLink(::java::nio::file::Path* obj1) override;
	virtual ::sun::nio::fs::UnixFileSystem* theFileSystem();
	static $String* USER_DIR;
	static $bytes* EMPTY_PATH;
	::sun::nio::fs::UnixFileSystem* theFileSystem$ = nullptr;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("USER_DIR")
#pragma pop_macro("EMPTY_PATH")

#endif // _sun_nio_fs_UnixFileSystemProvider_h_