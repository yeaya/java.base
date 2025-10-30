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
#include <java/time/temporal/TemporalAccessor.h>
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

using $Serializable = ::java::io::Serializable;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $ChronoLocalDateImpl$1 = ::java::time::chrono::ChronoLocalDateImpl$1;
using $Chronology = ::java::time::chrono::Chronology;
using $Era = ::java::time::chrono::Era;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
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

$FieldInfo _ChronoLocalDateImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChronoLocalDateImpl, serialVersionUID)},
	{}
};

$MethodInfo _ChronoLocalDateImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ChronoLocalDateImpl::*)()>(&ChronoLocalDateImpl::init$))},
	{"daysUntil", "(Ljava/time/chrono/ChronoLocalDate;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ChronoLocalDateImpl::*)($ChronoLocalDate*)>(&ChronoLocalDateImpl::daysUntil))},
	{"ensureValid", "(Ljava/time/chrono/Chronology;Ljava/time/temporal/Temporal;)Ljava/time/chrono/ChronoLocalDate;", "<D::Ljava/time/chrono/ChronoLocalDate;>(Ljava/time/chrono/Chronology;Ljava/time/temporal/Temporal;)TD;", $STATIC, $method(static_cast<$ChronoLocalDate*(*)($Chronology*,$Temporal*)>(&ChronoLocalDateImpl::ensureValid))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/time/temporal/TemporalAmount;)TD;", $PUBLIC},
	{"minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDate;", "(JLjava/time/temporal/TemporalUnit;)TD;", $PUBLIC},
	{"minusDays", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", 0},
	{"minusMonths", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", 0},
	{"minusWeeks", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", 0},
	{"minusYears", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", 0},
	{"monthsUntil", "(Ljava/time/chrono/ChronoLocalDate;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ChronoLocalDateImpl::*)($ChronoLocalDate*)>(&ChronoLocalDateImpl::monthsUntil))},
	{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/time/temporal/TemporalAmount;)TD;", $PUBLIC},
	{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDate;", "(JLjava/time/temporal/TemporalUnit;)TD;", $PUBLIC},
	{"plusDays", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", $ABSTRACT},
	{"plusMonths", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", $ABSTRACT},
	{"plusWeeks", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", 0},
	{"plusYears", "(J)Ljava/time/chrono/ChronoLocalDate;", "(J)TD;", $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC},
	{"with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/time/temporal/TemporalAdjuster;)TD;", $PUBLIC},
	{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/time/temporal/TemporalField;J)TD;", $PUBLIC},
	{}
};

$InnerClassInfo _ChronoLocalDateImpl_InnerClassesInfo_[] = {
	{"java.time.chrono.ChronoLocalDateImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ChronoLocalDateImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.time.chrono.ChronoLocalDateImpl",
	"java.lang.Object",
	"java.time.chrono.ChronoLocalDate,java.io.Serializable",
	_ChronoLocalDateImpl_FieldInfo_,
	_ChronoLocalDateImpl_MethodInfo_,
	"<D::Ljava/time/chrono/ChronoLocalDate;>Ljava/lang/Object;Ljava/time/chrono/ChronoLocalDate;Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalAdjuster;Ljava/io/Serializable;",
	nullptr,
	_ChronoLocalDateImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.time.chrono.ChronoLocalDateImpl$1"
};

$Object* allocate$ChronoLocalDateImpl($Class* clazz) {
	return $of($alloc(ChronoLocalDateImpl));
}

$Object* ChronoLocalDateImpl::clone() {
	 return this->$ChronoLocalDate::clone();
}

void ChronoLocalDateImpl::finalize() {
	this->$ChronoLocalDate::finalize();
}

$ChronoLocalDate* ChronoLocalDateImpl::ensureValid($Chronology* chrono, $Temporal* temporal) {
	$init(ChronoLocalDateImpl);
	$useLocalCurrentObjectStackCache();
	$var($ChronoLocalDate, other, $cast($ChronoLocalDate, temporal));
	if ($nc(chrono)->equals($($nc(other)->getChronology())) == false) {
		$var($String, var$0, $$str({"Chronology mismatch, expected: "_s, $(chrono->getId()), ", actual: "_s}));
		$throwNew($ClassCastException, $$concat(var$0, $($nc($($nc(other)->getChronology()))->getId())));
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
				{
					return plusDays(amountToAdd);
				}
			case 2:
				{
					return plusDays($Math::multiplyExact(amountToAdd, 7));
				}
			case 3:
				{
					return plusMonths(amountToAdd);
				}
			case 4:
				{
					return plusYears(amountToAdd);
				}
			case 5:
				{
					return plusYears($Math::multiplyExact(amountToAdd, 10));
				}
			case 6:
				{
					return plusYears($Math::multiplyExact(amountToAdd, 100));
				}
			case 7:
				{
					return plusYears($Math::multiplyExact(amountToAdd, 1000));
				}
			case 8:
				{
					$init($ChronoField);
					return with($ChronoField::ERA, $Math::addExact(getLong($ChronoField::ERA), amountToAdd));
				}
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
	return (yearsToSubtract == $Long::MIN_VALUE ? $nc(($cast(ChronoLocalDateImpl, $(plusYears($Long::MAX_VALUE)))))->plusYears(1) : plusYears(-yearsToSubtract));
}

$ChronoLocalDate* ChronoLocalDateImpl::minusMonths(int64_t monthsToSubtract) {
	return (monthsToSubtract == $Long::MIN_VALUE ? $nc(($cast(ChronoLocalDateImpl, $(plusMonths($Long::MAX_VALUE)))))->plusMonths(1) : plusMonths(-monthsToSubtract));
}

$ChronoLocalDate* ChronoLocalDateImpl::minusWeeks(int64_t weeksToSubtract) {
	return (weeksToSubtract == $Long::MIN_VALUE ? $nc(($cast(ChronoLocalDateImpl, $(plusWeeks($Long::MAX_VALUE)))))->plusWeeks(1) : plusWeeks(-weeksToSubtract));
}

$ChronoLocalDate* ChronoLocalDateImpl::minusDays(int64_t daysToSubtract) {
	return (daysToSubtract == $Long::MIN_VALUE ? $nc(($cast(ChronoLocalDateImpl, $(plusDays($Long::MAX_VALUE)))))->plusDays(1) : plusDays(-daysToSubtract));
}

int64_t ChronoLocalDateImpl::until($Temporal* endExclusive, $TemporalUnit* unit) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(endExclusive), "endExclusive"_s);
	$var($ChronoLocalDate, end, $nc($(getChronology()))->date(endExclusive));
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
				{
					return daysUntil(end);
				}
			case 2:
				{
					return daysUntil(end) / 7;
				}
			case 3:
				{
					return monthsUntil(end);
				}
			case 4:
				{
					return monthsUntil(end) / 12;
				}
			case 5:
				{
					return monthsUntil(end) / 120;
				}
			case 6:
				{
					return monthsUntil(end) / 1200;
				}
			case 7:
				{
					return monthsUntil(end) / 12000;
				}
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
	$Objects::requireNonNull($of(unit), "unit"_s);
	return $nc(unit)->between(this, end);
}

int64_t ChronoLocalDateImpl::daysUntil($ChronoLocalDate* end) {
	int64_t var$0 = $nc(end)->toEpochDay();
	return var$0 - toEpochDay();
}

int64_t ChronoLocalDateImpl::monthsUntil($ChronoLocalDate* end) {
	$useLocalCurrentObjectStackCache();
	$init($ChronoField);
	$var($ValueRange, range, $nc($(getChronology()))->range($ChronoField::MONTH_OF_YEAR));
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
	return $nc($(getChronology()))->hashCode() ^ ((int32_t)(epDay ^ ((int64_t)((uint64_t)epDay >> 32))));
}

$String* ChronoLocalDateImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$init($ChronoField);
	int64_t yoe = getLong($ChronoField::YEAR_OF_ERA);
	int64_t moy = getLong($ChronoField::MONTH_OF_YEAR);
	int64_t dom = getLong($ChronoField::DAY_OF_MONTH);
	$var($StringBuilder, buf, $new($StringBuilder, 30));
	buf->append($($nc($(getChronology()))->toString()))->append(" "_s)->append($($of(getEra())))->append(" "_s)->append(yoe)->append(moy < 10 ? "-0"_s : "-"_s)->append(moy)->append(dom < 10 ? "-0"_s : "-"_s)->append(dom);
	return buf->toString();
}

ChronoLocalDateImpl::ChronoLocalDateImpl() {
}

$Class* ChronoLocalDateImpl::load$($String* name, bool initialize) {
	$loadClass(ChronoLocalDateImpl, name, initialize, &_ChronoLocalDateImpl_ClassInfo_, allocate$ChronoLocalDateImpl);
	return class$;
}

$Class* ChronoLocalDateImpl::class$ = nullptr;

		} // chrono
	} // time
} // java