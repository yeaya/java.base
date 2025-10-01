#ifndef _TestProvider_h_
#define _TestProvider_h_
//$ class TestProvider
//$ extends java.nio.file.spi.FileSystemProvider

#include <java/lang/Array.h>
#include <java/nio/file/spi/FileSystemProvider.h>

class TestProvider$TestFileSystem;
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

class $export TestProvider : public ::java::nio::file::spi::FileSystemProvider {
	$class(TestProvider, $NO_CLASS_INIT, ::java::nio::file::spi::FileSystemProvider)
public:
	TestProvider();
	void init$(::java::nio::file::spi::FileSystemProvider* defaultProvider);
	virtual void checkAccess(::java::nio::file::Path* file, $Array<::java::nio::file::AccessMode>* modes) override;
	virtual void copy(::java::nio::file::Path* source, ::java::nio::file::Path* target, $Array<::java::nio::file::CopyOption>* options) override;
	virtual void createDirectory(::java::nio::file::Path* dir, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual void createLink(::java::nio::file::Path* link, ::java::nio::file::Path* existing) override;
	virtual void createSymbolicLink(::java::nio::file::Path* link, ::java::nio::file::Path* target, $Array<::java::nio::file::attribute::FileAttribute>* attrs) override;
	virtual ::java::nio::file::spi::FileSystemProvider* defaultProvider();
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
	::java::nio::file::spi::FileSystemProvider* defaultProvider$ = nullptr;
	::TestProvider$TestFileSystem* theFileSystem = nullptr;
};

#endif // _TestProvider_h_