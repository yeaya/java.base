#ifndef _java_nio_file_FileSystems_h_
#define _java_nio_file_FileSystems_h_
//$ class java.nio.file.FileSystems
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace nio {
		namespace file {

class $export FileSystems : public ::java::lang::Object {
	$class(FileSystems, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FileSystems();
	void init$();
	static ::java::nio::file::FileSystem* getDefault();
	static ::java::nio::file::FileSystem* getFileSystem(::java::net::URI* uri);
	static ::java::nio::file::FileSystem* newFileSystem(::java::net::URI* uri, ::java::util::Map* env);
	static ::java::nio::file::FileSystem* newFileSystem(::java::net::URI* uri, ::java::util::Map* env, ::java::lang::ClassLoader* loader);
	static ::java::nio::file::FileSystem* newFileSystem(::java::nio::file::Path* path, ::java::lang::ClassLoader* loader);
	static ::java::nio::file::FileSystem* newFileSystem(::java::nio::file::Path* path, ::java::util::Map* env);
	static ::java::nio::file::FileSystem* newFileSystem(::java::nio::file::Path* path);
	static ::java::nio::file::FileSystem* newFileSystem(::java::nio::file::Path* path, ::java::util::Map* env, ::java::lang::ClassLoader* loader);
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileSystems_h_