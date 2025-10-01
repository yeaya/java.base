#ifndef _java_util_ResourceBundle$ResourceBundleProviderHelper_h_
#define _java_util_ResourceBundle$ResourceBundleProviderHelper_h_
//$ class java.util.ResourceBundle$ResourceBundleProviderHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Module;
		class Void;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class ResourceBundle;
	}
}

namespace java {
	namespace util {

class ResourceBundle$ResourceBundleProviderHelper : public ::java::lang::Object {
	$class(ResourceBundle$ResourceBundleProviderHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ResourceBundle$ResourceBundleProviderHelper();
	void init$();
	static bool isAccessible(::java::lang::Module* callerModule, ::java::lang::Module* module, $String* pn);
	static ::java::io::InputStream* lambda$loadPropertyResourceBundle$2($String* bundleName, ::java::lang::Module* module, ::java::lang::Module* callerModule);
	static $Class* lambda$loadResourceBundle$1(::java::lang::Module* module, $String* bundleName);
	static ::java::lang::Void* lambda$newResourceBundle$0(::java::lang::reflect::Constructor* ctor);
	static ::java::util::ResourceBundle* loadPropertyResourceBundle(::java::lang::Module* callerModule, ::java::lang::Module* module, $String* baseName, ::java::util::Locale* locale);
	static ::java::util::ResourceBundle* loadResourceBundle(::java::lang::Module* callerModule, ::java::lang::Module* module, $String* baseName, ::java::util::Locale* locale);
	static ::java::util::ResourceBundle* newResourceBundle($Class* bundleClass);
	static $String* toPackageName($String* bundleName);
};

	} // util
} // java

#endif // _java_util_ResourceBundle$ResourceBundleProviderHelper_h_