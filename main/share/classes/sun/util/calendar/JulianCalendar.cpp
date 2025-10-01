#include <sun/util/calendar/JulianCalendar.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/AbstractCalendar.h>
#include <sun/util/calendar/BaseCalendar$Date.h>
#include <sun/util/calendar/BaseCalendar.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/CalendarUtils.h>
#include <sun/util/calendar/Era.h>
#include <sun/util/calendar/JulianCalendar$Date.h>
#include <jcpp.h>

#undef JANUARY
#undef CE
#undef JULIAN_EPOCH
#undef BCE
#undef MARCH
#undef FEBRUARY
#undef MIN_VALUE

using $EraArray = $Array<::sun::util::calendar::Era>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZone = ::java::util::TimeZone;
using $AbstractCalendar = ::sun::util::calendar::AbstractCalendar;
using $BaseCalendar = ::sun::util::calendar::BaseCalendar;
using $BaseCalendar$Date = ::sun::util::calendar::BaseCalendar$Date;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $CalendarUtils = ::sun::util::calendar::CalendarUtils;
using $Era = ::sun::util::calendar::Era;
using $JulianCalendar$Date = ::sun::util::calendar::JulianCalendar$Date;

namespace sun {
	namespace util {
		namespace calendar {

$FieldInfo _JulianCalendar_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JulianCalendar, $assertionsDisabled)},
	{"BCE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JulianCalendar, BCE)},
	{"CE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JulianCalendar, CE)},
	{"eras", "[Lsun/util/calendar/Era;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JulianCalendar, eras)},
	{"JULIAN_EPOCH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JulianCalendar, JULIAN_EPOCH)},
	{}
};

$MethodInfo _JulianCalendar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JulianCalendar::*)()>(&JulianCalendar::init$))},
	{"getCalendarDate", "()Lsun/util/calendar/JulianCalendar$Date;", nullptr, $PUBLIC},
	{"getCalendarDate", "(J)Lsun/util/calendar/JulianCalendar$Date;", nullptr, $PUBLIC},
	{"getCalendarDate", "(JLsun/util/calendar/CalendarDate;)Lsun/util/calendar/JulianCalendar$Date;", nullptr, $PUBLIC},
	{"getCalendarDate", "(JLjava/util/TimeZone;)Lsun/util/calendar/JulianCalendar$Date;", nullptr, $PUBLIC},
	{"getCalendarDateFromFixedDate", "(Lsun/util/calendar/CalendarDate;J)V", nullptr, $PUBLIC},
	{"getDayOfWeek", "(Lsun/util/calendar/CalendarDate;)I", nullptr, $PUBLIC},
	{"getFixedDate", "(IIILsun/util/calendar/BaseCalendar$Date;)J", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getYearFromFixedDate", "(J)I", nullptr, $PUBLIC},
	{"isLeapYear", "(I)Z", nullptr, 0},
	{"newCalendarDate", "()Lsun/util/calendar/JulianCalendar$Date;", nullptr, $PUBLIC},
	{"newCalendarDate", "(Ljava/util/TimeZone;)Lsun/util/calendar/JulianCalendar$Date;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JulianCalendar_InnerClassesInfo_[] = {
	{"sun.util.calendar.JulianCalendar$Date", "sun.util.calendar.JulianCalendar", "Date", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JulianCalendar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.calendar.JulianCalendar",
	"sun.util.calendar.BaseCalendar",
	nullptr,
	_JulianCalendar_FieldInfo_,
	_JulianCalendar_MethodInfo_,
	nullptr,
	nullptr,
	_JulianCalendar_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.calendar.JulianCalendar$Date"
};

$Object* allocate$JulianCalendar($Class* clazz) {
	return $of($alloc(JulianCalendar));
}

bool JulianCalendar::$assertionsDisabled = false;
$EraArray* JulianCalendar::eras = nullptr;

void JulianCalendar::init$() {
	$BaseCalendar::init$();
	setEras(JulianCalendar::eras);
}

$String* JulianCalendar::getName() {
	return "julian"_s;
}

$CalendarDate* JulianCalendar::getCalendarDate() {
	int64_t var$0 = $System::currentTimeMillis();
	return getCalendarDate(var$0, $(newCalendarDate()));
}

$CalendarDate* JulianCalendar::getCalendarDate(int64_t millis) {
	return getCalendarDate(millis, $(newCalendarDate()));
}

$CalendarDate* JulianCalendar::getCalendarDate(int64_t millis, $CalendarDate* date) {
	return $cast($JulianCalendar$Date, $BaseCalendar::getCalendarDate(millis, date));
}

$CalendarDate* JulianCalendar::getCalendarDate(int64_t millis, $TimeZone* zone) {
	return getCalendarDate(millis, $(newCalendarDate(zone)));
}

$CalendarDate* JulianCalendar::newCalendarDate() {
	return $new($JulianCalendar$Date);
}

$CalendarDate* JulianCalendar::newCalendarDate($TimeZone* zone) {
	return $new($JulianCalendar$Date, zone);
}

int64_t JulianCalendar::getFixedDate(int32_t jyear, int32_t month, int32_t dayOfMonth, $BaseCalendar$Date* cache) {
	bool isJan1 = month == $BaseCalendar::JANUARY && dayOfMonth == 1;
	if (cache != nullptr && cache->hit(jyear)) {
		if (isJan1) {
			return cache->getCachedJan1();
		}
		int64_t var$0 = cache->getCachedJan1();
		return var$0 + getDayOfYear(jyear, month, dayOfMonth) - 1;
	}
	int64_t y = jyear;
	int64_t days = JulianCalendar::JULIAN_EPOCH - 1 + (365 * (y - 1)) + dayOfMonth;
	if (y > 0) {
		days += (y - 1) / 4;
	} else {
		days += $CalendarUtils::floorDivide(y - 1, (int64_t)4);
	}
	if (month > 0) {
		days += ((367 * (int64_t)month) - 362) / 12;
	} else {
		days += $CalendarUtils::floorDivide((367 * (int64_t)month) - 362, (int64_t)12);
	}
	if (month > $BaseCalendar::FEBRUARY) {
		days -= $CalendarUtils::isJulianLeapYear(jyear) ? 1 : 2;
	}
	if (cache != nullptr && isJan1) {
		cache->setCache(jyear, days, $CalendarUtils::isJulianLeapYear(jyear) ? 366 : 365);
	}
	return days;
}

void JulianCalendar::getCalendarDateFromFixedDate($CalendarDate* date, int64_t fixedDate) {
	$var($JulianCalendar$Date, jdate, $cast($JulianCalendar$Date, date));
	int64_t fd = 4 * (fixedDate - JulianCalendar::JULIAN_EPOCH) + 1464;
	int32_t year = 0;
	if (fd >= 0) {
		year = (int32_t)(fd / 1461);
	} else {
		year = (int32_t)$CalendarUtils::floorDivide(fd, (int64_t)1461);
	}
	int32_t priorDays = (int32_t)(fixedDate - getFixedDate(year, $BaseCalendar::JANUARY, 1, jdate));
	bool isLeap = $CalendarUtils::isJulianLeapYear(year);
	if (fixedDate >= getFixedDate(year, $BaseCalendar::MARCH, 1, jdate)) {
		priorDays += isLeap ? 1 : 2;
	}
	int32_t month = 12 * priorDays + 373;
	if (month > 0) {
		month /= 367;
	} else {
		month = $CalendarUtils::floorDivide(month, 367);
	}
	int32_t dayOfMonth = (int32_t)(fixedDate - getFixedDate(year, month, 1, jdate)) + 1;
	int32_t dayOfWeek = getDayOfWeekFromFixedDate(fixedDate);
	if (!JulianCalendar::$assertionsDisabled && !(dayOfWeek > 0)) {
		$throwNew($AssertionError, $of($$str({"negative day of week "_s, $$str(dayOfWeek)})));
	}
	$nc(jdate)->setNormalizedYear(year);
	jdate->setMonth(month);
	jdate->setDayOfMonth(dayOfMonth);
	jdate->setDayOfWeek(dayOfWeek);
	jdate->setLeapYear(isLeap);
	jdate->setNormalized(true);
}

int32_t JulianCalendar::getYearFromFixedDate(int64_t fixedDate) {
	int32_t year = (int32_t)$CalendarUtils::floorDivide(4 * (fixedDate - JulianCalendar::JULIAN_EPOCH) + 1464, (int64_t)1461);
	return year;
}

int32_t JulianCalendar::getDayOfWeek($CalendarDate* date) {
	int64_t fixedDate = getFixedDate(date);
	return getDayOfWeekFromFixedDate(fixedDate);
}

bool JulianCalendar::isLeapYear(int32_t jyear) {
	return $CalendarUtils::isJulianLeapYear(jyear);
}

void clinit$JulianCalendar($Class* class$) {
	JulianCalendar::$assertionsDisabled = !JulianCalendar::class$->desiredAssertionStatus();
	$assignStatic(JulianCalendar::eras, $new($EraArray, {
		$$new($Era, "BeforeCommonEra"_s, "B.C.E."_s, $Long::MIN_VALUE, false),
		$$new($Era, "CommonEra"_s, "C.E."_s, 0xFFFFC77CE7207000, true)
	}));
}

JulianCalendar::JulianCalendar() {
}

$Class* JulianCalendar::load$($String* name, bool initialize) {
	$loadClass(JulianCalendar, name, initialize, &_JulianCalendar_ClassInfo_, clinit$JulianCalendar, allocate$JulianCalendar);
	return class$;
}

$Class* JulianCalendar::class$ = nullptr;

		} // calendar
	} // util
} // sun