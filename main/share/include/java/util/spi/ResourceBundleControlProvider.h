#ifndef _java_util_spi_ResourceBundleControlProvider_h_
#define _java_util_spi_ResourceBundleControlProvider_h_
//$ interface java.util.spi.ResourceBundleControlProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class ResourceBundle$Control;
	}
}

namespace java {
	namespace util {
		namespace spi {

class $import ResourceBundleControlProvider : public ::java::lang::Object {
	$interface(ResourceBundleControlProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::ResourceBundle$Control* getControl($String* baseName) {return nullptr;}
};

		} // spi
	} // util
} // java

#endif // _java_util_spi_ResourceBundleControlProvider_h_