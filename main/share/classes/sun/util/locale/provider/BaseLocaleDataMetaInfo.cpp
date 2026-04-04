#include <sun/util/locale/provider/BaseLocaleDataMetaInfo.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <jcpp.h>

#undef JRE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$Map* BaseLocaleDataMetaInfo::resourceNameToLocales = nullptr;

void BaseLocaleDataMetaInfo::init$() {
}

$String* BaseLocaleDataMetaInfo::getSupportedLocaleString($String* resourceName) {
	$init(BaseLocaleDataMetaInfo);
	return $cast($String, BaseLocaleDataMetaInfo::resourceNameToLocales->getOrDefault(resourceName, ""_s));
}

$LocaleProviderAdapter$Type* BaseLocaleDataMetaInfo::getType() {
	$init($LocaleProviderAdapter$Type);
	return $LocaleProviderAdapter$Type::JRE;
}

$String* BaseLocaleDataMetaInfo::availableLanguageTags($String* category) {
	return getSupportedLocaleString(category);
}

void BaseLocaleDataMetaInfo::clinit$($Class* clazz) {
	$assignStatic(BaseLocaleDataMetaInfo::resourceNameToLocales, $new($HashMap, 9));
	{
		BaseLocaleDataMetaInfo::resourceNameToLocales->put("FormatData"_s, "  en en-US "_s);
		BaseLocaleDataMetaInfo::resourceNameToLocales->put("CollationData"_s, "  "_s);
		BaseLocaleDataMetaInfo::resourceNameToLocales->put("BreakIteratorInfo"_s, "  "_s);
		BaseLocaleDataMetaInfo::resourceNameToLocales->put("BreakIteratorRules"_s, "  "_s);
		BaseLocaleDataMetaInfo::resourceNameToLocales->put("TimeZoneNames"_s, "  en "_s);
		BaseLocaleDataMetaInfo::resourceNameToLocales->put("LocaleNames"_s, "  en "_s);
		BaseLocaleDataMetaInfo::resourceNameToLocales->put("CurrencyNames"_s, "  en-US "_s);
		BaseLocaleDataMetaInfo::resourceNameToLocales->put("CalendarData"_s, "  en "_s);
		BaseLocaleDataMetaInfo::resourceNameToLocales->put("AvailableLocales"_s, " en en-US "_s);
	}
}

BaseLocaleDataMetaInfo::BaseLocaleDataMetaInfo() {
}

$Class* BaseLocaleDataMetaInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"resourceNameToLocales", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(BaseLocaleDataMetaInfo, resourceNameToLocales)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaseLocaleDataMetaInfo, init$, void)},
		{"availableLanguageTags", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BaseLocaleDataMetaInfo, availableLanguageTags, $String*, $String*)},
		{"getSupportedLocaleString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BaseLocaleDataMetaInfo, getSupportedLocaleString, $String*, $String*)},
		{"getType", "()Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC, $virtualMethod(BaseLocaleDataMetaInfo, getType, $LocaleProviderAdapter$Type*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.locale.provider.BaseLocaleDataMetaInfo",
		"java.lang.Object",
		"sun.util.locale.provider.LocaleDataMetaInfo",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BaseLocaleDataMetaInfo, name, initialize, &classInfo$$, BaseLocaleDataMetaInfo::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BaseLocaleDataMetaInfo);
	});
	return class$;
}

$Class* BaseLocaleDataMetaInfo::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun