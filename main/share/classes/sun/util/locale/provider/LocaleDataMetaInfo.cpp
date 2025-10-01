#include <sun/util/locale/provider/LocaleDataMetaInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _LocaleDataMetaInfo_MethodInfo_[] = {
	{"availableLanguageTags", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLanguageAliasMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC},
	{"getType", "()Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"tzCanonicalIDs", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC},
	{}
};

$ClassInfo _LocaleDataMetaInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.locale.provider.LocaleDataMetaInfo",
	nullptr,
	nullptr,
	nullptr,
	_LocaleDataMetaInfo_MethodInfo_
};

$Object* allocate$LocaleDataMetaInfo($Class* clazz) {
	return $of($alloc(LocaleDataMetaInfo));
}

$Map* LocaleDataMetaInfo::tzCanonicalIDs() {
	return nullptr;
}

$Map* LocaleDataMetaInfo::getLanguageAliasMap() {
	return nullptr;
}

$Class* LocaleDataMetaInfo::load$($String* name, bool initialize) {
	$loadClass(LocaleDataMetaInfo, name, initialize, &_LocaleDataMetaInfo_ClassInfo_, allocate$LocaleDataMetaInfo);
	return class$;
}

$Class* LocaleDataMetaInfo::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun