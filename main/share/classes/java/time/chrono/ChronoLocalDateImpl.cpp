#include <java/time/chrono/ChronoLocalDateImpl.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/ChronoLocalDateImpl$1.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/Era.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAdjuster.h>
#include <java/time/temporal/TemporalAmount.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/time/temporal/ValueRange.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef DAY_OF_MONTH
#undef ERA
#undef MAX_VALUE
#undef MIN_VALUE
#undef MONTH_OF_YEAR
#undef PROLEPTIC_MONTH
#undef YEAR_OF_ERA

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $ChronoLocalDateImpl$1 = ::java::time::chrono::ChronoLocalDateImpl$1;
using $Chronology = ::java::time::chrono::Chronology;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAdjuster = ::java::time::temporal::TemporalAdjuster;
using $TemporalAmount = ::java::time::temporal::TemporalAmount;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;
using $ValueRange = ::java::time::temporal::ValueRange;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace chrono {

$Object* ChronoLocalDateImpl::clone() {
	 return this->$ChronoLocalDate::clone();
}

void ChronoLocalDateImpl::finalize() {
	this->$ChronoLocalDate::finalize();
}

$ChronoLocalDate* ChronoLocalDateImpl::ensureValid($Chronology* chrono, $Temporal* temporal) {
	$init(ChronoLocalDateImpl);
	$useLocalObjectStack();
	$var($ChronoLocalDate, other, $cast($ChronoLocalDate, temporal));
	if ($nc(chrono)->equals($($nc(other)->getChronology())) == false) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Chronology mismatch, expected: "_s);
		var$0->append($(chrono->getId()));
		var$0->append(", actual: "_s);
		var$0->append($($$nc(other->getChronology())->getId()));
		$throwNew($ClassCastException, $$str(var$0));
	}
	return other;
}

void ChronoLocalDateImpl::init$() {
}

$ChronoLocalDate* ChronoLocalDateImpl::with($TemporalAdjuster* adjuster) {
	return $ChronoLocalDate::with(adjuster);
}

$ChronoLocalDate* ChronoLocalDateImpl::with($TemporalField* field, int64_t value) {
	return $ChronoLocalDate::with(field, value);
}

$ChronoLocalDate* ChronoLocalDateImpl::plus($TemporalAmount* amount) {
	return $ChronoLocalDate::plus(amount);
}

