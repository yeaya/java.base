#ifndef _sun_util_locale_provider_DateFormatSymbolsProviderImpl_h_
#define _sun_util_locale_provider_DateFormatSymbolsProviderImpl_h_
//$ class sun.util.locale.provider.DateFormatSymbolsProviderImpl
//$ extends java.text.spi.DateFormatSymbolsProvider
//$ implements sun.util.locale.provider.AvailableLanguageTags

#include <java/lang/Array.h>
#include <java/text/spi/DateFormatSymbolsProvider.h>
#include <sun/util/locale/provider/AvailableLanguageTags.h>

namespace java {
	namespace text {
		class DateFormatSymbols;
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

class $import DateFormatSymbolsProviderImpl : public ::java::text::spi::DateFormatSymbolsProvider, public ::sun::util::locale::provider::AvailableLanguageTags {
	$class(DateFormatSymbolsProviderImpl, $NO_CLASS_INIT, ::java::text::spi::DateFormatSymbolsProvider, ::sun::util::locale::provider::AvailableLanguageTags)
public:
	DateFormatSymbolsProviderImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	virtual ::java::util::Set* getAvailableLanguageTags() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::DateFormatSymbols* getInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_DateFormatSymbolsProviderImpl_h_