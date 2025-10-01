#ifndef _GetURLsTest$MyURLClassLoader_h_
#define _GetURLsTest$MyURLClassLoader_h_
//$ class GetURLsTest$MyURLClassLoader
//$ extends java.net.URLClassLoader

#include <java/lang/Array.h>
#include <java/net/URLClassLoader.h>

namespace java {
	namespace net {
		class URL;
	}
}

class $export GetURLsTest$MyURLClassLoader : public ::java::net::URLClassLoader {
	$class(GetURLsTest$MyURLClassLoader, $NO_CLASS_INIT, ::java::net::URLClassLoader)
public:
	GetURLsTest$MyURLClassLoader();
	using ::java::net::URLClassLoader::findClass;
	using ::java::net::URLClassLoader::definePackage;
	using ::java::net::URLClassLoader::findResource;
	using ::java::net::URLClassLoader::defineClass;
	void init$($Array<::java::net::URL>* urls);
	virtual void addURL(::java::net::URL* url) override;
};

#endif // _GetURLsTest$MyURLClassLoader_h_