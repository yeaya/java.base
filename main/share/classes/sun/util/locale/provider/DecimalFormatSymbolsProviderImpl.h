#ifndef _sun_util_locale_provider_DecimalFormatSymbolsProviderImpl_h_
#define _sun_util_locale_provider_DecimalFormatSymbolsProviderImpl_h_
//$ class sun.util.locale.provider.DecimalFormatSymbolsProviderImpl
//$ extends java.text.spi.DecimalFormatSymbolsProvider
//$ implements sun.util.locale.provider.AvailableLanguageTags

#include <java/lang/Array.h>
#include <java/text/spi/DecimalFormatSymbolsProvider.h>
#include <sun/util/locale/provider/AvailableLanguageTags.h>

namespace java {
	namespace text {
		class DecimalFormatSymbols;
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

class $export DecimalFormatSymbolsProviderImpl : public ::java::text::spi::DecimalFormatSymbolsProvider, public ::sun::util::locale::provider::AvailableLanguageTags {
	$class(DecimalFormatSymbolsProviderImpl, $NO_CLASS_INIT, ::java::text::spi::DecimalFormatSymbolsProvider, ::sun::util::locale::provider::AvailableLanguageTags)
public:
	DecimalFormatSymbolsProviderImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	virtual ::java::util::Set* getAvailableLanguageTags() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual ::java::text::DecimalFormatSymbols* getInstance(::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_DecimalFormatSymbolsProviderImpl_h_