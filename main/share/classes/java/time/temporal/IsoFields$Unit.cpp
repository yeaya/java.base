#include <java/time/temporal/IsoFields$Unit.h>

#include <java/lang/Enum.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/time/Duration.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/IsoFields$1.h>
#include <java/time/temporal/IsoFields.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <jcpp.h>

#undef EPOCH_DAY
#undef MONTHS
#undef QUARTER_YEARS
#undef WEEK_BASED_YEAR
#undef WEEK_BASED_YEARS
#undef YEARS

using $IsoFields$UnitArray = $Array<::java::time::temporal::IsoFields$Unit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Duration = ::java::time::Duration;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $IsoFields = ::java::time::temporal::IsoFields;
using $IsoFields$1 = ::java::time::temporal::IsoFields$1;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _IsoFields$Unit_FieldInfo_[] = {
	{"WEEK_BASED_YEARS", "Ljava/time/temporal/IsoFields$Unit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(IsoFields$Unit, WEEK_BASED_YEARS)},
	{"QUARTER_YEARS", "Ljava/time/temporal/IsoFields$Unit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(IsoFields$Unit, QUARTER_YEARS)},
	{"$VALUES", "[Ljava/time/temporal/IsoFields$Unit;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(IsoFields$Unit, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(IsoFields$Unit, name$)},
	{"duration", "Ljava/time/Duration;", nullptr, $PRIVATE | $FINAL, $field(IsoFields$Unit, duration)},
	{}
};

$MethodInfo _IsoFields$Unit_MethodInfo_[] = {
	{"$values", "()[Ljava/time/temporal/IsoFields$Unit;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(IsoFields$Unit, $values, $IsoFields$UnitArray*)},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/time/Duration;)V", "(Ljava/lang/String;Ljava/time/Duration;)V", $PRIVATE, $method(IsoFields$Unit, init$, void, $String*, int32_t, $String*, $Duration*)},
	{"addTo", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;", "<R::Ljava/time/temporal/Temporal;>(TR;J)TR;", $PUBLIC, $virtualMethod(IsoFields$Unit, addTo, $Temporal*, $Temporal*, int64_t)},
	{"between", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)J", nullptr, $PUBLIC, $virtualMethod(IsoFields$Unit, between, int64_t, $Temporal*, $Temporal*)},
	{"getDuration", "()Ljava/time/Duration;", nullptr, $PUBLIC, $virtualMethod(IsoFields$Unit, getDuration, $Duration*)},
	{"isDateBased", "()Z", nullptr, $PUBLIC, $virtualMethod(IsoFields$Unit, isDateBased, bool)},
	{"isDurationEstimated", "()Z", nullptr, $PUBLIC, $virtualMethod(IsoFields$Unit, isDurationEstimated, bool)},
	{"isSupportedBy", "(Ljava/time/temporal/Temporal;)Z", nullptr, $PUBLIC, $virtualMethod(IsoFields$Unit, isSupportedBy, bool, $Temporal*)},
	{"isTimeBased", "()Z", nullptr, $PUBLIC, $virtualMethod(IsoFields$Unit, isTimeBased, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IsoFields$Unit, toString, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/temporal/IsoFields$Unit;", nullptr, $PUBLIC | $STATIC, $staticMethod(IsoFields$Unit, valueOf, IsoFields$Unit*, $String*)},
	{"values", "()[Ljava/time/temporal/IsoFields$Unit;", nullptr, $PUBLIC | $STATIC, $staticMethod(IsoFields$Unit, values, $IsoFields$UnitArray*)},
	{}
};

$InnerClassInfo _IsoFields$Unit_InnerClassesInfo_[] = {
	{"java.time.temporal.IsoFields$Unit", "java.time.temporal.IsoFields", "Unit", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _IsoFields$Unit_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.time.temporal.IsoFields$Unit",
	"java.lang.Enum",
	"java.time.temporal.TemporalUnit",
	_IsoFields$Unit_FieldInfo_,
	_IsoFields$Unit_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/temporal/IsoFields$Unit;>;Ljava/time/temporal/TemporalUnit;",
	nullptr,
	_IsoFields$Unit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.IsoFields"
};

$Object* allocate$IsoFields$Unit($Class* clazz) {
	return $of($alloc(IsoFields$Unit));
}

bool IsoFields$Unit::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t IsoFields$Unit::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* IsoFields$Unit::clone() {
	 return this->$Enum::clone();
}

void IsoFields$Unit::finalize() {
	this->$Enum::finalize();
}

IsoFields$Unit* IsoFields$Unit::WEEK_BASED_YEARS = nullptr;
IsoFields$Unit* IsoFields$Unit::QUARTER_YEARS = nullptr;
$IsoFields$UnitArray* IsoFields$Unit::$VALUES = nullptr;

$IsoFields$UnitArray* IsoFields$Unit::$values() {
	$init(IsoFields$Unit);
	return $new($IsoFields$UnitArray, {
		IsoFields$Unit::WEEK_BASED_YEARS,
		IsoFields$Unit::QUARTER_YEARS
	});
}

$IsoFields$UnitArray* IsoFields$Unit::values() {
	$init(IsoFields$Unit);
	return $cast($IsoFields$UnitArray, IsoFields$Unit::$VALUES->clone());
}

IsoFields$Unit* IsoFields$Unit::valueOf($String* name) {
	$init(IsoFields$Unit);
	return $cast(IsoFields$Unit, $Enum::valueOf(IsoFields$Unit::class$, name));
}

void IsoFields$Unit::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $Duration* estimatedDuration) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, duration, estimatedDuration);
}

$Duration* IsoFields$Unit::getDuration() {
	return this->duration;
}

bool IsoFields$Unit::isDurationEstimated() {
	return true;
}

bool IsoFields$Unit::isDateBased() {
	return true;
}

bool IsoFields$Unit::isTimeBased() {
	return false;
}

bool IsoFields$Unit::isSupportedBy($Temporal* temporal) {
	$init($ChronoField);
	bool var$0 = $nc(temporal)->isSupported($ChronoField::EPOCH_DAY);
	return var$0 && $IsoFields::isIso(temporal);
}

$Temporal* IsoFields$Unit::addTo($Temporal* temporal, int64_t amount) {
	$init($IsoFields$1);
	switch ($nc($IsoFields$1::$SwitchMap$java$time$temporal$IsoFields$Unit)->get((this)->ordinal())) {
	case 1:
		{
			$init($IsoFields);
			return $nc(temporal)->with($IsoFields::WEEK_BASED_YEAR, $Math::addExact((int64_t)temporal->get($IsoFields::WEEK_BASED_YEAR), amount));
		}
	case 2:
		{
			$init($ChronoUnit);
			return $nc($($nc(temporal)->plus(amount / 4, $ChronoUnit::YEARS)))->plus((amount % 4) * 3, $ChronoUnit::MONTHS);
		}
	default:
		{
			$throwNew($IllegalStateException, "Unreachable"_s);
		}
	}
}

int64_t IsoFields$Unit::between($Temporal* temporal1Inclusive, $Temporal* temporal2Exclusive) {
	if ($nc($of(temporal1Inclusive))->getClass() != $nc($of(temporal2Exclusive))->getClass()) {
		return temporal1Inclusive->until(temporal2Exclusive, this);
	}
	$init($IsoFields$1);
	switch ($nc($IsoFields$1::$SwitchMap$java$time$temporal$IsoFields$Unit)->get((this)->ordinal())) {
	case 1:
		{
			$init($IsoFields);
			int64_t var$0 = $nc(temporal2Exclusive)->getLong($IsoFields::WEEK_BASED_YEAR);
			return $Math::subtractExact(var$0, $nc(temporal1Inclusive)->getLong($IsoFields::WEEK_BASED_YEAR));
		}
	case 2:
		{
			$init($ChronoUnit);
			return $nc(temporal1Inclusive)->until(temporal2Exclusive, $ChronoUnit::MONTHS) / 3;
		}
	default:
		{
			$throwNew($IllegalStateException, "Unreachable"_s);
		}
	}
}

$String* IsoFields$Unit::toString() {
	return this->name$;
}

void clinit$IsoFields$Unit($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IsoFields$Unit::WEEK_BASED_YEARS, $new(IsoFields$Unit, "WEEK_BASED_YEARS"_s, 0, "WeekBasedYears"_s, $($Duration::ofSeconds(31556952))));
	$assignStatic(IsoFields$Unit::QUARTER_YEARS, $new(IsoFields$Unit, "QUARTER_YEARS"_s, 1, "QuarterYears"_s, $($Duration::ofSeconds((int64_t)31556952 / 4))));
	$assignStatic(IsoFields$Unit::$VALUES, IsoFields$Unit::$values());
}

IsoFields$Unit::IsoFields$Unit() {
}

$Class* IsoFields$Unit::load$($String* name, bool initialize) {
	$loadClass(IsoFields$Unit, name, initialize, &_IsoFields$Unit_ClassInfo_, clinit$IsoFields$Unit, allocate$IsoFields$Unit);
	return class$;
}

$Class* IsoFields$Unit::class$ = nullptr;

		} // temporal
	} // time
} // java