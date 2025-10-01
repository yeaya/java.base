#ifndef _jdk_internal_loader_Loader_h_
#define _jdk_internal_loader_Loader_h_
//$ class jdk.internal.loader.Loader
//$ extends java.security.SecureClassLoader

#include <java/security/SecureClassLoader.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class InternalError;
		class ModuleLayer;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class Configuration;
			class ModuleReader;
			class ModuleReference;
			class ResolvedModule;
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
		class AccessControlContext;
		class CodeSource;
		class PermissionCollection;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Enumeration;
		class List;
		class Map;
		class Optional;
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class Loader$LoadedModule;
			class LoaderPool;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $export Loader : public ::java::security::SecureClassLoader {
	$class(Loader, 0, ::java::security::SecureClassLoader)
public:
	Loader();
	using ::java::security::SecureClassLoader::defineClass;
	void init$(::java::lang::module::ResolvedModule* resolvedModule, ::jdk::internal::loader::LoaderPool* pool, ::java::lang::ClassLoader* parent);
	void init$(::java::util::Collection* modules, ::java::lang::ClassLoader* parent);
	::java::lang::module::ModuleReader* createModuleReader(::java::lang::module::ModuleReference* mref);
	$Class* defineClass($String* cn, ::jdk::internal::loader::Loader$LoadedModule* loadedModule);
	virtual $Class* findClass($String* cn) override;
	virtual $Class* findClass($String* mn, $String* cn) override;
	$Class* findClassInModuleOrNull(::jdk::internal::loader::Loader$LoadedModule* loadedModule, $String* cn);
	::jdk::internal::loader::Loader$LoadedModule* findLoadedModule($String* cn);
	::java::util::Optional* findModuleLayer(::java::lang::ModuleLayer* parent, ::java::lang::module::Configuration* cf);
	virtual ::java::net::URL* findResource($String* mn, $String* name) override;
	virtual ::java::net::URL* findResource($String* name) override;
	virtual ::java::util::Enumeration* findResources($String* name) override;
	::java::util::List* findResourcesAsList($String* name);
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* cs) override;
	virtual ::java::net::URL* getResource($String* name) override;
	virtual ::java::util::Enumeration* getResources($String* name) override;
	::jdk::internal::loader::Loader* initRemotePackageMap(::java::lang::module::Configuration* cf, ::java::util::List* parentModuleLayers);
	bool isOpen(::java::lang::module::ModuleReference* mref, $String* pn);
	$Class* lambda$findClassInModuleOrNull$6($String* cn, ::jdk::internal::loader::Loader$LoadedModule* loadedModule);
	static bool lambda$findModuleLayer$5(::java::lang::module::Configuration* cf, ::java::lang::ModuleLayer* l);
	::java::util::Optional* lambda$initRemotePackageMap$2(::java::lang::module::ResolvedModule* other, ::java::lang::ModuleLayer* parent);
	static ::java::lang::InternalError* lambda$initRemotePackageMap$3();
	void lambda$initRemotePackageMap$4(::java::lang::ClassLoader* l, $String* pn);
	::java::lang::module::ModuleReader* lambda$moduleReaderFor$7(::java::lang::module::ModuleReference* mref, ::java::lang::module::ModuleReference* m);
	static void lambda$new$0(::java::util::Map* localPackageToModule, ::jdk::internal::loader::Loader$LoadedModule* lm, $String* pn);
	static void lambda$new$1(::java::lang::module::ModuleReference* mref, ::java::util::Map* localPackageToModule, $String* pn);
	using ::java::security::SecureClassLoader::loadClass;
	virtual $Class* loadClass($String* cn, bool resolve) override;
	::java::lang::module::ModuleReader* moduleReaderFor(::java::lang::module::ModuleReference* mref);
	$String* packageName($String* cn);
	::jdk::internal::loader::LoaderPool* pool();
	void remotePackage($String* pn, ::java::lang::ClassLoader* loader);
	static bool $assertionsDisabled;
	::jdk::internal::loader::LoaderPool* pool$ = nullptr;
	::java::lang::ClassLoader* parent = nullptr;
	::java::util::Map* nameToModule = nullptr;
	::java::util::Map* localPackageToModule = nullptr;
	::java::util::Map* remotePackageToLoader = nullptr;
	::java::util::Map* moduleToReader = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_Loader_h_