#ifndef _java_util_spi_ResourceBundleProvider_h_
#define _java_util_spi_ResourceBundleProvider_h_
//$ interface java.util.spi.ResourceBundleProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Locale;
		class ResourceBundle;
	}
}

namespace java {
	namespace util {
		namespace spi {

class $export ResourceBundleProvider : public ::java::lang::Object {
	$interface(ResourceBundleProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* locale) {return nullptr;}
};

		} // spi
	} // util
} // java

#endif // _java_util_spi_ResourceBundleProvider_h_