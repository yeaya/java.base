#include <sun/util/calendar/BaseCalendar.h>
#include <java/lang/AssertionError.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/AbstractCalendar.h>
#include <sun/util/calendar/BaseCalendar$Date.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/CalendarUtils.h>
#include <jcpp.h>

#undef ACCUMULATED_DAYS_IN_MONTH
#undef ACCUMULATED_DAYS_IN_MONTH_LEAP
#undef APRIL
#undef AUGUST
#undef BASE_YEAR
#undef DAYS_IN_MONTH
#undef DECEMBER
#undef FEBRUARY
#undef FIELD_UNDEFINED
#undef FIXED_DATES
#undef FRIDAY
#undef JANUARY
#undef JULY
#undef JUNE
#undef MARCH
#undef MAY
#undef MONDAY
#undef NOVEMBER
#undef OCTOBER
#undef SATURDAY
#undef SEPTEMBER
#undef SUNDAY
#undef THURSDAY
#undef TUESDAY
#undef WEDNESDAY

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZone = ::java::util::TimeZone;
using $AbstractCalendar = ::sun::util::calendar::AbstractCalendar;
using $BaseCalendar$Date = ::sun::util::calendar::BaseCalendar$Date;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $CalendarUtils = ::sun::util::calendar::CalendarUtils;

