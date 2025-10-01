#ifndef _sun_util_resources_cldr_CurrencyNamesProvider_h_
#define _sun_util_resources_cldr_CurrencyNamesProvider_h_
//$ interface sun.util.resources.cldr.CurrencyNamesProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

class CurrencyNamesProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(CurrencyNamesProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_CurrencyNamesProvider_h_