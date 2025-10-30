#include <java/time/chrono/ChronoPeriodImpl.h>

#include <java/io/DataInput.h>
#include <java/io/DataOutput.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Math.h>
#include <java/time/DateTimeException.h>
#include <java/time/chrono/ChronoPeriod.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/Ser.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalAmount.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/time/temporal/ValueRange.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef CHRONO_PERIOD_TYPE
#undef DAYS
#undef MONTHS
#undef MONTH_OF_YEAR
#undef SUPPORTED_UNITS
#undef YEARS

using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $ChronoPeriod = ::java::time::chrono::ChronoPeriod;
using $Chronology = ::java::time::chrono::Chronology;
using $Ser = ::java::time::chrono::Ser;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalAmount = ::java::time::temporal::TemporalAmount;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;
using $ValueRange = ::java::time::temporal::ValueRange;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _ChronoPeriodImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChronoPeriodImpl, serialVersionUID)},
	{"SUPPORTED_UNITS", "Ljava/util/List;", "Ljava/util/List<Ljava/time/temporal/TemporalUnit;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ChronoPeriodImpl, SUPPORTED_UNITS)},
	{"chrono", "Ljava/time/chrono/Chronology;", nullptr, $PRIVATE | $FINAL, $field(ChronoPeriodImpl, chrono)},
	{"years", "I", nullptr, $FINAL, $field(ChronoPeriodImpl, years)},
	{"months", "I", nullptr, $FINAL, $field(ChronoPeriodImpl, months)},
	{"days", "I", nullptr, $FINAL, $field(ChronoPeriodImpl, days)},
	{}
};

