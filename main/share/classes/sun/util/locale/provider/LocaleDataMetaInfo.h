#ifndef _sun_util_locale_provider_LocaleDataMetaInfo_h_
#define _sun_util_locale_provider_LocaleDataMetaInfo_h_
//$ interface sun.util.locale.provider.LocaleDataMetaInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export LocaleDataMetaInfo : public ::java::lang::Object {
	$interface(LocaleDataMetaInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* availableLanguageTags($String* category) {return nullptr;}
	virtual ::java::util::Map* getLanguageAliasMap();
	virtual ::sun::util::locale::provider::LocaleProviderAdapter$Type* getType() {return nullptr;}
	virtual ::java::util::Map* tzCanonicalIDs();
};

			} // provider
		} // locale
	} // util
} // sun

#endif // _sun_util_locale_provider_LocaleDataMetaInfo_h_