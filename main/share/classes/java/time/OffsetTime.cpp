#include <java/time/OffsetTime.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutput.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/time/Clock.h>
#include <java/time/DateTimeException.h>
#include <java/time/Instant.h>
#include <java/time/LocalDate.h>
#include <java/time/LocalTime.h>
#include <java/time/OffsetDateTime.h>
#include <java/time/OffsetTime$1.h>
#include <java/time/Ser.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalAdjuster.h>
#include <java/time/temporal/TemporalAmount.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/time/temporal/ValueRange.h>
#include <java/time/zone/ZoneRules.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ISO_OFFSET_TIME
#undef MAX
#undef MAX_VALUE
#undef MIN
#undef MIN_VALUE
#undef NANOS
#undef NANO_OF_DAY
#undef OFFSET_SECONDS
#undef OFFSET_TIME_TYPE

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutput = ::java::io::ObjectOutput;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Clock = ::java::time::Clock;
using $DateTimeException = ::java::time::DateTimeException;
using $Instant = ::java::time::Instant;
using $LocalDate = ::java::time::LocalDate;
using $LocalTime = ::java::time::LocalTime;
using $OffsetDateTime = ::java::time::OffsetDateTime;
using $OffsetTime$1 = ::java::time::OffsetTime$1;
using $Ser = ::java::time::Ser;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalAdjuster = ::java::time::temporal::TemporalAdjuster;
using $TemporalAmount = ::java::time::temporal::TemporalAmount;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;
using $ValueRange = ::java::time::temporal::ValueRange;
using $ZoneRules = ::java::time::zone::ZoneRules;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {

class OffsetTime$$Lambda$from : public $TemporalQuery {
	$class(OffsetTime$$Lambda$from, $NO_CLASS_INIT, $TemporalQuery)
public:
	void init$() {
	}
	virtual $Object* queryFrom($TemporalAccessor* temporal) override {
		 return $of(OffsetTime::from(temporal));
	}
};
$Class* OffsetTime$$Lambda$from::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OffsetTime$$Lambda$from, init$, void)},
		{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(OffsetTime$$Lambda$from, queryFrom, $Object*, $TemporalAccessor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.time.OffsetTime$$Lambda$from",
		"java.lang.Object",
		"java.time.temporal.TemporalQuery",
		nullptr,
		methodInfos$$
	};
	$loadClass(OffsetTime$$Lambda$from, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OffsetTime$$Lambda$from);
	});
	return class$;
}
$Class* OffsetTime$$Lambda$from::class$ = nullptr;

$Object* OffsetTime::clone() {
	 return this->$Temporal::clone();
}

void OffsetTime::finalize() {
	this->$Temporal::finalize();
}

OffsetTime* OffsetTime::MIN = nullptr;
OffsetTime* OffsetTime::MAX = nullptr;

OffsetTime* OffsetTime::now() {
	$init(OffsetTime);
	return now($($Clock::systemDefaultZone()));
}

OffsetTime* OffsetTime::now($ZoneId* zone) {
	$init(OffsetTime);
	return now($($Clock::system(zone)));
}

OffsetTime* OffsetTime::now($Clock* clock) {
	$init(OffsetTime);
	$useLocalObjectStack();
	$Objects::requireNonNull(clock, "clock"_s);
	$var($Instant, now, $nc(clock)->instant());
	return ofInstant(now, $($$nc($$nc(clock->getZone())->getRules())->getOffset(now)));
}

OffsetTime* OffsetTime::of($LocalTime* time, $ZoneOffset* offset) {
	$init(OffsetTime);
	return $new(OffsetTime, time, offset);
}

OffsetTime* OffsetTime::of(int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond, $ZoneOffset* offset) {
	$init(OffsetTime);
	return $new(OffsetTime, $($LocalTime::of(hour, minute, second, nanoOfSecond)), offset);
}

