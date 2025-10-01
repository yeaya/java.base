#ifndef _jdk_internal_loader_ClassLoaders$PlatformClassLoader_h_
#define _jdk_internal_loader_ClassLoaders$PlatformClassLoader_h_
//$ class jdk.internal.loader.ClassLoaders$PlatformClassLoader
//$ extends jdk.internal.loader.BuiltinClassLoader

#include <jdk/internal/loader/BuiltinClassLoader.h>

namespace jdk {
	namespace internal {
		namespace loader {
			class ClassLoaders$BootClassLoader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class ClassLoaders$PlatformClassLoader : public ::jdk::internal::loader::BuiltinClassLoader {
	$class(ClassLoaders$PlatformClassLoader, $PRELOAD, ::jdk::internal::loader::BuiltinClassLoader)
public:
	ClassLoaders$PlatformClassLoader();
	using ::jdk::internal::loader::BuiltinClassLoader::defineClass;
	void init$(::jdk::internal::loader::ClassLoaders$BootClassLoader* parent);
	using ::jdk::internal::loader::BuiltinClassLoader::loadClass;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_ClassLoaders$PlatformClassLoader_h_