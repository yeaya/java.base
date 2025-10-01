#include <java/time/Period.h>

#include <java/io/DataInput.h>
#include <java/io/DataOutput.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <java/time/LocalDate.h>
#include <java/time/Ser.h>
#include <java/time/chrono/AbstractChronology.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/ChronoPeriod.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/IsoChronology.h>
#include <java/time/format/DateTimeParseException.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalAmount.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef YEARS
#undef MONTHS
#undef ZERO
#undef PATTERN
#undef PERIOD_TYPE
#undef CASE_INSENSITIVE
#undef DAYS
#undef INSTANCE
#undef MAX_VALUE
#undef SUPPORTED_UNITS
#undef MIN_VALUE

using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateTimeException = ::java::time::DateTimeException;
using $LocalDate = ::java::time::LocalDate;
using $Ser = ::java::time::Ser;
using $AbstractChronology = ::java::time::chrono::AbstractChronology;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $ChronoPeriod = ::java::time::chrono::ChronoPeriod;
using $Chronology = ::java::time::chrono::Chronology;
using $IsoChronology = ::java::time::chrono::IsoChronology;
using $DateTimeParseException = ::java::time::format::DateTimeParseException;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalAmount = ::java::time::temporal::TemporalAmount;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace time {
$CompoundAttribute _Period_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};


