#ifndef _sun_util_resources_cldr_CalendarDataProvider_h_
#define _sun_util_resources_cldr_CalendarDataProvider_h_
//$ interface sun.util.resources.cldr.CalendarDataProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {

class CalendarDataProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(CalendarDataProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_CalendarDataProvider_h_