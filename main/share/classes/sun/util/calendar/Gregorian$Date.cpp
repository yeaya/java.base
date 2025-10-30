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
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $Gregorian = ::sun::util::calendar::Gregorian;

namespace sun {
	namespace util {
		namespace calendar {

$MethodInfo _Gregorian$Date_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Gregorian$Date::*)()>(&Gregorian$Date::init$))},
	{"<init>", "(Ljava/util/TimeZone;)V", nullptr, $PROTECTED, $method(static_cast<void(Gregorian$Date::*)($TimeZone*)>(&Gregorian$Date::init$))},
	{"getNormalizedYear", "()I", nullptr, $PUBLIC},
	{"setNormalizedYear", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Gregorian$Date_InnerClassesInfo_[] = {
	{"sun.util.calendar.Gregorian$Date", "sun.util.calendar.Gregorian", "Date", $STATIC},
	{"sun.util.calendar.BaseCalendar$Date", "sun.util.calendar.BaseCalendar", "Date", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Gregorian$Date_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.calendar.Gregorian$Date",
	"sun.util.calendar.BaseCalendar$Date",
	nullptr,
	nullptr,
	_Gregorian$Date_MethodInfo_,
	nullptr,
	nullptr,
	_Gregorian$Date_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.calendar.Gregorian"
};

$Object* allocate$Gregorian$Date($Class* clazz) {
	return $of($alloc(Gregorian$Date));
}

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
	$loadClass(Gregorian$Date, name, initialize, &_Gregorian$Date_ClassInfo_, allocate$Gregorian$Date);
	return class$;
}

$Class* Gregorian$Date::class$ = nullptr;

		} // calendar
	} // util
} // sun