#include <java/time/chrono/HijrahDate.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutput.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/Clock.h>
#include <java/time/LocalDate.h>
#include <java/time/LocalTime.h>
#include <java/time/ZoneId.h>
#include <java/time/chrono/AbstractChronology.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/ChronoLocalDateImpl.h>
#include <java/time/chrono/ChronoLocalDateTime.h>
#include <java/time/chrono/ChronoPeriod.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/Era.h>
#include <java/time/chrono/HijrahChronology.h>
#include <java/time/chrono/HijrahDate$1.h>
#include <java/time/chrono/HijrahEra.h>
#include <java/time/chrono/Ser.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalAdjuster.h>
#include <java/time/temporal/TemporalAmount.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/time/temporal/ValueRange.h>
#include <jcpp.h>

#undef ALIGNED_DAY_OF_WEEK_IN_MONTH
#undef ALIGNED_WEEK_OF_MONTH
#undef MONTH_OF_YEAR
#undef YEAR
#undef DAY_OF_MONTH
#undef AH
#undef INSTANCE
#undef ALIGNED_DAY_OF_WEEK_IN_YEAR
#undef ALIGNED_WEEK_OF_YEAR
#undef HIJRAH_DATE_TYPE

using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutput = ::java::io::ObjectOutput;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Clock = ::java::time::Clock;
using $LocalDate = ::java::time::LocalDate;
using $LocalTime = ::java::time::LocalTime;
using $ZoneId = ::java::time::ZoneId;
using $AbstractChronology = ::java::time::chrono::AbstractChronology;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $ChronoLocalDateImpl = ::java::time::chrono::ChronoLocalDateImpl;
using $ChronoLocalDateTime = ::java::time::chrono::ChronoLocalDateTime;
using $ChronoPeriod = ::java::time::chrono::ChronoPeriod;
using $Chronology = ::java::time::chrono::Chronology;
using $Era = ::java::time::chrono::Era;
using $HijrahChronology = ::java::time::chrono::HijrahChronology;
using $HijrahDate$1 = ::java::time::chrono::HijrahDate$1;
using $HijrahEra = ::java::time::chrono::HijrahEra;
using $Ser = ::java::time::chrono::Ser;
using $ChronoField = ::java::time::temporal::ChronoField;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalAdjuster = ::java::time::temporal::TemporalAdjuster;
using $TemporalAmount = ::java::time::temporal::TemporalAmount;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;
using $ValueRange = ::java::time::temporal::ValueRange;

namespace java {
	namespace time {
		namespace chrono {
$CompoundAttribute _HijrahDate_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};


$FieldInfo _HijrahDate_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HijrahDate, serialVersionUID)},
	{"chrono", "Ljava/time/chrono/HijrahChronology;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(HijrahDate, chrono)},
	{"prolepticYear", "I", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(HijrahDate, prolepticYear)},
	{"monthOfYear", "I", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(HijrahDate, monthOfYear)},
	{"dayOfMonth", "I", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(HijrahDate, dayOfMonth)},
	{}
};

