#ifndef _sun_nio_fs_AbstractFileSystemProvider_h_
#define _sun_nio_fs_AbstractFileSystemProvider_h_
//$ class sun.nio.fs.AbstractFileSystemProvider
//$ extends java.nio.file.spi.FileSystemProvider

#include <java/lang/Array.h>
#include <java/nio/file/spi/FileSystemProvider.h>

namespace java {
	namespace nio {
		namespace file {
			class LinkOption;
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class DynamicFileAttributeView;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class $export AbstractFileSystemProvider : public ::java::nio::file::spi::FileSystemProvider {
	$class(AbstractFileSystemProvider, $NO_CLASS_INIT, ::java::nio::file::spi::FileSystemProvider)
public:
	AbstractFileSystemProvider();
	using ::java::nio::file::spi::FileSystemProvider::getFileAttributeView;
	void init$();
	virtual void delete$(::java::nio::file::Path* file) override;
	virtual bool deleteIfExists(::java::nio::file::Path* file) override;
	virtual bool exists(::java::nio::file::Path* file);
	virtual ::sun::nio::fs::DynamicFileAttributeView* getFileAttributeView(::java::nio::file::Path* file, $String* name, $Array<::java::nio::file::LinkOption>* options) {return nullptr;}
	virtual $bytes* getSunPathForSocketFile(::java::nio::file::Path* path) {return nullptr;}
	virtual bool implDelete(::java::nio::file::Path* file, bool failIfNotExists) {return false;}
	virtual bool isDirectory(::java::nio::file::Path* file);
	virtual bool isRegularFile(::java::nio::file::Path* file);
	using ::java::nio::file::spi::FileSystemProvider::readAttributes;
	virtual ::java::util::Map* readAttributes(::java::nio::file::Path* file, $String* attributes, $Array<::java::nio::file::LinkOption>* options) override;
	virtual void setAttribute(::java::nio::file::Path* file, $String* attribute, Object$* value, $Array<::java::nio::file::LinkOption>* options) override;
	static $StringArray* split($String* attribute);
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_AbstractFileSystemProvider_h_