#include <sun/util/calendar/CalendarDate.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/CalendarUtils.h>
#include <sun/util/calendar/Era.h>
#include <jcpp.h>

#undef FIELD_UNDEFINED
#undef TIME_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $CalendarUtils = ::sun::util::calendar::CalendarUtils;
using $Era = ::sun::util::calendar::Era;

namespace sun {
	namespace util {
		namespace calendar {

$FieldInfo _CalendarDate_FieldInfo_[] = {
	{"FIELD_UNDEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CalendarDate, FIELD_UNDEFINED)},
	{"TIME_UNDEFINED", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CalendarDate, TIME_UNDEFINED)},
	{"era", "Lsun/util/calendar/Era;", nullptr, $PRIVATE, $field(CalendarDate, era)},
	{"year", "I", nullptr, $PRIVATE, $field(CalendarDate, year)},
	{"month", "I", nullptr, $PRIVATE, $field(CalendarDate, month)},
	{"dayOfMonth", "I", nullptr, $PRIVATE, $field(CalendarDate, dayOfMonth)},
	{"dayOfWeek", "I", nullptr, $PRIVATE, $field(CalendarDate, dayOfWeek)},
	{"leapYear", "Z", nullptr, $PRIVATE, $field(CalendarDate, leapYear)},
	{"hours", "I", nullptr, $PRIVATE, $field(CalendarDate, hours)},
	{"minutes", "I", nullptr, $PRIVATE, $field(CalendarDate, minutes)},
	{"seconds", "I", nullptr, $PRIVATE, $field(CalendarDate, seconds)},
	{"millis", "I", nullptr, $PRIVATE, $field(CalendarDate, millis)},
	{"fraction", "J", nullptr, $PRIVATE, $field(CalendarDate, fraction)},
	{"normalized", "Z", nullptr, $PRIVATE, $field(CalendarDate, normalized)},
	{"zoneinfo", "Ljava/util/TimeZone;", nullptr, $PRIVATE, $field(CalendarDate, zoneinfo)},
	{"zoneOffset", "I", nullptr, $PRIVATE, $field(CalendarDate, zoneOffset)},
	{"daylightSaving", "I", nullptr, $PRIVATE, $field(CalendarDate, daylightSaving)},
	{"forceStandardTime", "Z", nullptr, $PRIVATE, $field(CalendarDate, forceStandardTime)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(CalendarDate, locale)},
	{}
};

$MethodInfo _CalendarDate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(CalendarDate::*)()>(&CalendarDate::init$))},
	{"<init>", "(Ljava/util/TimeZone;)V", nullptr, $PROTECTED, $method(static_cast<void(CalendarDate::*)($TimeZone*)>(&CalendarDate::init$))},
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
	{"setSeconds", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setStandardTime", "(Z)V", nullptr, $PUBLIC},
	{"setTimeOfDay", "(IIII)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setTimeOfDay", "(J)V", nullptr, $PROTECTED},
	{"setYear", "(I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setZone", "(Ljava/util/TimeZone;)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"setZoneOffset", "(I)V", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CalendarDate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.util.calendar.CalendarDate",
	"java.lang.Object",
	"java.lang.Cloneable",
	_CalendarDate_FieldInfo_,
	_CalendarDate_MethodInfo_
};

$Object* allocate$CalendarDate($Class* clazz) {
	return $of($alloc(CalendarDate));
}

void CalendarDate::init$() {
	CalendarDate::init$($($TimeZone::getDefault()));
}

void CalendarDate::init$($TimeZone* zone) {
	this->dayOfWeek = CalendarDate::FIELD_UNDEFINED;
	$set(this, zoneinfo, zone);
}

$Era* CalendarDate::getEra() {
	return this->era;
}

CalendarDate* CalendarDate::setEra($Era* era) {
	if (this->era == era) {
		return this;
	}
	$set(this, era, era);
	this->normalized = false;
	return this;
}

int32_t CalendarDate::getYear() {
	return this->year;
}

CalendarDate* CalendarDate::setYear(int32_t year) {
	if (this->year != year) {
		this->year = year;
		this->normalized = false;
	}
	return this;
}

CalendarDate* CalendarDate::addYear(int32_t n) {
	if (n != 0) {
		this->year += n;
		this->normalized = false;
	}
	return this;
}

bool CalendarDate::isLeapYear() {
	return this->leapYear;
}

void CalendarDate::setLeapYear(bool leapYear) {
	this->leapYear = leapYear;
}

int32_t CalendarDate::getMonth() {
	return this->month;
}

CalendarDate* CalendarDate::setMonth(int32_t month) {
	if (this->month != month) {
		this->month = month;
		this->normalized = false;
	}
	return this;
}

CalendarDate* CalendarDate::addMonth(int32_t n) {
	if (n != 0) {
		this->month += n;
		this->normalized = false;
	}
	return this;
}

int32_t CalendarDate::getDayOfMonth() {
	return this->dayOfMonth;
}

CalendarDate* CalendarDate::setDayOfMonth(int32_t date) {
	if (this->dayOfMonth != date) {
		this->dayOfMonth = date;
		this->normalized = false;
	}
	return this;
}

CalendarDate* CalendarDate::addDayOfMonth(int32_t n) {
	if (n != 0) {
		this->dayOfMonth += n;
		this->normalized = false;
	}
	return this;
}

int32_t CalendarDate::getDayOfWeek() {
	if (!isNormalized()) {
		this->dayOfWeek = CalendarDate::FIELD_UNDEFINED;
	}
	return this->dayOfWeek;
}

int32_t CalendarDate::getHours() {
	return this->hours;
}

CalendarDate* CalendarDate::setHours(int32_t hours) {
	if (this->hours != hours) {
		this->hours = hours;
		this->normalized = false;
	}
	return this;
}

CalendarDate* CalendarDate::addHours(int32_t n) {
	if (n != 0) {
		this->hours += n;
		this->normalized = false;
	}
	return this;
}

int32_t CalendarDate::getMinutes() {
	return this->minutes;
}

CalendarDate* CalendarDate::setMinutes(int32_t minutes) {
	if (this->minutes != minutes) {
		this->minutes = minutes;
		this->normalized = false;
	}
	return this;
}

CalendarDate* CalendarDate::addMinutes(int32_t n) {
	if (n != 0) {
		this->minutes += n;
		this->normalized = false;
	}
	return this;
}

int32_t CalendarDate::getSeconds() {
	return this->seconds;
}

CalendarDate* CalendarDate::setSeconds(int32_t seconds) {
	if (this->seconds != seconds) {
		this->seconds = seconds;
		this->normalized = false;
	}
	return this;
}

CalendarDate* CalendarDate::addSeconds(int32_t n) {
	if (n != 0) {
		this->seconds += n;
		this->normalized = false;
	}
	return this;
}

int32_t CalendarDate::getMillis() {
	return this->millis;
}

CalendarDate* CalendarDate::setMillis(int32_t millis) {
	if (this->millis != millis) {
		this->millis = millis;
		this->normalized = false;
	}
	return this;
}

CalendarDate* CalendarDate::addMillis(int32_t n) {
	if (n != 0) {
		this->millis += n;
		this->normalized = false;
	}
	return this;
}

int64_t CalendarDate::getTimeOfDay() {
	if (!isNormalized()) {
		return this->fraction = CalendarDate::TIME_UNDEFINED;
	}
	return this->fraction;
}

CalendarDate* CalendarDate::setDate(int32_t year, int32_t month, int32_t dayOfMonth) {
	setYear(year);
	setMonth(month);
	setDayOfMonth(dayOfMonth);
	return this;
}

CalendarDate* CalendarDate::addDate(int32_t year, int32_t month, int32_t dayOfMonth) {
	addYear(year);
	addMonth(month);
	addDayOfMonth(dayOfMonth);
	return this;
}

CalendarDate* CalendarDate::setTimeOfDay(int32_t hours, int32_t minutes, int32_t seconds, int32_t millis) {
	setHours(hours);
	setMinutes(minutes);
	setSeconds(seconds);
	setMillis(millis);
	return this;
}

CalendarDate* CalendarDate::addTimeOfDay(int32_t hours, int32_t minutes, int32_t seconds, int32_t millis) {
	addHours(hours);
	addMinutes(minutes);
	addSeconds(seconds);
	addMillis(millis);
	return this;
}

void CalendarDate::setTimeOfDay(int64_t fraction) {
	this->fraction = fraction;
}

bool CalendarDate::isNormalized() {
	return this->normalized;
}

bool CalendarDate::isStandardTime() {
	return this->forceStandardTime;
}

void CalendarDate::setStandardTime(bool standardTime) {
	this->forceStandardTime = standardTime;
}

bool CalendarDate::isDaylightTime() {
	if (isStandardTime()) {
		return false;
	}
	return this->daylightSaving != 0;
}

void CalendarDate::setLocale($Locale* loc) {
	$set(this, locale, loc);
}

$TimeZone* CalendarDate::getZone() {
	return this->zoneinfo;
}

CalendarDate* CalendarDate::setZone($TimeZone* zoneinfo) {
	$set(this, zoneinfo, zoneinfo);
	return this;
}

bool CalendarDate::isSameDate(CalendarDate* date) {
	int32_t var$3 = getDayOfWeek();
	bool var$2 = var$3 == $nc(date)->getDayOfWeek();
	if (var$2) {
		int32_t var$4 = getMonth();
		var$2 = var$4 == date->getMonth();
	}
	bool var$1 = var$2;
	if (var$1) {
		int32_t var$5 = getYear();
		var$1 = var$5 == date->getYear();
	}
	bool var$0 = var$1;
	if (var$0) {
		var$0 = getEra() == date->getEra();
	}
	return var$0;
}

bool CalendarDate::equals(Object$* obj) {
	if (!($instanceOf(CalendarDate, obj))) {
		return false;
	}
	$var(CalendarDate, that, $cast(CalendarDate, obj));
	bool var$0 = isNormalized();
	if (var$0 != $nc(that)->isNormalized()) {
		return false;
	}
	bool hasZone = this->zoneinfo != nullptr;
	bool thatHasZone = $nc(that)->zoneinfo != nullptr;
	if (hasZone != thatHasZone) {
		return false;
	}
	if (hasZone && !$nc($of(this->zoneinfo))->equals(that->zoneinfo)) {
		return false;
	}
	return (getEra() == that->getEra() && this->year == that->year && this->month == that->month && this->dayOfMonth == that->dayOfMonth && this->hours == that->hours && this->minutes == that->minutes && this->seconds == that->seconds && this->millis == that->millis && this->zoneOffset == that->zoneOffset);
}

int32_t CalendarDate::hashCode() {
	int64_t hash = ((((((int64_t)this->year - 1970) * 12) + (this->month - 1)) * 30) + this->dayOfMonth) * 24;
	hash = ((((((hash + this->hours) * 60) + this->minutes) * 60) + this->seconds) * 1000) + this->millis;
	hash -= this->zoneOffset;
	int32_t normalized = isNormalized() ? 1 : 0;
	int32_t era = 0;
	$var($Era, e, getEra());
	if (e != nullptr) {
		era = e->hashCode();
	}
	int32_t zone = this->zoneinfo != nullptr ? $nc($of(this->zoneinfo))->hashCode() : 0;
	return ((((int32_t)hash * (int32_t)(hash >> 32)) ^ era) ^ normalized) ^ zone;
}

$Object* CalendarDate::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$String* CalendarDate::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	$nc($($CalendarUtils::sprintf0d(sb, this->year, 4)))->append(u'-');
	$nc($($CalendarUtils::sprintf0d(sb, this->month, 2)))->append(u'-');
	$nc($($CalendarUtils::sprintf0d(sb, this->dayOfMonth, 2)))->append(u'T');
	$nc($($CalendarUtils::sprintf0d(sb, this->hours, 2)))->append(u':');
	$nc($($CalendarUtils::sprintf0d(sb, this->minutes, 2)))->append(u':');
	$nc($($CalendarUtils::sprintf0d(sb, this->seconds, 2)))->append(u'.');
	$CalendarUtils::sprintf0d(sb, this->millis, 3);
	if (this->zoneOffset == 0) {
		sb->append(u'Z');
	} else if (this->zoneOffset != CalendarDate::FIELD_UNDEFINED) {
		int32_t offset = 0;
		char16_t sign = 0;
		if (this->zoneOffset > 0) {
			offset = this->zoneOffset;
			sign = u'+';
		} else {
			offset = -this->zoneOffset;
			sign = u'-';
		}
		offset /= 0x0000EA60;
		sb->append(sign);
		$CalendarUtils::sprintf0d(sb, offset / 60, 2);
		$CalendarUtils::sprintf0d(sb, offset % 60, 2);
	} else {
		sb->append(" local time"_s);
	}
	return sb->toString();
}

void CalendarDate::setDayOfWeek(int32_t dayOfWeek) {
	this->dayOfWeek = dayOfWeek;
}

void CalendarDate::setNormalized(bool normalized) {
	this->normalized = normalized;
}

int32_t CalendarDate::getZoneOffset() {
	return this->zoneOffset;
}

void CalendarDate::setZoneOffset(int32_t offset) {
	this->zoneOffset = offset;
}

int32_t CalendarDate::getDaylightSaving() {
	return this->daylightSaving;
}

void CalendarDate::setDaylightSaving(int32_t daylightSaving) {
	this->daylightSaving = daylightSaving;
}

CalendarDate::CalendarDate() {
}

$Class* CalendarDate::load$($String* name, bool initialize) {
	$loadClass(CalendarDate, name, initialize, &_CalendarDate_ClassInfo_, allocate$CalendarDate);
	return class$;
}

$Class* CalendarDate::class$ = nullptr;

		} // calendar
	} // util
} // sun