$MethodInfo _ChronoPeriodImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/time/chrono/Chronology;III)V", nullptr, 0, $method(static_cast<void(ChronoPeriodImpl::*)($Chronology*,int32_t,int32_t,int32_t)>(&ChronoPeriodImpl::init$))},
	{"addTo", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC},
	{"getChronology", "()Ljava/time/chrono/Chronology;", nullptr, $PUBLIC},
	{"getUnits", "()Ljava/util/List;", "()Ljava/util/List<Ljava/time/temporal/TemporalUnit;>;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isNegative", "()Z", nullptr, $PUBLIC},
	{"isZero", "()Z", nullptr, $PUBLIC},
	{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC},
	{"monthRange", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(ChronoPeriodImpl::*)()>(&ChronoPeriodImpl::monthRange))},
	{"multipliedBy", "(I)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC},
	{"normalized", "()Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC},
	{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC},
	{"readExternal", "(Ljava/io/DataInput;)Ljava/time/chrono/ChronoPeriodImpl;", nullptr, $STATIC, $method(static_cast<ChronoPeriodImpl*(*)($DataInput*)>(&ChronoPeriodImpl::readExternal)), "java.io.IOException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ChronoPeriodImpl::*)($ObjectInputStream*)>(&ChronoPeriodImpl::readObject)), "java.io.ObjectStreamException"},
	{"subtractFrom", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validateAmount", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoPeriodImpl;", nullptr, $PRIVATE, $method(static_cast<ChronoPeriodImpl*(ChronoPeriodImpl::*)($TemporalAmount*)>(&ChronoPeriodImpl::validateAmount))},
	{"validateChrono", "(Ljava/time/temporal/TemporalAccessor;)V", nullptr, $PRIVATE, $method(static_cast<void(ChronoPeriodImpl::*)($TemporalAccessor*)>(&ChronoPeriodImpl::validateChrono))},
	{"writeExternal", "(Ljava/io/DataOutput;)V", nullptr, 0, $method(static_cast<void(ChronoPeriodImpl::*)($DataOutput*)>(&ChronoPeriodImpl::writeExternal)), "java.io.IOException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, $method(static_cast<$Object*(ChronoPeriodImpl::*)()>(&ChronoPeriodImpl::writeReplace))},
	{}
};

$ClassInfo _ChronoPeriodImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.chrono.ChronoPeriodImpl",
	"java.lang.Object",
	"java.time.chrono.ChronoPeriod,java.io.Serializable",
	_ChronoPeriodImpl_FieldInfo_,
	_ChronoPeriodImpl_MethodInfo_
};

$Object* allocate$ChronoPeriodImpl($Class* clazz) {
	return $of($alloc(ChronoPeriodImpl));
}

$Object* ChronoPeriodImpl::clone() {
	 return this->$ChronoPeriod::clone();
}

void ChronoPeriodImpl::finalize() {
	this->$ChronoPeriod::finalize();
}

$List* ChronoPeriodImpl::SUPPORTED_UNITS = nullptr;

void ChronoPeriodImpl::init$($Chronology* chrono, int32_t years, int32_t months, int32_t days) {
	$Objects::requireNonNull($of(chrono), "chrono"_s);
	$set(this, chrono, chrono);
	this->years = years;
	this->months = months;
	this->days = days;
}

int64_t ChronoPeriodImpl::get($TemporalUnit* unit) {
	$init($ChronoUnit);
	if ($equals(unit, $ChronoUnit::YEARS)) {
		return this->years;
	} else {
		if ($equals(unit, $ChronoUnit::MONTHS)) {
			return this->months;
		} else {
			if ($equals(unit, $ChronoUnit::DAYS)) {
				return this->days;
			} else {
				$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported unit: "_s, unit}));
			}
		}
	}
}

$List* ChronoPeriodImpl::getUnits() {
	return ChronoPeriodImpl::SUPPORTED_UNITS;
}

$Chronology* ChronoPeriodImpl::getChronology() {
	return this->chrono;
}

bool ChronoPeriodImpl::isZero() {
	return this->years == 0 && this->months == 0 && this->days == 0;
}

bool ChronoPeriodImpl::isNegative() {
	return this->years < 0 || this->months < 0 || this->days < 0;
}

$ChronoPeriod* ChronoPeriodImpl::plus($TemporalAmount* amountToAdd) {
	$useLocalCurrentObjectStackCache();
	$var(ChronoPeriodImpl, amount, validateAmount(amountToAdd));
	$var($Chronology, var$0, this->chrono);
	int32_t var$1 = $Math::addExact(this->years, $nc(amount)->years);
	int32_t var$2 = $Math::addExact(this->months, $nc(amount)->months);
	return $new(ChronoPeriodImpl, var$0, var$1, var$2, $Math::addExact(this->days, $nc(amount)->days));
}

$ChronoPeriod* ChronoPeriodImpl::minus($TemporalAmount* amountToSubtract) {
	$useLocalCurrentObjectStackCache();
	$var(ChronoPeriodImpl, amount, validateAmount(amountToSubtract));
	$var($Chronology, var$0, this->chrono);
	int32_t var$1 = $Math::subtractExact(this->years, $nc(amount)->years);
	int32_t var$2 = $Math::subtractExact(this->months, $nc(amount)->months);
	return $new(ChronoPeriodImpl, var$0, var$1, var$2, $Math::subtractExact(this->days, $nc(amount)->days));
}

ChronoPeriodImpl* ChronoPeriodImpl::validateAmount($TemporalAmount* amount) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(amount), "amount"_s);
	$var(ChronoPeriodImpl, period, nullptr);
	bool var$0 = $instanceOf(ChronoPeriodImpl, amount);
	if (var$0) {
		$assign(period, $cast(ChronoPeriodImpl, amount));
		var$0 = true;
	}
	if (!(var$0)) {
		$throwNew($DateTimeException, $$str({"Unable to obtain ChronoPeriod from TemporalAmount: "_s, $nc($of(amount))->getClass()}));
	}
	if (!($nc(this->chrono)->equals($($nc(period)->getChronology())))) {
		$var($String, var$1, $$str({"Chronology mismatch, expected: "_s, $($nc(this->chrono)->getId()), ", actual: "_s}));
		$throwNew($ClassCastException, $$concat(var$1, $($nc($($nc(period)->getChronology()))->getId())));
	}
	return period;
}

