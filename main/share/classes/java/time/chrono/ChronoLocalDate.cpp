#include <java/time/chrono/ChronoLocalDate.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/SerializedLambda.h>
#include <java/time/DateTimeException.h>
#include <java/time/LocalTime.h>
#include <java/time/chrono/ChronoLocalDateImpl.h>
#include <java/time/chrono/ChronoLocalDateTime.h>
#include <java/time/chrono/ChronoLocalDateTimeImpl.h>
#include <java/time/chrono/ChronoPeriod.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/Era.h>
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
#include <java/util/Comparator.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef DAYS
#undef EPOCH_DAY
#undef ERA
#undef YEAR

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SerializedLambda = ::java::lang::invoke::SerializedLambda;
using $DateTimeException = ::java::time::DateTimeException;
using $LocalTime = ::java::time::LocalTime;
using $ChronoLocalDateImpl = ::java::time::chrono::ChronoLocalDateImpl;
using $ChronoLocalDateTime = ::java::time::chrono::ChronoLocalDateTime;
using $ChronoLocalDateTimeImpl = ::java::time::chrono::ChronoLocalDateTimeImpl;
using $ChronoPeriod = ::java::time::chrono::ChronoPeriod;
using $Chronology = ::java::time::chrono::Chronology;
using $Era = ::java::time::chrono::Era;
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
using $Comparator = ::java::util::Comparator;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace chrono {

class ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1 : public $Comparator, public $Serializable {
	$class(ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1, $NO_CLASS_INIT, $Comparator, $Serializable)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* date1, Object$* date2) override {
		 return ChronoLocalDate::lambda$timeLineOrder$493d4938$1($cast(ChronoLocalDate, date1), $cast(ChronoLocalDate, date2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1, init$, void)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1, compare, int32_t, Object$*, Object$*)},
	{}
};
$ClassInfo ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.time.chrono.ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	nullptr,
	methodInfos
};
$Class* ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1::load$($String* name, bool initialize) {
	$loadClass(ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1::class$ = nullptr;

$MethodInfo _ChronoLocalDate_MethodInfo_[] = {
	{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ChronoLocalDate, $deserializeLambda$, $Object*, $SerializedLambda*)},
	{"adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, adjustInto, $Temporal*, $Temporal*)},
	{"atTime", "(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;", "(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime<*>;", $PUBLIC, $virtualMethod(ChronoLocalDate, atTime, $ChronoLocalDateTime*, $LocalTime*)},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"compareTo", "(Ljava/time/chrono/ChronoLocalDate;)I", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, compareTo, int32_t, ChronoLocalDate*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ChronoLocalDate, compareTo, int32_t, Object$*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"format", "(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, format, $String*, $DateTimeFormatter*)},
	{"from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDate;", nullptr, $PUBLIC | $STATIC, $staticMethod(ChronoLocalDate, from, ChronoLocalDate*, $TemporalAccessor*)},
	{"getChronology", "()Ljava/time/chrono/Chronology;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChronoLocalDate, getChronology, $Chronology*)},
	{"getEra", "()Ljava/time/chrono/Era;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, getEra, $Era*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isAfter", "(Ljava/time/chrono/ChronoLocalDate;)Z", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, isAfter, bool, ChronoLocalDate*)},
	{"isBefore", "(Ljava/time/chrono/ChronoLocalDate;)Z", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, isBefore, bool, ChronoLocalDate*)},
	{"isEqual", "(Ljava/time/chrono/ChronoLocalDate;)Z", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, isEqual, bool, ChronoLocalDate*)},
	{"isLeapYear", "()Z", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, isLeapYear, bool)},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, isSupported, bool, $TemporalField*)},
	{"isSupported", "(Ljava/time/temporal/TemporalUnit;)Z", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, isSupported, bool, $TemporalUnit*)},
	{"lambda$timeLineOrder$493d4938$1", "(Ljava/time/chrono/ChronoLocalDate;Ljava/time/chrono/ChronoLocalDate;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ChronoLocalDate, lambda$timeLineOrder$493d4938$1, int32_t, ChronoLocalDate*, ChronoLocalDate*)},
	{"lengthOfMonth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChronoLocalDate, lengthOfMonth, int32_t)},
	{"lengthOfYear", "()I", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, lengthOfYear, int32_t)},
	{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDate;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, minus, ChronoLocalDate*, $TemporalAmount*)},
	{"minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDate;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, minus, ChronoLocalDate*, int64_t, $TemporalUnit*)},
	{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDate;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, plus, ChronoLocalDate*, $TemporalAmount*)},
	{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDate;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, plus, ChronoLocalDate*, int64_t, $TemporalUnit*)},
	{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC, $virtualMethod(ChronoLocalDate, query, $Object*, $TemporalQuery*)},
	{"timeLineOrder", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/time/chrono/ChronoLocalDate;>;", $PUBLIC | $STATIC, $staticMethod(ChronoLocalDate, timeLineOrder, $Comparator*)},
	{"toEpochDay", "()J", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, toEpochDay, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"until", "(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChronoLocalDate, until, $ChronoPeriod*, ChronoLocalDate*)},
	{"with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ChronoLocalDate;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, with, ChronoLocalDate*, $TemporalAdjuster*)},
	{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ChronoLocalDate;", nullptr, $PUBLIC, $virtualMethod(ChronoLocalDate, with, ChronoLocalDate*, $TemporalField*, int64_t)},
	{}
};

$ClassInfo _ChronoLocalDate_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.chrono.ChronoLocalDate",
	nullptr,
	"java.time.temporal.Temporal,java.time.temporal.TemporalAdjuster,java.lang.Comparable",
	nullptr,
	_ChronoLocalDate_MethodInfo_,
	"Ljava/lang/Object;Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalAdjuster;Ljava/lang/Comparable<Ljava/time/chrono/ChronoLocalDate;>;"
};

$Object* allocate$ChronoLocalDate($Class* clazz) {
	return $of($alloc(ChronoLocalDate));
}

bool ChronoLocalDate::equals(Object$* obj) {
	 return this->$Temporal::equals(obj);
}

int32_t ChronoLocalDate::hashCode() {
	 return this->$Temporal::hashCode();
}

$String* ChronoLocalDate::toString() {
	 return this->$Temporal::toString();
}

$Object* ChronoLocalDate::clone() {
	 return this->$Temporal::clone();
}

void ChronoLocalDate::finalize() {
	this->$Temporal::finalize();
}

$Comparator* ChronoLocalDate::timeLineOrder() {
	$init(ChronoLocalDate);
	return $cast($Comparator, $cast($Serializable, static_cast<$Comparator*>($new(ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1))));
}

ChronoLocalDate* ChronoLocalDate::from($TemporalAccessor* temporal) {
	$init(ChronoLocalDate);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(ChronoLocalDate, temporal)) {
		return $cast(ChronoLocalDate, temporal);
	}
	$Objects::requireNonNull($of(temporal), "temporal"_s);
	$var($Chronology, chrono, $cast($Chronology, $nc(temporal)->query($($TemporalQueries::chronology()))));
	if (chrono == nullptr) {
		$throwNew($DateTimeException, $$str({"Unable to obtain ChronoLocalDate from TemporalAccessor: "_s, $of(temporal)->getClass()}));
	}
	return $nc(chrono)->date(temporal);
}

$Era* ChronoLocalDate::getEra() {
	$init($ChronoField);
	return $nc($(getChronology()))->eraOf(get($ChronoField::ERA));
}

bool ChronoLocalDate::isLeapYear() {
	$init($ChronoField);
	return $nc($(getChronology()))->isLeapYear(getLong($ChronoField::YEAR));
}

int32_t ChronoLocalDate::lengthOfYear() {
	return (isLeapYear() ? 366 : 365);
}

bool ChronoLocalDate::isSupported($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		return $nc(field)->isDateBased();
	}
	return field != nullptr && field->isSupportedBy(this);
}

