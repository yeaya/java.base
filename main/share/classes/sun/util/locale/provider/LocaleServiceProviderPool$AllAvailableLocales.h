#ifndef _sun_util_locale_provider_LocaleServiceProviderPool$AllAvailableLocales_h_
#define _sun_util_locale_provider_LocaleServiceProviderPool$AllAvailableLocales_h_
//$ class sun.util.locale.provider.LocaleServiceProviderPool$AllAvailableLocales
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class LocaleServiceProviderPool$AllAvailableLocales : public ::java::lang::Object {
	$class(LocaleServiceProviderPool$AllAvailableLocales, 0, ::java::lang::Object)
public:
	LocaleServiceProviderPool$AllAvailableLocales();
	void init$();
	static $Array<::java::util::Locale>* allAvailableLocales;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_LocaleServiceProviderPool$AllAvailableLocales_h_