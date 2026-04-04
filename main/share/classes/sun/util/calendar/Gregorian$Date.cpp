#include <sun/util/calendar/Gregorian$Date.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/BaseCalendar$Date.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/Gregorian.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZone = ::java::util::TimeZone;
using $BaseCalendar$Date = ::sun::util::calendar::BaseCalendar$Date;

namespace sun {
	namespace util {
		namespace calendar {

void Gregorian$Date::init$() {
	$BaseCalendar$Date::init$();
}

void Gregorian$Date::init$($TimeZone* zone) {
	$BaseCalendar$Date::init$(zone);
}

int32_t Gregorian$Date::getNormalizedYear() {
	return getYear();
}

void Gregorian$Date::setNormalizedYear(int32_t normalizedYear) {
	setYear(normalizedYear);
}

Gregorian$Date::Gregorian$Date() {
}

$Class* Gregorian$Date::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(Gregorian$Date, init$, void)},
		{"<init>", "(Ljava/util/TimeZone;)V", nullptr, $PROTECTED, $method(Gregorian$Date, init$, void, $TimeZone*)},
		{"getNormalizedYear", "()I", nullptr, $PUBLIC, $virtualMethod(Gregorian$Date, getNormalizedYear, int32_t)},
		{"setNormalizedYear", "(I)V", nullptr, $PUBLIC, $virtualMethod(Gregorian$Date, setNormalizedYear, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.calendar.Gregorian$Date", "sun.util.calendar.Gregorian", "Date", $STATIC},
		{"sun.util.calendar.BaseCalendar$Date", "sun.util.calendar.BaseCalendar", "Date", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.calendar.Gregorian$Date",
		"sun.util.calendar.BaseCalendar$Date",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.calendar.Gregorian"
	};
	$loadClass(Gregorian$Date, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Gregorian$Date);
	});
	return class$;
}

$Class* Gregorian$Date::class$ = nullptr;

		} // calendar
	} // util
} // sun