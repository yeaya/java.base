#ifndef _java_nio_file_spi_FileSystemProvider_h_
#define _java_nio_file_spi_FileSystemProvider_h_
//$ class java.nio.file.spi.FileSystemProvider
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_OPEN_OPTIONS")
#undef DEFAULT_OPEN_OPTIONS

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
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
		class List;
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

namespace java {
	namespace nio {
		namespace file {
			namespace spi {

class $import FileSystemProvider : public ::java::lang::Object {
	$class(FileSystemProvider, 0, ::java::lang::Object)
public:
	FileSystemProvider();
	void init$(::java::lang::Void* ignore);
	void init$();
	virtual void checkAccess(::java::nio::file::Path* path, $Array<::java::nio::file::AccessMode>* modes) {}
	static ::java::lang::Void* checkPermission();
	virtual void copy(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) {}
	virtual void createDirectory(::java::nio::file::Path* dir, $Array<::java::nio::file::attribute::FileAttribute>* attrs) {}
	virtual void createLink(::java::nio::file::Path* link, ::java::nio::file::Path* existing);
	virtual void createSymbolicLink(::java::nio::file::Path* link, ::java::nio::file::Path* target, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	virtual void delete$(::java::nio::file::Path* path) {}
	virtual bool deleteIfExists(::java::nio::file::Path* path);
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(::java::nio::file::Path* path, $Class* type, $Array<::java::nio::file::LinkOption>* options) {return nullptr;}
	virtual ::java::nio::file::FileStore* getFileStore(::java::nio::file::Path* path) {return nullptr;}
	virtual ::java::nio::file::FileSystem* getFileSystem(::java::net::URI* uri) {return nullptr;}
	virtual ::java::nio::file::Path* getPath(::java::net::URI* uri) {return nullptr;}
	virtual $String* getScheme() {return nullptr;}
	static ::java::util::List* installedProviders();
	virtual bool isHidden(::java::nio::file::Path* path) {return false;}
	virtual bool isSameFile(::java::nio::file::Path* path, ::java::nio::file::Path* path2) {return false;}
	static ::java::util::List* loadInstalledProviders();
	virtual void move(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) {}
	virtual ::java::nio::channels::AsynchronousFileChannel* newAsynchronousFileChannel(::java::nio::file::Path* path, ::java::util::Set* options, ::java::util::concurrent::ExecutorService* executor, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	virtual ::java::nio::channels::SeekableByteChannel* newByteChannel(::java::nio::file::Path* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) {return nullptr;}
	virtual ::java::nio::file::DirectoryStream* newDirectoryStream(::java::nio::file::Path* dir, ::java::nio::file::DirectoryStream$Filter* filter) {return nullptr;}
	virtual ::java::nio::channels::FileChannel* newFileChannel(::java::nio::file::Path* path, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	virtual ::java::nio::file::FileSystem* newFileSystem(::java::net::URI* uri, ::java::util::Map* env) {return nullptr;}
	virtual ::java::nio::file::FileSystem* newFileSystem(::java::nio::file::Path* path, ::java::util::Map* env);
	virtual ::java::io::InputStream* newInputStream(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options);
	virtual ::java::io::OutputStream* newOutputStream(::java::nio::file::Path* path, $Array<::java::nio::file::OpenOption>* options);
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes(::java::nio::file::Path* path, $Class* type, $Array<::java::nio::file::LinkOption>* options) {return nullptr;}
	virtual ::java::util::Map* readAttributes(::java::nio::file::Path* path, $String* attributes, $Array<::java::nio::file::LinkOption>* options) {return nullptr;}
	virtual ::java::nio::file::Path* readSymbolicLink(::java::nio::file::Path* link);
	virtual void setAttribute(::java::nio::file::Path* path, $String* attribute, Object$* value, $Array<::java::nio::file::LinkOption>* options) {}
	static $Object* lock;
	static $volatile(::java::util::List*) installedProviders$;
	static bool loadingProviders;
	static ::java::util::Set* DEFAULT_OPEN_OPTIONS;
};

			} // spi
		} // file
	} // nio
} // java

#pragma pop_macro("DEFAULT_OPEN_OPTIONS")

#endif // _java_nio_file_spi_FileSystemProvider_h_