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
	{"<init>", "(Lsun/util/calendar/BaseCalendar$Date;)V", nullptr, 0, $method(static_cast<void(ImmutableGregorianDate::*)($BaseCalendar$Date*)>(&ImmutableGregorianDate::init$))},
	{"addDate", "(III)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"addDayOfMonth", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"addHours", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"addMillis", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"addMinutes", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"addMonth", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"addSeconds", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"addTimeOfDay", "(IIII)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"addYear", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDayOfMonth", "()I", nullptr, $PUBLIC},
	{"getDayOfWeek", "()I", nullptr, $PUBLIC},
	{"getDaylightSaving", "()I", nullptr, $PUBLIC},
	{"getEra", "()Lsun/util/calendar/Era;", nullptr, $PUBLIC},
	{"getHours", "()I", nullptr, $PUBLIC},
	{"getMillis", "()I", nullptr, $PUBLIC},
	{"getMinutes", "()I", nullptr, $PUBLIC},
	{"getMonth", "()I", nullptr, $PUBLIC},
	{"getNormalizedYear", "()I", nullptr, $PUBLIC},
	{"getSeconds", "()I", nullptr, $PUBLIC},
	{"getTimeOfDay", "()J", nullptr, $PUBLIC},
	{"getYear", "()I", nullptr, $PUBLIC},
	{"getZone", "()Ljava/util/TimeZone;", nullptr, $PUBLIC},
	{"getZoneOffset", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDaylightTime", "()Z", nullptr, $PUBLIC},
	{"isLeapYear", "()Z", nullptr, $PUBLIC},
	{"isNormalized", "()Z", nullptr, $PUBLIC},
	{"isSameDate", "(Lsun/util/calendar/CalendarDate;)Z", nullptr, $PUBLIC},
	{"isStandardTime", "()Z", nullptr, $PUBLIC},
	{"setDate", "(III)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setDayOfMonth", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setDayOfWeek", "(I)V", nullptr, $PROTECTED},
	{"setDaylightSaving", "(I)V", nullptr, $PROTECTED},
	{"setEra", "(Lsun/util/calendar/Era;)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setHours", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setLeapYear", "(Z)V", nullptr, 0},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PROTECTED},
	{"setMillis", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setMinutes", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setMonth", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setNormalized", "(Z)V", nullptr, $PROTECTED},
	{"setNormalizedYear", "(I)V", nullptr, $PUBLIC},
	{"setSeconds", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setStandardTime", "(Z)V", nullptr, $PUBLIC},
	{"setTimeOfDay", "(IIII)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setTimeOfDay", "(J)V", nullptr, $PROTECTED},
	{"setYear", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setZone", "(Ljava/util/TimeZone;)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setZoneOffset", "(I)V", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unsupported", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImmutableGregorianDate::*)()>(&ImmutableGregorianDate::unsupported))},
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