OffsetTime* OffsetTime::ofInstant($Instant* instant, $ZoneId* zone) {
	$init(OffsetTime);
	$useLocalObjectStack();
	$Objects::requireNonNull(instant, "instant"_s);
	$Objects::requireNonNull(zone, "zone"_s);
	$var($ZoneRules, rules, $nc(zone)->getRules());
	$var($ZoneOffset, offset, $nc(rules)->getOffset(instant));
	int64_t var$0 = $nc(instant)->getEpochSecond();
	int64_t localSecond = var$0 + $nc(offset)->getTotalSeconds();
	int32_t secsOfDay = $Math::floorMod(localSecond, 0x00015180);
	$var($LocalTime, time, $LocalTime::ofNanoOfDay(secsOfDay * (int64_t)1000000000 + instant->getNano()));
	return $new(OffsetTime, time, offset);
}

OffsetTime* OffsetTime::from($TemporalAccessor* temporal) {
	$init(OffsetTime);
	$useLocalObjectStack();
	if ($instanceOf(OffsetTime, temporal)) {
		return $cast(OffsetTime, temporal);
	}
	try {
		$var($LocalTime, time, $LocalTime::from(temporal));
		$var($ZoneOffset, offset, $ZoneOffset::from(temporal));
		return $new(OffsetTime, time, offset);
	} catch ($DateTimeException& ex) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Unable to obtain OffsetTime from TemporalAccessor: "_s);
		var$0->append(temporal);
		var$0->append(" of type "_s);
		var$0->append($($nc($of(temporal))->getClass()->getName()));
		$throwNew($DateTimeException, $$str(var$0), ex);
	}
	$shouldNotReachHere();
}

OffsetTime* OffsetTime::parse($CharSequence* text) {
	$init(OffsetTime);
	$init($DateTimeFormatter);
	return parse(text, $DateTimeFormatter::ISO_OFFSET_TIME);
}

OffsetTime* OffsetTime::parse($CharSequence* text, $DateTimeFormatter* formatter) {
	$init(OffsetTime);
	$Objects::requireNonNull(formatter, "formatter"_s);
	return $cast(OffsetTime, $nc(formatter)->parse(text, $$new(OffsetTime$$Lambda$from)));
}

void OffsetTime::init$($LocalTime* time, $ZoneOffset* offset) {
	$set(this, time, $cast($LocalTime, $Objects::requireNonNull(time, "time"_s)));
	$set(this, offset, $cast($ZoneOffset, $Objects::requireNonNull(offset, "offset"_s)));
}

OffsetTime* OffsetTime::with($LocalTime* time, $ZoneOffset* offset) {
	if (this->time == time && $nc(this->offset)->equals(offset)) {
		return this;
	}
	return $new(OffsetTime, time, offset);
}

bool OffsetTime::isSupported($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		$init($ChronoField);
		return field->isTimeBased() || $equals(field, $ChronoField::OFFSET_SECONDS);
	}
	return field != nullptr && field->isSupportedBy(this);
}

bool OffsetTime::isSupported($TemporalUnit* unit) {
	if ($instanceOf($ChronoUnit, unit)) {
		return unit->isTimeBased();
	}
	return unit != nullptr && unit->isSupportedBy(this);
}

$ValueRange* OffsetTime::range($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		$init($ChronoField);
		if ($equals(field, $ChronoField::OFFSET_SECONDS)) {
			return field->range();
		}
		return $nc(this->time)->range(field);
	}
	return $nc(field)->rangeRefinedBy(this);
}

int32_t OffsetTime::get($TemporalField* field) {
	return $Temporal::get(field);
}

int64_t OffsetTime::getLong($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		$init($ChronoField);
		if ($equals(field, $ChronoField::OFFSET_SECONDS)) {
			return $nc(this->offset)->getTotalSeconds();
		}
		return $nc(this->time)->getLong(field);
	}
	return $nc(field)->getFrom(this);
}

$ZoneOffset* OffsetTime::getOffset() {
	return this->offset;
}

OffsetTime* OffsetTime::withOffsetSameLocal($ZoneOffset* offset) {
	return offset != nullptr && offset->equals(this->offset) ? this : $new(OffsetTime, this->time, offset);
}

