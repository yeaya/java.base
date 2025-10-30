#include <sun/util/calendar/AbstractCalendar.h>

#include <java/util/TimeZone.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/CalendarSystem.h>
#include <sun/util/calendar/CalendarUtils.h>
#include <sun/util/calendar/Era.h>
#include <sun/util/calendar/ZoneInfo.h>
#include <jcpp.h>

#undef DAY_IN_MILLIS
#undef EPOCH_OFFSET
#undef HOUR_IN_MILLIS
#undef MINUTE_IN_MILLIS
#undef SECOND_IN_MILLIS
#undef TIME_UNDEFINED

using $EraArray = $Array<::sun::util::calendar::Era>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZone = ::java::util::TimeZone;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $CalendarSystem = ::sun::util::calendar::CalendarSystem;
using $CalendarUtils = ::sun::util::calendar::CalendarUtils;
using $Era = ::sun::util::calendar::Era;
using $ZoneInfo = ::sun::util::calendar::ZoneInfo;

namespace sun {
	namespace util {
		namespace calendar {

$FieldInfo _AbstractCalendar_FieldInfo_[] = {
	{"SECOND_IN_MILLIS", "I", nullptr, $STATIC | $FINAL, $constField(AbstractCalendar, SECOND_IN_MILLIS)},
	{"MINUTE_IN_MILLIS", "I", nullptr, $STATIC | $FINAL, $constField(AbstractCalendar, MINUTE_IN_MILLIS)},
	{"HOUR_IN_MILLIS", "I", nullptr, $STATIC | $FINAL, $constField(AbstractCalendar, HOUR_IN_MILLIS)},
	{"DAY_IN_MILLIS", "I", nullptr, $STATIC | $FINAL, $constField(AbstractCalendar, DAY_IN_MILLIS)},
	{"EPOCH_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(AbstractCalendar, EPOCH_OFFSET)},
	{"eras", "[Lsun/util/calendar/Era;", nullptr, $PRIVATE, $field(AbstractCalendar, eras)},
	{}
};

$MethodInfo _AbstractCalendar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractCalendar::*)()>(&AbstractCalendar::init$))},
	{"getCalendarDate", "()Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"getCalendarDate", "(J)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"getCalendarDate", "(JLjava/util/TimeZone;)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"getCalendarDate", "(JLsun/util/calendar/CalendarDate;)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"getCalendarDateFromFixedDate", "(Lsun/util/calendar/CalendarDate;J)V", nullptr, $PROTECTED | $ABSTRACT},
	{"getDayOfWeekDateAfter", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&AbstractCalendar::getDayOfWeekDateAfter))},
	{"getDayOfWeekDateBefore", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&AbstractCalendar::getDayOfWeekDateBefore))},
	{"getDayOfWeekDateOnOrBefore", "(JI)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&AbstractCalendar::getDayOfWeekDateOnOrBefore))},
	{"getEra", "(Ljava/lang/String;)Lsun/util/calendar/Era;", nullptr, $PUBLIC},
	{"getEras", "()[Lsun/util/calendar/Era;", nullptr, $PUBLIC},
	{"getFixedDate", "(Lsun/util/calendar/CalendarDate;)J", nullptr, $PROTECTED | $ABSTRACT},
	{"getNthDayOfWeek", "(IILsun/util/calendar/CalendarDate;)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"getTime", "(Lsun/util/calendar/CalendarDate;)J", nullptr, $PUBLIC},
	{"getTimeOfDay", "(Lsun/util/calendar/CalendarDate;)J", nullptr, $PROTECTED},
	{"getTimeOfDayValue", "(Lsun/util/calendar/CalendarDate;)J", nullptr, $PUBLIC},
	{"getWeekLength", "()I", nullptr, $PUBLIC},
	{"isLeapYear", "(Lsun/util/calendar/CalendarDate;)Z", nullptr, $PROTECTED | $ABSTRACT},
	{"normalizeTime", "(Lsun/util/calendar/CalendarDate;)I", nullptr, 0},
	{"setEra", "(Lsun/util/calendar/CalendarDate;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setEras", "([Lsun/util/calendar/Era;)V", nullptr, $PROTECTED},
	{"setTimeOfDay", "(Lsun/util/calendar/CalendarDate;I)Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC},
	{"validateTime", "(Lsun/util/calendar/CalendarDate;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractCalendar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.util.calendar.AbstractCalendar",
	"sun.util.calendar.CalendarSystem",
	nullptr,
	_AbstractCalendar_FieldInfo_,
	_AbstractCalendar_MethodInfo_
};

$Object* allocate$AbstractCalendar($Class* clazz) {
	return $of($alloc(AbstractCalendar));
}

void AbstractCalendar::init$() {
	$CalendarSystem::init$();
}

$Era* AbstractCalendar::getEra($String* eraName) {
	$useLocalCurrentObjectStackCache();
	if (this->eras != nullptr) {
		{
			$var($EraArray, arr$, this->eras);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Era, era, arr$->get(i$));
				{
					if ($nc($($nc(era)->getName()))->equals(eraName)) {
						return era;
					}
				}
			}
		}
	}
	return nullptr;
}

$EraArray* AbstractCalendar::getEras() {
	$var($EraArray, e, nullptr);
	if (this->eras != nullptr) {
		$assign(e, $new($EraArray, $nc(this->eras)->length));
		$System::arraycopy(this->eras, 0, e, 0, $nc(this->eras)->length);
	}
	return e;
}

void AbstractCalendar::setEra($CalendarDate* date, $String* eraName) {
	$useLocalCurrentObjectStackCache();
	if (this->eras == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(this->eras)->length; ++i) {
		$var($Era, e, $nc(this->eras)->get(i));
		if (e != nullptr && $nc($(e->getName()))->equals(eraName)) {
			$nc(date)->setEra(e);
			return;
		}
	}
	$throwNew($IllegalArgumentException, $$str({"unknown era name: "_s, eraName}));
}

void AbstractCalendar::setEras($EraArray* eras) {
	$set(this, eras, eras);
}

$CalendarDate* AbstractCalendar::getCalendarDate() {
	int64_t var$0 = $System::currentTimeMillis();
	return getCalendarDate(var$0, $(newCalendarDate()));
}

$CalendarDate* AbstractCalendar::getCalendarDate(int64_t millis) {
	return getCalendarDate(millis, $(newCalendarDate()));
}

$CalendarDate* AbstractCalendar::getCalendarDate(int64_t millis, $TimeZone* zone) {
	$var($CalendarDate, date, newCalendarDate(zone));
	return getCalendarDate(millis, date);
}

$CalendarDate* AbstractCalendar::getCalendarDate(int64_t millis, $CalendarDate* date) {
	$useLocalCurrentObjectStackCache();
	int32_t ms = 0;
	int32_t zoneOffset = 0;
	int32_t saving = 0;
	int64_t days = 0;
	$var($TimeZone, zi, $nc(date)->getZone());
	if (zi != nullptr) {
		$var($ints, offsets, $new($ints, 2));
		if ($instanceOf($ZoneInfo, zi)) {
			zoneOffset = $nc(($cast($ZoneInfo, zi)))->getOffsets(millis, offsets);
		} else {
			zoneOffset = zi->getOffset(millis);
			offsets->set(0, zi->getRawOffset());
			offsets->set(1, zoneOffset - offsets->get(0));
		}
		days = $div(zoneOffset, AbstractCalendar::DAY_IN_MILLIS);
		ms = $mod(zoneOffset, AbstractCalendar::DAY_IN_MILLIS);
		saving = offsets->get(1);
	}
	date->setZoneOffset(zoneOffset);
	date->setDaylightSaving(saving);
	days += $div(millis, AbstractCalendar::DAY_IN_MILLIS);
	ms += (int32_t)($mod(millis, AbstractCalendar::DAY_IN_MILLIS));
	if (ms >= AbstractCalendar::DAY_IN_MILLIS) {
		ms -= AbstractCalendar::DAY_IN_MILLIS;
		++days;
	} else {
		while (ms < 0) {
			ms += AbstractCalendar::DAY_IN_MILLIS;
			--days;
		}
	}
	days += AbstractCalendar::EPOCH_OFFSET;
	getCalendarDateFromFixedDate(date, days);
	setTimeOfDay(date, ms);
	date->setLeapYear(isLeapYear(date));
	date->setNormalized(true);
	return date;
}

int64_t AbstractCalendar::getTime($CalendarDate* date) {
	$useLocalCurrentObjectStackCache();
	int64_t gd = getFixedDate(date);
	int64_t ms = (gd - AbstractCalendar::EPOCH_OFFSET) * AbstractCalendar::DAY_IN_MILLIS + getTimeOfDay(date);
	int32_t zoneOffset = 0;
	$var($TimeZone, zi, $nc(date)->getZone());
	if (zi != nullptr) {
		if (date->isNormalized()) {
			return ms - date->getZoneOffset();
		}
		$var($ints, offsets, $new($ints, 2));
		if (date->isStandardTime()) {
			if ($instanceOf($ZoneInfo, zi)) {
				$nc(($cast($ZoneInfo, zi)))->getOffsetsByStandard(ms, offsets);
				zoneOffset = offsets->get(0);
			} else {
				zoneOffset = zi->getOffset(ms - zi->getRawOffset());
			}
		} else if ($instanceOf($ZoneInfo, zi)) {
			zoneOffset = $nc(($cast($ZoneInfo, zi)))->getOffsetsByWall(ms, offsets);
		} else {
			zoneOffset = zi->getOffset(ms - zi->getRawOffset());
		}
	}
	ms -= zoneOffset;
	getCalendarDate(ms, date);
	return ms;
}

int64_t AbstractCalendar::getTimeOfDay($CalendarDate* date) {
	int64_t fraction = $nc(date)->getTimeOfDay();
	if (fraction != $CalendarDate::TIME_UNDEFINED) {
		return fraction;
	}
	fraction = getTimeOfDayValue(date);
	date->setTimeOfDay(fraction);
	return fraction;
}

int64_t AbstractCalendar::getTimeOfDayValue($CalendarDate* date) {
	int64_t fraction = $nc(date)->getHours();
	fraction *= 60;
	fraction += date->getMinutes();
	fraction *= 60;
	fraction += date->getSeconds();
	fraction *= 1000;
	fraction += date->getMillis();
	return fraction;
}

$CalendarDate* AbstractCalendar::setTimeOfDay($CalendarDate* cdate, int32_t fraction) {
	if (fraction < 0) {
		$throwNew($IllegalArgumentException);
	}
	bool normalizedState = $nc(cdate)->isNormalized();
	int32_t time = fraction;
	int32_t hours = $div(time, AbstractCalendar::HOUR_IN_MILLIS);
	$modAssign(time, AbstractCalendar::HOUR_IN_MILLIS);
	int32_t minutes = $div(time, AbstractCalendar::MINUTE_IN_MILLIS);
	$modAssign(time, AbstractCalendar::MINUTE_IN_MILLIS);
	int32_t seconds = $div(time, AbstractCalendar::SECOND_IN_MILLIS);
	$modAssign(time, AbstractCalendar::SECOND_IN_MILLIS);
	cdate->setHours(hours);
	cdate->setMinutes(minutes);
	cdate->setSeconds(seconds);
	cdate->setMillis(time);
	cdate->setTimeOfDay(fraction);
	if (hours < 24 && normalizedState) {
		cdate->setNormalized(normalizedState);
	}
	return cdate;
}

int32_t AbstractCalendar::getWeekLength() {
	return 7;
}

$CalendarDate* AbstractCalendar::getNthDayOfWeek(int32_t nth, int32_t dayOfWeek, $CalendarDate* date) {
	$var($CalendarDate, ndate, $cast($CalendarDate, $nc(date)->clone()));
	normalize(ndate);
	int64_t fd = getFixedDate(ndate);
	int64_t nfd = 0;
	if (nth > 0) {
		nfd = 7 * nth + getDayOfWeekDateBefore(fd, dayOfWeek);
	} else {
		nfd = 7 * nth + getDayOfWeekDateAfter(fd, dayOfWeek);
	}
	getCalendarDateFromFixedDate(ndate, nfd);
	return ndate;
}

int64_t AbstractCalendar::getDayOfWeekDateBefore(int64_t fixedDate, int32_t dayOfWeek) {
	$init(AbstractCalendar);
	return getDayOfWeekDateOnOrBefore(fixedDate - 1, dayOfWeek);
}

int64_t AbstractCalendar::getDayOfWeekDateAfter(int64_t fixedDate, int32_t dayOfWeek) {
	$init(AbstractCalendar);
	return getDayOfWeekDateOnOrBefore(fixedDate + 7, dayOfWeek);
}

int64_t AbstractCalendar::getDayOfWeekDateOnOrBefore(int64_t fixedDate, int32_t dayOfWeek) {
	$init(AbstractCalendar);
	int64_t fd = fixedDate - (dayOfWeek - 1);
	if (fd >= 0) {
		return fixedDate - (fd % 7);
	}
	return fixedDate - $CalendarUtils::mod(fd, (int64_t)7);
}

bool AbstractCalendar::validateTime($CalendarDate* date) {
	int32_t t = $nc(date)->getHours();
	if (t < 0 || t >= 24) {
		return false;
	}
	t = date->getMinutes();
	if (t < 0 || t >= 60) {
		return false;
	}
	t = date->getSeconds();
	if (t < 0 || t >= 60) {
		return false;
	}
	t = date->getMillis();
	if (t < 0 || t >= 1000) {
		return false;
	}
	return true;
}

int32_t AbstractCalendar::normalizeTime($CalendarDate* date) {
	int64_t fraction = getTimeOfDay(date);
	int64_t days = 0;
	if (fraction >= AbstractCalendar::DAY_IN_MILLIS) {
		days = $div(fraction, AbstractCalendar::DAY_IN_MILLIS);
		$modAssign(fraction, AbstractCalendar::DAY_IN_MILLIS);
	} else if (fraction < 0) {
		days = $CalendarUtils::floorDivide(fraction, (int64_t)AbstractCalendar::DAY_IN_MILLIS);
		if (days != 0) {
			fraction -= AbstractCalendar::DAY_IN_MILLIS * days;
		}
	}
	if (days != 0) {
		$nc(date)->setTimeOfDay(fraction);
	}
	$nc(date)->setMillis((int32_t)(fraction % 1000));
	fraction /= 1000;
	date->setSeconds((int32_t)(fraction % 60));
	fraction /= 60;
	date->setMinutes((int32_t)(fraction % 60));
	date->setHours((int32_t)(fraction / 60));
	return (int32_t)days;
}

AbstractCalendar::AbstractCalendar() {
}

$Class* AbstractCalendar::load$($String* name, bool initialize) {
	$loadClass(AbstractCalendar, name, initialize, &_AbstractCalendar_ClassInfo_, allocate$AbstractCalendar);
	return class$;
}

$Class* AbstractCalendar::class$ = nullptr;

		} // calendar
	} // util
} // sun