#include <sun/util/cldr/CLDRCalendarDataProviderImpl.h>

#include <java/lang/CharSequence.h>
#include <java/util/AbstractMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/util/locale/provider/CalendarDataProviderImpl.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

#undef CLDR
#undef FIRST_DAY_OF_WEEK
#undef MINIMAL_DAYS_IN_FIRST_WEEK
#undef ROOT

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CalendarDataProviderImpl = ::sun::util::locale::provider::CalendarDataProviderImpl;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace sun {
	namespace util {
		namespace cldr {

$FieldInfo _CLDRCalendarDataProviderImpl_FieldInfo_[] = {
	{"firstDay", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $staticField(CLDRCalendarDataProviderImpl, firstDay)},
	{"minDays", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $staticField(CLDRCalendarDataProviderImpl, minDays)},
	{}
};

$MethodInfo _CLDRCalendarDataProviderImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set;)V", "(Lsun/util/locale/provider/LocaleProviderAdapter$Type;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(CLDRCalendarDataProviderImpl::*)($LocaleProviderAdapter$Type*,$Set*)>(&CLDRCalendarDataProviderImpl::init$))},
	{"findValue", "(Ljava/lang/String;Ljava/util/Locale;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,$Locale*)>(&CLDRCalendarDataProviderImpl::findValue))},
	{"getFirstDayOfWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC},
	{"getMinimalDaysInFirstWeek", "(Ljava/util/Locale;)I", nullptr, $PUBLIC},
	{"retrieveInteger", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $method(static_cast<$Optional*(*)($String*,$String*)>(&CLDRCalendarDataProviderImpl::retrieveInteger))},
	{}
};

$ClassInfo _CLDRCalendarDataProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.cldr.CLDRCalendarDataProviderImpl",
	"sun.util.locale.provider.CalendarDataProviderImpl",
	nullptr,
	_CLDRCalendarDataProviderImpl_FieldInfo_,
	_CLDRCalendarDataProviderImpl_MethodInfo_
};

$Object* allocate$CLDRCalendarDataProviderImpl($Class* clazz) {
	return $of($alloc(CLDRCalendarDataProviderImpl));
}

$Map* CLDRCalendarDataProviderImpl::firstDay = nullptr;
$Map* CLDRCalendarDataProviderImpl::minDays = nullptr;

void CLDRCalendarDataProviderImpl::init$($LocaleProviderAdapter$Type* type, $Set* langtags) {
	$CalendarDataProviderImpl::init$(type, langtags);
}

int32_t CLDRCalendarDataProviderImpl::getFirstDayOfWeek($Locale* locale) {
	$init($CalendarDataUtility);
	return findValue($CalendarDataUtility::FIRST_DAY_OF_WEEK, locale);
}

int32_t CLDRCalendarDataProviderImpl::getMinimalDaysInFirstWeek($Locale* locale) {
	$init($CalendarDataUtility);
	return findValue($CalendarDataUtility::MINIMAL_DAYS_IN_FIRST_WEEK, locale);
}

int32_t CLDRCalendarDataProviderImpl::findValue($String* key, $Locale* locale) {
	$init(CLDRCalendarDataProviderImpl);
	$useLocalCurrentObjectStackCache();
	$init($CalendarDataUtility);
	$var($Map, map, $nc($CalendarDataUtility::FIRST_DAY_OF_WEEK)->equals(key) ? CLDRCalendarDataProviderImpl::firstDay : CLDRCalendarDataProviderImpl::minDays);
	$var($String, region, $nc(locale)->getCountry());
	if ($nc(region)->isEmpty()) {
		$assign(region, "US"_s);
	}
	$var($Integer, val, $cast($Integer, $nc(map)->get(region)));
	if (val == nullptr) {
		$init($LocaleProviderAdapter$Type);
		$var($String, valStr, $nc($($nc($($LocaleProviderAdapter::forType($LocaleProviderAdapter$Type::CLDR)))->getLocaleResources($Locale::ROOT)))->getCalendarData(key));
		$assign(val, $cast($Integer, $nc($(retrieveInteger(valStr, region)))->orElse($cast($Integer, $($nc($(retrieveInteger(valStr, "001"_s)))->orElse($($Integer::valueOf(0))))))));
		map->putIfAbsent(region, val);
	}
	return $nc(val)->intValue();
}

$Optional* CLDRCalendarDataProviderImpl::retrieveInteger($String* src, $String* region) {
	$init(CLDRCalendarDataProviderImpl);
	int32_t regionIndex = $nc(src)->indexOf(region);
	if (regionIndex >= 0) {
		int32_t start = src->lastIndexOf((int32_t)u';', regionIndex) + 1;
		return $Optional::of($($Integer::valueOf($Integer::parseInt(src, start, src->indexOf((int32_t)u':', start), 10))));
	}
	return $Optional::empty();
}

void clinit$CLDRCalendarDataProviderImpl($Class* class$) {
	$assignStatic(CLDRCalendarDataProviderImpl::firstDay, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
	$assignStatic(CLDRCalendarDataProviderImpl::minDays, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

CLDRCalendarDataProviderImpl::CLDRCalendarDataProviderImpl() {
}

$Class* CLDRCalendarDataProviderImpl::load$($String* name, bool initialize) {
	$loadClass(CLDRCalendarDataProviderImpl, name, initialize, &_CLDRCalendarDataProviderImpl_ClassInfo_, clinit$CLDRCalendarDataProviderImpl, allocate$CLDRCalendarDataProviderImpl);
	return class$;
}

$Class* CLDRCalendarDataProviderImpl::class$ = nullptr;

		} // cldr
	} // util
} // sun