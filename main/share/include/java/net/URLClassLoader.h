#ifndef _java_net_URLClassLoader_h_
#define _java_net_URLClassLoader_h_
//$ class java.net.URLClassLoader
//$ extends java.security.SecureClassLoader
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>
#include <java/security/SecureClassLoader.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Package;
	}
}
namespace java {
	namespace net {
		class URL;
		class URLStreamHandlerFactory;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
		class CodeSource;
		class PermissionCollection;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class WeakHashMap;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Manifest;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class Resource;
			class URLClassPath;
		}
	}
}

namespace java {
	namespace net {

class $import URLClassLoader : public ::java::security::SecureClassLoader, public ::java::io::Closeable {
	$class(URLClassLoader, 0, ::java::security::SecureClassLoader, ::java::io::Closeable)
public:
	URLClassLoader();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::security::SecureClassLoader::defineClass;
	using ::java::security::SecureClassLoader::findClass;
	using ::java::security::SecureClassLoader::findResource;
	using ::java::security::SecureClassLoader::definePackage;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent);
	void init$($String* name, $Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent, ::java::security::AccessControlContext* acc);
	void init$($Array<::java::net::URL>* urls);
	void init$($Array<::java::net::URL>* urls, ::java::security::AccessControlContext* acc);
	void init$($Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent, ::java::net::URLStreamHandlerFactory* factory);
	void init$($String* name, $Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent);
	void init$($String* name, $Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent, ::java::net::URLStreamHandlerFactory* factory);
	virtual void addURL(::java::net::URL* url);
	virtual void close() override;
	$Class* defineClass($String* name, ::jdk::internal::loader::Resource* res);
	virtual ::java::lang::Package* definePackage($String* name, ::java::util::jar::Manifest* man, ::java::net::URL* url);
	virtual $Class* findClass($String* name) override;
	virtual ::java::net::URL* findResource($String* name) override;
	virtual ::java::util::Enumeration* findResources($String* name) override;
	::java::lang::Package* getAndVerifyPackage($String* pkgname, ::java::util::jar::Manifest* man, ::java::net::URL* url);
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* codesource) override;
	virtual ::java::io::InputStream* getResourceAsStream($String* name) override;
	virtual $Array<::java::net::URL>* getURLs();
	bool isSealed($String* name, ::java::util::jar::Manifest* man);
	static ::java::net::URLClassLoader* newInstance($Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent);
	static ::java::net::URLClassLoader* newInstance($Array<::java::net::URL>* urls);
	virtual $String* toString() override;
	::jdk::internal::loader::URLClassPath* ucp = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
	::java::util::WeakHashMap* closeables = nullptr;
};

	} // net
} // java

#endif // _java_net_URLClassLoader_h_