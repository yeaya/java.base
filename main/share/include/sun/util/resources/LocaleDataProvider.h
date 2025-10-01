#ifndef _sun_util_resources_LocaleDataProvider_h_
#define _sun_util_resources_LocaleDataProvider_h_
//$ interface sun.util.resources.LocaleDataProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace util {
		namespace resources {

class $import LocaleDataProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(LocaleDataProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_LocaleDataProvider_h_