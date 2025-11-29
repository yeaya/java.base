#include <java/util/SimpleTimeZone.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/SimpleTimeZone$Cache.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/BaseCalendar$Date.h>
#include <sun/util/calendar/BaseCalendar.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/CalendarSystem.h>
#include <sun/util/calendar/CalendarUtils.h>
#include <sun/util/calendar/Gregorian.h>
#include <jcpp.h>

#undef AD
#undef BC
#undef CE
#undef DECEMBER
#undef DEFAULT_GREGORIAN_CUTOVER
#undef DOM_MODE
#undef DOW_GE_DOM_MODE
#undef DOW_IN_MONTH_MODE
#undef DOW_LE_DOM_MODE
#undef ID
#undef JANUARY
#undef MAX_RULE_NUM
#undef NO_TIMEZONE
#undef SATURDAY
#undef STANDARD_TIME
#undef SUNDAY
#undef UTC_TIME
#undef WALL_TIME

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $SimpleTimeZone$Cache = ::java::util::SimpleTimeZone$Cache;
using $TimeZone = ::java::util::TimeZone;
using $BaseCalendar = ::sun::util::calendar::BaseCalendar;
using $BaseCalendar$Date = ::sun::util::calendar::BaseCalendar$Date;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $CalendarSystem = ::sun::util::calendar::CalendarSystem;
using $CalendarUtils = ::sun::util::calendar::CalendarUtils;
using $Gregorian = ::sun::util::calendar::Gregorian;

