#ifndef _sun_util_locale_provider_AuxLocaleProviderAdapter$NullProvider_h_
#define _sun_util_locale_provider_AuxLocaleProviderAdapter$NullProvider_h_
//$ class sun.util.locale.provider.AuxLocaleProviderAdapter$NullProvider
//$ extends java.util.spi.LocaleServiceProvider

#include <java/lang/Array.h>
#include <java/util/spi/LocaleServiceProvider.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class AuxLocaleProviderAdapter$NullProvider : public ::java::util::spi::LocaleServiceProvider {
	$class(AuxLocaleProviderAdapter$NullProvider, $NO_CLASS_INIT, ::java::util::spi::LocaleServiceProvider)
public:
	AuxLocaleProviderAdapter$NullProvider();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_AuxLocaleProviderAdapter$NullProvider_h_