#ifndef _jdk_internal_loader_ClassLoaders$AppClassLoader_h_
#define _jdk_internal_loader_ClassLoaders$AppClassLoader_h_
//$ class jdk.internal.loader.ClassLoaders$AppClassLoader
//$ extends jdk.internal.loader.BuiltinClassLoader

#include <jdk/internal/loader/BuiltinClassLoader.h>

namespace java {
	namespace lang {
		class Package;
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
		namespace jar {
			class Manifest;
		}
	}
}
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

class ClassLoaders$AppClassLoader : public ::jdk::internal::loader::BuiltinClassLoader {
	$class(ClassLoaders$AppClassLoader, $PRELOAD, ::jdk::internal::loader::BuiltinClassLoader)
public:
	ClassLoaders$AppClassLoader();
	using ::jdk::internal::loader::BuiltinClassLoader::defineClass;
	void init$(::jdk::internal::loader::BuiltinClassLoader* parent, ::jdk::internal::loader::URLClassPath* ucp);
	virtual void appendToClassPathForInstrumentation($String* path);
	virtual ::java::lang::Package* defineOrCheckPackage($String* pn, ::java::util::jar::Manifest* man, ::java::net::URL* url) override;
	virtual ::java::security::PermissionCollection* getPermissions(::java::security::CodeSource* cs) override;
	using ::jdk::internal::loader::BuiltinClassLoader::loadClass;
	virtual $Class* loadClass($String* cn, bool resolve) override;
	void resetArchivedStates();
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_ClassLoaders$AppClassLoader_h_