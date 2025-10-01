#ifndef _java_io_DefaultFileSystem_h_
#define _java_io_DefaultFileSystem_h_
//$ class java.io.DefaultFileSystem
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class FileSystem;
	}
}

namespace java {
	namespace io {

class DefaultFileSystem : public ::java::lang::Object {
	$class(DefaultFileSystem, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultFileSystem();
	void init$();
	static ::java::io::FileSystem* getFileSystem();
};

	} // io
} // java

#endif // _java_io_DefaultFileSystem_h_