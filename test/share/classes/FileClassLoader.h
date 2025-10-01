#ifndef _FileClassLoader_h_
#define _FileClassLoader_h_
//$ class FileClassLoader
//$ extends java.net.URLClassLoader

#include <java/lang/Array.h>
#include <java/net/URLClassLoader.h>

namespace java {
	namespace net {
		class URL;
	}
}

class FileClassLoader : public ::java::net::URLClassLoader {
	$class(FileClassLoader, $NO_CLASS_INIT, ::java::net::URLClassLoader)
public:
	FileClassLoader();
	using ::java::net::URLClassLoader::findClass;
	using ::java::net::URLClassLoader::definePackage;
	using ::java::net::URLClassLoader::findResource;
	using ::java::net::URLClassLoader::defineClass;
	void init$($Array<::java::net::URL>* urls);
	virtual void testFindLoadedClass($String* name);
};

#endif // _FileClassLoader_h_