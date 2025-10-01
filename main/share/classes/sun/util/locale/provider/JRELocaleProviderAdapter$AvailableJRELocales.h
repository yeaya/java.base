#ifndef _sun_util_locale_provider_JRELocaleProviderAdapter$AvailableJRELocales_h_
#define _sun_util_locale_provider_JRELocaleProviderAdapter$AvailableJRELocales_h_
//$ class sun.util.locale.provider.JRELocaleProviderAdapter$AvailableJRELocales
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

class JRELocaleProviderAdapter$AvailableJRELocales : public ::java::lang::Object {
	$class(JRELocaleProviderAdapter$AvailableJRELocales, 0, ::java::lang::Object)
public:
	JRELocaleProviderAdapter$AvailableJRELocales();
	void init$();
	static $Array<::java::util::Locale>* localeList;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_JRELocaleProviderAdapter$AvailableJRELocales_h_