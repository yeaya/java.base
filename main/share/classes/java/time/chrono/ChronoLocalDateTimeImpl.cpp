#include <java/time/chrono/ChronoLocalDateTimeImpl.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutput.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Math.h>
#include <java/time/LocalTime.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/ChronoLocalDateImpl.h>
#include <java/time/chrono/ChronoLocalDateTime.h>
#include <java/time/chrono/ChronoLocalDateTimeImpl$1.h>
#include <java/time/chrono/ChronoZonedDateTime.h>
#include <java/time/chrono/ChronoZonedDateTimeImpl.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/Ser.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalAdjuster.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/ValueRange.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef CHRONO_LOCAL_DATE_TIME_TYPE
#undef DAYS
#undef EPOCH_DAY
#undef HOURS_PER_DAY
#undef MICROS_PER_DAY
#undef MILLIS_PER_DAY
#undef MINUTES_PER_DAY
#undef MINUTES_PER_HOUR
#undef NANOS_PER_DAY
#undef NANOS_PER_HOUR
#undef NANOS_PER_MINUTE
#undef NANOS_PER_SECOND
#undef SECONDS_PER_DAY
#undef SECONDS_PER_HOUR
#undef SECONDS_PER_MINUTE

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutput = ::java::io::ObjectOutput;
using $Serializable = ::java::io::Serializable;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocalTime = ::java::time::LocalTime;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $ChronoLocalDateImpl = ::java::time::chrono::ChronoLocalDateImpl;
using $ChronoLocalDateTime = ::java::time::chrono::ChronoLocalDateTime;
using $ChronoLocalDateTimeImpl$1 = ::java::time::chrono::ChronoLocalDateTimeImpl$1;
using $ChronoZonedDateTime = ::java::time::chrono::ChronoZonedDateTime;
using $ChronoZonedDateTimeImpl = ::java::time::chrono::ChronoZonedDateTimeImpl;
using $Chronology = ::java::time::chrono::Chronology;
using $Ser = ::java::time::chrono::Ser;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalAdjuster = ::java::time::temporal::TemporalAdjuster;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $ValueRange = ::java::time::temporal::ValueRange;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _ChronoLocalDateTimeImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, serialVersionUID)},
	{"HOURS_PER_DAY", "I", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, HOURS_PER_DAY)},
	{"MINUTES_PER_HOUR", "I", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, MINUTES_PER_HOUR)},
	{"MINUTES_PER_DAY", "I", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, MINUTES_PER_DAY)},
	{"SECONDS_PER_MINUTE", "I", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, SECONDS_PER_MINUTE)},
	{"SECONDS_PER_HOUR", "I", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, SECONDS_PER_HOUR)},
	{"SECONDS_PER_DAY", "I", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, SECONDS_PER_DAY)},
	{"MILLIS_PER_DAY", "J", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, MILLIS_PER_DAY)},
	{"MICROS_PER_DAY", "J", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, MICROS_PER_DAY)},
	{"NANOS_PER_SECOND", "J", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, NANOS_PER_SECOND)},
	{"NANOS_PER_MINUTE", "J", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, NANOS_PER_MINUTE)},
	{"NANOS_PER_HOUR", "J", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, NANOS_PER_HOUR)},
	{"NANOS_PER_DAY", "J", nullptr, $STATIC | $FINAL, $constField(ChronoLocalDateTimeImpl, NANOS_PER_DAY)},
	{"date", "Ljava/time/chrono/ChronoLocalDate;", "TD;", $PRIVATE | $FINAL | $TRANSIENT, $field(ChronoLocalDateTimeImpl, date)},
	{"time", "Ljava/time/LocalTime;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(ChronoLocalDateTimeImpl, time)},
	{}
};

$MethodInfo _ChronoLocalDateTimeImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/time/chrono/ChronoLocalDate;Ljava/time/LocalTime;)V", "(TD;Ljava/time/LocalTime;)V", $PRIVATE, $method(ChronoLocalDateTimeImpl, init$, void, $ChronoLocalDate*, $LocalTime*)},
	{"atZone", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, atZone, $ChronoZonedDateTime*, $ZoneId*)},
	{"ensureValid", "(Ljava/time/chrono/Chronology;Ljava/time/temporal/Temporal;)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "<R::Ljava/time/chrono/ChronoLocalDate;>(Ljava/time/chrono/Chronology;Ljava/time/temporal/Temporal;)Ljava/time/chrono/ChronoLocalDateTimeImpl<TR;>;", $STATIC, $staticMethod(ChronoLocalDateTimeImpl, ensureValid, ChronoLocalDateTimeImpl*, $Chronology*, $Temporal*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, equals, bool, Object$*)},
	{"get", "(Ljava/time/temporal/TemporalField;)I", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, get, int32_t, $TemporalField*)},
	{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, getLong, int64_t, $TemporalField*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, hashCode, int32_t)},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, isSupported, bool, $TemporalField*)},
	{"of", "(Ljava/time/chrono/ChronoLocalDate;Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "<R::Ljava/time/chrono/ChronoLocalDate;>(TR;Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTimeImpl<TR;>;", $STATIC, $staticMethod(ChronoLocalDateTimeImpl, of, ChronoLocalDateTimeImpl*, $ChronoLocalDate*, $LocalTime*)},
	{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;", $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, plus, ChronoLocalDateTimeImpl*, int64_t, $TemporalUnit*)},
	{"plusDays", "(J)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "(J)Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;", $PRIVATE, $method(ChronoLocalDateTimeImpl, plusDays, ChronoLocalDateTimeImpl*, int64_t)},
	{"plusHours", "(J)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "(J)Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;", $PRIVATE, $method(ChronoLocalDateTimeImpl, plusHours, ChronoLocalDateTimeImpl*, int64_t)},
	{"plusMinutes", "(J)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "(J)Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;", $PRIVATE, $method(ChronoLocalDateTimeImpl, plusMinutes, ChronoLocalDateTimeImpl*, int64_t)},
	{"plusNanos", "(J)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "(J)Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;", $PRIVATE, $method(ChronoLocalDateTimeImpl, plusNanos, ChronoLocalDateTimeImpl*, int64_t)},
	{"plusSeconds", "(J)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "(J)Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;", 0, $method(ChronoLocalDateTimeImpl, plusSeconds, ChronoLocalDateTimeImpl*, int64_t)},
	{"plusWithOverflow", "(Ljava/time/chrono/ChronoLocalDate;JJJJ)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "(TD;JJJJ)Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;", $PRIVATE, $method(ChronoLocalDateTimeImpl, plusWithOverflow, ChronoLocalDateTimeImpl*, $ChronoLocalDate*, int64_t, int64_t, int64_t, int64_t)},
	{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, range, $ValueRange*, $TemporalField*)},
	{"readExternal", "(Ljava/io/ObjectInput;)Ljava/time/chrono/ChronoLocalDateTime;", "(Ljava/io/ObjectInput;)Ljava/time/chrono/ChronoLocalDateTime<*>;", $STATIC, $staticMethod(ChronoLocalDateTimeImpl, readExternal, $ChronoLocalDateTime*, $ObjectInput*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(ChronoLocalDateTimeImpl, readObject, void, $ObjectInputStream*), "java.io.InvalidObjectException"},
	{"toLocalDate", "()Ljava/time/chrono/ChronoLocalDate;", "()TD;", $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, toLocalDate, $ChronoLocalDate*)},
	{"toLocalTime", "()Ljava/time/LocalTime;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, toLocalTime, $LocalTime*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, toString, $String*)},
	{"until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, until, int64_t, $Temporal*, $TemporalUnit*)},
	{"with", "(Ljava/time/temporal/Temporal;Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "(Ljava/time/temporal/Temporal;Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;", $PRIVATE, $method(ChronoLocalDateTimeImpl, with, ChronoLocalDateTimeImpl*, $Temporal*, $LocalTime*)},
	{"with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;", $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, with, ChronoLocalDateTimeImpl*, $TemporalAdjuster*)},
	{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ChronoLocalDateTimeImpl;", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;", $PUBLIC, $virtualMethod(ChronoLocalDateTimeImpl, with, ChronoLocalDateTimeImpl*, $TemporalField*, int64_t)},
	{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, 0, $method(ChronoLocalDateTimeImpl, writeExternal, void, $ObjectOutput*), "java.io.IOException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(ChronoLocalDateTimeImpl, writeReplace, $Object*)},
	{}
};

$InnerClassInfo _ChronoLocalDateTimeImpl_InnerClassesInfo_[] = {
	{"java.time.chrono.ChronoLocalDateTimeImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ChronoLocalDateTimeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.chrono.ChronoLocalDateTimeImpl",
	"java.lang.Object",
	"java.time.chrono.ChronoLocalDateTime,java.io.Serializable",
	_ChronoLocalDateTimeImpl_FieldInfo_,
	_ChronoLocalDateTimeImpl_MethodInfo_,
	"<D::Ljava/time/chrono/ChronoLocalDate;>Ljava/lang/Object;Ljava/time/chrono/ChronoLocalDateTime<TD;>;Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalAdjuster;Ljava/io/Serializable;",
	nullptr,
	_ChronoLocalDateTimeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.time.chrono.ChronoLocalDateTimeImpl$1"
};

$Object* allocate$ChronoLocalDateTimeImpl($Class* clazz) {
	return $of($alloc(ChronoLocalDateTimeImpl));
}

$Object* ChronoLocalDateTimeImpl::clone() {
	 return this->$ChronoLocalDateTime::clone();
}

void ChronoLocalDateTimeImpl::finalize() {
	this->$ChronoLocalDateTime::finalize();
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::of($ChronoLocalDate* date, $LocalTime* time) {
	$init(ChronoLocalDateTimeImpl);
	return $new(ChronoLocalDateTimeImpl, date, time);
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::ensureValid($Chronology* chrono, $Temporal* temporal) {
	$init(ChronoLocalDateTimeImpl);
	$useLocalCurrentObjectStackCache();
	$var(ChronoLocalDateTimeImpl, other, $cast(ChronoLocalDateTimeImpl, temporal));
	if ($nc(chrono)->equals($($nc(other)->getChronology())) == false) {
		$var($String, var$0, $$str({"Chronology mismatch, required: "_s, $(chrono->getId()), ", actual: "_s}));
		$throwNew($ClassCastException, $$concat(var$0, $($nc($($nc(other)->getChronology()))->getId())));
	}
	return other;
}

void ChronoLocalDateTimeImpl::init$($ChronoLocalDate* date, $LocalTime* time) {
	$Objects::requireNonNull($of(date), "date"_s);
	$Objects::requireNonNull($of(time), "time"_s);
	$set(this, date, date);
	$set(this, time, time);
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::with($Temporal* newDate, $LocalTime* newTime) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this->date, newDate) && this->time == newTime) {
		return this;
	}
	$var($ChronoLocalDate, cd, $ChronoLocalDateImpl::ensureValid($($nc(this->date)->getChronology()), newDate));
	return $new(ChronoLocalDateTimeImpl, cd, newTime);
}

$ChronoLocalDate* ChronoLocalDateTimeImpl::toLocalDate() {
	return this->date;
}

$LocalTime* ChronoLocalDateTimeImpl::toLocalTime() {
	return this->time;
}

bool ChronoLocalDateTimeImpl::isSupported($TemporalField* field) {
	{
		$ChronoField* chronoField = nullptr;
		bool var$0 = $instanceOf($ChronoField, field);
		if (var$0) {
			chronoField = $cast($ChronoField, field);
			var$0 = true;
		}
		if (var$0) {
			bool var$1 = $nc(chronoField)->isDateBased();
			return var$1 || $nc(chronoField)->isTimeBased();
		}
	}
	return field != nullptr && field->isSupportedBy(this);
}

$ValueRange* ChronoLocalDateTimeImpl::range($TemporalField* field) {
	{
		$ChronoField* chronoField = nullptr;
		bool var$0 = $instanceOf($ChronoField, field);
		if (var$0) {
			chronoField = $cast($ChronoField, field);
			var$0 = true;
		}
		if (var$0) {
			return ($nc(chronoField)->isTimeBased() ? $nc(this->time)->range(field) : $nc(this->date)->range(field));
		}
	}
	return $nc(field)->rangeRefinedBy(this);
}

int32_t ChronoLocalDateTimeImpl::get($TemporalField* field) {
	{
		$ChronoField* chronoField = nullptr;
		bool var$0 = $instanceOf($ChronoField, field);
		if (var$0) {
			chronoField = $cast($ChronoField, field);
			var$0 = true;
		}
		if (var$0) {
			return ($nc(chronoField)->isTimeBased() ? $nc(this->time)->get(field) : $nc(this->date)->get(field));
		}
	}
	return $nc($(range(field)))->checkValidIntValue(getLong(field), field);
}

int64_t ChronoLocalDateTimeImpl::getLong($TemporalField* field) {
	{
		$ChronoField* chronoField = nullptr;
		bool var$0 = $instanceOf($ChronoField, field);
		if (var$0) {
			chronoField = $cast($ChronoField, field);
			var$0 = true;
		}
		if (var$0) {
			return ($nc(chronoField)->isTimeBased() ? $nc(this->time)->getLong(field) : $nc(this->date)->getLong(field));
		}
	}
	return $nc(field)->getFrom(this);
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::with($TemporalAdjuster* adjuster) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ChronoLocalDate, adjuster)) {
		return with($cast($ChronoLocalDate, adjuster), this->time);
	} else if ($instanceOf($LocalTime, adjuster)) {
		return with(static_cast<$Temporal*>(this->date), $cast($LocalTime, adjuster));
	} else if ($instanceOf(ChronoLocalDateTimeImpl, adjuster)) {
		return ChronoLocalDateTimeImpl::ensureValid($($nc(this->date)->getChronology()), $cast(ChronoLocalDateTimeImpl, adjuster));
	}
	$var($Chronology, var$0, $nc(this->date)->getChronology());
	return ChronoLocalDateTimeImpl::ensureValid(var$0, $cast(ChronoLocalDateTimeImpl, $($nc(adjuster)->adjustInto(this))));
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::with($TemporalField* field, int64_t newValue) {
	$useLocalCurrentObjectStackCache();
	{
		$ChronoField* chronoField = nullptr;
		bool var$0 = $instanceOf($ChronoField, field);
		if (var$0) {
			chronoField = $cast($ChronoField, field);
			var$0 = true;
		}
		if (var$0) {
			if ($nc(chronoField)->isTimeBased()) {
				return with(static_cast<$Temporal*>(this->date), $($nc(this->time)->with(field, newValue)));
			} else {
				return with($(static_cast<$Temporal*>($nc(this->date)->with(field, newValue))), this->time);
			}
		}
	}
	$var($Chronology, var$1, $nc(this->date)->getChronology());
	return ChronoLocalDateTimeImpl::ensureValid(var$1, $($nc(field)->adjustInto(this, newValue)));
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::plus(int64_t amountToAdd, $TemporalUnit* unit) {
	$useLocalCurrentObjectStackCache();
	{
		$ChronoUnit* chronoUnit = nullptr;
		bool var$0 = $instanceOf($ChronoUnit, unit);
		if (var$0) {
			chronoUnit = $cast($ChronoUnit, unit);
			var$0 = true;
		}
		if (var$0) {
			$init($ChronoLocalDateTimeImpl$1);
			switch ($nc($ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->get($nc((chronoUnit))->ordinal())) {
			case 1:
				{
					return plusNanos(amountToAdd);
				}
			case 2:
				{
					return $nc($(plusDays($div(amountToAdd, ChronoLocalDateTimeImpl::MICROS_PER_DAY))))->plusNanos(($mod(amountToAdd, ChronoLocalDateTimeImpl::MICROS_PER_DAY)) * 1000);
				}
			case 3:
				{
					return $nc($(plusDays($div(amountToAdd, ChronoLocalDateTimeImpl::MILLIS_PER_DAY))))->plusNanos(($mod(amountToAdd, ChronoLocalDateTimeImpl::MILLIS_PER_DAY)) * 0x000F4240);
				}
			case 4:
				{
					return plusSeconds(amountToAdd);
				}
			case 5:
				{
					return plusMinutes(amountToAdd);
				}
			case 6:
				{
					return plusHours(amountToAdd);
				}
			case 7:
				{
					return $nc($(plusDays(amountToAdd / 256)))->plusHours((amountToAdd % 256) * 12);
				}
			}
			return with($(static_cast<$Temporal*>($nc(this->date)->plus(amountToAdd, unit))), this->time);
		}
	}
	$var($Chronology, var$1, $nc(this->date)->getChronology());
	return ChronoLocalDateTimeImpl::ensureValid(var$1, $($nc(unit)->addTo(this, amountToAdd)));
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::plusDays(int64_t days) {
	$init($ChronoUnit);
	return with($(static_cast<$Temporal*>($nc(this->date)->plus(days, $ChronoUnit::DAYS))), this->time);
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::plusHours(int64_t hours) {
	return plusWithOverflow(this->date, hours, 0, 0, 0);
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::plusMinutes(int64_t minutes) {
	return plusWithOverflow(this->date, 0, minutes, 0, 0);
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::plusSeconds(int64_t seconds) {
	return plusWithOverflow(this->date, 0, 0, seconds, 0);
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::plusNanos(int64_t nanos) {
	return plusWithOverflow(this->date, 0, 0, 0, nanos);
}

ChronoLocalDateTimeImpl* ChronoLocalDateTimeImpl::plusWithOverflow($ChronoLocalDate* newDate, int64_t hours, int64_t minutes, int64_t seconds, int64_t nanos) {
	$useLocalCurrentObjectStackCache();
	if ((((hours | minutes) | seconds) | nanos) == 0) {
		return with(static_cast<$Temporal*>(newDate), this->time);
	}
	int64_t totDays = $div(nanos, ChronoLocalDateTimeImpl::NANOS_PER_DAY) + $div(seconds, ChronoLocalDateTimeImpl::SECONDS_PER_DAY) + $div(minutes, ChronoLocalDateTimeImpl::MINUTES_PER_DAY) + $div(hours, ChronoLocalDateTimeImpl::HOURS_PER_DAY);
	int64_t totNanos = $mod(nanos, ChronoLocalDateTimeImpl::NANOS_PER_DAY) + ($mod(seconds, ChronoLocalDateTimeImpl::SECONDS_PER_DAY)) * ChronoLocalDateTimeImpl::NANOS_PER_SECOND + ($mod(minutes, ChronoLocalDateTimeImpl::MINUTES_PER_DAY)) * ChronoLocalDateTimeImpl::NANOS_PER_MINUTE + ($mod(hours, ChronoLocalDateTimeImpl::HOURS_PER_DAY)) * ChronoLocalDateTimeImpl::NANOS_PER_HOUR;
	int64_t curNoD = $nc(this->time)->toNanoOfDay();
	totNanos = totNanos + curNoD;
	totDays += $Math::floorDiv(totNanos, ChronoLocalDateTimeImpl::NANOS_PER_DAY);
	int64_t newNoD = $Math::floorMod(totNanos, ChronoLocalDateTimeImpl::NANOS_PER_DAY);
	$var($LocalTime, newTime, newNoD == curNoD ? this->time : $LocalTime::ofNanoOfDay(newNoD));
	$init($ChronoUnit);
	return with($(static_cast<$Temporal*>($nc(newDate)->plus(totDays, $ChronoUnit::DAYS))), newTime);
}

$ChronoZonedDateTime* ChronoLocalDateTimeImpl::atZone($ZoneId* zone) {
	return $ChronoZonedDateTimeImpl::ofBest(this, zone, nullptr);
}

int64_t ChronoLocalDateTimeImpl::until($Temporal* endExclusive, $TemporalUnit* unit) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(endExclusive), "endExclusive"_s);
	$var($ChronoLocalDateTime, end, $nc($(getChronology()))->localDateTime(endExclusive));
	{
		$ChronoUnit* chronoUnit = nullptr;
		bool var$0 = $instanceOf($ChronoUnit, unit);
		if (var$0) {
			chronoUnit = $cast($ChronoUnit, unit);
			var$0 = true;
		}
		if (var$0) {
			if ($nc(unit)->isTimeBased()) {
				$init($ChronoField);
				int64_t var$1 = $nc(end)->getLong($ChronoField::EPOCH_DAY);
				int64_t amount = var$1 - $nc(this->date)->getLong($ChronoField::EPOCH_DAY);
				$init($ChronoLocalDateTimeImpl$1);
				switch ($nc($ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->get($nc((chronoUnit))->ordinal())) {
				case 1:
					{
						amount = $Math::multiplyExact(amount, ChronoLocalDateTimeImpl::NANOS_PER_DAY);
						break;
					}
				case 2:
					{
						amount = $Math::multiplyExact(amount, ChronoLocalDateTimeImpl::MICROS_PER_DAY);
						break;
					}
				case 3:
					{
						amount = $Math::multiplyExact(amount, ChronoLocalDateTimeImpl::MILLIS_PER_DAY);
						break;
					}
				case 4:
					{
						amount = $Math::multiplyExact(amount, ChronoLocalDateTimeImpl::SECONDS_PER_DAY);
						break;
					}
				case 5:
					{
						amount = $Math::multiplyExact(amount, ChronoLocalDateTimeImpl::MINUTES_PER_DAY);
						break;
					}
				case 6:
					{
						amount = $Math::multiplyExact(amount, ChronoLocalDateTimeImpl::HOURS_PER_DAY);
						break;
					}
				case 7:
					{
						amount = $Math::multiplyExact(amount, 2);
						break;
					}
				}
				return $Math::addExact(amount, $nc(this->time)->until($(end->toLocalTime()), unit));
			}
			$var($ChronoLocalDate, endDate, $nc(end)->toLocalDate());
			if ($nc($(end->toLocalTime()))->isBefore(this->time)) {
				$init($ChronoUnit);
				$assign(endDate, $nc(endDate)->minus(1, $ChronoUnit::DAYS));
			}
			return $nc(this->date)->until(endDate, unit);
		}
	}
	$Objects::requireNonNull($of(unit), "unit"_s);
	return $nc(unit)->between(this, end);
}

$Object* ChronoLocalDateTimeImpl::writeReplace() {
	return $of($new($Ser, $Ser::CHRONO_LOCAL_DATE_TIME_TYPE, this));
}

void ChronoLocalDateTimeImpl::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

void ChronoLocalDateTimeImpl::writeExternal($ObjectOutput* out) {
	$nc(out)->writeObject(this->date);
	out->writeObject(this->time);
}

$ChronoLocalDateTime* ChronoLocalDateTimeImpl::readExternal($ObjectInput* in) {
	$init(ChronoLocalDateTimeImpl);
	$useLocalCurrentObjectStackCache();
	$var($ChronoLocalDate, date, $cast($ChronoLocalDate, $nc(in)->readObject()));
	$var($LocalTime, time, $cast($LocalTime, in->readObject()));
	return $nc(date)->atTime(time);
}

bool ChronoLocalDateTimeImpl::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf($ChronoLocalDateTime, obj)) {
		return compareTo($cast($ChronoLocalDateTime, obj)) == 0;
	}
	return false;
}

int32_t ChronoLocalDateTimeImpl::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc($(toLocalDate()))->hashCode();
	return var$0 ^ $nc($(toLocalTime()))->hashCode();
}

$String* ChronoLocalDateTimeImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($nc($(toLocalDate()))->toString()), $$str(u'T')}));
	return $concat(var$0, $($nc($(toLocalTime()))->toString()));
}

ChronoLocalDateTimeImpl::ChronoLocalDateTimeImpl() {
}

$Class* ChronoLocalDateTimeImpl::load$($String* name, bool initialize) {
	$loadClass(ChronoLocalDateTimeImpl, name, initialize, &_ChronoLocalDateTimeImpl_ClassInfo_, allocate$ChronoLocalDateTimeImpl);
	return class$;
}

$Class* ChronoLocalDateTimeImpl::class$ = nullptr;

		} // chrono
	} // time
} // java