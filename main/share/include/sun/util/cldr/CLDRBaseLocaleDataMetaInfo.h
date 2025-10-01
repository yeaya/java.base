#ifndef _sun_util_cldr_CLDRBaseLocaleDataMetaInfo_h_
#define _sun_util_cldr_CLDRBaseLocaleDataMetaInfo_h_
//$ class sun.util.cldr.CLDRBaseLocaleDataMetaInfo
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
		namespace cldr {

class $import CLDRBaseLocaleDataMetaInfo : public ::sun::util::locale::provider::LocaleDataMetaInfo {
	$class(CLDRBaseLocaleDataMetaInfo, 0, ::sun::util::locale::provider::LocaleDataMetaInfo)
public:
	CLDRBaseLocaleDataMetaInfo();
	void init$();
	virtual $String* availableLanguageTags($String* category) override;
	virtual ::java::util::Map* getLanguageAliasMap() override;
	virtual ::sun::util::locale::provider::LocaleProviderAdapter$Type* getType() override;
	virtual ::java::util::Map* parentLocales();
	virtual ::java::util::Map* tzCanonicalIDs() override;
	static ::java::util::Map* resourceNameToLocales;
	static ::java::util::Map* parentLocalesMap;
	static ::java::util::Map* languageAliasMap;
};

		} // cldr
	} // util
} // sun

#endif // _sun_util_cldr_CLDRBaseLocaleDataMetaInfo_h_