OffsetTime* OffsetTime::withOffsetSameInstant($ZoneOffset* offset) {
	if ($nc(offset)->equals(this->offset)) {
		return this;
	}
	int32_t var$0 = offset->getTotalSeconds();
	int32_t difference = var$0 - $nc(this->offset)->getTotalSeconds();
	$var($LocalTime, adjusted, $nc(this->time)->plusSeconds(difference));
	return $new(OffsetTime, adjusted, offset);
}

$LocalTime* OffsetTime::toLocalTime() {
	return this->time;
}

int32_t OffsetTime::getHour() {
	return $nc(this->time)->getHour();
}

int32_t OffsetTime::getMinute() {
	return $nc(this->time)->getMinute();
}

int32_t OffsetTime::getSecond() {
	return $nc(this->time)->getSecond();
}

int32_t OffsetTime::getNano() {
	return $nc(this->time)->getNano();
}

OffsetTime* OffsetTime::with($TemporalAdjuster* adjuster) {
	if ($instanceOf($LocalTime, adjuster)) {
		return with($cast($LocalTime, adjuster), this->offset);
	} else if ($instanceOf($ZoneOffset, adjuster)) {
		return with(this->time, $cast($ZoneOffset, adjuster));
	} else if ($instanceOf(OffsetTime, adjuster)) {
		return $cast(OffsetTime, adjuster);
	}
	return $cast(OffsetTime, $nc(adjuster)->adjustInto(this));
}

OffsetTime* OffsetTime::with($TemporalField* field, int64_t newValue) {
	$useLocalObjectStack();
	if ($instanceOf($ChronoField, field)) {
		$init($ChronoField);
		if ($equals(field, $ChronoField::OFFSET_SECONDS)) {
			$ChronoField* f = $cast($ChronoField, field);
			return with(this->time, $($ZoneOffset::ofTotalSeconds(f->checkValidIntValue(newValue))));
		}
		return with($($nc(this->time)->with(field, newValue)), this->offset);
	}
	return $cast(OffsetTime, $nc(field)->adjustInto(this, newValue));
}

OffsetTime* OffsetTime::withHour(int32_t hour) {
	return with($($nc(this->time)->withHour(hour)), this->offset);
}

OffsetTime* OffsetTime::withMinute(int32_t minute) {
	return with($($nc(this->time)->withMinute(minute)), this->offset);
}

OffsetTime* OffsetTime::withSecond(int32_t second) {
	return with($($nc(this->time)->withSecond(second)), this->offset);
}

OffsetTime* OffsetTime::withNano(int32_t nanoOfSecond) {
	return with($($nc(this->time)->withNano(nanoOfSecond)), this->offset);
}

OffsetTime* OffsetTime::truncatedTo($TemporalUnit* unit) {
	return with($($nc(this->time)->truncatedTo(unit)), this->offset);
}

OffsetTime* OffsetTime::plus($TemporalAmount* amountToAdd) {
	return $cast(OffsetTime, $nc(amountToAdd)->addTo(this));
}

OffsetTime* OffsetTime::plus(int64_t amountToAdd, $TemporalUnit* unit) {
	if ($instanceOf($ChronoUnit, unit)) {
		return with($($nc(this->time)->plus(amountToAdd, unit)), this->offset);
	}
	return $cast(OffsetTime, $nc(unit)->addTo(this, amountToAdd));
}

OffsetTime* OffsetTime::plusHours(int64_t hours) {
	return with($($nc(this->time)->plusHours(hours)), this->offset);
}

OffsetTime* OffsetTime::plusMinutes(int64_t minutes) {
	return with($($nc(this->time)->plusMinutes(minutes)), this->offset);
}

OffsetTime* OffsetTime::plusSeconds(int64_t seconds) {
	return with($($nc(this->time)->plusSeconds(seconds)), this->offset);
}

OffsetTime* OffsetTime::plusNanos(int64_t nanos) {
	return with($($nc(this->time)->plusNanos(nanos)), this->offset);
}

OffsetTime* OffsetTime::minus($TemporalAmount* amountToSubtract) {
	return $cast(OffsetTime, $nc(amountToSubtract)->subtractFrom(this));
}

