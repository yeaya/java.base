#include <java/time/temporal/ChronoUnit.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/Duration.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalUnit.h>
#include <jcpp.h>

#undef CENTURIES
#undef DAYS
#undef DECADES
#undef ERAS
#undef FOREVER
#undef HALF_DAYS
#undef HOURS
#undef MAX_VALUE
#undef MICROS
#undef MILLENNIA
#undef MILLIS
#undef MINUTES
#undef MONTHS
#undef NANOS
#undef SECONDS
#undef WEEKS
#undef YEARS

using $ChronoUnitArray = $Array<::java::time::temporal::ChronoUnit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Duration = ::java::time::Duration;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _ChronoUnit_FieldInfo_[] = {
	{"NANOS", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, NANOS)},
	{"MICROS", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, MICROS)},
	{"MILLIS", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, MILLIS)},
	{"SECONDS", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, SECONDS)},
	{"MINUTES", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, MINUTES)},
	{"HOURS", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, HOURS)},
	{"HALF_DAYS", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, HALF_DAYS)},
	{"DAYS", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, DAYS)},
	{"WEEKS", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, WEEKS)},
	{"MONTHS", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, MONTHS)},
	{"YEARS", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, YEARS)},
	{"DECADES", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, DECADES)},
	{"CENTURIES", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, CENTURIES)},
	{"MILLENNIA", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, MILLENNIA)},
	{"ERAS", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, ERAS)},
	{"FOREVER", "Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoUnit, FOREVER)},
	{"$VALUES", "[Ljava/time/temporal/ChronoUnit;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ChronoUnit, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ChronoUnit, name$)},
	{"duration", "Ljava/time/Duration;", nullptr, $PRIVATE | $FINAL, $field(ChronoUnit, duration)},
	{}
};

$MethodInfo _ChronoUnit_MethodInfo_[] = {
	{"$values", "()[Ljava/time/temporal/ChronoUnit;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ChronoUnitArray*(*)()>(&ChronoUnit::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/time/Duration;)V", "(Ljava/lang/String;Ljava/time/Duration;)V", $PRIVATE, $method(static_cast<void(ChronoUnit::*)($String*,int32_t,$String*,$Duration*)>(&ChronoUnit::init$))},
	{"addTo", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;", "<R::Ljava/time/temporal/Temporal;>(TR;J)TR;", $PUBLIC},
	{"between", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)J", nullptr, $PUBLIC},
	{"getDuration", "()Ljava/time/Duration;", nullptr, $PUBLIC},
	{"isDateBased", "()Z", nullptr, $PUBLIC},
	{"isDurationEstimated", "()Z", nullptr, $PUBLIC},
	{"isSupportedBy", "(Ljava/time/temporal/Temporal;)Z", nullptr, $PUBLIC},
	{"isTimeBased", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ChronoUnit*(*)($String*)>(&ChronoUnit::valueOf))},
	{"values", "()[Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ChronoUnitArray*(*)()>(&ChronoUnit::values))},
	{}
};

$ClassInfo _ChronoUnit_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.time.temporal.ChronoUnit",
	"java.lang.Enum",
	"java.time.temporal.TemporalUnit",
	_ChronoUnit_FieldInfo_,
	_ChronoUnit_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/temporal/ChronoUnit;>;Ljava/time/temporal/TemporalUnit;"
};

$Object* allocate$ChronoUnit($Class* clazz) {
	return $of($alloc(ChronoUnit));
}

bool ChronoUnit::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t ChronoUnit::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* ChronoUnit::clone() {
	 return this->$Enum::clone();
}

void ChronoUnit::finalize() {
	this->$Enum::finalize();
}


ChronoUnit* ChronoUnit::NANOS = nullptr;

ChronoUnit* ChronoUnit::MICROS = nullptr;

ChronoUnit* ChronoUnit::MILLIS = nullptr;

ChronoUnit* ChronoUnit::SECONDS = nullptr;

ChronoUnit* ChronoUnit::MINUTES = nullptr;

ChronoUnit* ChronoUnit::HOURS = nullptr;

ChronoUnit* ChronoUnit::HALF_DAYS = nullptr;

ChronoUnit* ChronoUnit::DAYS = nullptr;

ChronoUnit* ChronoUnit::WEEKS = nullptr;

ChronoUnit* ChronoUnit::MONTHS = nullptr;

ChronoUnit* ChronoUnit::YEARS = nullptr;

ChronoUnit* ChronoUnit::DECADES = nullptr;

ChronoUnit* ChronoUnit::CENTURIES = nullptr;

ChronoUnit* ChronoUnit::MILLENNIA = nullptr;

ChronoUnit* ChronoUnit::ERAS = nullptr;

ChronoUnit* ChronoUnit::FOREVER = nullptr;
$ChronoUnitArray* ChronoUnit::$VALUES = nullptr;

$ChronoUnitArray* ChronoUnit::$values() {
	$init(ChronoUnit);
	return $new($ChronoUnitArray, {
		ChronoUnit::NANOS,
		ChronoUnit::MICROS,
		ChronoUnit::MILLIS,
		ChronoUnit::SECONDS,
		ChronoUnit::MINUTES,
		ChronoUnit::HOURS,
		ChronoUnit::HALF_DAYS,
		ChronoUnit::DAYS,
		ChronoUnit::WEEKS,
		ChronoUnit::MONTHS,
		ChronoUnit::YEARS,
		ChronoUnit::DECADES,
		ChronoUnit::CENTURIES,
		ChronoUnit::MILLENNIA,
		ChronoUnit::ERAS,
		ChronoUnit::FOREVER
	});
}

$ChronoUnitArray* ChronoUnit::values() {
	$init(ChronoUnit);
	return $cast($ChronoUnitArray, ChronoUnit::$VALUES->clone());
}

ChronoUnit* ChronoUnit::valueOf($String* name) {
	$init(ChronoUnit);
	return $cast(ChronoUnit, $Enum::valueOf(ChronoUnit::class$, name));
}

void ChronoUnit::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $Duration* estimatedDuration) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, duration, estimatedDuration);
}