$ChronoPeriod* ChronoPeriodImpl::multipliedBy(int32_t scalar) {
	if (this->isZero() || scalar == 1) {
		return this;
	}
	$var($Chronology, var$0, this->chrono);
	int32_t var$1 = $Math::multiplyExact(this->years, scalar);
	int32_t var$2 = $Math::multiplyExact(this->months, scalar);
	return $new(ChronoPeriodImpl, var$0, var$1, var$2, $Math::multiplyExact(this->days, scalar));
}

$ChronoPeriod* ChronoPeriodImpl::normalized() {
	int64_t monthRange = this->monthRange();
	if (monthRange > 0) {
		int64_t totalMonths = this->years * monthRange + this->months;
		int64_t splitYears = $div(totalMonths, monthRange);
		int32_t splitMonths = (int32_t)($mod(totalMonths, monthRange));
		if (splitYears == this->years && splitMonths == this->months) {
			return this;
		}
		return $new(ChronoPeriodImpl, this->chrono, $Math::toIntExact(splitYears), splitMonths, this->days);
	}
	return this;
}

int64_t ChronoPeriodImpl::monthRange() {
	$init($ChronoField);
	$var($ValueRange, startRange, $nc(this->chrono)->range($ChronoField::MONTH_OF_YEAR));
	bool var$0 = $nc(startRange)->isFixed();
	if (var$0 && startRange->isIntValue()) {
		int64_t var$1 = startRange->getMaximum();
		return var$1 - startRange->getMinimum() + 1;
	}
	return -1;
}

$Temporal* ChronoPeriodImpl::addTo($Temporal* temporal$renamed) {
	$var($Temporal, temporal, temporal$renamed);
	validateChrono(temporal);
	if (this->months == 0) {
		if (this->years != 0) {
			$init($ChronoUnit);
			$assign(temporal, $nc(temporal)->plus(this->years, $ChronoUnit::YEARS));
		}
	} else {
		int64_t monthRange = this->monthRange();
		if (monthRange > 0) {
			$init($ChronoUnit);
			$assign(temporal, $nc(temporal)->plus(this->years * monthRange + this->months, $ChronoUnit::MONTHS));
		} else {
			if (this->years != 0) {
				$init($ChronoUnit);
				$assign(temporal, $nc(temporal)->plus(this->years, $ChronoUnit::YEARS));
			}
			$init($ChronoUnit);
			$assign(temporal, $nc(temporal)->plus(this->months, $ChronoUnit::MONTHS));
		}
	}
	if (this->days != 0) {
		$init($ChronoUnit);
		$assign(temporal, $nc(temporal)->plus(this->days, $ChronoUnit::DAYS));
	}
	return temporal;
}

$Temporal* ChronoPeriodImpl::subtractFrom($Temporal* temporal$renamed) {
	$var($Temporal, temporal, temporal$renamed);
	validateChrono(temporal);
	if (this->months == 0) {
		if (this->years != 0) {
			$init($ChronoUnit);
			$assign(temporal, $nc(temporal)->minus(this->years, $ChronoUnit::YEARS));
		}
	} else {
		int64_t monthRange = this->monthRange();
		if (monthRange > 0) {
			$init($ChronoUnit);
			$assign(temporal, $nc(temporal)->minus(this->years * monthRange + this->months, $ChronoUnit::MONTHS));
		} else {
			if (this->years != 0) {
				$init($ChronoUnit);
				$assign(temporal, $nc(temporal)->minus(this->years, $ChronoUnit::YEARS));
			}
			$init($ChronoUnit);
			$assign(temporal, $nc(temporal)->minus(this->months, $ChronoUnit::MONTHS));
		}
	}
	if (this->days != 0) {
		$init($ChronoUnit);
		$assign(temporal, $nc(temporal)->minus(this->days, $ChronoUnit::DAYS));
	}
	return temporal;
}

