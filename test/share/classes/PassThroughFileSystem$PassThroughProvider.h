#ifndef _PassThroughFileSystem$PassThroughProvider_h_
#define _PassThroughFileSystem$PassThroughProvider_h_
//$ class PassThroughFileSystem$PassThroughProvider
//$ extends java.nio.file.spi.FileSystemProvider

#include <java/lang/Array.h>
#include <java/nio/file/spi/FileSystemProvider.h>

#pragma push_macro("SCHEME")
#undef SCHEME

class PassThroughFileSystem;
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace channels {
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
	namespace util {
		class Map;
		class Set;
	}
}

class PassThroughFileSystem$PassThroughProvider : public ::java::nio::file::spi::FileSystemProvider {
	$class(PassThroughFileSystem$PassThroughProvider, 0, ::java::nio::file::spi::FileSystemProvider)
public:
	PassThroughFileSystem$PassThroughProvider();
	void init$();
	virtual void checkAccess(::java::nio::file::Path* file, $Array<::java::nio::file::AccessMode>* modes) override;
	void checkScheme(::java::net::URI* uri);
	void checkUri(::java::net::URI* uri);
	virtual void copy(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) override;
	virtual void createDirectory(::java::nio::file::Path* dir, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual void createLink(::java::nio::file::Path* link, ::java::nio::file::Path* existing) override;
	virtual void createSymbolicLink(::java::nio::file::Path* link, ::java::nio::file::Path* target, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual void delete$(::java::nio::file::Path* file) override;
	virtual ::java::nio::file::attribute::FileAttributeView* getFileAttributeView(::java::nio::file::Path* file, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::FileStore* getFileStore(::java::nio::file::Path* file) override;
	virtual ::java::nio::file::FileSystem* getFileSystem(::java::net::URI* uri) override;
	virtual ::java::nio::file::Path* getPath(::java::net::URI* uri) override;
	virtual $String* getScheme() override;
	virtual bool isHidden(::java::nio::file::Path* file) override;
	virtual bool isSameFile(::java::nio::file::Path* file, ::java::nio::file::Path* other) override;
	virtual void move(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) override;
	virtual ::java::nio::channels::SeekableByteChannel* newByteChannel(::java::nio::file::Path* file, ::java::util::Set* options, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual ::java::nio::file::DirectoryStream* newDirectoryStream(::java::nio::file::Path* dir, ::java::nio::file::DirectoryStream$Filter* filter) override;
	using ::java::nio::file::spi::FileSystemProvider::newFileSystem;
	virtual ::java::nio::file::FileSystem* newFileSystem(::java::net::URI* uri, ::java::util::Map* env) override;
	virtual ::java::util::Map* readAttributes(::java::nio::file::Path* file, $String* attributes, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes(::java::nio::file::Path* file, $Class* type, $Array<::java::nio::file::LinkOption>* options) override;
	virtual ::java::nio::file::Path* readSymbolicLink(::java::nio::file::Path* link) override;
	virtual void setAttribute(::java::nio::file::Path* file, $String* attribute, Object$* value, $Array<::java::nio::file::LinkOption>* options) override;
	::java::nio::file::DirectoryStream* wrap(::java::nio::file::DirectoryStream* stream);
	static $String* SCHEME;
	static $volatile(::PassThroughFileSystem*) delegate;
};

#pragma pop_macro("SCHEME")

#endif // _PassThroughFileSystem$PassThroughProvider_h_