#ifndef _jdk_internal_jrtfs_JrtFileSystemProvider_h_
#define _jdk_internal_jrtfs_JrtFileSystemProvider_h_
//$ class jdk.internal.jrtfs.JrtFileSystemProvider
//$ extends java.nio.file.spi.FileSystemProvider

#include <java/lang/Array.h>
#include <java/nio/file/spi/FileSystemProvider.h>

#pragma push_macro("JRT_FS_JAR")
#undef JRT_FS_JAR

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class URI;
		class URLClassLoader;
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
			class OpenOption;
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
namespace jdk {
	namespace internal {
		namespace jrtfs {
			class JrtPath;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtFileSystemProvider : public ::java::nio::file::spi::FileSystemProvider {
	$class(JrtFileSystemProvider, 0, ::java::nio::file::spi::FileSystemProvider)
public:
	JrtFileSystemProvider();
	void init$();
	virtual void checkAccess(::java::nio::file::Path* path, $Array<::java::nio::file::AccessMode>* modes) override;
	void checkPermission();
	void checkUri(::java::net::URI* uri);
	virtual void copy(::java::nio::file::Path* src, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) override;
	virtual void createDirectory(::java::nio::file::Path* path, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual void delete$(::java::nio::file::Path* path) override;
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(::java::nio::file::Path* path, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::FileStore* getFileStore(::java::nio::file::Path* path) override;
	virtual ::java::nio::file::FileSystem* getFileSystem(::java::net::URI* uri) override;
	virtual ::java::nio::file::Path* getPath(::java::net::URI* uri) override;
	virtual $String* getScheme() override;
	::java::nio::file::FileSystem* getTheFileSystem();
	virtual bool isHidden(::java::nio::file::Path* path) override;
	virtual bool isSameFile(::java::nio::file::Path* path, ::java::nio::file::Path* other) override;
	virtual void move(::java::nio::file::Path* src, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) override;
	virtual ::java::nio::channels::AsynchronousFileChannel* newAsynchronousFileChannel(::java::nio::file::Path* path, ::java::util::Set* options, ::java::util::concurrent::ExecutorService* exec, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual ::java::nio::channels::SeekableByteChannel* newByteChannel(::java::nio::file::Path* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual ::java::nio::file::DirectoryStream* newDirectoryStream(::java::nio::file::Path* path, ::java::nio::file::DirectoryStream$Filter* filter) override;
	virtual ::java::nio::channels::FileChannel* newFileChannel(::java::nio::file::Path* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	using ::java::nio::file::spi::FileSystemProvider::newFileSystem;
	virtual ::java::nio::file::FileSystem* newFileSystem(::java::net::URI* uri, ::java::util::Map* env) override;
	::java::nio::file::FileSystem* newFileSystem($String* targetHome, ::java::net::URI* uri, ::java::util::Map* env);
	virtual ::java::io::InputStream* newInputStream(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options) override;
	static ::java::net::URLClassLoader* newJrtFsLoader(::java::nio::file::Path* jrtfs);
	virtual ::java::io::OutputStream* newOutputStream(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options) override;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes(::java::nio::file::Path* path, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::util::Map* readAttributes(::java::nio::file::Path* path, $String* attribute, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::Path* readSymbolicLink(::java::nio::file::Path* link) override;
	virtual void setAttribute(::java::nio::file::Path* path, $String* attribute, Object$* value, $Array<::java::nio::file::LinkOption>* options) override;
	static ::jdk::internal::jrtfs::JrtPath* toJrtPath(::java::nio::file::Path* path);
	$volatile(::java::nio::file::FileSystem*) theFileSystem = nullptr;
	static $String* JRT_FS_JAR;
};

		} // jrtfs
	} // internal
} // jdk

#pragma pop_macro("JRT_FS_JAR")

#endif // _jdk_internal_jrtfs_JrtFileSystemProvider_h_