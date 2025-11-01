#ifndef _sun_util_locale_provider_CurrencyNameProviderImpl_h_
#define _sun_util_locale_provider_CurrencyNameProviderImpl_h_
//$ class sun.util.locale.provider.CurrencyNameProviderImpl
//$ extends java.util.spi.CurrencyNameProvider
//$ implements sun.util.locale.provider.AvailableLanguageTags

#include <java/lang/Array.h>
#include <java/util/spi/CurrencyNameProvider.h>
#include <sun/util/locale/provider/AvailableLanguageTags.h>

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

class $import CurrencyNameProviderImpl : public ::java::util::spi::CurrencyNameProvider, public ::sun::util::locale::provider::AvailableLanguageTags {
	$class(CurrencyNameProviderImpl, $NO_CLASS_INIT, ::java::util::spi::CurrencyNameProvider, ::sun::util::locale::provider::AvailableLanguageTags)
public:
	CurrencyNameProviderImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	virtual ::java::util::Set* getAvailableLanguageTags() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual $String* getDisplayName($String* currencyCode, ::java::util::Locale* locale) override;
	$String* getString($String* key, ::java::util::Locale* locale);
	virtual $String* getSymbol($String* currencyCode, ::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_CurrencyNameProviderImpl_h_