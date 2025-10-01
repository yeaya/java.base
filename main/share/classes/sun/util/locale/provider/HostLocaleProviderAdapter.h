#ifndef _sun_util_locale_provider_HostLocaleProviderAdapter_h_
#define _sun_util_locale_provider_HostLocaleProviderAdapter_h_
//$ class sun.util.locale.provider.HostLocaleProviderAdapter
//$ extends sun.util.locale.provider.AuxLocaleProviderAdapter

#include <sun/util/locale/provider/AuxLocaleProviderAdapter.h>

namespace java {
	namespace text {
		class DecimalFormat;
	}
}
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

class $export HostLocaleProviderAdapter : public ::sun::util::locale::provider::AuxLocaleProviderAdapter {
	$class(HostLocaleProviderAdapter, $NO_CLASS_INIT, ::sun::util::locale::provider::AuxLocaleProviderAdapter)
public:
	HostLocaleProviderAdapter();
	void init$();
	virtual ::java::util::spi::LocaleServiceProvider* findInstalledProvider($Class* c) override;
	virtual ::sun::util::locale::provider::LocaleProviderAdapter$Type* getAdapterType() override;
	static ::java::text::DecimalFormat* makeIntegerFormatter(::java::text::DecimalFormat* df);
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_HostLocaleProviderAdapter_h_