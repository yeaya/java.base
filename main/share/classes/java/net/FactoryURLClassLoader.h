#ifndef _java_net_FactoryURLClassLoader_h_
#define _java_net_FactoryURLClassLoader_h_
//$ class java.net.FactoryURLClassLoader
//$ extends java.net.URLClassLoader

#include <java/lang/Array.h>
#include <java/net/URLClassLoader.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace net {

class FactoryURLClassLoader : public ::java::net::URLClassLoader {
	$class(FactoryURLClassLoader, 0, ::java::net::URLClassLoader)
public:
	FactoryURLClassLoader();
	using ::java::net::URLClassLoader::findClass;
	using ::java::net::URLClassLoader::definePackage;
	using ::java::net::URLClassLoader::findResource;
	using ::java::net::URLClassLoader::defineClass;
	void init$($String* name, $Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent, ::java::security::AccessControlContext* acc);
	void init$($Array<::java::net::URL>* urls, ::java::security::AccessControlContext* acc);
	using ::java::net::URLClassLoader::loadClass;
	virtual $Class* loadClass($String* name, bool resolve) override;
};

	} // net
} // java

#endif // _java_net_FactoryURLClassLoader_h_