#include <sun/util/locale/provider/CalendarDataUtility.h>

#include <java/util/Locale$Builder.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/spi/CalendarDataProvider.h>
#include <java/util/spi/CalendarNameProvider.h>
#include <sun/util/locale/provider/CalendarDataUtility$CalendarFieldValueNameGetter.h>
#include <sun/util/locale/provider/CalendarDataUtility$CalendarFieldValueNamesMapGetter.h>
#include <sun/util/locale/provider/CalendarDataUtility$CalendarWeekParameterGetter.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool$LocalizedObjectGetter.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool.h>
#include <jcpp.h>

#undef FIRST_DAY_OF_WEEK
#undef INSTANCE
#undef MINIMAL_DAYS_IN_FIRST_WEEK
#undef OVERRIDE_BUILDER
#undef ROOT

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Locale$Builder = ::java::util::Locale$Builder;
using $Map = ::java::util::Map;
using $CalendarDataProvider = ::java::util::spi::CalendarDataProvider;
using $CalendarNameProvider = ::java::util::spi::CalendarNameProvider;
using $CalendarDataUtility$CalendarFieldValueNameGetter = ::sun::util::locale::provider::CalendarDataUtility$CalendarFieldValueNameGetter;
using $CalendarDataUtility$CalendarFieldValueNamesMapGetter = ::sun::util::locale::provider::CalendarDataUtility$CalendarFieldValueNamesMapGetter;
using $CalendarDataUtility$CalendarWeekParameterGetter = ::sun::util::locale::provider::CalendarDataUtility$CalendarWeekParameterGetter;
using $LocaleServiceProviderPool = ::sun::util::locale::provider::LocaleServiceProviderPool;
using $LocaleServiceProviderPool$LocalizedObjectGetter = ::sun::util::locale::provider::LocaleServiceProviderPool$LocalizedObjectGetter;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

$FieldInfo _CalendarDataUtility_FieldInfo_[] = {
	{"FIRST_DAY_OF_WEEK", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CalendarDataUtility, FIRST_DAY_OF_WEEK)},
	{"MINIMAL_DAYS_IN_FIRST_WEEK", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CalendarDataUtility, MINIMAL_DAYS_IN_FIRST_WEEK)},
	{"OVERRIDE_BUILDER", "Ljava/util/Locale$Builder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CalendarDataUtility, OVERRIDE_BUILDER)},
	{}
};

