#ifndef _sun_text_resources_BreakIteratorInfoProvider_h_
#define _sun_text_resources_BreakIteratorInfoProvider_h_
//$ interface sun.text.resources.BreakIteratorInfoProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace text {
		namespace resources {

class BreakIteratorInfoProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(BreakIteratorInfoProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_BreakIteratorInfoProvider_h_