$MethodInfo _HijrahDate_MethodInfo_[] = {
	{"<init>", "(Ljava/time/chrono/HijrahChronology;III)V", nullptr, $PRIVATE, $method(static_cast<void(HijrahDate::*)($HijrahChronology*,int32_t,int32_t,int32_t)>(&HijrahDate::init$))},
	{"<init>", "(Ljava/time/chrono/HijrahChronology;J)V", nullptr, $PRIVATE, $method(static_cast<void(HijrahDate::*)($HijrahChronology*,int64_t)>(&HijrahDate::init$))},
	{"atTime", "(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;", "(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime<Ljava/time/chrono/HijrahDate;>;", $PUBLIC | $FINAL},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<HijrahDate*(*)($TemporalAccessor*)>(&HijrahDate::from))},
	{"getChronology", "()Ljava/time/chrono/HijrahChronology;", nullptr, $PUBLIC},
	{"getDayOfWeek", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(HijrahDate::*)()>(&HijrahDate::getDayOfWeek))},
	{"getDayOfYear", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(HijrahDate::*)()>(&HijrahDate::getDayOfYear))},
	{"getEra", "()Ljava/time/chrono/HijrahEra;", nullptr, $PUBLIC},
	{"getEraValue", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(HijrahDate::*)()>(&HijrahDate::getEraValue))},
	{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC},
	{"getProlepticMonth", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(HijrahDate::*)()>(&HijrahDate::getProlepticMonth))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isLeapYear", "()Z", nullptr, $PUBLIC},
	{"lengthOfMonth", "()I", nullptr, $PUBLIC},
	{"lengthOfYear", "()I", nullptr, $PUBLIC},
	{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC},
	{"minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC},
	{"minusDays", "(J)Ljava/time/chrono/HijrahDate;", nullptr, 0},
	{"minusMonths", "(J)Ljava/time/chrono/HijrahDate;", nullptr, 0},
	{"minusWeeks", "(J)Ljava/time/chrono/HijrahDate;", nullptr, 0},
	{"minusYears", "(J)Ljava/time/chrono/HijrahDate;", nullptr, 0},
	{"now", "()Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<HijrahDate*(*)()>(&HijrahDate::now))},
	{"now", "(Ljava/time/ZoneId;)Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<HijrahDate*(*)($ZoneId*)>(&HijrahDate::now))},
	{"now", "(Ljava/time/Clock;)Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<HijrahDate*(*)($Clock*)>(&HijrahDate::now))},
	{"of", "(Ljava/time/chrono/HijrahChronology;III)Ljava/time/chrono/HijrahDate;", nullptr, $STATIC, $method(static_cast<HijrahDate*(*)($HijrahChronology*,int32_t,int32_t,int32_t)>(&HijrahDate::of))},
	{"of", "(III)Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<HijrahDate*(*)(int32_t,int32_t,int32_t)>(&HijrahDate::of))},
	{"ofEpochDay", "(Ljava/time/chrono/HijrahChronology;J)Ljava/time/chrono/HijrahDate;", nullptr, $STATIC, $method(static_cast<HijrahDate*(*)($HijrahChronology*,int64_t)>(&HijrahDate::ofEpochDay))},
	{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC},
	{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC},
	{"plusDays", "(J)Ljava/time/chrono/HijrahDate;", nullptr, 0},
	{"plusMonths", "(J)Ljava/time/chrono/HijrahDate;", nullptr, 0},
	{"plusWeeks", "(J)Ljava/time/chrono/HijrahDate;", nullptr, 0},
	{"plusYears", "(J)Ljava/time/chrono/HijrahDate;", nullptr, 0},
	{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"readExternal", "(Ljava/io/ObjectInput;)Ljava/time/chrono/HijrahDate;", nullptr, $STATIC, $method(static_cast<HijrahDate*(*)($ObjectInput*)>(&HijrahDate::readExternal)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(HijrahDate::*)($ObjectInputStream*)>(&HijrahDate::readObject)), "java.io.InvalidObjectException"},
	{"resolvePreviousValid", "(III)Ljava/time/chrono/HijrahDate;", nullptr, $PRIVATE, $method(static_cast<HijrahDate*(HijrahDate::*)(int32_t,int32_t,int32_t)>(&HijrahDate::resolvePreviousValid))},
	{"toEpochDay", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"until", "(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC},
	{"until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC},
	{"with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC},
	{"withVariant", "(Ljava/time/chrono/HijrahChronology;)Ljava/time/chrono/HijrahDate;", nullptr, $PUBLIC, $method(static_cast<HijrahDate*(HijrahDate::*)($HijrahChronology*)>(&HijrahDate::withVariant))},
	{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, 0, $method(static_cast<void(HijrahDate::*)($ObjectOutput*)>(&HijrahDate::writeExternal)), "java.io.IOException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(HijrahDate::*)()>(&HijrahDate::writeReplace))},
	{}
};

$InnerClassInfo _HijrahDate_InnerClassesInfo_[] = {
	{"java.time.chrono.HijrahDate$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _HijrahDate_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.chrono.HijrahDate",
	"java.time.chrono.ChronoLocalDateImpl",
	nullptr,
	_HijrahDate_FieldInfo_,
	_HijrahDate_MethodInfo_,
	"Ljava/time/chrono/ChronoLocalDateImpl<Ljava/time/chrono/HijrahDate;>;Ljava/time/chrono/ChronoLocalDate;Ljava/io/Serializable;",
	nullptr,
	_HijrahDate_InnerClassesInfo_,
	_HijrahDate_Annotations_,
	nullptr,
	"java.time.chrono.HijrahDate$1"
};

$Object* allocate$HijrahDate($Class* clazz) {
	return $of($alloc(HijrahDate));
}

HijrahDate* HijrahDate::of($HijrahChronology* chrono, int32_t prolepticYear, int32_t monthOfYear, int32_t dayOfMonth) {
	$init(HijrahDate);
	return $new(HijrahDate, chrono, prolepticYear, monthOfYear, dayOfMonth);
}

HijrahDate* HijrahDate::ofEpochDay($HijrahChronology* chrono, int64_t epochDay) {
	$init(HijrahDate);
	return $new(HijrahDate, chrono, epochDay);
}

HijrahDate* HijrahDate::now() {
	$init(HijrahDate);
	return now($($Clock::systemDefaultZone()));
}

HijrahDate* HijrahDate::now($ZoneId* zone) {
	$init(HijrahDate);
	return now($($Clock::system(zone)));
}

HijrahDate* HijrahDate::now($Clock* clock) {
	$init(HijrahDate);
	$init($HijrahChronology);
	return HijrahDate::ofEpochDay($HijrahChronology::INSTANCE, $nc($($LocalDate::now(clock)))->toEpochDay());
}

HijrahDate* HijrahDate::of(int32_t prolepticYear, int32_t month, int32_t dayOfMonth) {
	$init(HijrahDate);
	$init($HijrahChronology);
	return $cast(HijrahDate, $nc($HijrahChronology::INSTANCE)->date(prolepticYear, month, dayOfMonth));
}

HijrahDate* HijrahDate::from($TemporalAccessor* temporal) {
	$init(HijrahDate);
	$init($HijrahChronology);
	return $cast(HijrahDate, $nc($HijrahChronology::INSTANCE)->date(temporal));
}

void HijrahDate::init$($HijrahChronology* chrono, int32_t prolepticYear, int32_t monthOfYear, int32_t dayOfMonth) {
	$ChronoLocalDateImpl::init$();
	$nc(chrono)->getEpochDay(prolepticYear, monthOfYear, dayOfMonth);
	$set(this, chrono, chrono);
	this->prolepticYear = prolepticYear;
	this->monthOfYear = monthOfYear;
	this->dayOfMonth = dayOfMonth;
}

void HijrahDate::init$($HijrahChronology* chrono, int64_t epochDay) {
	$ChronoLocalDateImpl::init$();
	$var($ints, dateInfo, $nc(chrono)->getHijrahDateInfo((int32_t)epochDay));
	$set(this, chrono, chrono);
	this->prolepticYear = $nc(dateInfo)->get(0);
	this->monthOfYear = dateInfo->get(1);
	this->dayOfMonth = dateInfo->get(2);
}

$Chronology* HijrahDate::getChronology() {
	return this->chrono;
}

$Era* HijrahDate::getEra() {
	$init($HijrahEra);
	return $HijrahEra::AH;
}

int32_t HijrahDate::lengthOfMonth() {
	return $nc(this->chrono)->getMonthLength(this->prolepticYear, this->monthOfYear);
}

int32_t HijrahDate::lengthOfYear() {
	return $nc(this->chrono)->getYearLength(this->prolepticYear);
}

$ValueRange* HijrahDate::range($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		if (isSupported(field)) {
			$ChronoField* f = $cast($ChronoField, field);
			$init($HijrahDate$1);
			switch ($nc($HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->get($nc((f))->ordinal())) {
			case 1:
				{
					return $ValueRange::of(1, lengthOfMonth());
				}
			case 2:
				{
					return $ValueRange::of(1, lengthOfYear());
				}
			case 3:
				{
					return $ValueRange::of(1, 5);
				}
			}
			return $nc($($cast($HijrahChronology, getChronology())))->range(f);
		}
		$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
	}
	return $nc(field)->rangeRefinedBy(this);
}

int64_t HijrahDate::getLong($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		$init($HijrahDate$1);
		switch ($nc($HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->get($nc(($cast($ChronoField, field)))->ordinal())) {
		case 4:
			{
				return getDayOfWeek();
			}
		case 5:
			{
				return ((this->dayOfMonth - 1) % 7) + 1;
			}
		case 6:
			{
				return ((getDayOfYear() - 1) % 7) + 1;
			}
		case 1:
			{
				return this->dayOfMonth;
			}
		case 2:
			{
				return this->getDayOfYear();
			}
		case 7:
			{
				return toEpochDay();
			}
		case 3:
			{
				return ((this->dayOfMonth - 1) / 7) + 1;
			}
		case 8:
			{
				return ((getDayOfYear() - 1) / 7) + 1;
			}
		case 9:
			{
				return this->monthOfYear;
			}
		case 10:
			{
				return getProlepticMonth();
			}
		case 11:
			{
				return this->prolepticYear;
			}
		case 12:
			{
				return this->prolepticYear;
			}
		case 13:
			{
				return getEraValue();
			}
		}
		$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
	}
	return $nc(field)->getFrom(this);
}

int64_t HijrahDate::getProlepticMonth() {
	return this->prolepticYear * (int64_t)12 + this->monthOfYear - 1;
}

HijrahDate* HijrahDate::with($TemporalField* field, int64_t newValue) {
	{
		$ChronoField* chronoField = nullptr;
		bool var$0 = $instanceOf($ChronoField, field);
		if (var$0) {
			chronoField = $cast($ChronoField, field);
			var$0 = true;
		}
		if (var$0) {
			$nc($($nc(this->chrono)->range(chronoField)))->checkValidValue(newValue, chronoField);
			int32_t nvalue = (int32_t)newValue;
			$init($HijrahDate$1);
			switch ($nc($HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->get($nc((chronoField))->ordinal())) {
			case 4:
				{
					return plusDays(newValue - getDayOfWeek());
				}
			case 5:
				{
					$init($ChronoField);
					return plusDays(newValue - getLong($ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH));
				}
			case 6:
				{
					$init($ChronoField);
					return plusDays(newValue - getLong($ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR));
				}
			case 1:
				{
					return resolvePreviousValid(this->prolepticYear, this->monthOfYear, nvalue);
				}
			case 2:
				{
					int32_t var$1 = $Math::min(nvalue, lengthOfYear());
					return plusDays(var$1 - getDayOfYear());
				}
			case 7:
				{
					return $new(HijrahDate, this->chrono, newValue);
				}
			case 3:
				{
					$init($ChronoField);
					return plusDays((newValue - getLong($ChronoField::ALIGNED_WEEK_OF_MONTH)) * 7);
				}
			case 8:
				{
					$init($ChronoField);
					return plusDays((newValue - getLong($ChronoField::ALIGNED_WEEK_OF_YEAR)) * 7);
				}
			case 9:
				{
					return resolvePreviousValid(this->prolepticYear, nvalue, this->dayOfMonth);
				}
			case 10:
				{
					return plusMonths(newValue - getProlepticMonth());
				}
			case 11:
				{
					return resolvePreviousValid(this->prolepticYear >= 1 ? nvalue : 1 - nvalue, this->monthOfYear, this->dayOfMonth);
				}
			case 12:
				{
					return resolvePreviousValid(nvalue, this->monthOfYear, this->dayOfMonth);
				}
			case 13:
				{
					return resolvePreviousValid(1 - this->prolepticYear, this->monthOfYear, this->dayOfMonth);
				}
			}
			$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
		}
	}
	return $cast(HijrahDate, $ChronoLocalDateImpl::with(field, newValue));
}

HijrahDate* HijrahDate::resolvePreviousValid(int32_t prolepticYear, int32_t month, int32_t day) {
	int32_t monthDays = $nc(this->chrono)->getMonthLength(prolepticYear, month);
	if (day > monthDays) {
		day = monthDays;
	}
	return HijrahDate::of(this->chrono, prolepticYear, month, day);
}

HijrahDate* HijrahDate::with($TemporalAdjuster* adjuster) {
	return $cast(HijrahDate, $ChronoLocalDateImpl::with(adjuster));
}

HijrahDate* HijrahDate::withVariant($HijrahChronology* chronology) {
	if (this->chrono == chronology) {
		return this;
	}
	int32_t monthDays = $nc(chronology)->getDayOfYear(this->prolepticYear, this->monthOfYear);
	return HijrahDate::of(chronology, this->prolepticYear, this->monthOfYear, (this->dayOfMonth > monthDays) ? monthDays : this->dayOfMonth);
}

HijrahDate* HijrahDate::plus($TemporalAmount* amount) {
	return $cast(HijrahDate, $ChronoLocalDateImpl::plus(amount));
}

HijrahDate* HijrahDate::minus($TemporalAmount* amount) {
	return $cast(HijrahDate, $ChronoLocalDateImpl::minus(amount));
}

int64_t HijrahDate::toEpochDay() {
	return $nc(this->chrono)->getEpochDay(this->prolepticYear, this->monthOfYear, this->dayOfMonth);
}

int32_t HijrahDate::getDayOfYear() {
	return $nc(this->chrono)->getDayOfYear(this->prolepticYear, this->monthOfYear) + this->dayOfMonth;
}

int32_t HijrahDate::getDayOfWeek() {
	int32_t dow0 = $Math::floorMod(toEpochDay() + 3, 7);
	return dow0 + 1;
}

int32_t HijrahDate::getEraValue() {
	return (this->prolepticYear > 1 ? 1 : 0);
}

bool HijrahDate::isLeapYear() {
	return $nc(this->chrono)->isLeapYear(this->prolepticYear);
}

HijrahDate* HijrahDate::plusYears(int64_t years) {
	if (years == 0) {
		return this;
	}
	int32_t newYear = $Math::addExact(this->prolepticYear, (int32_t)years);
	return resolvePreviousValid(newYear, this->monthOfYear, this->dayOfMonth);
}

HijrahDate* HijrahDate::plusMonths(int64_t monthsToAdd) {
	if (monthsToAdd == 0) {
		return this;
	}
	int64_t monthCount = this->prolepticYear * (int64_t)12 + (this->monthOfYear - 1);
	int64_t calcMonths = monthCount + monthsToAdd;
	int32_t newYear = $nc(this->chrono)->checkValidYear($Math::floorDiv(calcMonths, (int64_t)12));
	int32_t newMonth = (int32_t)$Math::floorMod(calcMonths, (int64_t)12) + 1;
	return resolvePreviousValid(newYear, newMonth, this->dayOfMonth);
}

HijrahDate* HijrahDate::plusWeeks(int64_t weeksToAdd) {
	return $cast(HijrahDate, $ChronoLocalDateImpl::plusWeeks(weeksToAdd));
}

HijrahDate* HijrahDate::plusDays(int64_t days) {
	return $new(HijrahDate, this->chrono, toEpochDay() + days);
}

HijrahDate* HijrahDate::plus(int64_t amountToAdd, $TemporalUnit* unit) {
	return $cast(HijrahDate, $ChronoLocalDateImpl::plus(amountToAdd, unit));
}

HijrahDate* HijrahDate::minus(int64_t amountToSubtract, $TemporalUnit* unit) {
	return $cast(HijrahDate, $ChronoLocalDateImpl::minus(amountToSubtract, unit));
}

HijrahDate* HijrahDate::minusYears(int64_t yearsToSubtract) {
	return $cast(HijrahDate, $ChronoLocalDateImpl::minusYears(yearsToSubtract));
}

HijrahDate* HijrahDate::minusMonths(int64_t monthsToSubtract) {
	return $cast(HijrahDate, $ChronoLocalDateImpl::minusMonths(monthsToSubtract));
}

HijrahDate* HijrahDate::minusWeeks(int64_t weeksToSubtract) {
	return $cast(HijrahDate, $ChronoLocalDateImpl::minusWeeks(weeksToSubtract));
}

HijrahDate* HijrahDate::minusDays(int64_t daysToSubtract) {
	return $cast(HijrahDate, $ChronoLocalDateImpl::minusDays(daysToSubtract));
}

$ChronoLocalDateTime* HijrahDate::atTime($LocalTime* localTime) {
	return $ChronoLocalDateImpl::atTime(localTime);
}

$ChronoPeriod* HijrahDate::until($ChronoLocalDate* endDate) {
	$var(HijrahDate, end, $cast(HijrahDate, $nc($($cast($HijrahChronology, getChronology())))->date(endDate)));
	int64_t totalMonths = ($nc(end)->prolepticYear - this->prolepticYear) * 12 + (end->monthOfYear - this->monthOfYear);
	int32_t days = end->dayOfMonth - this->dayOfMonth;
	if (totalMonths > 0 && days < 0) {
		--totalMonths;
		$var(HijrahDate, calcDate, this->plusMonths(totalMonths));
		int64_t var$0 = end->toEpochDay();
		days = (int32_t)(var$0 - $nc(calcDate)->toEpochDay());
	} else if (totalMonths < 0 && days > 0) {
		++totalMonths;
		days -= $nc(end)->lengthOfMonth();
	}
	int64_t years = totalMonths / 12;
	int32_t months = (int32_t)(totalMonths % 12);
	return $nc($($cast($HijrahChronology, getChronology())))->period($Math::toIntExact(years), months, days);
}

bool HijrahDate::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(HijrahDate, otherDate, nullptr);
	bool var$4 = $instanceOf(HijrahDate, obj);
	if (var$4) {
		$assign(otherDate, $cast(HijrahDate, obj));
		var$4 = true;
	}
	bool var$3 = (var$4);
	bool var$2 = var$3 && this->prolepticYear == $nc(otherDate)->prolepticYear;
	bool var$1 = var$2 && this->monthOfYear == otherDate->monthOfYear;
	bool var$0 = var$1 && this->dayOfMonth == otherDate->dayOfMonth;
	return var$0 && $nc($($cast($HijrahChronology, getChronology())))->equals($(otherDate->getChronology()));
}

int32_t HijrahDate::hashCode() {
	int32_t yearValue = this->prolepticYear;
	int32_t monthValue = this->monthOfYear;
	int32_t dayValue = this->dayOfMonth;
	return ($nc($($nc($($cast($HijrahChronology, getChronology())))->getId()))->hashCode() ^ ((int32_t)(yearValue & (uint32_t)-2048))) ^ ((yearValue << 11) + (monthValue << 6) + (dayValue));
}

void HijrahDate::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

$Object* HijrahDate::writeReplace() {
	return $of($new($Ser, $Ser::HIJRAH_DATE_TYPE, this));
}

void HijrahDate::writeExternal($ObjectOutput* out) {
	$nc(out)->writeObject($(getChronology()));
	$init($ChronoField);
	out->writeInt(get($ChronoField::YEAR));
	out->writeByte(get($ChronoField::MONTH_OF_YEAR));
	out->writeByte(get($ChronoField::DAY_OF_MONTH));
}

HijrahDate* HijrahDate::readExternal($ObjectInput* in) {
	$init(HijrahDate);
	$var($HijrahChronology, chrono, $cast($HijrahChronology, $nc(in)->readObject()));
	int32_t year = in->readInt();
	int32_t month = in->readByte();
	int32_t dayOfMonth = in->readByte();
	return $cast(HijrahDate, $nc(chrono)->date(year, month, dayOfMonth));
}

$String* HijrahDate::toString() {
	return $ChronoLocalDateImpl::toString();
}

int64_t HijrahDate::until($Temporal* endExclusive, $TemporalUnit* unit) {
	return $ChronoLocalDateImpl::until(endExclusive, unit);
}

HijrahDate::HijrahDate() {
}

$Class* HijrahDate::load$($String* name, bool initialize) {
	$loadClass(HijrahDate, name, initialize, &_HijrahDate_ClassInfo_, allocate$HijrahDate);
	return class$;
}

$Class* HijrahDate::class$ = nullptr;

		} // chrono
	} // time
} // java