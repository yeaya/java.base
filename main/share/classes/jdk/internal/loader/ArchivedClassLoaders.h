#ifndef _jdk_internal_loader_ArchivedClassLoaders_h_
#define _jdk_internal_loader_ArchivedClassLoaders_h_
//$ class jdk.internal.loader.ArchivedClassLoaders
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ServicesCatalog;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class ArchivedClassLoaders : public ::java::lang::Object {
	$class(ArchivedClassLoaders, $PRELOAD, ::java::lang::Object)
public:
	ArchivedClassLoaders();
	void init$();
	virtual ::java::lang::ClassLoader* appLoader();
	static void archive();
	virtual ::java::lang::ClassLoader* bootLoader();
	static ::jdk::internal::loader::ArchivedClassLoaders* get();
	virtual ::java::util::Map* packageToModule();
	virtual ::java::lang::ClassLoader* platformLoader();
	virtual ::jdk::internal::module::ServicesCatalog* servicesCatalog(::java::lang::ClassLoader* loader);
	static ::jdk::internal::loader::ArchivedClassLoaders* archivedClassLoaders;
	::java::lang::ClassLoader* bootLoader$ = nullptr;
	::java::lang::ClassLoader* platformLoader$ = nullptr;
	::java::lang::ClassLoader* appLoader$ = nullptr;
	$Array<::jdk::internal::module::ServicesCatalog>* servicesCatalogs = nullptr;
	::java::util::Map* packageToModule$ = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_ArchivedClassLoaders_h_