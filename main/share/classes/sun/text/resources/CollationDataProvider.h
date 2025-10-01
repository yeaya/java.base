#ifndef _sun_text_resources_CollationDataProvider_h_
#define _sun_text_resources_CollationDataProvider_h_
//$ interface sun.text.resources.CollationDataProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace text {
		namespace resources {

class CollationDataProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(CollationDataProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_CollationDataProvider_h_