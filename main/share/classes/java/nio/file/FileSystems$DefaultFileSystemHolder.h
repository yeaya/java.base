#ifndef _java_nio_file_FileSystems$DefaultFileSystemHolder_h_
#define _java_nio_file_FileSystems$DefaultFileSystemHolder_h_
//$ class java.nio.file.FileSystems$DefaultFileSystemHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
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
	namespace nio {
		namespace file {

class FileSystems$DefaultFileSystemHolder : public ::java::lang::Object {
	$class(FileSystems$DefaultFileSystemHolder, 0, ::java::lang::Object)
public:
	FileSystems$DefaultFileSystemHolder();
	void init$();
	static ::java::nio::file::FileSystem* defaultFileSystem();
	static ::java::nio::file::spi::FileSystemProvider* getDefaultProvider();
	static ::java::nio::file::FileSystem* defaultFileSystem$;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileSystems$DefaultFileSystemHolder_h_