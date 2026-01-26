#include <sun/util/calendar/ImmutableGregorianDate.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/BaseCalendar$Date.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/Era.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $BaseCalendar$Date = ::sun::util::calendar::BaseCalendar$Date;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $Era = ::sun::util::calendar::Era;

namespace sun {
	namespace util {
		namespace calendar {

$FieldInfo _ImmutableGregorianDate_FieldInfo_[] = {
	{"date", "Lsun/util/calendar/BaseCalendar$Date;", nullptr, $PRIVATE | $FINAL, $field(ImmutableGregorianDate, date)},
	{}
};

$MethodInfo _ImmutableGregorianDate_MethodInfo_[] = {
	{"<init>", "(Lsun/util/calendar/BaseCalendar$Date;)V", nullptr, 0, $method(ImmutableGregorianDate, init$, void, $BaseCalendar$Date*)},
	{"addDate", "(III)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, addDate, $CalendarDate*, int32_t, int32_t, int32_t)},
	{"addDayOfMonth", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, addDayOfMonth, $CalendarDate*, int32_t)},
	{"addHours", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, addHours, $CalendarDate*, int32_t)},
	{"addMillis", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, addMillis, $CalendarDate*, int32_t)},
	{"addMinutes", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, addMinutes, $CalendarDate*, int32_t)},
	{"addMonth", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, addMonth, $CalendarDate*, int32_t)},
	{"addSeconds", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, addSeconds, $CalendarDate*, int32_t)},
	{"addTimeOfDay", "(IIII)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, addTimeOfDay, $CalendarDate*, int32_t, int32_t, int32_t, int32_t)},
	{"addYear", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, addYear, $CalendarDate*, int32_t)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, clone, $Object*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, equals, bool, Object$*)},
	{"getDayOfMonth", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getDayOfMonth, int32_t)},
	{"getDayOfWeek", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getDayOfWeek, int32_t)},
	{"getDaylightSaving", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getDaylightSaving, int32_t)},
	{"getEra", "()Lsun/util/calendar/Era;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getEra, $Era*)},
	{"getHours", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getHours, int32_t)},
	{"getMillis", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getMillis, int32_t)},
	{"getMinutes", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getMinutes, int32_t)},
	{"getMonth", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getMonth, int32_t)},
	{"getNormalizedYear", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getNormalizedYear, int32_t)},
	{"getSeconds", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getSeconds, int32_t)},
	{"getTimeOfDay", "()J", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getTimeOfDay, int64_t)},
	{"getYear", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getYear, int32_t)},
	{"getZone", "()Ljava/util/TimeZone;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getZone, $TimeZone*)},
	{"getZoneOffset", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, getZoneOffset, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, hashCode, int32_t)},
	{"isDaylightTime", "()Z", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, isDaylightTime, bool)},
	{"isLeapYear", "()Z", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, isLeapYear, bool)},
	{"isNormalized", "()Z", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, isNormalized, bool)},
	{"isSameDate", "(Lsun/util/calendar/CalendarDate;)Z", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, isSameDate, bool, $CalendarDate*)},
	{"isStandardTime", "()Z", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, isStandardTime, bool)},
	{"setDate", "(III)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setDate, $CalendarDate*, int32_t, int32_t, int32_t)},
	{"setDayOfMonth", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setDayOfMonth, $CalendarDate*, int32_t)},
	{"setDayOfWeek", "(I)V", nullptr, $PROTECTED, $virtualMethod(ImmutableGregorianDate, setDayOfWeek, void, int32_t)},
	{"setDaylightSaving", "(I)V", nullptr, $PROTECTED, $virtualMethod(ImmutableGregorianDate, setDaylightSaving, void, int32_t)},
	{"setEra", "(Lsun/util/calendar/Era;)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setEra, $CalendarDate*, $Era*)},
	{"setHours", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setHours, $CalendarDate*, int32_t)},
	{"setLeapYear", "(Z)V", nullptr, 0, $virtualMethod(ImmutableGregorianDate, setLeapYear, void, bool)},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PROTECTED, $virtualMethod(ImmutableGregorianDate, setLocale, void, $Locale*)},
	{"setMillis", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setMillis, $CalendarDate*, int32_t)},
	{"setMinutes", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setMinutes, $CalendarDate*, int32_t)},
	{"setMonth", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setMonth, $CalendarDate*, int32_t)},
	{"setNormalized", "(Z)V", nullptr, $PROTECTED, $virtualMethod(ImmutableGregorianDate, setNormalized, void, bool)},
	{"setNormalizedYear", "(I)V", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setNormalizedYear, void, int32_t)},
	{"setSeconds", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setSeconds, $CalendarDate*, int32_t)},
	{"setStandardTime", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setStandardTime, void, bool)},
	{"setTimeOfDay", "(IIII)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setTimeOfDay, $CalendarDate*, int32_t, int32_t, int32_t, int32_t)},
	{"setTimeOfDay", "(J)V", nullptr, $PROTECTED, $virtualMethod(ImmutableGregorianDate, setTimeOfDay, void, int64_t)},
	{"setYear", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setYear, $CalendarDate*, int32_t)},
	{"setZone", "(Ljava/util/TimeZone;)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, setZone, $CalendarDate*, $TimeZone*)},
	{"setZoneOffset", "(I)V", nullptr, $PROTECTED, $virtualMethod(ImmutableGregorianDate, setZoneOffset, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImmutableGregorianDate, toString, $String*)},
	{"unsupported", "()V", nullptr, $PRIVATE, $method(ImmutableGregorianDate, unsupported, void)},
	{}
};

