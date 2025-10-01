#ifndef _sun_util_resources_LocaleData$LocaleDataResourceBundleProvider_h_
#define _sun_util_resources_LocaleData$LocaleDataResourceBundleProvider_h_
//$ class sun.util.resources.LocaleData$LocaleDataResourceBundleProvider
//$ extends java.util.spi.ResourceBundleProvider

#include <java/util/spi/ResourceBundleProvider.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace util {
		namespace resources {

class $export LocaleData$LocaleDataResourceBundleProvider : public ::java::util::spi::ResourceBundleProvider {
	$class(LocaleData$LocaleDataResourceBundleProvider, $NO_CLASS_INIT, ::java::util::spi::ResourceBundleProvider)
public:
	LocaleData$LocaleDataResourceBundleProvider();
	void init$();
	virtual $String* toBundleName($String* baseName, ::java::util::Locale* locale);
	virtual $String* toOtherBundleName($String* baseName, $String* bundleName, ::java::util::Locale* locale);
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_LocaleData$LocaleDataResourceBundleProvider_h_