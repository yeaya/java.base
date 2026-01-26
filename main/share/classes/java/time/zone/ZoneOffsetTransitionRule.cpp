#include <java/time/zone/ZoneOffsetTransitionRule.h>

#include <java/io/DataInput.h>
#include <java/io/DataOutput.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/time/DayOfWeek.h>
#include <java/time/LocalDate.h>
#include <java/time/LocalDateTime.h>
#include <java/time/LocalTime.h>
#include <java/time/Month.h>
#include <java/time/ZoneOffset.h>
#include <java/time/chrono/IsoChronology.h>
#include <java/time/temporal/TemporalAdjuster.h>
#include <java/time/temporal/TemporalAdjusters.h>
#include <java/time/zone/Ser.h>
#include <java/time/zone/ZoneOffsetTransition.h>
#include <java/time/zone/ZoneOffsetTransitionRule$TimeDefinition.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef INSTANCE
#undef MIDNIGHT
#undef ZOTRULE

using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DayOfWeek = ::java::time::DayOfWeek;
using $LocalDate = ::java::time::LocalDate;
using $LocalDateTime = ::java::time::LocalDateTime;
using $LocalTime = ::java::time::LocalTime;
using $Month = ::java::time::Month;
using $ZoneOffset = ::java::time::ZoneOffset;
using $IsoChronology = ::java::time::chrono::IsoChronology;
using $TemporalAdjusters = ::java::time::temporal::TemporalAdjusters;
using $Ser = ::java::time::zone::Ser;
using $ZoneOffsetTransition = ::java::time::zone::ZoneOffsetTransition;
using $ZoneOffsetTransitionRule$TimeDefinition = ::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace zone {

$FieldInfo _ZoneOffsetTransitionRule_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZoneOffsetTransitionRule, $assertionsDisabled)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneOffsetTransitionRule, serialVersionUID)},
	{"month", "Ljava/time/Month;", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransitionRule, month)},
	{"dom", "B", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransitionRule, dom)},
	{"dow", "Ljava/time/DayOfWeek;", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransitionRule, dow)},
	{"time", "Ljava/time/LocalTime;", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransitionRule, time)},
	{"timeEndOfDay", "Z", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransitionRule, timeEndOfDay)},
	{"timeDefinition", "Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransitionRule, timeDefinition)},
	{"standardOffset", "Ljava/time/ZoneOffset;", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransitionRule, standardOffset)},
	{"offsetBefore", "Ljava/time/ZoneOffset;", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransitionRule, offsetBefore)},
	{"offsetAfter", "Ljava/time/ZoneOffset;", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransitionRule, offsetAfter)},
	{}
};