bool ChronoLocalDate::isSupported($TemporalUnit* unit) {
	if ($instanceOf($ChronoUnit, unit)) {
		return $nc(unit)->isDateBased();
	}
	return unit != nullptr && unit->isSupportedBy(this);
}

ChronoLocalDate* ChronoLocalDate::with($TemporalAdjuster* adjuster) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoLocalDateImpl::ensureValid(var$0, $($Temporal::with(adjuster)));
}

ChronoLocalDate* ChronoLocalDate::with($TemporalField* field, int64_t newValue) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ChronoField, field)) {
		$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
	}
	$var($Chronology, var$0, getChronology());
	return $ChronoLocalDateImpl::ensureValid(var$0, $($nc(field)->adjustInto(this, newValue)));
}

ChronoLocalDate* ChronoLocalDate::plus($TemporalAmount* amount) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoLocalDateImpl::ensureValid(var$0, $($Temporal::plus(amount)));
}

ChronoLocalDate* ChronoLocalDate::plus(int64_t amountToAdd, $TemporalUnit* unit) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ChronoUnit, unit)) {
		$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported unit: "_s, unit}));
	}
	$var($Chronology, var$0, getChronology());
	return $ChronoLocalDateImpl::ensureValid(var$0, $($nc(unit)->addTo(this, amountToAdd)));
}

ChronoLocalDate* ChronoLocalDate::minus($TemporalAmount* amount) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoLocalDateImpl::ensureValid(var$0, $($Temporal::minus(amount)));
}

