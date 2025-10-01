#ifndef _sun_util_locale_provider_BaseLocaleDataMetaInfo_h_
#define _sun_util_locale_provider_BaseLocaleDataMetaInfo_h_
//$ class sun.util.locale.provider.BaseLocaleDataMetaInfo
//$ extends sun.util.locale.provider.LocaleDataMetaInfo

#include <sun/util/locale/provider/LocaleDataMetaInfo.h>

namespace java {
	namespace util {
		class Map;
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

class $import BaseLocaleDataMetaInfo : public ::sun::util::locale::provider::LocaleDataMetaInfo {
	$class(BaseLocaleDataMetaInfo, 0, ::sun::util::locale::provider::LocaleDataMetaInfo)
public:
	BaseLocaleDataMetaInfo();
	void init$();
	virtual $String* availableLanguageTags($String* category) override;
	static $String* getSupportedLocaleString($String* resourceName);
	virtual ::sun::util::locale::provider::LocaleProviderAdapter$Type* getType() override;
	static ::java::util::Map* resourceNameToLocales;
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_BaseLocaleDataMetaInfo_h_