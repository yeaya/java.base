#ifndef _jdk_internal_loader_ClassLoaders$BootClassLoader_h_
#define _jdk_internal_loader_ClassLoaders$BootClassLoader_h_
//$ class jdk.internal.loader.ClassLoaders$BootClassLoader
//$ extends jdk.internal.loader.BuiltinClassLoader

#include <jdk/internal/loader/BuiltinClassLoader.h>

namespace jdk {
	namespace internal {
		namespace loader {
			class URLClassPath;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class ClassLoaders$BootClassLoader : public ::jdk::internal::loader::BuiltinClassLoader {
	$class(ClassLoaders$BootClassLoader, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::loader::BuiltinClassLoader)
public:
	ClassLoaders$BootClassLoader();
	using ::jdk::internal::loader::BuiltinClassLoader::defineClass;
	void init$(::jdk::internal::loader::URLClassPath* bcp);
	using ::jdk::internal::loader::BuiltinClassLoader::loadClass;
	using ::jdk::internal::loader::BuiltinClassLoader::loadClassOrNull;
	virtual $Class* loadClassOrNull($String* cn, bool resolve) override;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_ClassLoaders$BootClassLoader_h_