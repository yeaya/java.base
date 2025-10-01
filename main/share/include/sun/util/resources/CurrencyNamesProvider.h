#ifndef _sun_util_resources_CurrencyNamesProvider_h_
#define _sun_util_resources_CurrencyNamesProvider_h_
//$ interface sun.util.resources.CurrencyNamesProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace util {
		namespace resources {

class $import CurrencyNamesProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(CurrencyNamesProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_CurrencyNamesProvider_h_