$FieldInfo _Period_FieldInfo_[] = {
	{"ZERO", "Ljava/time/Period;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Period, ZERO)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Period, serialVersionUID)},
	{"PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Period, PATTERN)},
	{"SUPPORTED_UNITS", "Ljava/util/List;", "Ljava/util/List<Ljava/time/temporal/TemporalUnit;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Period, SUPPORTED_UNITS)},
	{"years", "I", nullptr, $PRIVATE | $FINAL, $field(Period, years)},
	{"months", "I", nullptr, $PRIVATE | $FINAL, $field(Period, months)},
	{"days", "I", nullptr, $PRIVATE | $FINAL, $field(Period, days)},
	{}
};

$MethodInfo _Period_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(Period::*)(int32_t,int32_t,int32_t)>(&Period::init$))},
	{"addTo", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"between", "(Ljava/time/LocalDate;Ljava/time/LocalDate;)Ljava/time/Period;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Period*(*)($LocalDate*,$LocalDate*)>(&Period::between))},
	{"charMatch", "(Ljava/lang/CharSequence;IIC)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($CharSequence*,int32_t,int32_t,char16_t)>(&Period::charMatch))},
	{"create", "(III)Ljava/time/Period;", nullptr, $PRIVATE | $STATIC, $method(static_cast<Period*(*)(int32_t,int32_t,int32_t)>(&Period::create))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"from", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Period*(*)($TemporalAmount*)>(&Period::from))},
	{"get", "(Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC},
	{"getChronology", "()Ljava/time/chrono/IsoChronology;", nullptr, $PUBLIC},
	{"getDays", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Period::*)()>(&Period::getDays))},
	{"getMonths", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Period::*)()>(&Period::getMonths))},
	{"getUnits", "()Ljava/util/List;", "()Ljava/util/List<Ljava/time/temporal/TemporalUnit;>;", $PUBLIC},
	{"getYears", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Period::*)()>(&Period::getYears))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isNegative", "()Z", nullptr, $PUBLIC},
	{"isZero", "()Z", nullptr, $PUBLIC},
	{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;", nullptr, $PUBLIC},
	{"minusDays", "(J)Ljava/time/Period;", nullptr, $PUBLIC, $method(static_cast<Period*(Period::*)(int64_t)>(&Period::minusDays))},
	{"minusMonths", "(J)Ljava/time/Period;", nullptr, $PUBLIC, $method(static_cast<Period*(Period::*)(int64_t)>(&Period::minusMonths))},
	{"minusYears", "(J)Ljava/time/Period;", nullptr, $PUBLIC, $method(static_cast<Period*(Period::*)(int64_t)>(&Period::minusYears))},
	{"multipliedBy", "(I)Ljava/time/Period;", nullptr, $PUBLIC},
	{"negated", "()Ljava/time/Period;", nullptr, $PUBLIC},
	{"normalized", "()Ljava/time/Period;", nullptr, $PUBLIC},
	{"of", "(III)Ljava/time/Period;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Period*(*)(int32_t,int32_t,int32_t)>(&Period::of))},
	{"ofDays", "(I)Ljava/time/Period;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Period*(*)(int32_t)>(&Period::ofDays))},
	{"ofMonths", "(I)Ljava/time/Period;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Period*(*)(int32_t)>(&Period::ofMonths))},
	{"ofWeeks", "(I)Ljava/time/Period;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Period*(*)(int32_t)>(&Period::ofWeeks))},
	{"ofYears", "(I)Ljava/time/Period;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Period*(*)(int32_t)>(&Period::ofYears))},
	{"parse", "(Ljava/lang/CharSequence;)Ljava/time/Period;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Period*(*)($CharSequence*)>(&Period::parse))},
	{"parseNumber", "(Ljava/lang/CharSequence;III)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($CharSequence*,int32_t,int32_t,int32_t)>(&Period::parseNumber))},
	{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/Period;", nullptr, $PUBLIC},
	{"plusDays", "(J)Ljava/time/Period;", nullptr, $PUBLIC, $method(static_cast<Period*(Period::*)(int64_t)>(&Period::plusDays))},
	{"plusMonths", "(J)Ljava/time/Period;", nullptr, $PUBLIC, $method(static_cast<Period*(Period::*)(int64_t)>(&Period::plusMonths))},
	{"plusYears", "(J)Ljava/time/Period;", nullptr, $PUBLIC, $method(static_cast<Period*(Period::*)(int64_t)>(&Period::plusYears))},
	{"readExternal", "(Ljava/io/DataInput;)Ljava/time/Period;", nullptr, $STATIC, $method(static_cast<Period*(*)($DataInput*)>(&Period::readExternal)), "java.io.IOException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Period::*)($ObjectInputStream*)>(&Period::readObject)), "java.io.InvalidObjectException"},
	{"subtractFrom", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toTotalMonths", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(Period::*)()>(&Period::toTotalMonths))},
	{"validateChrono", "(Ljava/time/temporal/TemporalAccessor;)V", nullptr, $PRIVATE, $method(static_cast<void(Period::*)($TemporalAccessor*)>(&Period::validateChrono))},
	{"withDays", "(I)Ljava/time/Period;", nullptr, $PUBLIC, $method(static_cast<Period*(Period::*)(int32_t)>(&Period::withDays))},
	{"withMonths", "(I)Ljava/time/Period;", nullptr, $PUBLIC, $method(static_cast<Period*(Period::*)(int32_t)>(&Period::withMonths))},
	{"withYears", "(I)Ljava/time/Period;", nullptr, $PUBLIC, $method(static_cast<Period*(Period::*)(int32_t)>(&Period::withYears))},
	{"writeExternal", "(Ljava/io/DataOutput;)V", nullptr, 0, $method(static_cast<void(Period::*)($DataOutput*)>(&Period::writeExternal)), "java.io.IOException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Period::*)()>(&Period::writeReplace))},
	{}
};

$ClassInfo _Period_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.Period",
	"java.lang.Object",
	"java.time.chrono.ChronoPeriod,java.io.Serializable",
	_Period_FieldInfo_,
	_Period_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Period_Annotations_
};

$Object* allocate$Period($Class* clazz) {
	return $of($alloc(Period));
}

$Object* Period::clone() {
	 return this->$ChronoPeriod::clone();
}

void Period::finalize() {
	this->$ChronoPeriod::finalize();
}


Period* Period::ZERO = nullptr;

$Pattern* Period::PATTERN = nullptr;

$List* Period::SUPPORTED_UNITS = nullptr;

Period* Period::ofYears(int32_t years) {
	$init(Period);
	return create(years, 0, 0);
}

Period* Period::ofMonths(int32_t months) {
	$init(Period);
	return create(0, months, 0);
}

Period* Period::ofWeeks(int32_t weeks) {
	$init(Period);
	return create(0, 0, $Math::multiplyExact(weeks, 7));
}

Period* Period::ofDays(int32_t days) {
	$init(Period);
	return create(0, 0, days);
}

Period* Period::of(int32_t years, int32_t months, int32_t days) {
	$init(Period);
	return create(years, months, days);
}

Period* Period::from($TemporalAmount* amount) {
	$init(Period);
	if ($instanceOf(Period, amount)) {
		return $cast(Period, amount);
	}
	if ($instanceOf($ChronoPeriod, amount)) {
		$init($IsoChronology);
		if ($nc($IsoChronology::INSTANCE)->equals($($nc(($cast($ChronoPeriod, amount)))->getChronology())) == false) {
			$throwNew($DateTimeException, $$str({"Period requires ISO chronology: "_s, amount}));
		}
	}
	$Objects::requireNonNull($of(amount), "amount"_s);
	int32_t years = 0;
	int32_t months = 0;
	int32_t days = 0;
	{
		$var($Iterator, i$, $nc($($nc(amount)->getUnits()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($TemporalUnit, unit, $cast($TemporalUnit, i$->next()));
			{
				int64_t unitAmount = amount->get(unit);
				$init($ChronoUnit);
				if ($equals(unit, $ChronoUnit::YEARS)) {
					years = $Math::toIntExact(unitAmount);
				} else {
					if ($equals(unit, $ChronoUnit::MONTHS)) {
						months = $Math::toIntExact(unitAmount);
					} else {
						if ($equals(unit, $ChronoUnit::DAYS)) {
							days = $Math::toIntExact(unitAmount);
						} else {
							$throwNew($DateTimeException, $$str({"Unit must be Years, Months or Days, but was "_s, unit}));
						}
					}
				}
			}
		}
	}
	return create(years, months, days);
}

Period* Period::parse($CharSequence* text) {
	$init(Period);
	$Objects::requireNonNull($of(text), "text"_s);
	$var($Matcher, matcher, $nc(Period::PATTERN)->matcher(text));
	if ($nc(matcher)->matches()) {
		$var($CharSequence, var$0, text);
		int32_t var$1 = matcher->start(1);
		int32_t negate = (charMatch(var$0, var$1, matcher->end(1), u'-') ? -1 : 1);
		int32_t yearStart = matcher->start(2);
		int32_t yearEnd = matcher->end(2);
		int32_t monthStart = matcher->start(3);
		int32_t monthEnd = matcher->end(3);
		int32_t weekStart = matcher->start(4);
		int32_t weekEnd = matcher->end(4);
		int32_t dayStart = matcher->start(5);
		int32_t dayEnd = matcher->end(5);
		if (yearStart >= 0 || monthStart >= 0 || weekStart >= 0 || dayStart >= 0) {
			try {
				int32_t years = parseNumber(text, yearStart, yearEnd, negate);
				int32_t months = parseNumber(text, monthStart, monthEnd, negate);
				int32_t weeks = parseNumber(text, weekStart, weekEnd, negate);
				int32_t days = parseNumber(text, dayStart, dayEnd, negate);
				days = $Math::addExact(days, $Math::multiplyExact(weeks, 7));
				return create(years, months, days);
			} catch ($NumberFormatException&) {
				$var($NumberFormatException, ex, $catch());
				$throwNew($DateTimeParseException, "Text cannot be parsed to a Period"_s, text, 0, ex);
			}
		}
	}
	$throwNew($DateTimeParseException, "Text cannot be parsed to a Period"_s, text, 0);
	$shouldNotReachHere();
}

bool Period::charMatch($CharSequence* text, int32_t start, int32_t end, char16_t c) {
	$init(Period);
	return (start >= 0 && end == start + 1 && $nc(text)->charAt(start) == c);
}

int32_t Period::parseNumber($CharSequence* text, int32_t start, int32_t end, int32_t negate) {
	$init(Period);
	if (start < 0 || end < 0) {
		return 0;
	}
	int32_t val = $Integer::parseInt(text, start, end, 10);
	try {
		return $Math::multiplyExact(val, negate);
	} catch ($ArithmeticException&) {
		$var($ArithmeticException, ex, $catch());
		$throwNew($DateTimeParseException, "Text cannot be parsed to a Period"_s, text, 0, ex);
	}
	$shouldNotReachHere();
}

Period* Period::between($LocalDate* startDateInclusive, $LocalDate* endDateExclusive) {
	$init(Period);
	return $cast(Period, $nc(startDateInclusive)->until(endDateExclusive));
}

Period* Period::create(int32_t years, int32_t months, int32_t days) {
	$init(Period);
	if (((years | months) | days) == 0) {
		return Period::ZERO;
	}
	return $new(Period, years, months, days);
}

void Period::init$(int32_t years, int32_t months, int32_t days) {
	this->years = years;
	this->months = months;
	this->days = days;
}

int64_t Period::get($TemporalUnit* unit) {
	$init($ChronoUnit);
	if ($equals(unit, $ChronoUnit::YEARS)) {
		return getYears();
	} else {
		if ($equals(unit, $ChronoUnit::MONTHS)) {
			return getMonths();
		} else {
			if ($equals(unit, $ChronoUnit::DAYS)) {
				return getDays();
			} else {
				$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported unit: "_s, unit}));
			}
		}
	}
}

$List* Period::getUnits() {
	return Period::SUPPORTED_UNITS;
}

$Chronology* Period::getChronology() {
	$init($IsoChronology);
	return $IsoChronology::INSTANCE;
}

bool Period::isZero() {
	return (this == Period::ZERO);
}

bool Period::isNegative() {
	return this->years < 0 || this->months < 0 || this->days < 0;
}

int32_t Period::getYears() {
	return this->years;
}

int32_t Period::getMonths() {
	return this->months;
}

int32_t Period::getDays() {
	return this->days;
}

Period* Period::withYears(int32_t years) {
	if (years == this->years) {
		return this;
	}
	return create(years, this->months, this->days);
}

Period* Period::withMonths(int32_t months) {
	if (months == this->months) {
		return this;
	}
	return create(this->years, months, this->days);
}

Period* Period::withDays(int32_t days) {
	if (days == this->days) {
		return this;
	}
	return create(this->years, this->months, days);
}

Period* Period::plus($TemporalAmount* amountToAdd) {
	$var(Period, isoAmount, Period::from(amountToAdd));
	int32_t var$0 = $Math::addExact(this->years, $nc(isoAmount)->years);
	int32_t var$1 = $Math::addExact(this->months, $nc(isoAmount)->months);
	return create(var$0, var$1, $Math::addExact(this->days, $nc(isoAmount)->days));
}

Period* Period::plusYears(int64_t yearsToAdd) {
	if (yearsToAdd == 0) {
		return this;
	}
	return create($Math::toIntExact($Math::addExact((int64_t)this->years, yearsToAdd)), this->months, this->days);
}

Period* Period::plusMonths(int64_t monthsToAdd) {
	if (monthsToAdd == 0) {
		return this;
	}
	return create(this->years, $Math::toIntExact($Math::addExact((int64_t)this->months, monthsToAdd)), this->days);
}

Period* Period::plusDays(int64_t daysToAdd) {
	if (daysToAdd == 0) {
		return this;
	}
	return create(this->years, this->months, $Math::toIntExact($Math::addExact((int64_t)this->days, daysToAdd)));
}

Period* Period::minus($TemporalAmount* amountToSubtract) {
	$var(Period, isoAmount, Period::from(amountToSubtract));
	int32_t var$0 = $Math::subtractExact(this->years, $nc(isoAmount)->years);
	int32_t var$1 = $Math::subtractExact(this->months, $nc(isoAmount)->months);
	return create(var$0, var$1, $Math::subtractExact(this->days, $nc(isoAmount)->days));
}

Period* Period::minusYears(int64_t yearsToSubtract) {
	return (yearsToSubtract == $Long::MIN_VALUE ? $nc($(plusYears($Long::MAX_VALUE)))->plusYears(1) : plusYears(-yearsToSubtract));
}

Period* Period::minusMonths(int64_t monthsToSubtract) {
	return (monthsToSubtract == $Long::MIN_VALUE ? $nc($(plusMonths($Long::MAX_VALUE)))->plusMonths(1) : plusMonths(-monthsToSubtract));
}

Period* Period::minusDays(int64_t daysToSubtract) {
	return (daysToSubtract == $Long::MIN_VALUE ? $nc($(plusDays($Long::MAX_VALUE)))->plusDays(1) : plusDays(-daysToSubtract));
}

Period* Period::multipliedBy(int32_t scalar) {
	if (this == Period::ZERO || scalar == 1) {
		return this;
	}
	int32_t var$0 = $Math::multiplyExact(this->years, scalar);
	int32_t var$1 = $Math::multiplyExact(this->months, scalar);
	return create(var$0, var$1, $Math::multiplyExact(this->days, scalar));
}

Period* Period::negated() {
	return multipliedBy(-1);
}

Period* Period::normalized() {
	int64_t totalMonths = toTotalMonths();
	int64_t splitYears = totalMonths / 12;
	int32_t splitMonths = (int32_t)(totalMonths % 12);
	if (splitYears == this->years && splitMonths == this->months) {
		return this;
	}
	return create($Math::toIntExact(splitYears), splitMonths, this->days);
}

int64_t Period::toTotalMonths() {
	return this->years * (int64_t)12 + this->months;
}

$Temporal* Period::addTo($Temporal* temporal$renamed) {
	$var($Temporal, temporal, temporal$renamed);
	validateChrono(temporal);
	if (this->months == 0) {
		if (this->years != 0) {
			$init($ChronoUnit);
			$assign(temporal, $nc(temporal)->plus(this->years, $ChronoUnit::YEARS));
		}
	} else {
		int64_t totalMonths = toTotalMonths();
		if (totalMonths != 0) {
			$init($ChronoUnit);
			$assign(temporal, $nc(temporal)->plus(totalMonths, $ChronoUnit::MONTHS));
		}
	}
	if (this->days != 0) {
		$init($ChronoUnit);
		$assign(temporal, $nc(temporal)->plus(this->days, $ChronoUnit::DAYS));
	}
	return temporal;
}

$Temporal* Period::subtractFrom($Temporal* temporal$renamed) {
	$var($Temporal, temporal, temporal$renamed);
	validateChrono(temporal);
	if (this->months == 0) {
		if (this->years != 0) {
			$init($ChronoUnit);
			$assign(temporal, $nc(temporal)->minus(this->years, $ChronoUnit::YEARS));
		}
	} else {
		int64_t totalMonths = toTotalMonths();
		if (totalMonths != 0) {
			$init($ChronoUnit);
			$assign(temporal, $nc(temporal)->minus(totalMonths, $ChronoUnit::MONTHS));
		}
	}
	if (this->days != 0) {
		$init($ChronoUnit);
		$assign(temporal, $nc(temporal)->minus(this->days, $ChronoUnit::DAYS));
	}
	return temporal;
}

void Period::validateChrono($TemporalAccessor* temporal) {
	$Objects::requireNonNull($of(temporal), "temporal"_s);
	$var($Chronology, temporalChrono, $cast($Chronology, $nc(temporal)->query($($TemporalQueries::chronology()))));
	$init($IsoChronology);
	if (temporalChrono != nullptr && $nc($IsoChronology::INSTANCE)->equals(temporalChrono) == false) {
		$throwNew($DateTimeException, $$str({"Chronology mismatch, expected: ISO, actual: "_s, $(temporalChrono->getId())}));
	}
}

bool Period::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(Period, other, nullptr);
	bool var$3 = $instanceOf(Period, obj);
	if (var$3) {
		$assign(other, $cast(Period, obj));
		var$3 = true;
	}
	bool var$2 = (var$3);
	bool var$1 = var$2 && this->years == $nc(other)->years;
	bool var$0 = var$1 && this->months == other->months;
	return var$0 && this->days == other->days;
}

int32_t Period::hashCode() {
	int32_t var$0 = this->years + $Integer::rotateLeft(this->months, 8);
	return var$0 + $Integer::rotateLeft(this->days, 16);
}

$String* Period::toString() {
	if (this == Period::ZERO) {
		return "P0D"_s;
	} else {
		$var($StringBuilder, buf, $new($StringBuilder));
		buf->append(u'P');
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

$Object* Period::writeReplace() {
	return $of($new($Ser, $Ser::PERIOD_TYPE, this));
}

void Period::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

void Period::writeExternal($DataOutput* out) {
	$nc(out)->writeInt(this->years);
	out->writeInt(this->months);
	out->writeInt(this->days);
}

Period* Period::readExternal($DataInput* in) {
	$init(Period);
	int32_t years = $nc(in)->readInt();
	int32_t months = in->readInt();
	int32_t days = in->readInt();
	return Period::of(years, months, days);
}

void clinit$Period($Class* class$) {
	$assignStatic(Period::ZERO, $new(Period, 0, 0, 0));
	$assignStatic(Period::PATTERN, $Pattern::compile("([-+]?)P(?:([-+]?[0-9]+)Y)?(?:([-+]?[0-9]+)M)?(?:([-+]?[0-9]+)W)?(?:([-+]?[0-9]+)D)?"_s, $Pattern::CASE_INSENSITIVE));
	$init($ChronoUnit);
	$assignStatic(Period::SUPPORTED_UNITS, $List::of($ChronoUnit::YEARS, $ChronoUnit::MONTHS, $ChronoUnit::DAYS));
}

Period::Period() {
}

$Class* Period::load$($String* name, bool initialize) {
	$loadClass(Period, name, initialize, &_Period_ClassInfo_, clinit$Period, allocate$Period);
	return class$;
}

$Class* Period::class$ = nullptr;

	} // time
} // java