$ChronoLocalDate* ChronoLocalDateImpl::plus(int64_t amountToAdd, $TemporalUnit* unit) {
	{
		$ChronoUnit* chronoUnit = nullptr;
		bool var$0 = $instanceOf($ChronoUnit, unit);
		if (var$0) {
			chronoUnit = $cast($ChronoUnit, unit);
			var$0 = true;
		}
		if (var$0) {
			$init($ChronoLocalDateImpl$1);
			switch ($nc($ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->get($nc((chronoUnit))->ordinal())) {
			case 1:
				return plusDays(amountToAdd);
			case 2:
				return plusDays($Math::multiplyExact(amountToAdd, 7));
			case 3:
				return plusMonths(amountToAdd);
			case 4:
				return plusYears(amountToAdd);
			case 5:
				return plusYears($Math::multiplyExact(amountToAdd, 10));
			case 6:
				return plusYears($Math::multiplyExact(amountToAdd, 100));
			case 7:
				return plusYears($Math::multiplyExact(amountToAdd, 1000));
			case 8:
				$init($ChronoField);
				return with($ChronoField::ERA, $Math::addExact(getLong($ChronoField::ERA), amountToAdd));
			}
			$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported unit: "_s, unit}));
		}
	}
	return $ChronoLocalDate::plus(amountToAdd, unit);
}

$ChronoLocalDate* ChronoLocalDateImpl::minus($TemporalAmount* amount) {
	return $ChronoLocalDate::minus(amount);
}

$ChronoLocalDate* ChronoLocalDateImpl::minus(int64_t amountToSubtract, $TemporalUnit* unit) {
	return $ChronoLocalDate::minus(amountToSubtract, unit);
}

$ChronoLocalDate* ChronoLocalDateImpl::plusWeeks(int64_t weeksToAdd) {
	return plusDays($Math::multiplyExact(weeksToAdd, 7));
}

$ChronoLocalDate* ChronoLocalDateImpl::minusYears(int64_t yearsToSubtract) {
	return (yearsToSubtract == $Long::MIN_VALUE ? $$sure(ChronoLocalDateImpl, plusYears($Long::MAX_VALUE))->plusYears(1) : plusYears(-yearsToSubtract));
}

$ChronoLocalDate* ChronoLocalDateImpl::minusMonths(int64_t monthsToSubtract) {
	return (monthsToSubtract == $Long::MIN_VALUE ? $$sure(ChronoLocalDateImpl, plusMonths($Long::MAX_VALUE))->plusMonths(1) : plusMonths(-monthsToSubtract));
}

$ChronoLocalDate* ChronoLocalDateImpl::minusWeeks(int64_t weeksToSubtract) {
	return (weeksToSubtract == $Long::MIN_VALUE ? $$sure(ChronoLocalDateImpl, plusWeeks($Long::MAX_VALUE))->plusWeeks(1) : plusWeeks(-weeksToSubtract));
}

$ChronoLocalDate* ChronoLocalDateImpl::minusDays(int64_t daysToSubtract) {
	return (daysToSubtract == $Long::MIN_VALUE ? $$sure(ChronoLocalDateImpl, plusDays($Long::MAX_VALUE))->plusDays(1) : plusDays(-daysToSubtract));
}

int64_t ChronoLocalDateImpl::until($Temporal* endExclusive, $TemporalUnit* unit) {
	$useLocalObjectStack();
	$Objects::requireNonNull(endExclusive, "endExclusive"_s);
	$var($ChronoLocalDate, end, $$nc(getChronology())->date(endExclusive));
	{
		$ChronoUnit* chronoUnit = nullptr;
		bool var$0 = $instanceOf($ChronoUnit, unit);
		if (var$0) {
			chronoUnit = $cast($ChronoUnit, unit);
			var$0 = true;
		}
		if (var$0) {
			$init($ChronoLocalDateImpl$1);
			switch ($nc($ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->get($nc((chronoUnit))->ordinal())) {
			case 1:
				return daysUntil(end);
			case 2:
				return daysUntil(end) / 7;
			case 3:
				return monthsUntil(end);
			case 4:
				return monthsUntil(end) / 12;
			case 5:
				return monthsUntil(end) / 120;
			case 6:
				return monthsUntil(end) / 1200;
			case 7:
				return monthsUntil(end) / 12000;
			case 8:
				{
					$init($ChronoField);
					int64_t var$1 = $nc(end)->getLong($ChronoField::ERA);
					return var$1 - getLong($ChronoField::ERA);
				}
			}
			$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported unit: "_s, unit}));
		}
	}
	$Objects::requireNonNull(unit, "unit"_s);
	return $nc(unit)->between(this, end);
}

int64_t ChronoLocalDateImpl::daysUntil($ChronoLocalDate* end) {
	int64_t var$0 = $nc(end)->toEpochDay();
	return var$0 - toEpochDay();
}

int64_t ChronoLocalDateImpl::monthsUntil($ChronoLocalDate* end) {
	$useLocalObjectStack();
	$init($ChronoField);
	$var($ValueRange, range, $$nc(getChronology())->range($ChronoField::MONTH_OF_YEAR));
	if ($nc(range)->getMaximum() != 12) {
		$throwNew($IllegalStateException, "ChronoLocalDateImpl only supports Chronologies with 12 months per year"_s);
	}
	int64_t var$0 = getLong($ChronoField::PROLEPTIC_MONTH) * (int64_t)32;
	int64_t packed1 = var$0 + get($ChronoField::DAY_OF_MONTH);
	int64_t var$1 = $nc(end)->getLong($ChronoField::PROLEPTIC_MONTH) * (int64_t)32;
	int64_t packed2 = var$1 + end->get($ChronoField::DAY_OF_MONTH);
	return (packed2 - packed1) / 32;
}

bool ChronoLocalDateImpl::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf($ChronoLocalDate, obj)) {
		return compareTo($cast($ChronoLocalDate, obj)) == 0;
	}
	return false;
}

int32_t ChronoLocalDateImpl::hashCode() {
	int64_t epDay = toEpochDay();
	return $$nc(getChronology())->hashCode() ^ ((int32_t)(epDay ^ ((int64_t)((uint64_t)epDay >> 32))));
}

$String* ChronoLocalDateImpl::toString() {
	$useLocalObjectStack();
	$init($ChronoField);
	int64_t yoe = getLong($ChronoField::YEAR_OF_ERA);
	int64_t moy = getLong($ChronoField::MONTH_OF_YEAR);
	int64_t dom = getLong($ChronoField::DAY_OF_MONTH);
	$var($StringBuilder, buf, $new($StringBuilder, 30));
	buf->append($($$nc(getChronology())->toString()))->append(" "_s)->append($(getEra()))->append(" "_s)->append(yoe)->append(moy < 10 ? "-0"_s : "-"_s)->append(moy)->append(dom < 10 ? "-0"_s : "-"_s)->append(dom);
	return buf->toString();
}

