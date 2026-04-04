#include <sun/util/calendar/Gregorian.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/AbstractCalendar.h>
#include <sun/util/calendar/BaseCalendar.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/Gregorian$Date.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZone = ::java::util::TimeZone;
using $BaseCalendar = ::sun::util::calendar::BaseCalendar;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $Gregorian$Date = ::sun::util::calendar::Gregorian$Date;

namespace sun {
	namespace util {
		namespace calendar {

void Gregorian::init$() {
	$BaseCalendar::init$();
}

$String* Gregorian::getName() {
	return "gregorian"_s;
}

$CalendarDate* Gregorian::getCalendarDate() {
	int64_t var$0 = $System::currentTimeMillis();
	return getCalendarDate(var$0, $(newCalendarDate()));
}

$CalendarDate* Gregorian::getCalendarDate(int64_t millis) {
	return getCalendarDate(millis, $(newCalendarDate()));
}

$CalendarDate* Gregorian::getCalendarDate(int64_t millis, $CalendarDate* date) {
	return $cast($Gregorian$Date, $BaseCalendar::getCalendarDate(millis, date));
}

$CalendarDate* Gregorian::getCalendarDate(int64_t millis, $TimeZone* zone) {
	return getCalendarDate(millis, $(newCalendarDate(zone)));
}

$CalendarDate* Gregorian::newCalendarDate() {
	return $new($Gregorian$Date);
}

$CalendarDate* Gregorian::newCalendarDate($TimeZone* zone) {
	return $new($Gregorian$Date, zone);
}

Gregorian::Gregorian() {
}

$Class* Gregorian::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Gregorian, init$, void)},
		{"getCalendarDate", "()Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC, $virtualMethod(Gregorian, getCalendarDate, $CalendarDate*)},
		{"getCalendarDate", "(J)Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC, $virtualMethod(Gregorian, getCalendarDate, $CalendarDate*, int64_t)},
		{"getCalendarDate", "(JLsun/util/calendar/CalendarDate;)Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC, $virtualMethod(Gregorian, getCalendarDate, $CalendarDate*, int64_t, $CalendarDate*)},
		{"getCalendarDate", "(JLjava/util/TimeZone;)Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC, $virtualMethod(Gregorian, getCalendarDate, $CalendarDate*, int64_t, $TimeZone*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Gregorian, getName, $String*)},
		{"newCalendarDate", "()Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC, $virtualMethod(Gregorian, newCalendarDate, $CalendarDate*)},
		{"newCalendarDate", "(Ljava/util/TimeZone;)Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC, $virtualMethod(Gregorian, newCalendarDate, $CalendarDate*, $TimeZone*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.calendar.Gregorian$Date", "sun.util.calendar.Gregorian", "Date", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.calendar.Gregorian",
		"sun.util.calendar.BaseCalendar",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.util.calendar.Gregorian$Date"
	};
	$loadClass(Gregorian, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Gregorian);
	});
	return class$;
}

$Class* Gregorian::class$ = nullptr;

		} // calendar
	} // util
} // sun