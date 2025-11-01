#ifndef _sun_util_locale_provider_NumberFormatProviderImpl_h_
#define _sun_util_locale_provider_NumberFormatProviderImpl_h_
//$ class sun.util.locale.provider.NumberFormatProviderImpl
//$ extends java.text.spi.NumberFormatProvider
//$ implements sun.util.locale.provider.AvailableLanguageTags

#include <java/lang/Array.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <sun/util/locale/provider/AvailableLanguageTags.h>

#pragma push_macro("ACCOUNTINGSTYLE")
#undef ACCOUNTINGSTYLE
#pragma push_macro("CURRENCYSTYLE")
#undef CURRENCYSTYLE
#pragma push_macro("INTEGERSTYLE")
#undef INTEGERSTYLE
#pragma push_macro("NUMBERSTYLE")
#undef NUMBERSTYLE
#pragma push_macro("PERCENTSTYLE")
#undef PERCENTSTYLE

namespace java {
	namespace text {
		class DecimalFormat;
		class DecimalFormatSymbols;
		class NumberFormat;
		class NumberFormat$Style;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Set;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleProviderAdapter$Type;
			}
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $import NumberFormatProviderImpl : public ::java::text::spi::NumberFormatProvider, public ::sun::util::locale::provider::AvailableLanguageTags {
	$class(NumberFormatProviderImpl, $NO_CLASS_INIT, ::java::text::spi::NumberFormatProvider, ::sun::util::locale::provider::AvailableLanguageTags)
public:
	NumberFormatProviderImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	static void adjustForCurrencyDefaultFractionDigits(::java::text::DecimalFormat* format, ::java::text::DecimalFormatSymbols* symbols);
	virtual ::java::util::Set* getAvailableLanguageTags() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::NumberFormat* getCompactNumberInstance(::java::util::Locale* locale, ::java::text::NumberFormat$Style* formatStyle) override;
	virtual ::java::text::NumberFormat* getCurrencyInstance(::java::util::Locale* locale) override;
	::java::text::NumberFormat* getInstance(::java::util::Locale* locale, int32_t choice);
	virtual ::java::text::NumberFormat* getIntegerInstance(::java::util::Locale* locale) override;
	virtual ::java::text::NumberFormat* getNumberInstance(::java::util::Locale* locale) override;
	virtual ::java::text::NumberFormat* getPercentInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	static const int32_t NUMBERSTYLE = 0;
	static const int32_t CURRENCYSTYLE = 1;
	static const int32_t PERCENTSTYLE = 2;
	static const int32_t ACCOUNTINGSTYLE = 3;
	static const int32_t INTEGERSTYLE = 4;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#pragma pop_macro("ACCOUNTINGSTYLE")
#pragma pop_macro("CURRENCYSTYLE")
#pragma pop_macro("INTEGERSTYLE")
#pragma pop_macro("NUMBERSTYLE")
#pragma pop_macro("PERCENTSTYLE")

#endif // _sun_util_locale_provider_NumberFormatProviderImpl_h_