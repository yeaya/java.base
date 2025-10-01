#include <sun/util/calendar/Gregorian.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
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
#include <sun/util/calendar/Gregorian$Date.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZone = ::java::util::TimeZone;
using $AbstractCalendar = ::sun::util::calendar::AbstractCalendar;
using $BaseCalendar = ::sun::util::calendar::BaseCalendar;
using $BaseCalendar$Date = ::sun::util::calendar::BaseCalendar$Date;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $Gregorian$Date = ::sun::util::calendar::Gregorian$Date;

namespace sun {
	namespace util {
		namespace calendar {

$MethodInfo _Gregorian_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Gregorian::*)()>(&Gregorian::init$))},
	{"getCalendarDate", "()Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC},
	{"getCalendarDate", "(J)Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC},
	{"getCalendarDate", "(JLsun/util/calendar/CalendarDate;)Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC},
	{"getCalendarDate", "(JLjava/util/TimeZone;)Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newCalendarDate", "()Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC},
	{"newCalendarDate", "(Ljava/util/TimeZone;)Lsun/util/calendar/Gregorian$Date;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Gregorian_InnerClassesInfo_[] = {
	{"sun.util.calendar.Gregorian$Date", "sun.util.calendar.Gregorian", "Date", $STATIC},
	{}
};

$ClassInfo _Gregorian_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.calendar.Gregorian",
	"sun.util.calendar.BaseCalendar",
	nullptr,
	nullptr,
	_Gregorian_MethodInfo_,
	nullptr,
	nullptr,
	_Gregorian_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.calendar.Gregorian$Date"
};

$Object* allocate$Gregorian($Class* clazz) {
	return $of($alloc(Gregorian));
}

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
	$loadClass(Gregorian, name, initialize, &_Gregorian_ClassInfo_, allocate$Gregorian);
	return class$;
}

$Class* Gregorian::class$ = nullptr;

		} // calendar
	} // util
} // sun