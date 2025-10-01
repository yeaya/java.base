#ifndef _sun_util_resources_CalendarDataProvider_h_
#define _sun_util_resources_CalendarDataProvider_h_
//$ interface sun.util.resources.CalendarDataProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace util {
		namespace resources {

class $import CalendarDataProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(CalendarDataProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_CalendarDataProvider_h_