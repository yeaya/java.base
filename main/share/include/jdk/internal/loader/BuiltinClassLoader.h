#ifndef _jdk_internal_loader_BuiltinClassLoader_h_
#define _jdk_internal_loader_BuiltinClassLoader_h_
//$ class jdk.internal.loader.BuiltinClassLoader
//$ extends java.security.SecureClassLoader

#include <java/security/SecureClassLoader.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Package;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleReader;
			class ModuleReference;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class CodeSource;
		class PermissionCollection;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class List;
		class Map;
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
			class BuiltinClassLoader$LoadedModule;
			class Resource;
			class URLClassPath;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $import BuiltinClassLoader : public ::java::security::SecureClassLoader {
	$class(BuiltinClassLoader, $PRELOAD, ::java::security::SecureClassLoader)
public:
	BuiltinClassLoader();
	using ::java::security::SecureClassLoader::defineClass;
	using ::java::security::SecureClassLoader::definePackage;
	void init$($String* name, ::jdk::internal::loader::BuiltinClassLoader* parent, ::jdk::internal::loader::URLClassPath* ucp);
	virtual void appendClassPath($String* path);
	static ::java::net::URL* checkURL(::java::net::URL* url);
	$Class* defineClass($String* cn, ::jdk::internal::loader::BuiltinClassLoader$LoadedModule* loadedModule);
	$Class* defineClass($String* cn, ::jdk::internal::loader::Resource* res);
	virtual ::java::lang::Package* defineOrCheckPackage($String* pn, ::java::util::jar::Manifest* man, ::java::net::URL* url);
	::java::lang::Package* definePackage($String* pn, ::java::util::jar::Manifest* man, ::java::net::URL* url);
	virtual $Class* findClass($String* cn) override;
	virtual $Class* findClass($String* mn, $String* cn) override;
	$Class* findClassInModuleOrNull(::jdk::internal::loader::BuiltinClassLoader$LoadedModule* loadedModule, $String* cn);
	$Class* findClassOnClassPathOrNull($String* cn);
	::jdk::internal::loader::BuiltinClassLoader$LoadedModule* findLoadedModule($String* cn);
	::jdk::internal::loader::BuiltinClassLoader$LoadedModule* findLoadedModule($String* mn, $String* cn);
	::java::util::List* findMiscResource($String* name);
	virtual ::java::lang::module::ModuleReference* findModule($String* name);
	virtual ::java::net::URL* findResource($String* mn, $String* name) override;
	virtual ::java::net::URL* findResource($String* name) override;
	::java::net::URL* findResource(::java::lang::module::ModuleReference* mref, $String* name);
	virtual ::java::io::InputStream* findResourceAsStream($String* mn, $String* name);
	::java::net::URL* findResourceOnClassPath($String* name);
	::java::net::URL* findResourceOrNull(::java::lang::module::ModuleReference* mref, $String* name);
	virtual ::java::util::Enumeration* findResources($String* name) override;
	::java::util::Enumeration* findResourcesOnClassPath($String* name);
	::java::lang::Package* getAndVerifyPackage($String* pn, ::java::util::jar::Manifest* man, ::java::net::URL* url);
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* cs) override;
	virtual bool hasClassPath();
	bool isOpen(::java::lang::module::ModuleReference* mref, $String* pn);
	bool isSealed($String* pn, ::java::util::jar::Manifest* man);
	$Class* lambda$findClassInModuleOrNull$2($String* cn, ::jdk::internal::loader::BuiltinClassLoader$LoadedModule* loadedModule);
	::java::net::URL* lambda$findResourceOnClassPath$0($String* name);
	::java::util::Enumeration* lambda$findResourcesOnClassPath$1($String* name);
	using ::java::security::SecureClassLoader::loadClass;
	virtual $Class* loadClass($String* cn, bool resolve) override;
	virtual $Class* loadClassOrNull($String* cn, bool resolve);
	$Class* loadClassOrNull($String* cn);
	virtual void loadModule(::java::lang::module::ModuleReference* mref);
	::java::lang::module::ModuleReader* moduleReaderFor(::java::lang::module::ModuleReference* mref);
	static ::java::util::Map* packageToModule();
	void resetArchivedStates();
	virtual void setClassPath(::jdk::internal::loader::URLClassPath* ucp);
	static bool $assertionsDisabled;
	::jdk::internal::loader::BuiltinClassLoader* parent = nullptr;
	::jdk::internal::loader::URLClassPath* ucp = nullptr;
	static ::java::util::Map* packageToModule$;
	::java::util::Map* nameToModule = nullptr;
	::java::util::Map* moduleToReader = nullptr;
	$volatile(::java::lang::ref::SoftReference*) resourceCache = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_BuiltinClassLoader_h_