#ifndef _B6827999$MyURLClassLoader_h_
#define _B6827999$MyURLClassLoader_h_
//$ class B6827999$MyURLClassLoader
//$ extends java.net.URLClassLoader

#include <java/lang/Array.h>
#include <java/net/URLClassLoader.h>

namespace java {
	namespace net {
		class URL;
	}
}

class $export B6827999$MyURLClassLoader : public ::java::net::URLClassLoader {
	$class(B6827999$MyURLClassLoader, $NO_CLASS_INIT, ::java::net::URLClassLoader)
public:
	B6827999$MyURLClassLoader();
	using ::java::net::URLClassLoader::findClass;
	using ::java::net::URLClassLoader::definePackage;
	using ::java::net::URLClassLoader::findResource;
	using ::java::net::URLClassLoader::defineClass;
	void init$($Array<::java::net::URL>* urls);
	virtual void addURL(::java::net::URL* url) override;
};

#endif // _B6827999$MyURLClassLoader_h_