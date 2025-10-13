#ifndef _java_util_spi_AbstractResourceBundleProvider_h_
#define _java_util_spi_AbstractResourceBundleProvider_h_
//$ class java.util.spi.AbstractResourceBundleProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/lang/Array.h>
#include <java/util/spi/ResourceBundleProvider.h>

#pragma push_macro("FORMAT_CLASS")
#undef FORMAT_CLASS
#pragma push_macro("FORMAT_PROPERTIES")
#undef FORMAT_PROPERTIES
#pragma push_macro("RB_ACCESS")
#undef RB_ACCESS

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Module;
	}
}
namespace java {
	namespace util {
		class Locale;
		class ResourceBundle;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaUtilResourceBundleAccess;
		}
	}
}

namespace java {
	namespace util {
		namespace spi {

class $import AbstractResourceBundleProvider : public ::java::util::spi::ResourceBundleProvider {
	$class(AbstractResourceBundleProvider, 0, ::java::util::spi::ResourceBundleProvider)
public:
	AbstractResourceBundleProvider();
	void init$();
	void init$($StringArray* formats);
	virtual ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* locale) override;
	::java::util::ResourceBundle* getBundle0(::java::lang::Module* module, $String* bundleName);
	static ::java::io::InputStream* lambda$loadPropertyResourceBundle$1(::java::lang::Module* module, $String* resourceName);
	static $Class* lambda$loadResourceBundle$0(::java::lang::Module* module, $String* bundleName);
	static ::java::util::ResourceBundle* loadPropertyResourceBundle(::java::lang::Module* module, $String* bundleName);
	static ::java::util::ResourceBundle* loadResourceBundle(::java::lang::Module* module, $String* bundleName);
	virtual $String* toBundleName($String* baseName, ::java::util::Locale* locale);
	static $String* toResourceName($String* bundleName, $String* suffix);
	static ::jdk::internal::access::JavaUtilResourceBundleAccess* RB_ACCESS;
	static $String* FORMAT_CLASS;
	static $String* FORMAT_PROPERTIES;
	$StringArray* formats = nullptr;
};

		} // spi
	} // util
} // java

#pragma pop_macro("FORMAT_CLASS")
#pragma pop_macro("FORMAT_PROPERTIES")
#pragma pop_macro("RB_ACCESS")

#endif // _java_util_spi_AbstractResourceBundleProvider_h_