$MethodInfo _ZoneOffsetTransitionRule_MethodInfo_[] = {
	{"<init>", "(Ljava/time/Month;ILjava/time/DayOfWeek;Ljava/time/LocalTime;ZLjava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)V", nullptr, 0, $method(ZoneOffsetTransitionRule, init$, void, $Month*, int32_t, $DayOfWeek*, $LocalTime*, bool, $ZoneOffsetTransitionRule$TimeDefinition*, $ZoneOffset*, $ZoneOffset*, $ZoneOffset*)},
	{"createTransition", "(I)Ljava/time/zone/ZoneOffsetTransition;", nullptr, $PUBLIC, $method(ZoneOffsetTransitionRule, createTransition, $ZoneOffsetTransition*, int32_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ZoneOffsetTransitionRule, equals, bool, Object$*)},
	{"getDayOfMonthIndicator", "()I", nullptr, $PUBLIC, $method(ZoneOffsetTransitionRule, getDayOfMonthIndicator, int32_t)},
	{"getDayOfWeek", "()Ljava/time/DayOfWeek;", nullptr, $PUBLIC, $method(ZoneOffsetTransitionRule, getDayOfWeek, $DayOfWeek*)},
	{"getLocalTime", "()Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(ZoneOffsetTransitionRule, getLocalTime, $LocalTime*)},
	{"getMonth", "()Ljava/time/Month;", nullptr, $PUBLIC, $method(ZoneOffsetTransitionRule, getMonth, $Month*)},
	{"getOffsetAfter", "()Ljava/time/ZoneOffset;", nullptr, $PUBLIC, $method(ZoneOffsetTransitionRule, getOffsetAfter, $ZoneOffset*)},
	{"getOffsetBefore", "()Ljava/time/ZoneOffset;", nullptr, $PUBLIC, $method(ZoneOffsetTransitionRule, getOffsetBefore, $ZoneOffset*)},
	{"getStandardOffset", "()Ljava/time/ZoneOffset;", nullptr, $PUBLIC, $method(ZoneOffsetTransitionRule, getStandardOffset, $ZoneOffset*)},
	{"getTimeDefinition", "()Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;", nullptr, $PUBLIC, $method(ZoneOffsetTransitionRule, getTimeDefinition, $ZoneOffsetTransitionRule$TimeDefinition*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ZoneOffsetTransitionRule, hashCode, int32_t)},
	{"isMidnightEndOfDay", "()Z", nullptr, $PUBLIC, $method(ZoneOffsetTransitionRule, isMidnightEndOfDay, bool)},
	{"of", "(Ljava/time/Month;ILjava/time/DayOfWeek;Ljava/time/LocalTime;ZLjava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneOffsetTransitionRule;", nullptr, $PUBLIC | $STATIC, $staticMethod(ZoneOffsetTransitionRule, of, ZoneOffsetTransitionRule*, $Month*, int32_t, $DayOfWeek*, $LocalTime*, bool, $ZoneOffsetTransitionRule$TimeDefinition*, $ZoneOffset*, $ZoneOffset*, $ZoneOffset*)},
	{"readExternal", "(Ljava/io/DataInput;)Ljava/time/zone/ZoneOffsetTransitionRule;", nullptr, $STATIC, $staticMethod(ZoneOffsetTransitionRule, readExternal, ZoneOffsetTransitionRule*, $DataInput*), "java.io.IOException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(ZoneOffsetTransitionRule, readObject, void, $ObjectInputStream*), "java.io.InvalidObjectException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ZoneOffsetTransitionRule, toString, $String*)},
	{"writeExternal", "(Ljava/io/DataOutput;)V", nullptr, 0, $method(ZoneOffsetTransitionRule, writeExternal, void, $DataOutput*), "java.io.IOException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(ZoneOffsetTransitionRule, writeReplace, $Object*)},
	{}
};

$InnerClassInfo _ZoneOffsetTransitionRule_InnerClassesInfo_[] = {
	{"java.time.zone.ZoneOffsetTransitionRule$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition", "java.time.zone.ZoneOffsetTransitionRule", "TimeDefinition", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ZoneOffsetTransitionRule_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.zone.ZoneOffsetTransitionRule",
	"java.lang.Object",
	"java.io.Serializable",
	_ZoneOffsetTransitionRule_FieldInfo_,
	_ZoneOffsetTransitionRule_MethodInfo_,
	nullptr,
	nullptr,
	_ZoneOffsetTransitionRule_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.time.zone.ZoneOffsetTransitionRule$1,java.time.zone.ZoneOffsetTransitionRule$TimeDefinition"
};

$Object* allocate$ZoneOffsetTransitionRule($Class* clazz) {
	return $of($alloc(ZoneOffsetTransitionRule));
}

bool ZoneOffsetTransitionRule::$assertionsDisabled = false;

ZoneOffsetTransitionRule* ZoneOffsetTransitionRule::of($Month* month, int32_t dayOfMonthIndicator, $DayOfWeek* dayOfWeek, $LocalTime* time, bool timeEndOfDay, $ZoneOffsetTransitionRule$TimeDefinition* timeDefinition, $ZoneOffset* standardOffset, $ZoneOffset* offsetBefore, $ZoneOffset* offsetAfter) {
	$init(ZoneOffsetTransitionRule);
	$Objects::requireNonNull($of(month), "month"_s);
	$Objects::requireNonNull($of(time), "time"_s);
	$Objects::requireNonNull($of(timeDefinition), "timeDefinition"_s);
	$Objects::requireNonNull($of(standardOffset), "standardOffset"_s);
	$Objects::requireNonNull($of(offsetBefore), "offsetBefore"_s);
	$Objects::requireNonNull($of(offsetAfter), "offsetAfter"_s);
	if (dayOfMonthIndicator < -28 || dayOfMonthIndicator > 31 || dayOfMonthIndicator == 0) {
		$throwNew($IllegalArgumentException, "Day of month indicator must be between -28 and 31 inclusive excluding zero"_s);
	}
	$init($LocalTime);
	if (timeEndOfDay && $nc(time)->equals($LocalTime::MIDNIGHT) == false) {
		$throwNew($IllegalArgumentException, "Time must be midnight when end of day flag is true"_s);
	}
	if ($nc(time)->getNano() != 0) {
		$throwNew($IllegalArgumentException, "Time\'s nano-of-second must be zero"_s);
	}
	return $new(ZoneOffsetTransitionRule, month, dayOfMonthIndicator, dayOfWeek, time, timeEndOfDay, timeDefinition, standardOffset, offsetBefore, offsetAfter);
}

void ZoneOffsetTransitionRule::init$($Month* month, int32_t dayOfMonthIndicator, $DayOfWeek* dayOfWeek, $LocalTime* time, bool timeEndOfDay, $ZoneOffsetTransitionRule$TimeDefinition* timeDefinition, $ZoneOffset* standardOffset, $ZoneOffset* offsetBefore, $ZoneOffset* offsetAfter) {
	if (!ZoneOffsetTransitionRule::$assertionsDisabled && !($nc(time)->getNano() == 0)) {
		$throwNew($AssertionError);
	}
	$set(this, month, month);
	this->dom = (int8_t)dayOfMonthIndicator;
	$set(this, dow, dayOfWeek);
	$set(this, time, time);
	this->timeEndOfDay = timeEndOfDay;
	$set(this, timeDefinition, timeDefinition);
	$set(this, standardOffset, standardOffset);
	$set(this, offsetBefore, offsetBefore);
	$set(this, offsetAfter, offsetAfter);
}

void ZoneOffsetTransitionRule::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

$Object* ZoneOffsetTransitionRule::writeReplace() {
	return $of($new($Ser, $Ser::ZOTRULE, this));
}

void ZoneOffsetTransitionRule::writeExternal($DataOutput* out) {
	int32_t timeSecs = (this->timeEndOfDay ? 0x00015180 : $nc(this->time)->toSecondOfDay());
	int32_t stdOffset = $nc(this->standardOffset)->getTotalSeconds();
	int32_t beforeDiff = $nc(this->offsetBefore)->getTotalSeconds() - stdOffset;
	int32_t afterDiff = $nc(this->offsetAfter)->getTotalSeconds() - stdOffset;
	int32_t timeByte = (timeSecs % 3600 == 0 ? (this->timeEndOfDay ? 24 : $nc(this->time)->getHour()) : 31);
	int32_t stdOffsetByte = (stdOffset % 900 == 0 ? stdOffset / 900 + 128 : 255);
	int32_t beforeByte = (beforeDiff == 0 || beforeDiff == 1800 || beforeDiff == 3600 ? beforeDiff / 1800 : 3);
	int32_t afterByte = (afterDiff == 0 || afterDiff == 1800 || afterDiff == 3600 ? afterDiff / 1800 : 3);
	int32_t dowByte = (this->dow == nullptr ? 0 : this->dow->getValue());
	int32_t var$0 = (this->month->getValue() << 28) + ((this->dom + 32) << 22) + (dowByte << 19) + (timeByte << 14);
	int32_t b = var$0 + (this->timeDefinition->ordinal() << 12) + (stdOffsetByte << 4) + (beforeByte << 2) + afterByte;
	$nc(out)->writeInt(b);
	if (timeByte == 31) {
		out->writeInt(timeSecs);
	}
	if (stdOffsetByte == 255) {
		out->writeInt(stdOffset);
	}
	if (beforeByte == 3) {
		out->writeInt($nc(this->offsetBefore)->getTotalSeconds());
	}
	if (afterByte == 3) {
		out->writeInt($nc(this->offsetAfter)->getTotalSeconds());
	}
}

ZoneOffsetTransitionRule* ZoneOffsetTransitionRule::readExternal($DataInput* in) {
	$init(ZoneOffsetTransitionRule);
	$useLocalCurrentObjectStackCache();
	int32_t data = $nc(in)->readInt();
	$Month* month = $Month::of((int32_t)((uint32_t)data >> 28));
	int32_t dom = ((int32_t)((uint32_t)((int32_t)(data & (uint32_t)(63 << 22))) >> 22)) - 32;
	int32_t dowByte = (int32_t)((uint32_t)((int32_t)(data & (uint32_t)(7 << 19))) >> 19);
	$DayOfWeek* dow = dowByte == 0 ? ($DayOfWeek*)nullptr : $DayOfWeek::of(dowByte);
	int32_t timeByte = (int32_t)((uint32_t)((int32_t)(data & (uint32_t)(31 << 14))) >> 14);
	$ZoneOffsetTransitionRule$TimeDefinition* defn = $($ZoneOffsetTransitionRule$TimeDefinition::values())->get((int32_t)((uint32_t)((int32_t)(data & (uint32_t)(3 << 12))) >> 12));
	int32_t stdByte = (int32_t)((uint32_t)((int32_t)(data & (uint32_t)(255 << 4))) >> 4);
	int32_t beforeByte = (int32_t)((uint32_t)((int32_t)(data & (uint32_t)(3 << 2))) >> 2);
	int32_t afterByte = ((int32_t)(data & (uint32_t)3));
	$var($LocalTime, time, timeByte == 31 ? $LocalTime::ofSecondOfDay(in->readInt()) : $LocalTime::of(timeByte % 24, 0));
	$var($ZoneOffset, std, stdByte == 255 ? $ZoneOffset::ofTotalSeconds(in->readInt()) : $ZoneOffset::ofTotalSeconds((stdByte - 128) * 900));
	$var($ZoneOffset, before, beforeByte == 3 ? $ZoneOffset::ofTotalSeconds(in->readInt()) : $ZoneOffset::ofTotalSeconds($nc(std)->getTotalSeconds() + beforeByte * 1800));
	$var($ZoneOffset, after, afterByte == 3 ? $ZoneOffset::ofTotalSeconds(in->readInt()) : $ZoneOffset::ofTotalSeconds($nc(std)->getTotalSeconds() + afterByte * 1800));
	return ZoneOffsetTransitionRule::of(month, dom, dow, time, timeByte == 24, defn, std, before, after);
}

$Month* ZoneOffsetTransitionRule::getMonth() {
	return this->month;
}

int32_t ZoneOffsetTransitionRule::getDayOfMonthIndicator() {
	return this->dom;
}

$DayOfWeek* ZoneOffsetTransitionRule::getDayOfWeek() {
	return this->dow;
}

$LocalTime* ZoneOffsetTransitionRule::getLocalTime() {
	return this->time;
}

bool ZoneOffsetTransitionRule::isMidnightEndOfDay() {
	return this->timeEndOfDay;
}

$ZoneOffsetTransitionRule$TimeDefinition* ZoneOffsetTransitionRule::getTimeDefinition() {
	return this->timeDefinition;
}

$ZoneOffset* ZoneOffsetTransitionRule::getStandardOffset() {
	return this->standardOffset;
}

$ZoneOffset* ZoneOffsetTransitionRule::getOffsetBefore() {
	return this->offsetBefore;
}

$ZoneOffset* ZoneOffsetTransitionRule::getOffsetAfter() {
	return this->offsetAfter;
}

$ZoneOffsetTransition* ZoneOffsetTransitionRule::createTransition(int32_t year) {
	$useLocalCurrentObjectStackCache();
	$var($LocalDate, date, nullptr);
	if (this->dom < 0) {
		$init($IsoChronology);
		$assign(date, $LocalDate::of(year, this->month, this->month->length($nc($IsoChronology::INSTANCE)->isLeapYear(year)) + 1 + this->dom));
		if (this->dow != nullptr) {
			$assign(date, $nc(date)->with($($TemporalAdjusters::previousOrSame(this->dow))));
		}
	} else {
		$assign(date, $LocalDate::of(year, this->month, (int32_t)this->dom));
		if (this->dow != nullptr) {
			$assign(date, $nc(date)->with($($TemporalAdjusters::nextOrSame(this->dow))));
		}
	}
	if (this->timeEndOfDay) {
		$assign(date, $nc(date)->plusDays(1));
	}
	$var($LocalDateTime, localDT, $LocalDateTime::of(date, this->time));
	$var($LocalDateTime, transition, this->timeDefinition->createDateTime(localDT, this->standardOffset, this->offsetBefore));
	return $new($ZoneOffsetTransition, transition, this->offsetBefore, this->offsetAfter);
}

bool ZoneOffsetTransitionRule::equals(Object$* otherRule) {
	if ($equals(otherRule, this)) {
		return true;
	}
	$var(ZoneOffsetTransitionRule, other, nullptr);
	bool var$9 = $instanceOf(ZoneOffsetTransitionRule, otherRule);
	if (var$9) {
		$assign(other, $cast(ZoneOffsetTransitionRule, otherRule));
		var$9 = true;
	}
	bool var$8 = (var$9);
	bool var$7 = var$8 && this->month == $nc(other)->month;
	bool var$6 = var$7 && this->dom == other->dom;
	bool var$5 = var$6 && this->dow == other->dow;
	bool var$4 = var$5 && this->timeDefinition == other->timeDefinition;
	bool var$3 = var$4 && this->timeEndOfDay == other->timeEndOfDay;
	bool var$2 = var$3 && $nc(this->time)->equals(other->time);
	bool var$1 = var$2 && $nc(this->standardOffset)->equals(other->standardOffset);
	bool var$0 = var$1 && $nc(this->offsetBefore)->equals(other->offsetBefore);
	return var$0 && $nc(this->offsetAfter)->equals(other->offsetAfter);
}

int32_t ZoneOffsetTransitionRule::hashCode() {
	int32_t var$2 = (($nc(this->time)->toSecondOfDay() + (this->timeEndOfDay ? 1 : 0)) << 15);
	int32_t var$1 = var$2 + (this->month->ordinal() << 11) + ((this->dom + 32) << 5);
	int32_t var$0 = var$1 + ((this->dow == nullptr ? 7 : this->dow->ordinal()) << 2);
	int32_t hash = var$0 + (this->timeDefinition->ordinal());
	int32_t var$4 = hash ^ $nc(this->standardOffset)->hashCode();
	int32_t var$3 = var$4 ^ $nc(this->offsetBefore)->hashCode();
	return var$3 ^ $nc(this->offsetAfter)->hashCode();
}

$String* ZoneOffsetTransitionRule::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("TransitionRule["_s)->append($nc(this->offsetBefore)->compareTo(this->offsetAfter) > 0 ? "Gap "_s : "Overlap "_s)->append($of(this->offsetBefore))->append(" to "_s)->append($of(this->offsetAfter))->append(", "_s);
	if (this->dow != nullptr) {
		if (this->dom == -1) {
			buf->append($(this->dow->name()))->append(" on or before last day of "_s)->append($(this->month->name()));
		} else if (this->dom < 0) {
			buf->append($(this->dow->name()))->append(" on or before last day minus "_s)->append(-this->dom - 1)->append(" of "_s)->append($(this->month->name()));
		} else {
			buf->append($(this->dow->name()))->append(" on or after "_s)->append($(this->month->name()))->append(u' ')->append((int32_t)this->dom);
		}
	} else {
		buf->append($(this->month->name()))->append(u' ')->append((int32_t)this->dom);
	}
	buf->append(" at "_s)->append(this->timeEndOfDay ? "24:00"_s : $($nc(this->time)->toString()))->append(" "_s)->append($of(this->timeDefinition))->append(", standard offset "_s)->append($of(this->standardOffset))->append(u']');
	return buf->toString();
}

void clinit$ZoneOffsetTransitionRule($Class* class$) {
	ZoneOffsetTransitionRule::$assertionsDisabled = !ZoneOffsetTransitionRule::class$->desiredAssertionStatus();
}

ZoneOffsetTransitionRule::ZoneOffsetTransitionRule() {
}

$Class* ZoneOffsetTransitionRule::load$($String* name, bool initialize) {
	$loadClass(ZoneOffsetTransitionRule, name, initialize, &_ZoneOffsetTransitionRule_ClassInfo_, clinit$ZoneOffsetTransitionRule, allocate$ZoneOffsetTransitionRule);
	return class$;
}

$Class* ZoneOffsetTransitionRule::class$ = nullptr;

		} // zone
	} // time
} // java