OffsetTime* OffsetTime::minus(int64_t amountToSubtract, $TemporalUnit* unit) {
	return (amountToSubtract == $Long::MIN_VALUE ? $$nc(plus($Long::MAX_VALUE, unit))->plus(1, unit) : plus(-amountToSubtract, unit));
}

OffsetTime* OffsetTime::minusHours(int64_t hours) {
	return with($($nc(this->time)->minusHours(hours)), this->offset);
}

OffsetTime* OffsetTime::minusMinutes(int64_t minutes) {
	return with($($nc(this->time)->minusMinutes(minutes)), this->offset);
}

OffsetTime* OffsetTime::minusSeconds(int64_t seconds) {
	return with($($nc(this->time)->minusSeconds(seconds)), this->offset);
}

OffsetTime* OffsetTime::minusNanos(int64_t nanos) {
	return with($($nc(this->time)->minusNanos(nanos)), this->offset);
}

$Object* OffsetTime::query($TemporalQuery* query) {
	bool var$0 = query == $TemporalQueries::offset();
	if (var$0 || query == $TemporalQueries::zone()) {
		return $of(this->offset);
	} else {
		bool var$2 = query == $TemporalQueries::zoneId();
		bool var$1 = var$2 | (query == $TemporalQueries::chronology());
		if (var$1 || query == $TemporalQueries::localDate()) {
			return nullptr;
		} else if (query == $TemporalQueries::localTime()) {
			return $of(this->time);
		} else if (query == $TemporalQueries::precision()) {
			$init($ChronoUnit);
			return $of($ChronoUnit::NANOS);
		}
	}
	return $nc(query)->queryFrom(this);
}

$Temporal* OffsetTime::adjustInto($Temporal* temporal) {
	$init($ChronoField);
	return $$nc($nc(temporal)->with($ChronoField::NANO_OF_DAY, $nc(this->time)->toNanoOfDay()))->with($ChronoField::OFFSET_SECONDS, $nc(this->offset)->getTotalSeconds());
}

int64_t OffsetTime::until($Temporal* endExclusive, $TemporalUnit* unit) {
	$useLocalObjectStack();
	$var(OffsetTime, end, OffsetTime::from(endExclusive));
	{
		$ChronoUnit* chronoUnit = nullptr;
		bool var$0 = $instanceOf($ChronoUnit, unit);
		if (var$0) {
			chronoUnit = $cast($ChronoUnit, unit);
			var$0 = true;
		}
		if (var$0) {
			int64_t var$1 = $nc(end)->toEpochNano();
			int64_t nanosUntil = var$1 - toEpochNano();
			$init($OffsetTime$1);
			switch ($nc($OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->get($nc((chronoUnit))->ordinal())) {
			case 1:
				return nanosUntil;
			case 2:
				return nanosUntil / 1000;
			case 3:
				return nanosUntil / 1000000;
			case 4:
				return $div(nanosUntil, (int64_t)1000000000);
			case 5:
				return $div(nanosUntil, (int64_t)60000000000);
			case 6:
				return $div(nanosUntil, (int64_t)3600000000000);
			case 7:
				return $div(nanosUntil, (12 * (int64_t)3600000000000));
			}
			$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported unit: "_s, unit}));
		}
	}
	return $nc(unit)->between(this, end);
}

$String* OffsetTime::format($DateTimeFormatter* formatter) {
	$Objects::requireNonNull(formatter, "formatter"_s);
	return $nc(formatter)->format(this);
}

$OffsetDateTime* OffsetTime::atDate($LocalDate* date) {
	return $OffsetDateTime::of(date, this->time, this->offset);
}

int64_t OffsetTime::toEpochNano() {
	int64_t nod = $nc(this->time)->toNanoOfDay();
	int64_t offsetNanos = $nc(this->offset)->getTotalSeconds() * (int64_t)1000000000;
	return nod - offsetNanos;
}

int64_t OffsetTime::toEpochSecond($LocalDate* date) {
	$Objects::requireNonNull(date, "date"_s);
	int64_t epochDay = $nc(date)->toEpochDay();
	int64_t secs = epochDay * 0x00015180 + $nc(this->time)->toSecondOfDay();
	secs -= $nc(this->offset)->getTotalSeconds();
	return secs;
}

int32_t OffsetTime::compareTo(OffsetTime* other) {
	if ($nc(this->offset)->equals($nc(other)->offset)) {
		return $nc(this->time)->compareTo(other->time);
	}
	int64_t var$0 = toEpochNano();
	int32_t compare = $Long::compare(var$0, other->toEpochNano());
	if (compare == 0) {
		compare = $nc(this->time)->compareTo(other->time);
	}
	return compare;
}

bool OffsetTime::isAfter(OffsetTime* other) {
	int64_t var$0 = toEpochNano();
	return var$0 > $nc(other)->toEpochNano();
}

bool OffsetTime::isBefore(OffsetTime* other) {
	int64_t var$0 = toEpochNano();
	return var$0 < $nc(other)->toEpochNano();
}

bool OffsetTime::isEqual(OffsetTime* other) {
	int64_t var$0 = toEpochNano();
	return var$0 == $nc(other)->toEpochNano();
}

bool OffsetTime::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(OffsetTime, other, nullptr);
	bool var$2 = $instanceOf(OffsetTime, obj);
	if (var$2) {
		$assign(other, $cast(OffsetTime, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc(this->time)->equals($nc(other)->time);
	return var$0 && $nc(this->offset)->equals(other->offset);
}

int32_t OffsetTime::hashCode() {
	int32_t var$0 = $nc(this->time)->hashCode();
	return var$0 ^ $nc(this->offset)->hashCode();
}

$String* OffsetTime::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc(this->time)->toString()));
	var$0->append($($nc(this->offset)->toString()));
	return $str(var$0);
}