namespace java {
	namespace util {

$FieldInfo _SimpleTimeZone_FieldInfo_[] = {
	{"startMonth", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, startMonth)},
	{"startDay", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, startDay)},
	{"startDayOfWeek", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, startDayOfWeek)},
	{"startTime", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, startTime)},
	{"startTimeMode", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, startTimeMode)},
	{"endMonth", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, endMonth)},
	{"endDay", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, endDay)},
	{"endDayOfWeek", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, endDayOfWeek)},
	{"endTime", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, endTime)},
	{"endTimeMode", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, endTimeMode)},
	{"startYear", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, startYear)},
	{"rawOffset", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, rawOffset)},
	{"useDaylight", "Z", nullptr, $PRIVATE, $field(SimpleTimeZone, useDaylight)},
	{"millisPerHour", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SimpleTimeZone, millisPerHour)},
	{"millisPerDay", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SimpleTimeZone, millisPerDay)},
	{"monthLength", "[B", nullptr, $PRIVATE | $FINAL, $field(SimpleTimeZone, monthLength)},
	{"staticMonthLength", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SimpleTimeZone, staticMonthLength)},
	{"staticLeapMonthLength", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SimpleTimeZone, staticLeapMonthLength)},
	{"startMode", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, startMode)},
	{"endMode", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, endMode)},
	{"dstSavings", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, dstSavings)},
	{"gcal", "Lsun/util/calendar/Gregorian;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SimpleTimeZone, gcal)},
	{"cache", "Ljava/util/SimpleTimeZone$Cache;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(SimpleTimeZone, cache)},
	{"DOM_MODE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SimpleTimeZone, DOM_MODE)},
	{"DOW_IN_MONTH_MODE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SimpleTimeZone, DOW_IN_MONTH_MODE)},
	{"DOW_GE_DOM_MODE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SimpleTimeZone, DOW_GE_DOM_MODE)},
	{"DOW_LE_DOM_MODE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SimpleTimeZone, DOW_LE_DOM_MODE)},
	{"WALL_TIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SimpleTimeZone, WALL_TIME)},
	{"STANDARD_TIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SimpleTimeZone, STANDARD_TIME)},
	{"UTC_TIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SimpleTimeZone, UTC_TIME)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SimpleTimeZone, serialVersionUID)},
	{"currentSerialVersion", "I", nullptr, $STATIC | $FINAL, $constField(SimpleTimeZone, currentSerialVersion)},
	{"serialVersionOnStream", "I", nullptr, $PRIVATE, $field(SimpleTimeZone, serialVersionOnStream)},
	{"MAX_RULE_NUM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SimpleTimeZone, MAX_RULE_NUM)},
	{}
};

$MethodInfo _SimpleTimeZone_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleTimeZone::*)(int32_t,$String*)>(&SimpleTimeZone::init$))},
	{"<init>", "(ILjava/lang/String;IIIIIIII)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleTimeZone::*)(int32_t,$String*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&SimpleTimeZone::init$))},
	{"<init>", "(ILjava/lang/String;IIIIIIIII)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleTimeZone::*)(int32_t,$String*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&SimpleTimeZone::init$))},
	{"<init>", "(ILjava/lang/String;IIIIIIIIIII)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleTimeZone::*)(int32_t,$String*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&SimpleTimeZone::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"decodeEndRule", "()V", nullptr, $PRIVATE, $method(static_cast<void(SimpleTimeZone::*)()>(&SimpleTimeZone::decodeEndRule))},
	{"decodeRules", "()V", nullptr, $PRIVATE, $method(static_cast<void(SimpleTimeZone::*)()>(&SimpleTimeZone::decodeRules))},
	{"decodeStartRule", "()V", nullptr, $PRIVATE, $method(static_cast<void(SimpleTimeZone::*)()>(&SimpleTimeZone::decodeStartRule))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDSTSavings", "()I", nullptr, $PUBLIC},
	{"getEnd", "(Lsun/util/calendar/BaseCalendar;Lsun/util/calendar/BaseCalendar$Date;I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(SimpleTimeZone::*)($BaseCalendar*,$BaseCalendar$Date*,int32_t)>(&SimpleTimeZone::getEnd))},
	{"getOffset", "(J)I", nullptr, $PUBLIC},
	{"getOffset", "(IIIIII)I", nullptr, $PUBLIC},
	{"getOffset", "(Lsun/util/calendar/BaseCalendar;Lsun/util/calendar/BaseCalendar$Date;IJ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SimpleTimeZone::*)($BaseCalendar*,$BaseCalendar$Date*,int32_t,int64_t)>(&SimpleTimeZone::getOffset))},
	{"getOffsets", "(J[I)I", nullptr, 0},
	{"getRawOffset", "()I", nullptr, $PUBLIC},
	{"getStart", "(Lsun/util/calendar/BaseCalendar;Lsun/util/calendar/BaseCalendar$Date;I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(SimpleTimeZone::*)($BaseCalendar*,$BaseCalendar$Date*,int32_t)>(&SimpleTimeZone::getStart))},
	{"getTransition", "(Lsun/util/calendar/BaseCalendar;Lsun/util/calendar/BaseCalendar$Date;IIIIII)J", nullptr, $PRIVATE, $method(static_cast<int64_t(SimpleTimeZone::*)($BaseCalendar*,$BaseCalendar$Date*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&SimpleTimeZone::getTransition))},
	{"hasSameRules", "(Ljava/util/TimeZone;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"inDaylightTime", "(Ljava/util/Date;)Z", nullptr, $PUBLIC},
	{"invalidateCache", "()V", nullptr, $PRIVATE, $method(static_cast<void(SimpleTimeZone::*)()>(&SimpleTimeZone::invalidateCache))},
	{"makeRulesCompatible", "()V", nullptr, $PRIVATE, $method(static_cast<void(SimpleTimeZone::*)()>(&SimpleTimeZone::makeRulesCompatible))},
	{"observesDaylightTime", "()Z", nullptr, $PUBLIC},
	{"packRules", "()[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(SimpleTimeZone::*)()>(&SimpleTimeZone::packRules))},
	{"packTimes", "()[I", nullptr, $PRIVATE, $method(static_cast<$ints*(SimpleTimeZone::*)()>(&SimpleTimeZone::packTimes))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(SimpleTimeZone::*)($ObjectInputStream*)>(&SimpleTimeZone::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setDSTSavings", "(I)V", nullptr, $PUBLIC},
	{"setEndRule", "(IIII)V", nullptr, $PUBLIC},
	{"setEndRule", "(III)V", nullptr, $PUBLIC},
	{"setEndRule", "(IIIIZ)V", nullptr, $PUBLIC},
	{"setRawOffset", "(I)V", nullptr, $PUBLIC},
	{"setStartRule", "(IIII)V", nullptr, $PUBLIC},
	{"setStartRule", "(III)V", nullptr, $PUBLIC},
	{"setStartRule", "(IIIIZ)V", nullptr, $PUBLIC},
	{"setStartYear", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unpackRules", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(SimpleTimeZone::*)($bytes*)>(&SimpleTimeZone::unpackRules))},
	{"unpackTimes", "([I)V", nullptr, $PRIVATE, $method(static_cast<void(SimpleTimeZone::*)($ints*)>(&SimpleTimeZone::unpackTimes))},
	{"useDaylightTime", "()Z", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(SimpleTimeZone::*)($ObjectOutputStream*)>(&SimpleTimeZone::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _SimpleTimeZone_InnerClassesInfo_[] = {
	{"java.util.SimpleTimeZone$Cache", "java.util.SimpleTimeZone", "Cache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SimpleTimeZone_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.SimpleTimeZone",
	"java.util.TimeZone",
	nullptr,
	_SimpleTimeZone_FieldInfo_,
	_SimpleTimeZone_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleTimeZone_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.SimpleTimeZone$Cache"
};

$Object* allocate$SimpleTimeZone($Class* clazz) {
	return $of($alloc(SimpleTimeZone));
}

$bytes* SimpleTimeZone::staticMonthLength = nullptr;
$bytes* SimpleTimeZone::staticLeapMonthLength = nullptr;
$Gregorian* SimpleTimeZone::gcal = nullptr;

void SimpleTimeZone::init$(int32_t rawOffset, $String* ID) {
	$TimeZone::init$();
	this->useDaylight = false;
	$set(this, monthLength, SimpleTimeZone::staticMonthLength);
	this->serialVersionOnStream = SimpleTimeZone::currentSerialVersion;
	this->rawOffset = rawOffset;
	setID(ID);
	this->dstSavings = SimpleTimeZone::millisPerHour;
}

void SimpleTimeZone::init$(int32_t rawOffset, $String* ID, int32_t startMonth, int32_t startDay, int32_t startDayOfWeek, int32_t startTime, int32_t endMonth, int32_t endDay, int32_t endDayOfWeek, int32_t endTime) {
	SimpleTimeZone::init$(rawOffset, ID, startMonth, startDay, startDayOfWeek, startTime, SimpleTimeZone::WALL_TIME, endMonth, endDay, endDayOfWeek, endTime, SimpleTimeZone::WALL_TIME, SimpleTimeZone::millisPerHour);
}

void SimpleTimeZone::init$(int32_t rawOffset, $String* ID, int32_t startMonth, int32_t startDay, int32_t startDayOfWeek, int32_t startTime, int32_t endMonth, int32_t endDay, int32_t endDayOfWeek, int32_t endTime, int32_t dstSavings) {
	SimpleTimeZone::init$(rawOffset, ID, startMonth, startDay, startDayOfWeek, startTime, SimpleTimeZone::WALL_TIME, endMonth, endDay, endDayOfWeek, endTime, SimpleTimeZone::WALL_TIME, dstSavings);
}

void SimpleTimeZone::init$(int32_t rawOffset, $String* ID, int32_t startMonth, int32_t startDay, int32_t startDayOfWeek, int32_t startTime, int32_t startTimeMode, int32_t endMonth, int32_t endDay, int32_t endDayOfWeek, int32_t endTime, int32_t endTimeMode, int32_t dstSavings) {
	$useLocalCurrentObjectStackCache();
	$TimeZone::init$();
	this->useDaylight = false;
	$set(this, monthLength, SimpleTimeZone::staticMonthLength);
	this->serialVersionOnStream = SimpleTimeZone::currentSerialVersion;
	setID(ID);
	this->rawOffset = rawOffset;
	this->startMonth = startMonth;
	this->startDay = startDay;
	this->startDayOfWeek = startDayOfWeek;
	this->startTime = startTime;
	this->startTimeMode = startTimeMode;
	this->endMonth = endMonth;
	this->endDay = endDay;
	this->endDayOfWeek = endDayOfWeek;
	this->endTime = endTime;
	this->endTimeMode = endTimeMode;
	this->dstSavings = dstSavings;
	decodeRules();
	if (dstSavings <= 0) {
		$throwNew($IllegalArgumentException, $$str({"Illegal daylight saving value: "_s, $$str(dstSavings)}));
	}
}

void SimpleTimeZone::setStartYear(int32_t year) {
	this->startYear = year;
	invalidateCache();
}

void SimpleTimeZone::setStartRule(int32_t startMonth, int32_t startDay, int32_t startDayOfWeek, int32_t startTime) {
	this->startMonth = startMonth;
	this->startDay = startDay;
	this->startDayOfWeek = startDayOfWeek;
	this->startTime = startTime;
	this->startTimeMode = SimpleTimeZone::WALL_TIME;
	decodeStartRule();
	invalidateCache();
}

void SimpleTimeZone::setStartRule(int32_t startMonth, int32_t startDay, int32_t startTime) {
	setStartRule(startMonth, startDay, 0, startTime);
}

void SimpleTimeZone::setStartRule(int32_t startMonth, int32_t startDay, int32_t startDayOfWeek, int32_t startTime, bool after) {
	if (after) {
		setStartRule(startMonth, startDay, -startDayOfWeek, startTime);
	} else {
		setStartRule(startMonth, -startDay, -startDayOfWeek, startTime);
	}
}

void SimpleTimeZone::setEndRule(int32_t endMonth, int32_t endDay, int32_t endDayOfWeek, int32_t endTime) {
	this->endMonth = endMonth;
	this->endDay = endDay;
	this->endDayOfWeek = endDayOfWeek;
	this->endTime = endTime;
	this->endTimeMode = SimpleTimeZone::WALL_TIME;
	decodeEndRule();
	invalidateCache();
}

void SimpleTimeZone::setEndRule(int32_t endMonth, int32_t endDay, int32_t endTime) {
	setEndRule(endMonth, endDay, 0, endTime);
}

void SimpleTimeZone::setEndRule(int32_t endMonth, int32_t endDay, int32_t endDayOfWeek, int32_t endTime, bool after) {
	if (after) {
		setEndRule(endMonth, endDay, -endDayOfWeek, endTime);
	} else {
		setEndRule(endMonth, -endDay, -endDayOfWeek, endTime);
	}
}

int32_t SimpleTimeZone::getOffset(int64_t date) {
	return getOffsets(date, nullptr);
}

int32_t SimpleTimeZone::getOffsets(int64_t date, $ints* offsets) {
	$useLocalCurrentObjectStackCache();
	int32_t offset = this->rawOffset;
	bool computeOffset$break = false;
	for (;;) {
		if (this->useDaylight) {
			$var($SimpleTimeZone$Cache, cache, this->cache);
			if (cache != nullptr) {
				if (date >= cache->start && date < cache->end) {
					offset += this->dstSavings;
					computeOffset$break = true;
					break;
				}
			}
			$var($BaseCalendar, cal, date >= $GregorianCalendar::DEFAULT_GREGORIAN_CUTOVER ? static_cast<$BaseCalendar*>(SimpleTimeZone::gcal) : $cast($BaseCalendar, $CalendarSystem::forName("julian"_s)));
			$init($TimeZone);
			$var($BaseCalendar$Date, cdate, $cast($BaseCalendar$Date, $nc(cal)->newCalendarDate($TimeZone::NO_TIMEZONE)));
			cal->getCalendarDate(date + this->rawOffset, static_cast<$CalendarDate*>(cdate));
			int32_t year = $nc(cdate)->getNormalizedYear();
			if (year >= this->startYear) {
				cdate->setTimeOfDay(0, 0, 0, 0);
				offset = getOffset(cal, cdate, year, date);
			}
		}
		break;
	}
	if (offsets != nullptr) {
		offsets->set(0, this->rawOffset);
		offsets->set(1, offset - this->rawOffset);
	}
	return offset;
}

int32_t SimpleTimeZone::getOffset(int32_t era, int32_t year, int32_t month, int32_t day, int32_t dayOfWeek, int32_t millis) {
	$useLocalCurrentObjectStackCache();
	if (era != $GregorianCalendar::AD && era != $GregorianCalendar::BC) {
		$throwNew($IllegalArgumentException, $$str({"Illegal era "_s, $$str(era)}));
	}
	int32_t y = year;
	if (era == $GregorianCalendar::BC) {
		y = 1 - y;
	}
	if (y >= 0x116BD2D2) {
		y = 2800 + y % 2800;
	} else if (y <= (int32_t)0xEE945402) {
		y = (int32_t)$CalendarUtils::mod((int64_t)y, (int64_t)28);
	}
	int32_t m = month + 1;
	$var($BaseCalendar, cal, SimpleTimeZone::gcal);
	$init($TimeZone);
	$var($BaseCalendar$Date, cdate, $cast($BaseCalendar$Date, $nc(cal)->newCalendarDate($TimeZone::NO_TIMEZONE)));
	$nc(cdate)->setDate(y, m, day);
	int64_t time = cal->getTime(cdate);
	time += millis - this->rawOffset;
	if (time < $GregorianCalendar::DEFAULT_GREGORIAN_CUTOVER) {
		$assign(cal, $cast($BaseCalendar, $CalendarSystem::forName("julian"_s)));
		$assign(cdate, $cast($BaseCalendar$Date, $nc(cal)->newCalendarDate($TimeZone::NO_TIMEZONE)));
		$nc(cdate)->setNormalizedDate(y, m, day);
		time = cal->getTime(cdate) + millis - this->rawOffset;
	}
	bool var$1 = (cdate->getNormalizedYear() != y);
	bool var$0 = var$1 || (cdate->getMonth() != m);
	if (var$0 || (cdate->getDayOfMonth() != day) || (dayOfWeek < $Calendar::SUNDAY || dayOfWeek > $Calendar::SATURDAY) || (millis < 0 || millis >= (24 * 60 * 60 * 1000))) {
		$throwNew($IllegalArgumentException);
	}
	if (!this->useDaylight || year < this->startYear || era != $GregorianCalendar::CE) {
		return this->rawOffset;
	}
	return getOffset(cal, cdate, y, time);
}

int32_t SimpleTimeZone::getOffset($BaseCalendar* cal, $BaseCalendar$Date* cdate, int32_t year, int64_t time) {
	$var($SimpleTimeZone$Cache, cache, this->cache);
	if (cache != nullptr) {
		if (time >= cache->start && time < cache->end) {
			return this->rawOffset + this->dstSavings;
		}
		if (year == cache->year) {
			return this->rawOffset;
		}
	}
	int64_t start = getStart(cal, cdate, year);
	int64_t end = getEnd(cal, cdate, year);
	int32_t offset = this->rawOffset;
	if (start <= end) {
		if (time >= start && time < end) {
			offset += this->dstSavings;
		}
		$set(this, cache, $new($SimpleTimeZone$Cache, year, start, end));
	} else {
		if (time < end) {
			start = getStart(cal, cdate, year - 1);
			if (time >= start) {
				offset += this->dstSavings;
			}
		} else if (time >= start) {
			end = getEnd(cal, cdate, year + 1);
			if (time < end) {
				offset += this->dstSavings;
			}
		}
		if (start <= end) {
			$set(this, cache, $new($SimpleTimeZone$Cache, (int64_t)this->startYear - 1, start, end));
		}
	}
	return offset;
}

int64_t SimpleTimeZone::getStart($BaseCalendar* cal, $BaseCalendar$Date* cdate, int32_t year) {
	int32_t time = this->startTime;
	if (this->startTimeMode != SimpleTimeZone::UTC_TIME) {
		time -= this->rawOffset;
	}
	return getTransition(cal, cdate, this->startMode, year, this->startMonth, this->startDay, this->startDayOfWeek, time);
}

int64_t SimpleTimeZone::getEnd($BaseCalendar* cal, $BaseCalendar$Date* cdate, int32_t year) {
	int32_t time = this->endTime;
	if (this->endTimeMode != SimpleTimeZone::UTC_TIME) {
		time -= this->rawOffset;
	}
	if (this->endTimeMode == SimpleTimeZone::WALL_TIME) {
		time -= this->dstSavings;
	}
	return getTransition(cal, cdate, this->endMode, year, this->endMonth, this->endDay, this->endDayOfWeek, time);
}

int64_t SimpleTimeZone::getTransition($BaseCalendar* cal, $BaseCalendar$Date* cdate$renamed, int32_t mode, int32_t year, int32_t month, int32_t dayOfMonth, int32_t dayOfWeek, int32_t timeOfDay) {
	$var($BaseCalendar$Date, cdate, cdate$renamed);
	$nc(cdate)->setNormalizedYear(year);
	cdate->setMonth(month + 1);
	switch (mode) {
	case SimpleTimeZone::DOM_MODE:
		{
			cdate->setDayOfMonth(dayOfMonth);
			break;
		}
	case SimpleTimeZone::DOW_IN_MONTH_MODE:
		{
			{
				cdate->setDayOfMonth(1);
				if (dayOfMonth < 0) {
					cdate->setDayOfMonth($nc(cal)->getMonthLength(cdate));
				}
				$assign(cdate, $cast($BaseCalendar$Date, $nc(cal)->getNthDayOfWeek(dayOfMonth, dayOfWeek, cdate)));
			}
			break;
		}
	case SimpleTimeZone::DOW_GE_DOM_MODE:
		{
			{
				cdate->setDayOfMonth(dayOfMonth);
				$assign(cdate, $cast($BaseCalendar$Date, $nc(cal)->getNthDayOfWeek(1, dayOfWeek, cdate)));
			}
			break;
		}
	case SimpleTimeZone::DOW_LE_DOM_MODE:
		{
			{
				cdate->setDayOfMonth(dayOfMonth);
				$assign(cdate, $cast($BaseCalendar$Date, $nc(cal)->getNthDayOfWeek(-1, dayOfWeek, cdate)));
			}
			break;
		}
	}
	return $nc(cal)->getTime(cdate) + timeOfDay;
}

int32_t SimpleTimeZone::getRawOffset() {
	return this->rawOffset;
}

void SimpleTimeZone::setRawOffset(int32_t offsetMillis) {
	this->rawOffset = offsetMillis;
}

void SimpleTimeZone::setDSTSavings(int32_t millisSavedDuringDST) {
	$useLocalCurrentObjectStackCache();
	if (millisSavedDuringDST <= 0) {
		$throwNew($IllegalArgumentException, $$str({"Illegal daylight saving value: "_s, $$str(millisSavedDuringDST)}));
	}
	this->dstSavings = millisSavedDuringDST;
}

int32_t SimpleTimeZone::getDSTSavings() {
	return this->useDaylight ? this->dstSavings : 0;
}

bool SimpleTimeZone::useDaylightTime() {
	return this->useDaylight;
}

bool SimpleTimeZone::observesDaylightTime() {
	return useDaylightTime();
}

bool SimpleTimeZone::inDaylightTime($Date* date) {
	return (getOffset($nc(date)->getTime()) != this->rawOffset);
}

$Object* SimpleTimeZone::clone() {
	return $of($TimeZone::clone());
}

int32_t SimpleTimeZone::hashCode() {
	return (((((((this->startMonth ^ this->startDay) ^ this->startDayOfWeek) ^ this->startTime) ^ this->endMonth) ^ this->endDay) ^ this->endDayOfWeek) ^ this->endTime) ^ this->rawOffset;
}

bool SimpleTimeZone::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj)) {
		return true;
	}
	$var(SimpleTimeZone, that, nullptr);
	bool var$2 = $instanceOf(SimpleTimeZone, obj);
	if (var$2) {
		$assign(that, $cast(SimpleTimeZone, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc($(getID()))->equals($($nc(that)->getID()));
	return var$0 && hasSameRules(that);
}

bool SimpleTimeZone::hasSameRules($TimeZone* other) {
	if ($equals(this, other)) {
		return true;
	}
	$var(SimpleTimeZone, that, nullptr);
	bool var$3 = $instanceOf(SimpleTimeZone, other);
	if (var$3) {
		$assign(that, $cast(SimpleTimeZone, other));
		var$3 = true;
	}
	bool var$2 = var$3;
	bool var$1 = var$2 && this->rawOffset == $nc(that)->rawOffset;
	bool var$0 = var$1 && this->useDaylight == that->useDaylight;
	return var$0 && (!this->useDaylight || (this->dstSavings == $nc(that)->dstSavings && this->startMode == that->startMode && this->startMonth == that->startMonth && this->startDay == that->startDay && this->startDayOfWeek == that->startDayOfWeek && this->startTime == that->startTime && this->startTimeMode == that->startTimeMode && this->endMode == that->endMode && this->endMonth == that->endMonth && this->endDay == that->endDay && this->endDayOfWeek == that->endDayOfWeek && this->endTime == that->endTime && this->endTimeMode == that->endTimeMode && this->startYear == that->startYear));
}

$String* SimpleTimeZone::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$33, $$str({$($of(this)->getClass()->getName()), "[id="_s}));
	$var($String, var$32, $$concat(var$33, $(getID())));
	$var($String, var$31, $$concat(var$32, ",offset="));
	$var($String, var$30, $$concat(var$31, $$str(this->rawOffset)));
	$var($String, var$29, $$concat(var$30, ",dstSavings="));
	$var($String, var$28, $$concat(var$29, $$str(this->dstSavings)));
	$var($String, var$27, $$concat(var$28, ",useDaylight="));
	$var($String, var$26, $$concat(var$27, $$str(this->useDaylight)));
	$var($String, var$25, $$concat(var$26, ",startYear="));
	$var($String, var$24, $$concat(var$25, $$str(this->startYear)));
	$var($String, var$23, $$concat(var$24, ",startMode="));
	$var($String, var$22, $$concat(var$23, $$str(this->startMode)));
	$var($String, var$21, $$concat(var$22, ",startMonth="));
	$var($String, var$20, $$concat(var$21, $$str(this->startMonth)));
	$var($String, var$19, $$concat(var$20, ",startDay="));
	$var($String, var$18, $$concat(var$19, $$str(this->startDay)));
	$var($String, var$17, $$concat(var$18, ",startDayOfWeek="));
	$var($String, var$16, $$concat(var$17, $$str(this->startDayOfWeek)));
	$var($String, var$15, $$concat(var$16, ",startTime="));
	$var($String, var$14, $$concat(var$15, $$str(this->startTime)));
	$var($String, var$13, $$concat(var$14, ",startTimeMode="));
	$var($String, var$12, $$concat(var$13, $$str(this->startTimeMode)));
	$var($String, var$11, $$concat(var$12, ",endMode="));
	$var($String, var$10, $$concat(var$11, $$str(this->endMode)));
	$var($String, var$9, $$concat(var$10, ",endMonth="));
	$var($String, var$8, $$concat(var$9, $$str(this->endMonth)));
	$var($String, var$7, $$concat(var$8, ",endDay="));
	$var($String, var$6, $$concat(var$7, $$str(this->endDay)));
	$var($String, var$5, $$concat(var$6, ",endDayOfWeek="));
	$var($String, var$4, $$concat(var$5, $$str(this->endDayOfWeek)));
	$var($String, var$3, $$concat(var$4, ",endTime="));
	$var($String, var$2, $$concat(var$3, $$str(this->endTime)));
	$var($String, var$1, $$concat(var$2, ",endTimeMode="));
	$var($String, var$0, $$concat(var$1, $$str(this->endTimeMode)));
	return $concat(var$0, $$str(u']'));
}

void SimpleTimeZone::invalidateCache() {
	$set(this, cache, nullptr);
}

void SimpleTimeZone::decodeRules() {
	decodeStartRule();
	decodeEndRule();
}

void SimpleTimeZone::decodeStartRule() {
	$useLocalCurrentObjectStackCache();
	this->useDaylight = (this->startDay != 0) && (this->endDay != 0);
	if (this->startDay != 0) {
		if (this->startMonth < $Calendar::JANUARY || this->startMonth > $Calendar::DECEMBER) {
			$throwNew($IllegalArgumentException, $$str({"Illegal start month "_s, $$str(this->startMonth)}));
		}
		if (this->startTime < 0 || this->startTime > SimpleTimeZone::millisPerDay) {
			$throwNew($IllegalArgumentException, $$str({"Illegal start time "_s, $$str(this->startTime)}));
		}
		if (this->startDayOfWeek == 0) {
			this->startMode = SimpleTimeZone::DOM_MODE;
		} else {
			if (this->startDayOfWeek > 0) {
				this->startMode = SimpleTimeZone::DOW_IN_MONTH_MODE;
			} else {
				this->startDayOfWeek = -this->startDayOfWeek;
				if (this->startDay > 0) {
					this->startMode = SimpleTimeZone::DOW_GE_DOM_MODE;
				} else {
					this->startDay = -this->startDay;
					this->startMode = SimpleTimeZone::DOW_LE_DOM_MODE;
				}
			}
			if (this->startDayOfWeek > $Calendar::SATURDAY) {
				$throwNew($IllegalArgumentException, $$str({"Illegal start day of week "_s, $$str(this->startDayOfWeek)}));
			}
		}
		if (this->startMode == SimpleTimeZone::DOW_IN_MONTH_MODE) {
			if (this->startDay < -5 || this->startDay > 5) {
				$throwNew($IllegalArgumentException, $$str({"Illegal start day of week in month "_s, $$str(this->startDay)}));
			}
		} else if (this->startDay < 1 || this->startDay > $nc(SimpleTimeZone::staticMonthLength)->get(this->startMonth)) {
			$throwNew($IllegalArgumentException, $$str({"Illegal start day "_s, $$str(this->startDay)}));
		}
	}
}

void SimpleTimeZone::decodeEndRule() {
	$useLocalCurrentObjectStackCache();
	this->useDaylight = (this->startDay != 0) && (this->endDay != 0);
	if (this->endDay != 0) {
		if (this->endMonth < $Calendar::JANUARY || this->endMonth > $Calendar::DECEMBER) {
			$throwNew($IllegalArgumentException, $$str({"Illegal end month "_s, $$str(this->endMonth)}));
		}
		if (this->endTime < 0 || this->endTime > SimpleTimeZone::millisPerDay) {
			$throwNew($IllegalArgumentException, $$str({"Illegal end time "_s, $$str(this->endTime)}));
		}
		if (this->endDayOfWeek == 0) {
			this->endMode = SimpleTimeZone::DOM_MODE;
		} else {
			if (this->endDayOfWeek > 0) {
				this->endMode = SimpleTimeZone::DOW_IN_MONTH_MODE;
			} else {
				this->endDayOfWeek = -this->endDayOfWeek;
				if (this->endDay > 0) {
					this->endMode = SimpleTimeZone::DOW_GE_DOM_MODE;
				} else {
					this->endDay = -this->endDay;
					this->endMode = SimpleTimeZone::DOW_LE_DOM_MODE;
				}
			}
			if (this->endDayOfWeek > $Calendar::SATURDAY) {
				$throwNew($IllegalArgumentException, $$str({"Illegal end day of week "_s, $$str(this->endDayOfWeek)}));
			}
		}
		if (this->endMode == SimpleTimeZone::DOW_IN_MONTH_MODE) {
			if (this->endDay < -5 || this->endDay > 5) {
				$throwNew($IllegalArgumentException, $$str({"Illegal end day of week in month "_s, $$str(this->endDay)}));
			}
		} else if (this->endDay < 1 || this->endDay > $nc(SimpleTimeZone::staticMonthLength)->get(this->endMonth)) {
			$throwNew($IllegalArgumentException, $$str({"Illegal end day "_s, $$str(this->endDay)}));
		}
	}
}

void SimpleTimeZone::makeRulesCompatible() {
	switch (this->startMode) {
	case SimpleTimeZone::DOM_MODE:
		{
			this->startDay = 1 + (this->startDay / 7);
			this->startDayOfWeek = $Calendar::SUNDAY;
			break;
		}
	case SimpleTimeZone::DOW_GE_DOM_MODE:
		{
			if (this->startDay != 1) {
				this->startDay = 1 + (this->startDay / 7);
			}
			break;
		}
	case SimpleTimeZone::DOW_LE_DOM_MODE:
		{
			if (this->startDay >= 30) {
				this->startDay = -1;
			} else {
				this->startDay = 1 + (this->startDay / 7);
			}
			break;
		}
	}
	switch (this->endMode) {
	case SimpleTimeZone::DOM_MODE:
		{
			this->endDay = 1 + (this->endDay / 7);
			this->endDayOfWeek = $Calendar::SUNDAY;
			break;
		}
	case SimpleTimeZone::DOW_GE_DOM_MODE:
		{
			if (this->endDay != 1) {
				this->endDay = 1 + (this->endDay / 7);
			}
			break;
		}
	case SimpleTimeZone::DOW_LE_DOM_MODE:
		{
			if (this->endDay >= 30) {
				this->endDay = -1;
			} else {
				this->endDay = 1 + (this->endDay / 7);
			}
			break;
		}
	}
	switch (this->startTimeMode) {
	case SimpleTimeZone::UTC_TIME:
		{
			this->startTime += this->rawOffset;
			break;
		}
	}
	while (this->startTime < 0) {
		this->startTime += SimpleTimeZone::millisPerDay;
		this->startDayOfWeek = 1 + ((this->startDayOfWeek + 5) % 7);
	}
	while (this->startTime >= SimpleTimeZone::millisPerDay) {
		this->startTime -= SimpleTimeZone::millisPerDay;
		this->startDayOfWeek = 1 + (this->startDayOfWeek % 7);
	}
	switch (this->endTimeMode) {
	case SimpleTimeZone::UTC_TIME:
		{
			this->endTime += this->rawOffset + this->dstSavings;
			break;
		}
	case SimpleTimeZone::STANDARD_TIME:
		{
			this->endTime += this->dstSavings;
			break;
		}
	}
	while (this->endTime < 0) {
		this->endTime += SimpleTimeZone::millisPerDay;
		this->endDayOfWeek = 1 + ((this->endDayOfWeek + 5) % 7);
	}
	while (this->endTime >= SimpleTimeZone::millisPerDay) {
		this->endTime -= SimpleTimeZone::millisPerDay;
		this->endDayOfWeek = 1 + (this->endDayOfWeek % 7);
	}
}

$bytes* SimpleTimeZone::packRules() {
	$var($bytes, rules, $new($bytes, SimpleTimeZone::MAX_RULE_NUM));
	rules->set(0, (int8_t)this->startDay);
	rules->set(1, (int8_t)this->startDayOfWeek);
	rules->set(2, (int8_t)this->endDay);
	rules->set(3, (int8_t)this->endDayOfWeek);
	rules->set(4, (int8_t)this->startTimeMode);
	rules->set(5, (int8_t)this->endTimeMode);
	return rules;
}

void SimpleTimeZone::unpackRules($bytes* rules) {
	this->startDay = $nc(rules)->get(0);
	this->startDayOfWeek = rules->get(1);
	this->endDay = rules->get(2);
	this->endDayOfWeek = rules->get(3);
	if (rules->length >= SimpleTimeZone::MAX_RULE_NUM) {
		this->startTimeMode = rules->get(4);
		this->endTimeMode = rules->get(5);
	}
}

$ints* SimpleTimeZone::packTimes() {
	$var($ints, times, $new($ints, 2));
	times->set(0, this->startTime);
	times->set(1, this->endTime);
	return times;
}

void SimpleTimeZone::unpackTimes($ints* times) {
	this->startTime = $nc(times)->get(0);
	this->endTime = times->get(1);
}

void SimpleTimeZone::writeObject($ObjectOutputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, rules, packRules());
	$var($ints, times, packTimes());
	makeRulesCompatible();
	$nc(stream)->defaultWriteObject();
	stream->writeInt($nc(rules)->length);
	stream->write(rules);
	stream->writeObject(times);
	unpackRules(rules);
	unpackTimes(times);
}

void SimpleTimeZone::readObject($ObjectInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$nc(stream)->defaultReadObject();
	if (this->serialVersionOnStream < 1) {
		if (this->startDayOfWeek == 0) {
			this->startDayOfWeek = $Calendar::SUNDAY;
		}
		if (this->endDayOfWeek == 0) {
			this->endDayOfWeek = $Calendar::SUNDAY;
		}
		this->startMode = (this->endMode = SimpleTimeZone::DOW_IN_MONTH_MODE);
		this->dstSavings = SimpleTimeZone::millisPerHour;
	} else {
		int32_t length = stream->readInt();
		if (length <= SimpleTimeZone::MAX_RULE_NUM) {
			$var($bytes, rules, $new($bytes, length));
			stream->readFully(rules);
			unpackRules(rules);
		} else {
			$throwNew($InvalidObjectException, $$str({"Too many rules: "_s, $$str(length)}));
		}
	}
	if (this->serialVersionOnStream >= 2) {
		$var($ints, times, $cast($ints, stream->readObject()));
		unpackTimes(times);
	}
	this->serialVersionOnStream = SimpleTimeZone::currentSerialVersion;
}

void clinit$SimpleTimeZone($Class* class$) {
	$assignStatic(SimpleTimeZone::staticMonthLength, $new($bytes, {
		(int8_t)31,
		(int8_t)28,
		(int8_t)31,
		(int8_t)30,
		(int8_t)31,
		(int8_t)30,
		(int8_t)31,
		(int8_t)31,
		(int8_t)30,
		(int8_t)31,
		(int8_t)30,
		(int8_t)31
	}));
	$assignStatic(SimpleTimeZone::staticLeapMonthLength, $new($bytes, {
		(int8_t)31,
		(int8_t)29,
		(int8_t)31,
		(int8_t)30,
		(int8_t)31,
		(int8_t)30,
		(int8_t)31,
		(int8_t)31,
		(int8_t)30,
		(int8_t)31,
		(int8_t)30,
		(int8_t)31
	}));
	$assignStatic(SimpleTimeZone::gcal, $CalendarSystem::getGregorianCalendar());
}

SimpleTimeZone::SimpleTimeZone() {
}

$Class* SimpleTimeZone::load$($String* name, bool initialize) {
	$loadClass(SimpleTimeZone, name, initialize, &_SimpleTimeZone_ClassInfo_, clinit$SimpleTimeZone, allocate$SimpleTimeZone);
	return class$;
}

$Class* SimpleTimeZone::class$ = nullptr;

	} // util
} // java