namespace sun {
	namespace util {
		namespace calendar {

bool BaseCalendar::$assertionsDisabled = false;
$ints* BaseCalendar::FIXED_DATES = nullptr;
$ints* BaseCalendar::DAYS_IN_MONTH = nullptr;
$ints* BaseCalendar::ACCUMULATED_DAYS_IN_MONTH = nullptr;
$ints* BaseCalendar::ACCUMULATED_DAYS_IN_MONTH_LEAP = nullptr;

void BaseCalendar::init$() {
	$AbstractCalendar::init$();
}

bool BaseCalendar::validate($CalendarDate* date) {
	$var($BaseCalendar$Date, bdate, $cast($BaseCalendar$Date, date));
	if ($nc(bdate)->isNormalized()) {
		return true;
	}
	int32_t month = bdate->getMonth();
	if (month < BaseCalendar::JANUARY || month > BaseCalendar::DECEMBER) {
		return false;
	}
	int32_t d = bdate->getDayOfMonth();
	if (d <= 0 || d > getMonthLength(bdate->getNormalizedYear(), month)) {
		return false;
	}
	int32_t dow = bdate->getDayOfWeek();
	if (dow != $BaseCalendar$Date::FIELD_UNDEFINED && dow != getDayOfWeek(bdate)) {
		return false;
	}
	if (!validateTime(date)) {
		return false;
	}
	bdate->setNormalized(true);
	return true;
}

bool BaseCalendar::normalize($CalendarDate* date) {
	$useLocalObjectStack();
	if ($nc(date)->isNormalized()) {
		return true;
	}
	$var($BaseCalendar$Date, bdate, $cast($BaseCalendar$Date, date));
	$var($TimeZone, zi, bdate->getZone());
	if (zi != nullptr) {
		getTime(date);
		return true;
	}
	int32_t days = normalizeTime(bdate);
	normalizeMonth(bdate);
	int64_t d = (int64_t)bdate->getDayOfMonth() + days;
	int32_t m = bdate->getMonth();
	int32_t y = bdate->getNormalizedYear();
	int32_t ml = getMonthLength(y, m);
	if (!(d > 0 && d <= ml)) {
		if (d <= 0 && d > -28) {
			ml = getMonthLength(y, --m);
			d += ml;
			bdate->setDayOfMonth((int32_t)d);
			if (m == 0) {
				m = BaseCalendar::DECEMBER;
				bdate->setNormalizedYear(y - 1);
			}
			bdate->setMonth(m);
		} else if (d > ml && d < (ml + 28)) {
			d -= ml;
			++m;
			bdate->setDayOfMonth((int32_t)d);
			if (m > BaseCalendar::DECEMBER) {
				bdate->setNormalizedYear(y + 1);
				m = BaseCalendar::JANUARY;
			}
			bdate->setMonth(m);
		} else {
			int64_t fixedDate = d + getFixedDate(y, m, 1, bdate) - (int64_t)1;
			getCalendarDateFromFixedDate(bdate, fixedDate);
		}
	} else {
		bdate->setDayOfWeek(getDayOfWeek(bdate));
	}
	date->setLeapYear(isLeapYear(bdate->getNormalizedYear()));
	date->setZoneOffset(0);
	date->setDaylightSaving(0);
	bdate->setNormalized(true);
	return true;
}

void BaseCalendar::normalizeMonth($CalendarDate* date) {
	$var($BaseCalendar$Date, bdate, $cast($BaseCalendar$Date, date));
	int32_t year = $nc(bdate)->getNormalizedYear();
	int64_t month = bdate->getMonth();
	if (month <= 0) {
		int64_t xm = (int64_t)1 - month;
		year -= (int32_t)((xm / 12) + 1);
		month = 13 - (xm % 12);
		bdate->setNormalizedYear(year);
		bdate->setMonth((int32_t)month);
	} else if (month > BaseCalendar::DECEMBER) {
		year += (int32_t)((month - 1) / 12);
		month = (month - 1) % 12 + 1;
		bdate->setNormalizedYear(year);
		bdate->setMonth((int32_t)month);
	}
}

int32_t BaseCalendar::getYearLength($CalendarDate* date) {
	return isLeapYear($nc($cast($BaseCalendar$Date, date))->getNormalizedYear()) ? 366 : 365;
}

int32_t BaseCalendar::getYearLengthInMonths($CalendarDate* date) {
	return 12;
}

int32_t BaseCalendar::getMonthLength($CalendarDate* date) {
	$useLocalObjectStack();
	$var($BaseCalendar$Date, gdate, $cast($BaseCalendar$Date, date));
	int32_t month = $nc(gdate)->getMonth();
	if (month < BaseCalendar::JANUARY || month > BaseCalendar::DECEMBER) {
		$throwNew($IllegalArgumentException, $$str({"Illegal month value: "_s, $$str(month)}));
	}
	return getMonthLength(gdate->getNormalizedYear(), month);
}

int32_t BaseCalendar::getMonthLength(int32_t year, int32_t month) {
	int32_t days = BaseCalendar::DAYS_IN_MONTH->get(month);
	if (month == BaseCalendar::FEBRUARY && isLeapYear(year)) {
		++days;
	}
	return days;
}

int64_t BaseCalendar::getDayOfYear($CalendarDate* date) {
	int32_t var$0 = $nc($cast($BaseCalendar$Date, date))->getNormalizedYear();
	int32_t var$1 = date->getMonth();
	return getDayOfYear(var$0, var$1, date->getDayOfMonth());
}

int64_t BaseCalendar::getDayOfYear(int32_t year, int32_t month, int32_t dayOfMonth) {
	return (int64_t)dayOfMonth + (isLeapYear(year) ? BaseCalendar::ACCUMULATED_DAYS_IN_MONTH_LEAP->get(month) : BaseCalendar::ACCUMULATED_DAYS_IN_MONTH->get(month));
}

int64_t BaseCalendar::getFixedDate($CalendarDate* date) {
	if (!$nc(date)->isNormalized()) {
		normalizeMonth(date);
	}
	int32_t var$0 = $cast($BaseCalendar$Date, date)->getNormalizedYear();
	int32_t var$1 = date->getMonth();
	return getFixedDate(var$0, var$1, date->getDayOfMonth(), $cast($BaseCalendar$Date, date));
}

int64_t BaseCalendar::getFixedDate(int32_t year, int32_t month, int32_t dayOfMonth, $BaseCalendar$Date* cache) {
	bool isJan1 = month == BaseCalendar::JANUARY && dayOfMonth == 1;
	if (cache != nullptr && cache->hit(year)) {
		if (isJan1) {
			return cache->getCachedJan1();
		}
		int64_t var$0 = cache->getCachedJan1();
		return var$0 + getDayOfYear(year, month, dayOfMonth) - 1;
	}
	int32_t n = year - BaseCalendar::BASE_YEAR;
	if (n >= 0 && n < BaseCalendar::FIXED_DATES->length) {
		int64_t jan1 = BaseCalendar::FIXED_DATES->get(n);
		if (cache != nullptr) {
			cache->setCache(year, jan1, isLeapYear(year) ? 366 : 365);
		}
		return isJan1 ? jan1 : jan1 + getDayOfYear(year, month, dayOfMonth) - 1;
	}
	int64_t prevyear = (int64_t)year - 1;
	int64_t days = dayOfMonth;
	if (prevyear >= 0) {
		days += (365 * prevyear) + (prevyear / 4) - (prevyear / 100) + (prevyear / 400) + ((367 * month - 362) / 12);
	} else {
		int64_t var$3 = (365 * prevyear) + $CalendarUtils::floorDivide(prevyear, (int64_t)4);
		int64_t var$2 = var$3 - $CalendarUtils::floorDivide(prevyear, (int64_t)100);
		int64_t var$1 = var$2 + $CalendarUtils::floorDivide(prevyear, (int64_t)400);
		days += var$1 + $CalendarUtils::floorDivide((367 * month - 362), 12);
	}
	if (month > BaseCalendar::FEBRUARY) {
		days -= isLeapYear(year) ? 1 : 2;
	}
	if (cache != nullptr && isJan1) {
		cache->setCache(year, days, isLeapYear(year) ? 366 : 365);
	}
	return days;
}

void BaseCalendar::getCalendarDateFromFixedDate($CalendarDate* date, int64_t fixedDate) {
	$useLocalObjectStack();
	$var($BaseCalendar$Date, gdate, $cast($BaseCalendar$Date, date));
	int32_t year = 0;
	int64_t jan1 = 0;
	bool isLeap = false;
	if ($nc(gdate)->hit(fixedDate)) {
		year = gdate->getCachedYear();
		jan1 = gdate->getCachedJan1();
		isLeap = isLeapYear(year);
	} else {
		year = getGregorianYearFromFixedDate(fixedDate);
		jan1 = getFixedDate(year, BaseCalendar::JANUARY, 1, nullptr);
		isLeap = isLeapYear(year);
		gdate->setCache(year, jan1, isLeap ? 366 : 365);
	}
	int32_t priorDays = (int32_t)(fixedDate - jan1);
	int64_t mar1 = jan1 + 31 + 28;
	if (isLeap) {
		++mar1;
	}
	if (fixedDate >= mar1) {
		priorDays += isLeap ? 1 : 2;
	}
	int32_t month = 12 * priorDays + 373;
	if (month > 0) {
		month /= 367;
	} else {
		month = $CalendarUtils::floorDivide(month, 367);
	}
	int64_t month1 = jan1 + BaseCalendar::ACCUMULATED_DAYS_IN_MONTH->get(month);
	if (isLeap && month >= BaseCalendar::MARCH) {
		++month1;
	}
	int32_t dayOfMonth = (int32_t)(fixedDate - month1) + 1;
	int32_t dayOfWeek = getDayOfWeekFromFixedDate(fixedDate);
	if (!BaseCalendar::$assertionsDisabled && !(dayOfWeek > 0)) {
		$throwNew($AssertionError, $$of($str({"negative day of week "_s, $$str(dayOfWeek)})));
	}
	gdate->setNormalizedYear(year);
	gdate->setMonth(month);
	gdate->setDayOfMonth(dayOfMonth);
	gdate->setDayOfWeek(dayOfWeek);
	gdate->setLeapYear(isLeap);
	gdate->setNormalized(true);
}

int32_t BaseCalendar::getDayOfWeek($CalendarDate* date) {
	int64_t fixedDate = getFixedDate(date);
	return getDayOfWeekFromFixedDate(fixedDate);
}

int32_t BaseCalendar::getDayOfWeekFromFixedDate(int64_t fixedDate) {
	$init(BaseCalendar);
	if (fixedDate >= 0) {
		return (int32_t)(fixedDate % 7) + BaseCalendar::SUNDAY;
	}
	return (int32_t)$CalendarUtils::mod(fixedDate, (int64_t)7) + BaseCalendar::SUNDAY;
}

int32_t BaseCalendar::getYearFromFixedDate(int64_t fixedDate) {
	return getGregorianYearFromFixedDate(fixedDate);
}

int32_t BaseCalendar::getGregorianYearFromFixedDate(int64_t fixedDate) {
	int64_t d0 = 0;
	int32_t d1 = 0;
	int32_t d2 = 0;
	int32_t d3 = 0;
	int32_t d4 = 0;
	int32_t n400 = 0;
	int32_t n100 = 0;
	int32_t n4 = 0;
	int32_t n1 = 0;
	int32_t year = 0;
	if (fixedDate > 0) {
		d0 = fixedDate - 1;
		n400 = (int32_t)(d0 / 0x00023ab1);
		d1 = (int32_t)(d0 % 0x00023ab1);
		n100 = d1 / 0x00008eac;
		d2 = d1 % 0x00008eac;
		n4 = d2 / 1461;
		d3 = d2 % 1461;
		n1 = d3 / 365;
		d4 = (d3 % 365) + 1;
	} else {
		d0 = fixedDate - 1;
		n400 = (int32_t)$CalendarUtils::floorDivide(d0, (int64_t)146097);
		d1 = (int32_t)$CalendarUtils::mod(d0, (int64_t)146097);
		n100 = $CalendarUtils::floorDivide(d1, 0x00008eac);
		d2 = $CalendarUtils::mod(d1, 0x00008eac);
		n4 = $CalendarUtils::floorDivide(d2, 1461);
		d3 = $CalendarUtils::mod(d2, 1461);
		n1 = $CalendarUtils::floorDivide(d3, 365);
		d4 = $CalendarUtils::mod(d3, 365) + 1;
	}
	year = 400 * n400 + 100 * n100 + 4 * n4 + n1;
	if (!(n100 == 4 || n1 == 4)) {
		++year;
	}
	return year;
}

bool BaseCalendar::isLeapYear($CalendarDate* date) {
	return isLeapYear($nc($cast($BaseCalendar$Date, date))->getNormalizedYear());
}

bool BaseCalendar::isLeapYear(int32_t normalizedYear) {
	return $CalendarUtils::isGregorianLeapYear(normalizedYear);
}

void BaseCalendar::clinit$($Class* clazz) {
	BaseCalendar::$assertionsDisabled = !BaseCalendar::class$->desiredAssertionStatus();
	$assignStatic(BaseCalendar::FIXED_DATES, $new($ints, {
		0x000af93b,
		0x000afaa8,
		0x000afc15,
		0x000afd83,
		0x000afef0,
		0x000b005d,
		0x000b01ca,
		0x000b0338,
		0x000b04a5,
		0x000b0612,
		0x000b077f,
		0x000b08ed,
		0x000b0a5a,
		0x000b0bc7,
		0x000b0d34,
		0x000b0ea2,
		0x000b100f,
		0x000b117c,
		0x000b12e9,
		0x000b1457,
		0x000b15c4,
		0x000b1731,
		0x000b189e,
		0x000b1a0c,
		0x000b1b79,
		0x000b1ce6,
		0x000b1e53,
		0x000b1fc1,
		0x000b212e,
		0x000b229b,
		0x000b2408,
		0x000b2576,
		0x000b26e3,
		0x000b2850,
		0x000b29bd,
		0x000b2b2b,
		0x000b2c98,
		0x000b2e05,
		0x000b2f72,
		0x000b30e0,
		0x000b324d,
		0x000b33ba,
		0x000b3527,
		0x000b3695,
		0x000b3802,
		0x000b396f,
		0x000b3adc,
		0x000b3c4a,
		0x000b3db7,
		0x000b3f24,
		0x000b4091,
		0x000b41ff,
		0x000b436c,
		0x000b44d9,
		0x000b4646,
		0x000b47b4,
		0x000b4921,
		0x000b4a8e,
		0x000b4bfb,
		0x000b4d69,
		0x000b4ed6,
		0x000b5043,
		0x000b51b0,
		0x000b531e,
		0x000b548b,
		0x000b55f8,
		0x000b5765,
		0x000b58d3,
		0x000b5a40,
		0x000b5bad
	}));
	$assignStatic(BaseCalendar::DAYS_IN_MONTH, $new($ints, {
		31,
		31,
		28,
		31,
		30,
		31,
		30,
		31,
		31,
		30,
		31,
		30,
		31
	}));
	$assignStatic(BaseCalendar::ACCUMULATED_DAYS_IN_MONTH, $new($ints, {
		-30,
		0,
		31,
		59,
		90,
		120,
		151,
		181,
		212,
		243,
		273,
		304,
		334
	}));
	$assignStatic(BaseCalendar::ACCUMULATED_DAYS_IN_MONTH_LEAP, $new($ints, {
		-30,
		0,
		31,
		59 + 1,
		90 + 1,
		120 + 1,
		151 + 1,
		181 + 1,
		212 + 1,
		243 + 1,
		273 + 1,
		304 + 1,
		334 + 1
	}));
}

BaseCalendar::BaseCalendar() {
}

$Class* BaseCalendar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BaseCalendar, $assertionsDisabled)},
		{"JANUARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, JANUARY)},
		{"FEBRUARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, FEBRUARY)},
		{"MARCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, MARCH)},
		{"APRIL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, APRIL)},
		{"MAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, MAY)},
		{"JUNE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, JUNE)},
		{"JULY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, JULY)},
		{"AUGUST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, AUGUST)},
		{"SEPTEMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, SEPTEMBER)},
		{"OCTOBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, OCTOBER)},
		{"NOVEMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, NOVEMBER)},
		{"DECEMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, DECEMBER)},
		{"SUNDAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, SUNDAY)},
		{"MONDAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, MONDAY)},
		{"TUESDAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, TUESDAY)},
		{"WEDNESDAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, WEDNESDAY)},
		{"THURSDAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, THURSDAY)},
		{"FRIDAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, FRIDAY)},
		{"SATURDAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaseCalendar, SATURDAY)},
		{"BASE_YEAR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BaseCalendar, BASE_YEAR)},
		{"FIXED_DATES", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BaseCalendar, FIXED_DATES)},
		{"DAYS_IN_MONTH", "[I", nullptr, $STATIC | $FINAL, $staticField(BaseCalendar, DAYS_IN_MONTH)},
		{"ACCUMULATED_DAYS_IN_MONTH", "[I", nullptr, $STATIC | $FINAL, $staticField(BaseCalendar, ACCUMULATED_DAYS_IN_MONTH)},
		{"ACCUMULATED_DAYS_IN_MONTH_LEAP", "[I", nullptr, $STATIC | $FINAL, $staticField(BaseCalendar, ACCUMULATED_DAYS_IN_MONTH_LEAP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BaseCalendar, init$, void)},
		{"getCalendarDateFromFixedDate", "(Lsun/util/calendar/CalendarDate;J)V", nullptr, $PUBLIC, $virtualMethod(BaseCalendar, getCalendarDateFromFixedDate, void, $CalendarDate*, int64_t)},
		{"getDayOfWeek", "(Lsun/util/calendar/CalendarDate;)I", nullptr, $PUBLIC, $virtualMethod(BaseCalendar, getDayOfWeek, int32_t, $CalendarDate*)},
		{"getDayOfWeekFromFixedDate", "(J)I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(BaseCalendar, getDayOfWeekFromFixedDate, int32_t, int64_t)},
		{"getDayOfYear", "(Lsun/util/calendar/CalendarDate;)J", nullptr, $PUBLIC, $virtualMethod(BaseCalendar, getDayOfYear, int64_t, $CalendarDate*)},
		{"getDayOfYear", "(III)J", nullptr, $FINAL, $method(BaseCalendar, getDayOfYear, int64_t, int32_t, int32_t, int32_t)},
		{"getFixedDate", "(Lsun/util/calendar/CalendarDate;)J", nullptr, $PUBLIC, $virtualMethod(BaseCalendar, getFixedDate, int64_t, $CalendarDate*)},
		{"getFixedDate", "(IIILsun/util/calendar/BaseCalendar$Date;)J", nullptr, $PUBLIC, $virtualMethod(BaseCalendar, getFixedDate, int64_t, int32_t, int32_t, int32_t, $BaseCalendar$Date*)},
		{"getGregorianYearFromFixedDate", "(J)I", nullptr, $FINAL, $method(BaseCalendar, getGregorianYearFromFixedDate, int32_t, int64_t)},
		{"getMonthLength", "(Lsun/util/calendar/CalendarDate;)I", nullptr, $PUBLIC, $virtualMethod(BaseCalendar, getMonthLength, int32_t, $CalendarDate*)},
		{"getMonthLength", "(II)I", nullptr, $PRIVATE, $method(BaseCalendar, getMonthLength, int32_t, int32_t, int32_t)},
		{"getYearFromFixedDate", "(J)I", nullptr, $PUBLIC, $virtualMethod(BaseCalendar, getYearFromFixedDate, int32_t, int64_t)},
		{"getYearLength", "(Lsun/util/calendar/CalendarDate;)I", nullptr, $PUBLIC, $virtualMethod(BaseCalendar, getYearLength, int32_t, $CalendarDate*)},
		{"getYearLengthInMonths", "(Lsun/util/calendar/CalendarDate;)I", nullptr, $PUBLIC, $virtualMethod(BaseCalendar, getYearLengthInMonths, int32_t, $CalendarDate*)},
		{"isLeapYear", "(Lsun/util/calendar/CalendarDate;)Z", nullptr, $PROTECTED, $virtualMethod(BaseCalendar, isLeapYear, bool, $CalendarDate*)},
		{"isLeapYear", "(I)Z", nullptr, 0, $virtualMethod(BaseCalendar, isLeapYear, bool, int32_t)},
		{"normalize", "(Lsun/util/calendar/CalendarDate;)Z", nullptr, $PUBLIC, $virtualMethod(BaseCalendar, normalize, bool, $CalendarDate*)},
		{"normalizeMonth", "(Lsun/util/calendar/CalendarDate;)V", nullptr, 0, $virtualMethod(BaseCalendar, normalizeMonth, void, $CalendarDate*)},
		{"validate", "(Lsun/util/calendar/CalendarDate;)Z", nullptr, $PUBLIC, $virtualMethod(BaseCalendar, validate, bool, $CalendarDate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.calendar.BaseCalendar$Date", "sun.util.calendar.BaseCalendar", "Date", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.util.calendar.BaseCalendar",
		"sun.util.calendar.AbstractCalendar",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.util.calendar.BaseCalendar$Date"
	};
	$loadClass(BaseCalendar, name, initialize, &classInfo$$, BaseCalendar::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BaseCalendar);
	});
	return class$;
}

$Class* BaseCalendar::class$ = nullptr;

		} // calendar
	} // util
} // sun