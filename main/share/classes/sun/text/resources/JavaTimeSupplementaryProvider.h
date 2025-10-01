#ifndef _sun_text_resources_JavaTimeSupplementaryProvider_h_
#define _sun_text_resources_JavaTimeSupplementaryProvider_h_
//$ interface sun.text.resources.JavaTimeSupplementaryProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace sun {
	namespace text {
		namespace resources {

class JavaTimeSupplementaryProvider : public ::java::util::spi::ResourceBundleProvider {
	$interface(JavaTimeSupplementaryProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
};

		} // resources
	} // text
} // sun

#endif // _sun_text_resources_JavaTimeSupplementaryProvider_h_