$MethodInfo _CalendarDataUtility_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CalendarDataUtility::*)()>(&CalendarDataUtility::init$))},
	{"findRegionOverride", "(Ljava/util/Locale;)Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Locale*(*)($Locale*)>(&CalendarDataUtility::findRegionOverride))},
	{"normalizeCalendarType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&CalendarDataUtility::normalizeCalendarType))},
	{"retrieveFieldValueName", "(Ljava/lang/String;IIILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,int32_t,int32_t,int32_t,$Locale*)>(&CalendarDataUtility::retrieveFieldValueName))},
	{"retrieveFieldValueNames", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map;", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC | $STATIC, $method(static_cast<$Map*(*)($String*,int32_t,int32_t,$Locale*)>(&CalendarDataUtility::retrieveFieldValueNames))},
	{"retrieveFirstDayOfWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Locale*)>(&CalendarDataUtility::retrieveFirstDayOfWeek))},
	{"retrieveJavaTimeFieldValueName", "(Ljava/lang/String;IIILjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,int32_t,int32_t,int32_t,$Locale*)>(&CalendarDataUtility::retrieveJavaTimeFieldValueName))},
	{"retrieveJavaTimeFieldValueNames", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map;", "(Ljava/lang/String;IILjava/util/Locale;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC | $STATIC, $method(static_cast<$Map*(*)($String*,int32_t,int32_t,$Locale*)>(&CalendarDataUtility::retrieveJavaTimeFieldValueNames))},
	{"retrieveMinimalDaysInFirstWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Locale*)>(&CalendarDataUtility::retrieveMinimalDaysInFirstWeek))},
	{}
};

$InnerClassInfo _CalendarDataUtility_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.CalendarDataUtility$CalendarWeekParameterGetter", "sun.util.locale.provider.CalendarDataUtility", "CalendarWeekParameterGetter", $PRIVATE | $STATIC},
	{"sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNamesMapGetter", "sun.util.locale.provider.CalendarDataUtility", "CalendarFieldValueNamesMapGetter", $PRIVATE | $STATIC},
	{"sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNameGetter", "sun.util.locale.provider.CalendarDataUtility", "CalendarFieldValueNameGetter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CalendarDataUtility_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.provider.CalendarDataUtility",
	"java.lang.Object",
	nullptr,
	_CalendarDataUtility_FieldInfo_,
	_CalendarDataUtility_MethodInfo_,
	nullptr,
	nullptr,
	_CalendarDataUtility_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.locale.provider.CalendarDataUtility$CalendarWeekParameterGetter,sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNamesMapGetter,sun.util.locale.provider.CalendarDataUtility$CalendarFieldValueNameGetter"
};

$Object* allocate$CalendarDataUtility($Class* clazz) {
	return $of($alloc(CalendarDataUtility));
}

$String* CalendarDataUtility::FIRST_DAY_OF_WEEK = nullptr;
$String* CalendarDataUtility::MINIMAL_DAYS_IN_FIRST_WEEK = nullptr;
$Locale$Builder* CalendarDataUtility::OVERRIDE_BUILDER = nullptr;

void CalendarDataUtility::init$() {
}

int32_t CalendarDataUtility::retrieveFirstDayOfWeek($Locale* locale) {
	$init(CalendarDataUtility);
	$useLocalCurrentObjectStackCache();
	if ($nc(locale)->hasExtensions()) {
		$var($String, fw, locale->getUnicodeLocaleType("fw"_s));
		if (fw != nullptr) {
			{
				$var($String, s2197$, fw->toLowerCase($Locale::ROOT));
				int32_t tmp2197$ = -1;
				switch (s2197$->hashCode()) {
				case 0x0001A70C:
					{
						if (s2197$->equals("mon"_s)) {
							tmp2197$ = 0;
						}
						break;
					}
				case 0x0001C204:
					{
						if (s2197$->equals("tue"_s)) {
							tmp2197$ = 1;
						}
						break;
					}
				case 0x0001CB56:
					{
						if (s2197$->equals("wed"_s)) {
							tmp2197$ = 2;
						}
						break;
					}
				case 0x0001C081:
					{
						if (s2197$->equals("thu"_s)) {
							tmp2197$ = 3;
						}
						break;
					}
				case 0x00018D1D:
					{
						if (s2197$->equals("fri"_s)) {
							tmp2197$ = 4;
						}
						break;
					}
				case 0x0001BBE6:
					{
						if (s2197$->equals("sat"_s)) {
							tmp2197$ = 5;
						}
						break;
					}
				case 0x0001BE4C:
					{
						if (s2197$->equals("sun"_s)) {
							tmp2197$ = 6;
						}
						break;
					}
				}
				switch (tmp2197$) {
				case 0:
					{
						return 2;
					}
				case 1:
					{
						return 3;
					}
				case 2:
					{
						return 4;
					}
				case 3:
					{
						return 5;
					}
				case 4:
					{
						return 6;
					}
				case 5:
					{
						return 7;
					}
				case 6:
					{
						return 1;
					}
				}
			}
		}
	}
	$load($CalendarDataProvider);
	$var($LocaleServiceProviderPool, pool, $LocaleServiceProviderPool::getPool($CalendarDataProvider::class$));
	$init($CalendarDataUtility$CalendarWeekParameterGetter);
	$var($LocaleServiceProviderPool$LocalizedObjectGetter, var$0, static_cast<$LocaleServiceProviderPool$LocalizedObjectGetter*>($CalendarDataUtility$CalendarWeekParameterGetter::INSTANCE));
	$var($Locale, var$1, findRegionOverride(locale));
	$var($Integer, value, $cast($Integer, $nc(pool)->getLocalizedObject(var$0, var$1, $($Boolean::valueOf(true)), CalendarDataUtility::FIRST_DAY_OF_WEEK, $$new($ObjectArray, 0))));
	bool var$2 = value != nullptr;
	if (var$2) {
		bool var$3 = value->intValue() >= 1;
		var$2 = (var$3 && value->intValue() <= 7);
	}
	return (var$2) ? $nc(value)->intValue() : 1;
}

int32_t CalendarDataUtility::retrieveMinimalDaysInFirstWeek($Locale* locale) {
	$init(CalendarDataUtility);
	$useLocalCurrentObjectStackCache();
	$load($CalendarDataProvider);
	$var($LocaleServiceProviderPool, pool, $LocaleServiceProviderPool::getPool($CalendarDataProvider::class$));
	$init($CalendarDataUtility$CalendarWeekParameterGetter);
	$var($LocaleServiceProviderPool$LocalizedObjectGetter, var$0, static_cast<$LocaleServiceProviderPool$LocalizedObjectGetter*>($CalendarDataUtility$CalendarWeekParameterGetter::INSTANCE));
	$var($Locale, var$1, findRegionOverride(locale));
	$var($Integer, value, $cast($Integer, $nc(pool)->getLocalizedObject(var$0, var$1, $($Boolean::valueOf(true)), CalendarDataUtility::MINIMAL_DAYS_IN_FIRST_WEEK, $$new($ObjectArray, 0))));
	bool var$2 = value != nullptr;
	if (var$2) {
		bool var$3 = value->intValue() >= 1;
		var$2 = (var$3 && value->intValue() <= 7);
	}
	return (var$2) ? $nc(value)->intValue() : 1;
}

$String* CalendarDataUtility::retrieveFieldValueName($String* id, int32_t field, int32_t value, int32_t style, $Locale* locale) {
	$init(CalendarDataUtility);
	$useLocalCurrentObjectStackCache();
	$load($CalendarNameProvider);
	$var($LocaleServiceProviderPool, pool, $LocaleServiceProviderPool::getPool($CalendarNameProvider::class$));
	$init($CalendarDataUtility$CalendarFieldValueNameGetter);
	$var($LocaleServiceProviderPool$LocalizedObjectGetter, var$0, static_cast<$LocaleServiceProviderPool$LocalizedObjectGetter*>($CalendarDataUtility$CalendarFieldValueNameGetter::INSTANCE));
	$var($Locale, var$1, locale);
	$var($String, var$2, normalizeCalendarType(id));
	return $cast($String, $nc(pool)->getLocalizedObject(var$0, var$1, var$2, $$new($ObjectArray, {
		$($of($Integer::valueOf(field))),
		$($of($Integer::valueOf(value))),
		$($of($Integer::valueOf(style))),
		$($of($Boolean::valueOf(false)))
	})));
}

$String* CalendarDataUtility::retrieveJavaTimeFieldValueName($String* id, int32_t field, int32_t value, int32_t style, $Locale* locale) {
	$init(CalendarDataUtility);
	$useLocalCurrentObjectStackCache();
	$load($CalendarNameProvider);
	$var($LocaleServiceProviderPool, pool, $LocaleServiceProviderPool::getPool($CalendarNameProvider::class$));
	$var($String, name, nullptr);
	$init($CalendarDataUtility$CalendarFieldValueNameGetter);
	$var($LocaleServiceProviderPool$LocalizedObjectGetter, var$0, static_cast<$LocaleServiceProviderPool$LocalizedObjectGetter*>($CalendarDataUtility$CalendarFieldValueNameGetter::INSTANCE));
	$var($Locale, var$1, locale);
	$var($String, var$2, normalizeCalendarType(id));
	$assign(name, $cast($String, $nc(pool)->getLocalizedObject(var$0, var$1, var$2, $$new($ObjectArray, {
		$($of($Integer::valueOf(field))),
		$($of($Integer::valueOf(value))),
		$($of($Integer::valueOf(style))),
		$($of($Boolean::valueOf(true)))
	}))));
	if (name == nullptr) {
		$var($LocaleServiceProviderPool$LocalizedObjectGetter, var$3, static_cast<$LocaleServiceProviderPool$LocalizedObjectGetter*>($CalendarDataUtility$CalendarFieldValueNameGetter::INSTANCE));
		$var($Locale, var$4, locale);
		$var($String, var$5, normalizeCalendarType(id));
		$assign(name, $cast($String, pool->getLocalizedObject(var$3, var$4, var$5, $$new($ObjectArray, {
			$($of($Integer::valueOf(field))),
			$($of($Integer::valueOf(value))),
			$($of($Integer::valueOf(style))),
			$($of($Boolean::valueOf(false)))
		}))));
	}
	return name;
}

$Map* CalendarDataUtility::retrieveFieldValueNames($String* id, int32_t field, int32_t style, $Locale* locale) {
	$init(CalendarDataUtility);
	$useLocalCurrentObjectStackCache();
	$load($CalendarNameProvider);
	$var($LocaleServiceProviderPool, pool, $LocaleServiceProviderPool::getPool($CalendarNameProvider::class$));
	$init($CalendarDataUtility$CalendarFieldValueNamesMapGetter);
	$var($LocaleServiceProviderPool$LocalizedObjectGetter, var$0, static_cast<$LocaleServiceProviderPool$LocalizedObjectGetter*>($CalendarDataUtility$CalendarFieldValueNamesMapGetter::INSTANCE));
	$var($Locale, var$1, locale);
	$var($String, var$2, normalizeCalendarType(id));
	return $cast($Map, $nc(pool)->getLocalizedObject(var$0, var$1, var$2, $$new($ObjectArray, {
		$($of($Integer::valueOf(field))),
		$($of($Integer::valueOf(style))),
		$($of($Boolean::valueOf(false)))
	})));
}

$Map* CalendarDataUtility::retrieveJavaTimeFieldValueNames($String* id, int32_t field, int32_t style, $Locale* locale) {
	$init(CalendarDataUtility);
	$useLocalCurrentObjectStackCache();
	$load($CalendarNameProvider);
	$var($LocaleServiceProviderPool, pool, $LocaleServiceProviderPool::getPool($CalendarNameProvider::class$));
	$var($Map, map, nullptr);
	$init($CalendarDataUtility$CalendarFieldValueNamesMapGetter);
	$var($LocaleServiceProviderPool$LocalizedObjectGetter, var$0, static_cast<$LocaleServiceProviderPool$LocalizedObjectGetter*>($CalendarDataUtility$CalendarFieldValueNamesMapGetter::INSTANCE));
	$var($Locale, var$1, locale);
	$var($String, var$2, normalizeCalendarType(id));
	$assign(map, $cast($Map, $nc(pool)->getLocalizedObject(var$0, var$1, var$2, $$new($ObjectArray, {
		$($of($Integer::valueOf(field))),
		$($of($Integer::valueOf(style))),
		$($of($Boolean::valueOf(true)))
	}))));
	if (map == nullptr) {
		$var($LocaleServiceProviderPool$LocalizedObjectGetter, var$3, static_cast<$LocaleServiceProviderPool$LocalizedObjectGetter*>($CalendarDataUtility$CalendarFieldValueNamesMapGetter::INSTANCE));
		$var($Locale, var$4, locale);
		$var($String, var$5, normalizeCalendarType(id));
		$assign(map, $cast($Map, pool->getLocalizedObject(var$3, var$4, var$5, $$new($ObjectArray, {
			$($of($Integer::valueOf(field))),
			$($of($Integer::valueOf(style))),
			$($of($Boolean::valueOf(false)))
		}))));
	}
	return map;
}

$Locale* CalendarDataUtility::findRegionOverride($Locale* l) {
	$init(CalendarDataUtility);
	$useLocalCurrentObjectStackCache();
	$var($String, rg, $nc(l)->getUnicodeLocaleType("rg"_s));
	$var($Locale, override$, l);
	if (rg != nullptr && rg->length() == 6) {
		$assign(rg, rg->toUpperCase($Locale::ROOT));
		bool var$3 = rg->charAt(0) >= 65;
		bool var$2 = var$3 && rg->charAt(0) <= 90;
		bool var$1 = var$2 && rg->charAt(1) >= 65;
		bool var$0 = var$1 && rg->charAt(1) <= 90;
		if (var$0 && $(rg->substring(2))->equals("ZZZZ"_s)) {
			$assign(override$, $nc($($nc($($nc($($nc(CalendarDataUtility::OVERRIDE_BUILDER)->clear()))->setLocale(l)))->setRegion($(rg->substring(0, 2)))))->build());
		}
	}
	return override$;
}

$String* CalendarDataUtility::normalizeCalendarType($String* requestID) {
	$init(CalendarDataUtility);
	$var($String, type, nullptr);
	bool var$0 = $nc(requestID)->equals("gregorian"_s);
	if (var$0 || $nc(requestID)->equals("iso8601"_s)) {
		$assign(type, "gregory"_s);
	} else if (requestID->startsWith("islamic"_s)) {
		$assign(type, "islamic"_s);
	} else {
		$assign(type, requestID);
	}
	return type;
}

void clinit$CalendarDataUtility($Class* class$) {
	$assignStatic(CalendarDataUtility::FIRST_DAY_OF_WEEK, "firstDayOfWeek"_s);
	$assignStatic(CalendarDataUtility::MINIMAL_DAYS_IN_FIRST_WEEK, "minimalDaysInFirstWeek"_s);
	$assignStatic(CalendarDataUtility::OVERRIDE_BUILDER, $new($Locale$Builder));
}

CalendarDataUtility::CalendarDataUtility() {
}

$Class* CalendarDataUtility::load$($String* name, bool initialize) {
	$loadClass(CalendarDataUtility, name, initialize, &_CalendarDataUtility_ClassInfo_, clinit$CalendarDataUtility, allocate$CalendarDataUtility);
	return class$;
}

$Class* CalendarDataUtility::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun