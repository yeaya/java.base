#ifndef _sun_util_locale_provider_SPILocaleProviderAdapter_h_
#define _sun_util_locale_provider_SPILocaleProviderAdapter_h_
//$ class sun.util.locale.provider.SPILocaleProviderAdapter
//$ extends sun.util.locale.provider.AuxLocaleProviderAdapter

#include <sun/util/locale/provider/AuxLocaleProviderAdapter.h>

namespace java {
	namespace util {
		namespace spi {
			class LocaleServiceProvider;
		}
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

class $export SPILocaleProviderAdapter : public ::sun::util::locale::provider::AuxLocaleProviderAdapter {
	$class(SPILocaleProviderAdapter, $NO_CLASS_INIT, ::sun::util::locale::provider::AuxLocaleProviderAdapter)
public:
	SPILocaleProviderAdapter();
	void init$();
	virtual ::java::util::spi::LocaleServiceProvider* findInstalledProvider($Class* c) override;
	virtual ::sun::util::locale::provider::LocaleProviderAdapter$Type* getAdapterType() override;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_SPILocaleProviderAdapter_h_