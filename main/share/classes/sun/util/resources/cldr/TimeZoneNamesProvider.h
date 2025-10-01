#ifndef _sun_util_resources_cldr_TimeZoneNamesProvider_h_
#define _sun_util_resources_cldr_TimeZoneNamesProvider_h_
//$ interface sun.util.resources.cldr.TimeZoneNamesProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

class TimeZoneNamesProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(TimeZoneNamesProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_TimeZoneNamesProvider_h_