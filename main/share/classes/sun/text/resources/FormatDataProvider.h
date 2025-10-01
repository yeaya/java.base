#ifndef _sun_text_resources_FormatDataProvider_h_
#define _sun_text_resources_FormatDataProvider_h_
//$ interface sun.text.resources.FormatDataProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace text {
		namespace resources {

class FormatDataProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(FormatDataProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_FormatDataProvider_h_