ChronoLocalDateImpl::ChronoLocalDateImpl() {
}

$Class* ChronoLocalDateImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChronoLocalDateImpl, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "()V", nullptr, 0, $method(ChronoLocalDateImpl, init$, void)},
		{"daysUntil", "(Ljava/time/chrono/ChronoLocalDate;)J", nullptr, $PRIVATE, $method(ChronoLocalDateImpl, daysUntil, int64_t, $ChronoLocalDate*)},
		{"ensureValid", "(Ljava/time/chrono/Chronology;Ljava/time/temporal/Temporal;)Ljava/time/chrono/ChronoLocalDate;", "<D::Ljava/time/chrono/ChronoLocalDate;>(Ljava/time/chrono/Chronology;Ljava/time/temporal/Temporal;)TD;", $STATIC, $staticMethod(ChronoLocalDateImpl, ensureValid, $ChronoLocalDate*, $Chronology*, $Temporal*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateImpl, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateImpl, hashCode, int32_t)},
		{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/time/temporal/TemporalAmount;)TD;", $PUBLIC, $virtualMethod(ChronoLocalDateImpl, minus, $ChronoLocalDate*, $TemporalAmount*)},
		{"minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDate;", "(JLjava/time/temporal/TemporalUnit;)TD;", $PUBLIC, $virtualMethod(ChronoLocalDateImpl, minus, $ChronoLocalDate*, int64_t, $TemporalUnit*)},
		{"minusDays", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", 0, $virtualMethod(ChronoLocalDateImpl, minusDays, $ChronoLocalDate*, int64_t)},
		{"minusMonths", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", 0, $virtualMethod(ChronoLocalDateImpl, minusMonths, $ChronoLocalDate*, int64_t)},
		{"minusWeeks", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", 0, $virtualMethod(ChronoLocalDateImpl, minusWeeks, $ChronoLocalDate*, int64_t)},
		{"minusYears", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", 0, $virtualMethod(ChronoLocalDateImpl, minusYears, $ChronoLocalDate*, int64_t)},
		{"monthsUntil", "(Ljava/time/chrono/ChronoLocalDate;)J", nullptr, $PRIVATE, $method(ChronoLocalDateImpl, monthsUntil, int64_t, $ChronoLocalDate*)},
		{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/time/temporal/TemporalAmount;)TD;", $PUBLIC, $virtualMethod(ChronoLocalDateImpl, plus, $ChronoLocalDate*, $TemporalAmount*)},
		{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDate;", "(JLjava/time/temporal/TemporalUnit;)TD;", $PUBLIC, $virtualMethod(ChronoLocalDateImpl, plus, $ChronoLocalDate*, int64_t, $TemporalUnit*)},
		{"plusDays", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", $ABSTRACT, $virtualMethod(ChronoLocalDateImpl, plusDays, $ChronoLocalDate*, int64_t)},
		{"plusMonths", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", $ABSTRACT, $virtualMethod(ChronoLocalDateImpl, plusMonths, $ChronoLocalDate*, int64_t)},
		{"plusWeeks", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", 0, $virtualMethod(ChronoLocalDateImpl, plusWeeks, $ChronoLocalDate*, int64_t)},
		{"plusYears", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", $ABSTRACT, $virtualMethod(ChronoLocalDateImpl, plusYears, $ChronoLocalDate*, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateImpl, toString, $String*)},
		{"until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDateImpl, until, int64_t, $Temporal*, $TemporalUnit*)},
		{"with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/time/temporal/TemporalAdjuster;)TD;", $PUBLIC, $virtualMethod(ChronoLocalDateImpl, with, $ChronoLocalDate*, $TemporalAdjuster*)},
		{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/time/temporal/TemporalField;J)TD;", $PUBLIC, $virtualMethod(ChronoLocalDateImpl, with, $ChronoLocalDate*, $TemporalField*, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.chrono.ChronoLocalDateImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.time.chrono.ChronoLocalDateImpl",
		"java.lang.Object",
		"java.time.chrono.ChronoLocalDate,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<D::Ljava/time/chrono/ChronoLocalDate;>Ljava/lang/Object;Ljava/time/chrono/ChronoLocalDate;Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalAdjuster;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.time.chrono.ChronoLocalDateImpl$1"
	};
	$loadClass(ChronoLocalDateImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ChronoLocalDateImpl));
	});
	return class$;
}

$Class* ChronoLocalDateImpl::class$ = nullptr;

		} // chrono
	} // time
} // java