$InnerClassInfo _ImmutableGregorianDate_InnerClassesInfo_[] = {
	{"sun.util.calendar.BaseCalendar$Date", "sun.util.calendar.BaseCalendar", "Date", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableGregorianDate_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.calendar.ImmutableGregorianDate",
	"sun.util.calendar.BaseCalendar$Date",
	nullptr,
	_ImmutableGregorianDate_FieldInfo_,
	_ImmutableGregorianDate_MethodInfo_,
	nullptr,
	nullptr,
	_ImmutableGregorianDate_InnerClassesInfo_
};

$Object* allocate$ImmutableGregorianDate($Class* clazz) {
	return $of($alloc(ImmutableGregorianDate));
}

void ImmutableGregorianDate::init$($BaseCalendar$Date* date) {
	$BaseCalendar$Date::init$();
	if (date == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, date, date);
}

$Era* ImmutableGregorianDate::getEra() {
	return $nc(this->date)->getEra();
}

$CalendarDate* ImmutableGregorianDate::setEra($Era* era) {
	unsupported();
	return this;
}

int32_t ImmutableGregorianDate::getYear() {
	return $nc(this->date)->getYear();
}

$CalendarDate* ImmutableGregorianDate::setYear(int32_t year) {
	unsupported();
	return this;
}

$CalendarDate* ImmutableGregorianDate::addYear(int32_t n) {
	unsupported();
	return this;
}

bool ImmutableGregorianDate::isLeapYear() {
	return $nc(this->date)->isLeapYear();
}

void ImmutableGregorianDate::setLeapYear(bool leapYear) {
	unsupported();
}

int32_t ImmutableGregorianDate::getMonth() {
	return $nc(this->date)->getMonth();
}

$CalendarDate* ImmutableGregorianDate::setMonth(int32_t month) {
	unsupported();
	return this;
}

$CalendarDate* ImmutableGregorianDate::addMonth(int32_t n) {
	unsupported();
	return this;
}

int32_t ImmutableGregorianDate::getDayOfMonth() {
	return $nc(this->date)->getDayOfMonth();
}

$CalendarDate* ImmutableGregorianDate::setDayOfMonth(int32_t date) {
	unsupported();
	return this;
}

$CalendarDate* ImmutableGregorianDate::addDayOfMonth(int32_t n) {
	unsupported();
	return this;
}

int32_t ImmutableGregorianDate::getDayOfWeek() {
	return $nc(this->date)->getDayOfWeek();
}

int32_t ImmutableGregorianDate::getHours() {
	return $nc(this->date)->getHours();
}

$CalendarDate* ImmutableGregorianDate::setHours(int32_t hours) {
	unsupported();
	return this;
}

$CalendarDate* ImmutableGregorianDate::addHours(int32_t n) {
	unsupported();
	return this;
}

int32_t ImmutableGregorianDate::getMinutes() {
	return $nc(this->date)->getMinutes();
}

$CalendarDate* ImmutableGregorianDate::setMinutes(int32_t minutes) {
	unsupported();
	return this;
}

$CalendarDate* ImmutableGregorianDate::addMinutes(int32_t n) {
	unsupported();
	return this;
}

int32_t ImmutableGregorianDate::getSeconds() {
	return $nc(this->date)->getSeconds();
}

$CalendarDate* ImmutableGregorianDate::setSeconds(int32_t seconds) {
	unsupported();
	return this;
}

$CalendarDate* ImmutableGregorianDate::addSeconds(int32_t n) {
	unsupported();
	return this;
}

int32_t ImmutableGregorianDate::getMillis() {
	return $nc(this->date)->getMillis();
}

$CalendarDate* ImmutableGregorianDate::setMillis(int32_t millis) {
	unsupported();
	return this;
}

$CalendarDate* ImmutableGregorianDate::addMillis(int32_t n) {
	unsupported();
	return this;
}

int64_t ImmutableGregorianDate::getTimeOfDay() {
	return $nc(this->date)->getTimeOfDay();
}

$CalendarDate* ImmutableGregorianDate::setDate(int32_t year, int32_t month, int32_t dayOfMonth) {
	unsupported();
	return this;
}

$CalendarDate* ImmutableGregorianDate::addDate(int32_t year, int32_t month, int32_t dayOfMonth) {
	unsupported();
	return this;
}

$CalendarDate* ImmutableGregorianDate::setTimeOfDay(int32_t hours, int32_t minutes, int32_t seconds, int32_t millis) {
	unsupported();
	return this;
}

$CalendarDate* ImmutableGregorianDate::addTimeOfDay(int32_t hours, int32_t minutes, int32_t seconds, int32_t millis) {
	unsupported();
	return this;
}

void ImmutableGregorianDate::setTimeOfDay(int64_t fraction) {
	unsupported();
}

bool ImmutableGregorianDate::isNormalized() {
	return $nc(this->date)->isNormalized();
}

bool ImmutableGregorianDate::isStandardTime() {
	return $nc(this->date)->isStandardTime();
}

void ImmutableGregorianDate::setStandardTime(bool standardTime) {
	unsupported();
}

bool ImmutableGregorianDate::isDaylightTime() {
	return $nc(this->date)->isDaylightTime();
}

void ImmutableGregorianDate::setLocale($Locale* loc) {
	unsupported();
}

$TimeZone* ImmutableGregorianDate::getZone() {
	return $nc(this->date)->getZone();
}

$CalendarDate* ImmutableGregorianDate::setZone($TimeZone* zoneinfo) {
	unsupported();
	return this;
}

bool ImmutableGregorianDate::isSameDate($CalendarDate* date) {
	return $nc(date)->isSameDate(date);
}

bool ImmutableGregorianDate::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(ImmutableGregorianDate, obj))) {
		return false;
	}
	return $nc(this->date)->equals($nc(($cast(ImmutableGregorianDate, obj)))->date);
}

