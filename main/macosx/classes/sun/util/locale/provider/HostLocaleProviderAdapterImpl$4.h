#ifndef _sun_util_locale_provider_HostLocaleProviderAdapterImpl$4_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapterImpl$4_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapterImpl$4
//$ extends java.text.spi.NumberFormatProvider

#include <java/lang/Array.h>
#include <java/text/spi/NumberFormatProvider.h>

namespace java {
	namespace text {
		class NumberFormat;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class HostLocaleProviderAdapterImpl$4 : public ::java::text::spi::NumberFormatProvider {
	$class(HostLocaleProviderAdapterImpl$4, $NO_CLASS_INIT, ::java::text::spi::NumberFormatProvider)
public:
	HostLocaleProviderAdapterImpl$4();
	void init$();
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::NumberFormat* getCurrencyInstance(::java::util::Locale* locale) override;
	virtual ::java::text::NumberFormat* getIntegerInstance(::java::util::Locale* locale) override;
	virtual ::java::text::NumberFormat* getNumberInstance(::java::util::Locale* locale) override;
	$String* getNumberPattern(int32_t style, ::java::util::Locale* locale);
	virtual ::java::text::NumberFormat* getPercentInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapterImpl$4_h_