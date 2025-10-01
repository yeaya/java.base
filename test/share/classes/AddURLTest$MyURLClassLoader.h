#ifndef _AddURLTest$MyURLClassLoader_h_
#define _AddURLTest$MyURLClassLoader_h_
//$ class AddURLTest$MyURLClassLoader
//$ extends java.net.URLClassLoader

#include <java/lang/Array.h>
#include <java/net/URLClassLoader.h>

namespace java {
	namespace net {
		class URL;
	}
}

class $export AddURLTest$MyURLClassLoader : public ::java::net::URLClassLoader {
	$class(AddURLTest$MyURLClassLoader, $NO_CLASS_INIT, ::java::net::URLClassLoader)
public:
	AddURLTest$MyURLClassLoader();
	using ::java::net::URLClassLoader::findClass;
	using ::java::net::URLClassLoader::definePackage;
	using ::java::net::URLClassLoader::findResource;
	using ::java::net::URLClassLoader::defineClass;
	void init$($Array<::java::net::URL>* urls);
	virtual void addURL(::java::net::URL* url) override;
};

#endif // _AddURLTest$MyURLClassLoader_h_