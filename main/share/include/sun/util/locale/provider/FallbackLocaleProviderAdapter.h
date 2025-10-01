#ifndef _sun_util_locale_provider_FallbackLocaleProviderAdapter_h_
#define _sun_util_locale_provider_FallbackLocaleProviderAdapter_h_
//$ class sun.util.locale.provider.FallbackLocaleProviderAdapter
//$ extends sun.util.locale.provider.JRELocaleProviderAdapter

#include <sun/util/locale/provider/JRELocaleProviderAdapter.h>

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
				class LocaleResources;
			}
		}
	}
}

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class $import FallbackLocaleProviderAdapter : public ::sun::util::locale::provider::JRELocaleProviderAdapter {
	$class(FallbackLocaleProviderAdapter, 0, ::sun::util::locale::provider::JRELocaleProviderAdapter)
public:
	FallbackLocaleProviderAdapter();
	void init$();
	virtual ::java::util::Set* createLanguageTagSet($String* category) override;
	virtual ::sun::util::locale::provider::LocaleProviderAdapter$Type* getAdapterType() override;
	virtual ::sun::util::locale::provider::LocaleResources* getLocaleResources(::java::util::Locale* locale) override;
	virtual bool isSupportedProviderLocale(::java::util::Locale* locale, ::java::util::Set* langtags) override;
	static ::java::util::Set* rootTagSet;
	::sun::util::locale::provider::LocaleResources* rootLocaleResources = nullptr;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_FallbackLocaleProviderAdapter_h_