ChronoLocalDate* ChronoLocalDate::minus(int64_t amountToSubtract, $TemporalUnit* unit) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoLocalDateImpl::ensureValid(var$0, $($Temporal::minus(amountToSubtract, unit)));
}

$Object* ChronoLocalDate::query($TemporalQuery* query) {
	bool var$1 = query == $TemporalQueries::zoneId();
	bool var$0 = var$1 || query == $TemporalQueries::zone();
	if (var$0 || query == $TemporalQueries::offset()) {
		return $of(nullptr);
	} else if (query == $TemporalQueries::localTime()) {
		return $of(nullptr);
	} else if (query == $TemporalQueries::chronology()) {
		return $of($of(getChronology()));
	} else if (query == $TemporalQueries::precision()) {
		$init($ChronoUnit);
		return $of($of($ChronoUnit::DAYS));
	}
	return $of($nc(query)->queryFrom(this));
}

$Temporal* ChronoLocalDate::adjustInto($Temporal* temporal) {
	$init($ChronoField);
	return $nc(temporal)->with($ChronoField::EPOCH_DAY, toEpochDay());
}

$String* ChronoLocalDate::format($DateTimeFormatter* formatter) {
	$Objects::requireNonNull($of(formatter), "formatter"_s);
	return $nc(formatter)->format(this);
}

$ChronoLocalDateTime* ChronoLocalDate::atTime($LocalTime* localTime) {
	return $ChronoLocalDateTimeImpl::of(this, localTime);
}

int64_t ChronoLocalDate::toEpochDay() {
	$init($ChronoField);
	return getLong($ChronoField::EPOCH_DAY);
}

int32_t ChronoLocalDate::compareTo(ChronoLocalDate* other) {
	$useLocalCurrentObjectStackCache();
	int64_t var$0 = toEpochDay();
	int32_t cmp = $Long::compare(var$0, $nc(other)->toEpochDay());
	if (cmp == 0) {
		cmp = $nc($(getChronology()))->compareTo($($nc(other)->getChronology()));
	}
	return cmp;
}

bool ChronoLocalDate::isAfter(ChronoLocalDate* other) {
	int64_t var$0 = this->toEpochDay();
	return var$0 > $nc(other)->toEpochDay();
}

bool ChronoLocalDate::isBefore(ChronoLocalDate* other) {
	int64_t var$0 = this->toEpochDay();
	return var$0 < $nc(other)->toEpochDay();
}

bool ChronoLocalDate::isEqual(ChronoLocalDate* other) {
	int64_t var$0 = this->toEpochDay();
	return var$0 == $nc(other)->toEpochDay();
}

int32_t ChronoLocalDate::compareTo(Object$* other) {
	return this->compareTo($cast(ChronoLocalDate, other));
}

$Object* ChronoLocalDate::$deserializeLambda$($SerializedLambda* lambda) {
	$init(ChronoLocalDate);
	$useLocalCurrentObjectStackCache();
	{
		$var($String, s13205$, $nc(lambda)->getImplMethodName());
		int32_t tmp13205$ = -1;
		switch ($nc(s13205$)->hashCode()) {
		case 0x7AABD0E1:
			{
				if (s13205$->equals("lambda$timeLineOrder$493d4938$1"_s)) {
					tmp13205$ = 0;
				}
				break;
			}
		}
		switch (tmp13205$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("java/util/Comparator"_s);
				bool var$2 = var$3 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("compare"_s);
				bool var$1 = var$2 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/Object;Ljava/lang/Object;)I"_s);
				bool var$0 = var$1 && $nc($of($(lambda->getImplClass())))->equals("java/time/chrono/ChronoLocalDate"_s);
				if (var$0 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/time/chrono/ChronoLocalDate;Ljava/time/chrono/ChronoLocalDate;)I"_s)) {
					return $of(static_cast<$Comparator*>($new(ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1)));
				}
				break;
			}
		}
	}
	$throwNew($IllegalArgumentException, "Invalid lambda deserialization"_s);
}

int32_t ChronoLocalDate::lambda$timeLineOrder$493d4938$1(ChronoLocalDate* date1, ChronoLocalDate* date2) {
	$init(ChronoLocalDate);
	int64_t var$0 = $nc(date1)->toEpochDay();
	return $Long::compare(var$0, $nc(date2)->toEpochDay());
}

$Class* ChronoLocalDate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1::classInfo$.name)) {
			return ChronoLocalDate$$Lambda$lambda$timeLineOrder$493d4938$1::load$(name, initialize);
		}
	}
	$loadClass(ChronoLocalDate, name, initialize, &_ChronoLocalDate_ClassInfo_, allocate$ChronoLocalDate);
	return class$;
}

$Class* ChronoLocalDate::class$ = nullptr;

		} // chrono
	} // time
} // java