$Object* OffsetTime::writeReplace() {
	return $new($Ser, $Ser::OFFSET_TIME_TYPE, this);
}

void OffsetTime::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

void OffsetTime::writeExternal($ObjectOutput* out) {
	$nc(this->time)->writeExternal(out);
	$nc(this->offset)->writeExternal(out);
}

OffsetTime* OffsetTime::readExternal($ObjectInput* in) {
	$init(OffsetTime);
	$useLocalObjectStack();
	$var($LocalTime, time, $LocalTime::readExternal(in));
	$var($ZoneOffset, offset, $ZoneOffset::readExternal(in));
	return OffsetTime::of(time, offset);
}

int32_t OffsetTime::compareTo(Object$* other) {
	return this->compareTo($cast(OffsetTime, other));
}

void OffsetTime::clinit$($Class* clazz) {
	$init($LocalTime);
	$init($ZoneOffset);
	$assignStatic(OffsetTime::MIN, $nc($LocalTime::MIN)->atOffset($ZoneOffset::MAX));
	$assignStatic(OffsetTime::MAX, $nc($LocalTime::MAX)->atOffset($ZoneOffset::MIN));
}

OffsetTime::OffsetTime() {
}

$Class* OffsetTime::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.time.OffsetTime$$Lambda$from")) {
			return OffsetTime$$Lambda$from::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"MIN", "Ljava/time/OffsetTime;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OffsetTime, MIN)},
		{"MAX", "Ljava/time/OffsetTime;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OffsetTime, MAX)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OffsetTime, serialVersionUID)},
		{"time", "Ljava/time/LocalTime;", nullptr, $PRIVATE | $FINAL, $field(OffsetTime, time)},
		{"offset", "Ljava/time/ZoneOffset;", nullptr, $PRIVATE | $FINAL, $field(OffsetTime, offset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/time/LocalTime;Ljava/time/ZoneOffset;)V", nullptr, $PRIVATE, $method(OffsetTime, init$, void, $LocalTime*, $ZoneOffset*)},
		{"adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC, $virtualMethod(OffsetTime, adjustInto, $Temporal*, $Temporal*)},
		{"atDate", "(Ljava/time/LocalDate;)Ljava/time/OffsetDateTime;", nullptr, $PUBLIC, $method(OffsetTime, atDate, $OffsetDateTime*, $LocalDate*)},
		{"compareTo", "(Ljava/time/OffsetTime;)I", nullptr, $PUBLIC, $method(OffsetTime, compareTo, int32_t, OffsetTime*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(OffsetTime, compareTo, int32_t, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(OffsetTime, equals, bool, Object$*)},
		{"format", "(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;", nullptr, $PUBLIC, $method(OffsetTime, format, $String*, $DateTimeFormatter*)},
		{"from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/OffsetTime;", nullptr, $PUBLIC | $STATIC, $staticMethod(OffsetTime, from, OffsetTime*, $TemporalAccessor*)},
		{"get", "(Ljava/time/temporal/TemporalField;)I", nullptr, $PUBLIC, $virtualMethod(OffsetTime, get, int32_t, $TemporalField*)},
		{"getHour", "()I", nullptr, $PUBLIC, $method(OffsetTime, getHour, int32_t)},
		{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC, $virtualMethod(OffsetTime, getLong, int64_t, $TemporalField*)},
		{"getMinute", "()I", nullptr, $PUBLIC, $method(OffsetTime, getMinute, int32_t)},
		{"getNano", "()I", nullptr, $PUBLIC, $method(OffsetTime, getNano, int32_t)},
		{"getOffset", "()Ljava/time/ZoneOffset;", nullptr, $PUBLIC, $method(OffsetTime, getOffset, $ZoneOffset*)},
		{"getSecond", "()I", nullptr, $PUBLIC, $method(OffsetTime, getSecond, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(OffsetTime, hashCode, int32_t)},
		{"isAfter", "(Ljava/time/OffsetTime;)Z", nullptr, $PUBLIC, $method(OffsetTime, isAfter, bool, OffsetTime*)},
		{"isBefore", "(Ljava/time/OffsetTime;)Z", nullptr, $PUBLIC, $method(OffsetTime, isBefore, bool, OffsetTime*)},
		{"isEqual", "(Ljava/time/OffsetTime;)Z", nullptr, $PUBLIC, $method(OffsetTime, isEqual, bool, OffsetTime*)},
		{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC, $virtualMethod(OffsetTime, isSupported, bool, $TemporalField*)},
		{"isSupported", "(Ljava/time/temporal/TemporalUnit;)Z", nullptr, $PUBLIC, $virtualMethod(OffsetTime, isSupported, bool, $TemporalUnit*)},
		{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $virtualMethod(OffsetTime, minus, OffsetTime*, $TemporalAmount*)},
		{"minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $virtualMethod(OffsetTime, minus, OffsetTime*, int64_t, $TemporalUnit*)},
		{"minusHours", "(J)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, minusHours, OffsetTime*, int64_t)},
		{"minusMinutes", "(J)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, minusMinutes, OffsetTime*, int64_t)},
		{"minusNanos", "(J)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, minusNanos, OffsetTime*, int64_t)},
		{"minusSeconds", "(J)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, minusSeconds, OffsetTime*, int64_t)},
		{"now", "()Ljava/time/OffsetTime;", nullptr, $PUBLIC | $STATIC, $staticMethod(OffsetTime, now, OffsetTime*)},
		{"now", "(Ljava/time/ZoneId;)Ljava/time/OffsetTime;", nullptr, $PUBLIC | $STATIC, $staticMethod(OffsetTime, now, OffsetTime*, $ZoneId*)},
		{"now", "(Ljava/time/Clock;)Ljava/time/OffsetTime;", nullptr, $PUBLIC | $STATIC, $staticMethod(OffsetTime, now, OffsetTime*, $Clock*)},
		{"of", "(Ljava/time/LocalTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;", nullptr, $PUBLIC | $STATIC, $staticMethod(OffsetTime, of, OffsetTime*, $LocalTime*, $ZoneOffset*)},
		{"of", "(IIIILjava/time/ZoneOffset;)Ljava/time/OffsetTime;", nullptr, $PUBLIC | $STATIC, $staticMethod(OffsetTime, of, OffsetTime*, int32_t, int32_t, int32_t, int32_t, $ZoneOffset*)},
		{"ofInstant", "(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/OffsetTime;", nullptr, $PUBLIC | $STATIC, $staticMethod(OffsetTime, ofInstant, OffsetTime*, $Instant*, $ZoneId*)},
		{"parse", "(Ljava/lang/CharSequence;)Ljava/time/OffsetTime;", nullptr, $PUBLIC | $STATIC, $staticMethod(OffsetTime, parse, OffsetTime*, $CharSequence*)},
		{"parse", "(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/OffsetTime;", nullptr, $PUBLIC | $STATIC, $staticMethod(OffsetTime, parse, OffsetTime*, $CharSequence*, $DateTimeFormatter*)},
		{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $virtualMethod(OffsetTime, plus, OffsetTime*, $TemporalAmount*)},
		{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $virtualMethod(OffsetTime, plus, OffsetTime*, int64_t, $TemporalUnit*)},
		{"plusHours", "(J)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, plusHours, OffsetTime*, int64_t)},
		{"plusMinutes", "(J)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, plusMinutes, OffsetTime*, int64_t)},
		{"plusNanos", "(J)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, plusNanos, OffsetTime*, int64_t)},
		{"plusSeconds", "(J)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, plusSeconds, OffsetTime*, int64_t)},
		{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC, $virtualMethod(OffsetTime, query, $Object*, $TemporalQuery*)},
		{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC, $virtualMethod(OffsetTime, range, $ValueRange*, $TemporalField*)},
		{"readExternal", "(Ljava/io/ObjectInput;)Ljava/time/OffsetTime;", nullptr, $STATIC, $staticMethod(OffsetTime, readExternal, OffsetTime*, $ObjectInput*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(OffsetTime, readObject, void, $ObjectInputStream*), "java.io.InvalidObjectException"},
		{"toEpochNano", "()J", nullptr, $PRIVATE, $method(OffsetTime, toEpochNano, int64_t)},
		{"toEpochSecond", "(Ljava/time/LocalDate;)J", nullptr, $PUBLIC, $method(OffsetTime, toEpochSecond, int64_t, $LocalDate*)},
		{"toLocalTime", "()Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(OffsetTime, toLocalTime, $LocalTime*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OffsetTime, toString, $String*)},
		{"truncatedTo", "(Ljava/time/temporal/TemporalUnit;)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, truncatedTo, OffsetTime*, $TemporalUnit*)},
		{"until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC, $virtualMethod(OffsetTime, until, int64_t, $Temporal*, $TemporalUnit*)},
		{"with", "(Ljava/time/LocalTime;Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;", nullptr, $PRIVATE, $method(OffsetTime, with, OffsetTime*, $LocalTime*, $ZoneOffset*)},
		{"with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $virtualMethod(OffsetTime, with, OffsetTime*, $TemporalAdjuster*)},
		{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $virtualMethod(OffsetTime, with, OffsetTime*, $TemporalField*, int64_t)},
		{"withHour", "(I)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, withHour, OffsetTime*, int32_t)},
		{"withMinute", "(I)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, withMinute, OffsetTime*, int32_t)},
		{"withNano", "(I)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, withNano, OffsetTime*, int32_t)},
		{"withOffsetSameInstant", "(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, withOffsetSameInstant, OffsetTime*, $ZoneOffset*)},
		{"withOffsetSameLocal", "(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, withOffsetSameLocal, OffsetTime*, $ZoneOffset*)},
		{"withSecond", "(I)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(OffsetTime, withSecond, OffsetTime*, int32_t)},
		{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, 0, $method(OffsetTime, writeExternal, void, $ObjectOutput*), "java.io.IOException"},
		{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(OffsetTime, writeReplace, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.OffsetTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljdk/internal/ValueBased;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.time.OffsetTime",
		"java.lang.Object",
		"java.time.temporal.Temporal,java.time.temporal.TemporalAdjuster,java.lang.Comparable,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalAdjuster;Ljava/lang/Comparable<Ljava/time/OffsetTime;>;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"java.time.OffsetTime$1"
	};
	$loadClass(OffsetTime, name, initialize, &classInfo$$, OffsetTime::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(OffsetTime));
	});
	return class$;
}

$Class* OffsetTime::class$ = nullptr;

	} // time
} // java