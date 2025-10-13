#ifndef _jdk_internal_loader_ClassLoaders_h_
#define _jdk_internal_loader_ClassLoaders_h_
//$ class jdk.internal.loader.ClassLoaders
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("APP_LOADER")
#undef APP_LOADER
#pragma push_macro("BOOT_LOADER")
#undef BOOT_LOADER
#pragma push_macro("JLA")
#undef JLA
#pragma push_macro("PLATFORM_LOADER")
#undef PLATFORM_LOADER

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
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class BuiltinClassLoader;
			class ClassLoaders$AppClassLoader;
			class ClassLoaders$BootClassLoader;
			class ClassLoaders$PlatformClassLoader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class $export ClassLoaders : public ::java::lang::Object {
	$class(ClassLoaders, $PRELOAD, ::java::lang::Object)
public:
	ClassLoaders();
	void init$();
	static ::java::lang::ClassLoader* appClassLoader();
	static ::jdk::internal::loader::BuiltinClassLoader* bootLoader();
	static ::java::lang::ClassLoader* platformClassLoader();
	static void setArchivedServicesCatalog(::java::lang::ClassLoader* loader);
	static ::java::net::URL* toFileURL($String* s);
	static ::jdk::internal::access::JavaLangAccess* JLA;
	static ::jdk::internal::loader::ClassLoaders$BootClassLoader* BOOT_LOADER;
	static ::jdk::internal::loader::ClassLoaders$PlatformClassLoader* PLATFORM_LOADER;
	static ::jdk::internal::loader::ClassLoaders$AppClassLoader* APP_LOADER;
};

		} // loader
	} // internal
} // jdk

#pragma pop_macro("APP_LOADER")
#pragma pop_macro("BOOT_LOADER")
#pragma pop_macro("JLA")
#pragma pop_macro("PLATFORM_LOADER")

#endif // _jdk_internal_loader_ClassLoaders_h_