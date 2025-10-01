#include <sun/util/calendar/JulianCalendar$Date.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/BaseCalendar$Date.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/CalendarUtils.h>
#include <sun/util/calendar/Era.h>
#include <sun/util/calendar/JulianCalendar.h>
#include <jcpp.h>

using $EraArray = $Array<::sun::util::calendar::Era>;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringBuffer = ::java::lang::StringBuffer;
using $TimeZone = ::java::util::TimeZone;
using $BaseCalendar$Date = ::sun::util::calendar::BaseCalendar$Date;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $CalendarUtils = ::sun::util::calendar::CalendarUtils;
using $Era = ::sun::util::calendar::Era;
using $JulianCalendar = ::sun::util::calendar::JulianCalendar;

namespace sun {
	namespace util {
		namespace calendar {

$MethodInfo _JulianCalendar$Date_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(JulianCalendar$Date::*)()>(&JulianCalendar$Date::init$))},
	{"<init>", "(Ljava/util/TimeZone;)V", nullptr, $PROTECTED, $method(static_cast<void(JulianCalendar$Date::*)($TimeZone*)>(&JulianCalendar$Date::init$))},
	{"getNormalizedYear", "()I", nullptr, $PUBLIC},
	{"setEra", "(Lsun/util/calendar/Era;)Lsun/util/calendar/JulianCalendar$Date;", nullptr, $PUBLIC},
	{"setKnownEra", "(Lsun/util/calendar/Era;)V", nullptr, $PROTECTED},
	{"setNormalizedYear", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JulianCalendar$Date_InnerClassesInfo_[] = {
	{"sun.util.calendar.JulianCalendar$Date", "sun.util.calendar.JulianCalendar", "Date", $PRIVATE | $STATIC},
	{"sun.util.calendar.BaseCalendar$Date", "sun.util.calendar.BaseCalendar", "Date", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JulianCalendar$Date_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.calendar.JulianCalendar$Date",
	"sun.util.calendar.BaseCalendar$Date",
	nullptr,
	nullptr,
	_JulianCalendar$Date_MethodInfo_,
	nullptr,
	nullptr,
	_JulianCalendar$Date_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.calendar.JulianCalendar"
};

$Object* allocate$JulianCalendar$Date($Class* clazz) {
	return $of($alloc(JulianCalendar$Date));
}

void JulianCalendar$Date::init$() {
	$BaseCalendar$Date::init$();
	setCache(1, -1, 365);
}

void JulianCalendar$Date::init$($TimeZone* zone) {
	$BaseCalendar$Date::init$(zone);
	setCache(1, -1, 365);
}

JulianCalendar$Date* JulianCalendar$Date::setEra($Era* era) {
	if (era == nullptr) {
		$throwNew($NullPointerException);
	}
	$init($JulianCalendar);
	if (era != $nc($JulianCalendar::eras)->get(0) || era != $nc($JulianCalendar::eras)->get(1)) {
		$throwNew($IllegalArgumentException, $$str({"unknown era: "_s, era}));
	}
	$BaseCalendar$Date::setEra(era);
	return this;
}

void JulianCalendar$Date::setKnownEra($Era* era) {
	$BaseCalendar$Date::setEra(era);
}

int32_t JulianCalendar$Date::getNormalizedYear() {
	$init($JulianCalendar);
	if (getEra() == $nc($JulianCalendar::eras)->get(0)) {
		return 1 - getYear();
	}
	return getYear();
}

void JulianCalendar$Date::setNormalizedYear(int32_t year) {
	if (year <= 0) {
		setYear(1 - year);
		$init($JulianCalendar);
		setKnownEra($nc($JulianCalendar::eras)->get(0));
	} else {
		setYear(year);
		$init($JulianCalendar);
		setKnownEra($nc($JulianCalendar::eras)->get(1));
	}
}

$String* JulianCalendar$Date::toString() {
	$var($String, time, $BaseCalendar$Date::toString());
	$assign(time, $nc(time)->substring(time->indexOf((int32_t)u'T')));
	$var($StringBuffer, sb, $new($StringBuffer));
	$var($Era, era, getEra());
	if (era != nullptr) {
		$var($String, n, era->getAbbreviation());
		if (n != nullptr) {
			sb->append(n)->append(u' ');
		}
	}
	sb->append(getYear())->append(u'-');
	$nc($($CalendarUtils::sprintf0d(sb, getMonth(), 2)))->append(u'-');
	$CalendarUtils::sprintf0d(sb, getDayOfMonth(), 2);
	sb->append(time);
	return sb->toString();
}

JulianCalendar$Date::JulianCalendar$Date() {
}

$Class* JulianCalendar$Date::load$($String* name, bool initialize) {
	$loadClass(JulianCalendar$Date, name, initialize, &_JulianCalendar$Date_ClassInfo_, allocate$JulianCalendar$Date);
	return class$;
}

$Class* JulianCalendar$Date::class$ = nullptr;

		} // calendar
	} // util
} // sun