#include <sun/util/locale/provider/LocaleDataMetaInfo.h>
#include <java/util/Map.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$Map* LocaleDataMetaInfo::tzCanonicalIDs() {
	return nullptr;
}

$Map* LocaleDataMetaInfo::getLanguageAliasMap() {
	return nullptr;
}

$Class* LocaleDataMetaInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"availableLanguageTags", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LocaleDataMetaInfo, availableLanguageTags, $String*, $String*)},
		{"getLanguageAliasMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $virtualMethod(LocaleDataMetaInfo, getLanguageAliasMap, $Map*)},
		{"getType", "()Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LocaleDataMetaInfo, getType, $LocaleProviderAdapter$Type*)},
		{"tzCanonicalIDs", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $virtualMethod(LocaleDataMetaInfo, tzCanonicalIDs, $Map*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.locale.provider.LocaleDataMetaInfo",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleDataMetaInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleDataMetaInfo);
	});
	return class$;
}

$Class* LocaleDataMetaInfo::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun