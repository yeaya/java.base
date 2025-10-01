#ifndef _sun_util_resources_LocaleNamesProvider_h_
#define _sun_util_resources_LocaleNamesProvider_h_
//$ interface sun.util.resources.LocaleNamesProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace util {
		namespace resources {

class $export LocaleNamesProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(LocaleNamesProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_LocaleNamesProvider_h_