#ifndef _sun_text_resources_cldr_FormatDataProvider_h_
#define _sun_text_resources_cldr_FormatDataProvider_h_
//$ interface sun.text.resources.cldr.FormatDataProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {

class FormatDataProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(FormatDataProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

			} // cldr
		} // resources
	} // text
} // sun

#endif // _sun_text_resources_cldr_FormatDataProvider_h_