$Duration* ChronoUnit::getDuration() {
	return this->duration;
}

bool ChronoUnit::isDurationEstimated() {
	return this->compareTo(static_cast<$Enum*>(ChronoUnit::DAYS)) >= 0;
}

bool ChronoUnit::isDateBased() {
	return this->compareTo(static_cast<$Enum*>(ChronoUnit::DAYS)) >= 0 && this != ChronoUnit::FOREVER;
}

bool ChronoUnit::isTimeBased() {
	return this->compareTo(static_cast<$Enum*>(ChronoUnit::DAYS)) < 0;
}

bool ChronoUnit::isSupportedBy($Temporal* temporal) {
	return $nc(temporal)->isSupported(static_cast<$TemporalUnit*>(this));
}

$Temporal* ChronoUnit::addTo($Temporal* temporal, int64_t amount) {
	return $nc(temporal)->plus(amount, this);
}

int64_t ChronoUnit::between($Temporal* temporal1Inclusive, $Temporal* temporal2Exclusive) {
	return $nc(temporal1Inclusive)->until(temporal2Exclusive, this);
}

$String* ChronoUnit::toString() {
	return this->name$;
}

void clinit$ChronoUnit($Class* class$) {
	$assignStatic(ChronoUnit::NANOS, $new(ChronoUnit, "NANOS"_s, 0, "Nanos"_s, $($Duration::ofNanos(1))));
	$assignStatic(ChronoUnit::MICROS, $new(ChronoUnit, "MICROS"_s, 1, "Micros"_s, $($Duration::ofNanos(1000))));
	$assignStatic(ChronoUnit::MILLIS, $new(ChronoUnit, "MILLIS"_s, 2, "Millis"_s, $($Duration::ofNanos(0x000F4240))));
	$assignStatic(ChronoUnit::SECONDS, $new(ChronoUnit, "SECONDS"_s, 3, "Seconds"_s, $($Duration::ofSeconds(1))));
	$assignStatic(ChronoUnit::MINUTES, $new(ChronoUnit, "MINUTES"_s, 4, "Minutes"_s, $($Duration::ofSeconds(60))));
	$assignStatic(ChronoUnit::HOURS, $new(ChronoUnit, "HOURS"_s, 5, "Hours"_s, $($Duration::ofSeconds(3600))));
	$assignStatic(ChronoUnit::HALF_DAYS, $new(ChronoUnit, "HALF_DAYS"_s, 6, "HalfDays"_s, $($Duration::ofSeconds(0x0000A8C0))));
	$assignStatic(ChronoUnit::DAYS, $new(ChronoUnit, "DAYS"_s, 7, "Days"_s, $($Duration::ofSeconds(0x00015180))));
	$assignStatic(ChronoUnit::WEEKS, $new(ChronoUnit, "WEEKS"_s, 8, "Weeks"_s, $($Duration::ofSeconds(7 * (int64_t)86400))));
	$assignStatic(ChronoUnit::MONTHS, $new(ChronoUnit, "MONTHS"_s, 9, "Months"_s, $($Duration::ofSeconds((int64_t)31556952 / 12))));
	$assignStatic(ChronoUnit::YEARS, $new(ChronoUnit, "YEARS"_s, 10, "Years"_s, $($Duration::ofSeconds(31556952))));
	$assignStatic(ChronoUnit::DECADES, $new(ChronoUnit, "DECADES"_s, 11, "Decades"_s, $($Duration::ofSeconds((int64_t)31556952 * (int64_t)10))));
	$assignStatic(ChronoUnit::CENTURIES, $new(ChronoUnit, "CENTURIES"_s, 12, "Centuries"_s, $($Duration::ofSeconds((int64_t)31556952 * (int64_t)100))));
	$assignStatic(ChronoUnit::MILLENNIA, $new(ChronoUnit, "MILLENNIA"_s, 13, "Millennia"_s, $($Duration::ofSeconds((int64_t)31556952 * (int64_t)1000))));
	$assignStatic(ChronoUnit::ERAS, $new(ChronoUnit, "ERAS"_s, 14, "Eras"_s, $($Duration::ofSeconds((int64_t)31556952 * (int64_t)1000000000))));
	$assignStatic(ChronoUnit::FOREVER, $new(ChronoUnit, "FOREVER"_s, 15, "Forever"_s, $($Duration::ofSeconds($Long::MAX_VALUE, 0x3B9AC9FF))));
	$assignStatic(ChronoUnit::$VALUES, ChronoUnit::$values());
}

ChronoUnit::ChronoUnit() {
}

$Class* ChronoUnit::load$($String* name, bool initialize) {
	$loadClass(ChronoUnit, name, initialize, &_ChronoUnit_ClassInfo_, clinit$ChronoUnit, allocate$ChronoUnit);
	return class$;
}

$Class* ChronoUnit::class$ = nullptr;

		} // temporal
	} // time
} // java