int32_t ImmutableGregorianDate::hashCode() {
	return $nc(this->date)->hashCode();
}

$Object* ImmutableGregorianDate::clone() {
	return $of($BaseCalendar$Date::clone());
}

$String* ImmutableGregorianDate::toString() {
	return $nc(this->date)->toString();
}

void ImmutableGregorianDate::setDayOfWeek(int32_t dayOfWeek) {
	unsupported();
}

void ImmutableGregorianDate::setNormalized(bool normalized) {
	unsupported();
}

int32_t ImmutableGregorianDate::getZoneOffset() {
	return $nc(this->date)->getZoneOffset();
}

void ImmutableGregorianDate::setZoneOffset(int32_t offset) {
	unsupported();
}

int32_t ImmutableGregorianDate::getDaylightSaving() {
	return $nc(this->date)->getDaylightSaving();
}

void ImmutableGregorianDate::setDaylightSaving(int32_t daylightSaving) {
	unsupported();
}

int32_t ImmutableGregorianDate::getNormalizedYear() {
	return $nc(this->date)->getNormalizedYear();
}

void ImmutableGregorianDate::setNormalizedYear(int32_t normalizedYear) {
	unsupported();
}

void ImmutableGregorianDate::unsupported() {
	$throwNew($UnsupportedOperationException);
}

ImmutableGregorianDate::ImmutableGregorianDate() {
}

$Class* ImmutableGregorianDate::load$($String* name, bool initialize) {
	$loadClass(ImmutableGregorianDate, name, initialize, &_ImmutableGregorianDate_ClassInfo_, allocate$ImmutableGregorianDate);
	return class$;
}

$Class* ImmutableGregorianDate::class$ = nullptr;

		} // calendar
	} // util
} // sun