void ChronoPeriodImpl::validateChrono($TemporalAccessor* temporal) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(temporal), "temporal"_s);
	$var($Chronology, temporalChrono, $cast($Chronology, $nc(temporal)->query($($TemporalQueries::chronology()))));
	if (temporalChrono != nullptr && $nc(this->chrono)->equals(temporalChrono) == false) {
		$var($String, var$0, $$str({"Chronology mismatch, expected: "_s, $($nc(this->chrono)->getId()), ", actual: "_s}));
		$throwNew($DateTimeException, $$concat(var$0, $(temporalChrono->getId())));
	}
}

bool ChronoPeriodImpl::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(ChronoPeriodImpl, other, nullptr);
	bool var$4 = $instanceOf(ChronoPeriodImpl, obj);
	if (var$4) {
		$assign(other, $cast(ChronoPeriodImpl, obj));
		var$4 = true;
	}
	bool var$3 = (var$4);
	bool var$2 = var$3 && this->years == $nc(other)->years;
	bool var$1 = var$2 && this->months == other->months;
	bool var$0 = var$1 && this->days == other->days;
	return var$0 && $nc(this->chrono)->equals(other->chrono);
}

int32_t ChronoPeriodImpl::hashCode() {
	int32_t var$1 = this->years + $Integer::rotateLeft(this->months, 8);
	int32_t var$0 = (var$1 + $Integer::rotateLeft(this->days, 16));
	return var$0 ^ $nc(this->chrono)->hashCode();
}

$String* ChronoPeriodImpl::toString() {
	$useLocalCurrentObjectStackCache();
	if (isZero()) {
		return $str({$($nc($(getChronology()))->toString()), " P0D"_s});
	} else {
		$var($StringBuilder, buf, $new($StringBuilder));
		buf->append($($nc($(getChronology()))->toString()))->append(u' ')->append(u'P');
		if (this->years != 0) {
			buf->append(this->years)->append(u'Y');
		}
		if (this->months != 0) {
			buf->append(this->months)->append(u'M');
		}
		if (this->days != 0) {
			buf->append(this->days)->append(u'D');
		}
		return buf->toString();
	}
}

$Object* ChronoPeriodImpl::writeReplace() {
	return $of($new($Ser, $Ser::CHRONO_PERIOD_TYPE, this));
}

void ChronoPeriodImpl::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

void ChronoPeriodImpl::writeExternal($DataOutput* out) {
	$nc(out)->writeUTF($($nc(this->chrono)->getId()));
	out->writeInt(this->years);
	out->writeInt(this->months);
	out->writeInt(this->days);
}

ChronoPeriodImpl* ChronoPeriodImpl::readExternal($DataInput* in) {
	$init(ChronoPeriodImpl);
	$useLocalCurrentObjectStackCache();
	$var($Chronology, chrono, $Chronology::of($($nc(in)->readUTF())));
	int32_t years = $nc(in)->readInt();
	int32_t months = in->readInt();
	int32_t days = in->readInt();
	return $new(ChronoPeriodImpl, chrono, years, months, days);
}

void clinit$ChronoPeriodImpl($Class* class$) {
	$init($ChronoUnit);
	$assignStatic(ChronoPeriodImpl::SUPPORTED_UNITS, $List::of($ChronoUnit::YEARS, $ChronoUnit::MONTHS, $ChronoUnit::DAYS));
}

ChronoPeriodImpl::ChronoPeriodImpl() {
}

$Class* ChronoPeriodImpl::load$($String* name, bool initialize) {
	$loadClass(ChronoPeriodImpl, name, initialize, &_ChronoPeriodImpl_ClassInfo_, clinit$ChronoPeriodImpl, allocate$ChronoPeriodImpl);
	return class$;
}

$Class* ChronoPeriodImpl::class$ = nullptr;

		} // chrono
	} // time
} // java