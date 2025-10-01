#ifndef _jdk_internal_jrtfs_JrtFileSystem_h_
#define _jdk_internal_jrtfs_JrtFileSystem_h_
//$ class jdk.internal.jrtfs.JrtFileSystem
//$ extends java.nio.file.FileSystem

#include <java/lang/Array.h>
#include <java/nio/file/FileSystem.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
			class SeekableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class CopyOption;
			class DirectoryStream$Filter;
			class LinkOption;
			class OpenOption;
			class Path;
			class PathMatcher;
			class ReadOnlyFileSystemException;
			class WatchService;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileAttribute;
				class FileTime;
				class UserPrincipalLookupService;
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace spi {
				class FileSystemProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageReader$Node;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jrtfs {
			class JrtFileAttributes;
			class JrtFileStore;
			class JrtFileSystemProvider;
			class JrtPath;
			class SystemImage;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtFileSystem : public ::java::nio::file::FileSystem {
	$class(JrtFileSystem, 0, ::java::nio::file::FileSystem)
public:
	JrtFileSystem();
	void init$(::jdk::internal::jrtfs::JrtFileSystemProvider* provider, ::java::util::Map* env);
	virtual ::jdk::internal::jimage::ImageReader$Node* checkNode(::jdk::internal::jrtfs::JrtPath* path);
	static void checkOptions(::java::util::Set* options);
	virtual void cleanup();
	virtual void close() override;
	void copyFile(bool deletesrc, ::jdk::internal::jrtfs::JrtPath* srcPath, ::jdk::internal::jrtfs::JrtPath* dstPath, $Array<::java::nio::file::CopyOption>* options);
	void createDirectory(::jdk::internal::jrtfs::JrtPath* jrtPath, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	void deleteFile(::jdk::internal::jrtfs::JrtPath* jrtPath, bool failIfNotExists);
	void ensureOpen();
	virtual bool exists(::jdk::internal::jrtfs::JrtPath* path);
	static bool followLinks($Array<::java::nio::file::LinkOption>* options);
	virtual ::jdk::internal::jrtfs::JrtFileAttributes* getFileAttributes(::jdk::internal::jrtfs::JrtPath* path, $Array<::java::nio::file::LinkOption>* options);
	virtual $bytes* getFileContent(::jdk::internal::jrtfs::JrtPath* path);
	::jdk::internal::jrtfs::JrtFileStore* getFileStore(::jdk::internal::jrtfs::JrtPath* path);
	virtual ::java::lang::Iterable* getFileStores() override;
	virtual ::java::nio::file::Path* getPath($String* first, $StringArray* more) override;
	virtual ::java::nio::file::PathMatcher* getPathMatcher($String* syntaxAndInput) override;
	virtual ::java::lang::Iterable* getRootDirectories() override;
	::jdk::internal::jrtfs::JrtPath* getRootPath();
	virtual $String* getSeparator() override;
	virtual ::java::nio::file::attribute::UserPrincipalLookupService* getUserPrincipalLookupService() override;
	virtual bool isDirectory(::jdk::internal::jrtfs::JrtPath* path, bool resolveLinks);
	virtual bool isLink(::jdk::internal::jrtfs::JrtPath* path);
	virtual bool isOpen() override;
	virtual bool isReadOnly() override;
	virtual bool isSameFile(::jdk::internal::jrtfs::JrtPath* path1, ::jdk::internal::jrtfs::JrtPath* path2);
	virtual ::java::util::Iterator* iteratorOf(::jdk::internal::jrtfs::JrtPath* path, ::java::nio::file::DirectoryStream$Filter* filter);
	static bool lambda$getPathMatcher$0(::java::util::regex::Pattern* pattern, ::java::nio::file::Path* path);
	::java::nio::file::Path* lambda$iteratorOf$1(::jdk::internal::jrtfs::JrtPath* path, ::jdk::internal::jimage::ImageReader$Node* child);
	static bool lambda$iteratorOf$3(::java::nio::file::DirectoryStream$Filter* filter, ::java::nio::file::Path* p);
	::jdk::internal::jimage::ImageReader$Node* lookup($String* path);
	::jdk::internal::jimage::ImageReader$Node* lookupSymbolic($String* path);
	::java::nio::channels::SeekableByteChannel* newByteChannel(::jdk::internal::jrtfs::JrtPath* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	::java::nio::channels::FileChannel* newFileChannel(::jdk::internal::jrtfs::JrtPath* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	::java::io::InputStream* newInputStream(::jdk::internal::jrtfs::JrtPath* path);
	::java::io::OutputStream* newOutputStream(::jdk::internal::jrtfs::JrtPath* jrtPath, $Array<::java::nio::file::OpenOption>* options);
	virtual ::java::nio::file::WatchService* newWatchService() override;
	virtual ::java::nio::file::spi::FileSystemProvider* provider() override;
	static ::java::nio::file::ReadOnlyFileSystemException* readOnly();
	virtual ::jdk::internal::jrtfs::JrtPath* resolveLink(::jdk::internal::jrtfs::JrtPath* path);
	void setTimes(::jdk::internal::jrtfs::JrtPath* jrtPath, ::java::nio::file::attribute::FileTime* mtime, ::java::nio::file::attribute::FileTime* atime, ::java::nio::file::attribute::FileTime* ctime);
	virtual ::java::util::Set* supportedFileAttributeViews() override;
	virtual ::jdk::internal::jrtfs::JrtPath* toRealPath(::jdk::internal::jrtfs::JrtPath* path, $Array<::java::nio::file::LinkOption>* options);
	virtual $String* toString() override;
	::jdk::internal::jrtfs::JrtFileSystemProvider* provider$ = nullptr;
	::jdk::internal::jrtfs::JrtPath* rootPath = nullptr;
	$volatile(bool) isOpen$ = false;
	$volatile(bool) isClosable = false;
	::jdk::internal::jrtfs::SystemImage* image = nullptr;
	static ::java::util::Set* supportedFileAttributeViews$;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_JrtFileSystem_h_