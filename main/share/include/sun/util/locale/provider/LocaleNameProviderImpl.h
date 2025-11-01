#ifndef _sun_util_locale_provider_LocaleNameProviderImpl_h_
#define _sun_util_locale_provider_LocaleNameProviderImpl_h_
//$ class sun.util.locale.provider.LocaleNameProviderImpl
//$ extends java.util.spi.LocaleNameProvider
//$ implements sun.util.locale.provider.AvailableLanguageTags

#include <java/lang/Array.h>
#include <java/util/spi/LocaleNameProvider.h>
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

class $import LocaleNameProviderImpl : public ::java::util::spi::LocaleNameProvider, public ::sun::util::locale::provider::AvailableLanguageTags {
	$class(LocaleNameProviderImpl, $NO_CLASS_INIT, ::java::util::spi::LocaleNameProvider, ::sun::util::locale::provider::AvailableLanguageTags)
public:
	LocaleNameProviderImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::util::locale::provider::LocaleProviderAdapter$Type* type, ::java::util::Set* langtags);
	virtual ::java::util::Set* getAvailableLanguageTags() override;
	virtual $Array<::java::util::Locale>* getAvailableLocales() override;
	virtual $String* getDisplayCountry($String* ctry, ::java::util::Locale* locale) override;
	virtual $String* getDisplayLanguage($String* lang, ::java::util::Locale* locale) override;
	virtual $String* getDisplayScript($String* scriptCode, ::java::util::Locale* locale) override;
	$String* getDisplayString($String* key, ::java::util::Locale* locale);
	virtual $String* getDisplayUnicodeExtensionKey($String* key, ::java::util::Locale* locale) override;
	virtual $String* getDisplayUnicodeExtensionType($String* extType, $String* key, ::java::util::Locale* locale) override;
	virtual $String* getDisplayVariant($String* vrnt, ::java::util::Locale* locale) override;
	virtual bool isSupportedLocale(::java::util::Locale* locale) override;
	virtual $String* toString() override;
	::sun::util::locale::provider::LocaleProviderAdapter$Type* type = nullptr;
	::java::util::Set* langtags = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_LocaleNameProviderImpl_h_