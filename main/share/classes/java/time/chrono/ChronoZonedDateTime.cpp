#include <java/time/chrono/ChronoZonedDateTime.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/SerializedLambda.h>
#include <java/time/DateTimeException.h>
#include <java/time/Instant.h>
#include <java/time/LocalTime.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/ChronoLocalDateTime.h>
#include <java/time/chrono/ChronoZonedDateTime$1.h>
#include <java/time/chrono/ChronoZonedDateTimeImpl.h>
#include <java/time/chrono/Chronology.h>
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
#include <java/util/Comparator.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef FOREVER
#undef INSTANT_SECONDS
#undef NANOS
#undef OFFSET_SECONDS

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SerializedLambda = ::java::lang::invoke::SerializedLambda;
using $DateTimeException = ::java::time::DateTimeException;
using $Instant = ::java::time::Instant;
using $LocalTime = ::java::time::LocalTime;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $ChronoLocalDateTime = ::java::time::chrono::ChronoLocalDateTime;
using $ChronoZonedDateTime$1 = ::java::time::chrono::ChronoZonedDateTime$1;
using $ChronoZonedDateTimeImpl = ::java::time::chrono::ChronoZonedDateTimeImpl;
using $Chronology = ::java::time::chrono::Chronology;
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
using $Comparator = ::java::util::Comparator;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace chrono {

class ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1 : public $Comparator, public $Serializable {
	$class(ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1, $NO_CLASS_INIT, $Comparator, $Serializable)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* dateTime1, Object$* dateTime2) override {
		 return ChronoZonedDateTime::lambda$timeLineOrder$f56e6d02$1($cast(ChronoZonedDateTime, dateTime1), $cast(ChronoZonedDateTime, dateTime2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1, init$, void)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1, compare, int32_t, Object$*, Object$*)},
	{}
};
$ClassInfo ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.time.chrono.ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	nullptr,
	methodInfos
};
$Class* ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1::load$($String* name, bool initialize) {
	$loadClass(ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1::class$ = nullptr;

$MethodInfo _ChronoZonedDateTime_MethodInfo_[] = {
	{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ChronoZonedDateTime, $deserializeLambda$, $Object*, $SerializedLambda*)},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"compareTo", "(Ljava/time/chrono/ChronoZonedDateTime;)I", "(Ljava/time/chrono/ChronoZonedDateTime<*>;)I", $PUBLIC, $virtualMethod(ChronoZonedDateTime, compareTo, int32_t, ChronoZonedDateTime*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ChronoZonedDateTime, compareTo, int32_t, Object$*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"format", "(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ChronoZonedDateTime, format, $String*, $DateTimeFormatter*)},
	{"from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime<*>;", $PUBLIC | $STATIC, $staticMethod(ChronoZonedDateTime, from, ChronoZonedDateTime*, $TemporalAccessor*)},
	{"get", "(Ljava/time/temporal/TemporalField;)I", nullptr, $PUBLIC, $virtualMethod(ChronoZonedDateTime, get, int32_t, $TemporalField*)},
	{"getChronology", "()Ljava/time/chrono/Chronology;", nullptr, $PUBLIC, $virtualMethod(ChronoZonedDateTime, getChronology, $Chronology*)},
	{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC, $virtualMethod(ChronoZonedDateTime, getLong, int64_t, $TemporalField*)},
	{"getOffset", "()Ljava/time/ZoneOffset;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChronoZonedDateTime, getOffset, $ZoneOffset*)},
	{"getZone", "()Ljava/time/ZoneId;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChronoZonedDateTime, getZone, $ZoneId*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isAfter", "(Ljava/time/chrono/ChronoZonedDateTime;)Z", "(Ljava/time/chrono/ChronoZonedDateTime<*>;)Z", $PUBLIC, $virtualMethod(ChronoZonedDateTime, isAfter, bool, ChronoZonedDateTime*)},
	{"isBefore", "(Ljava/time/chrono/ChronoZonedDateTime;)Z", "(Ljava/time/chrono/ChronoZonedDateTime<*>;)Z", $PUBLIC, $virtualMethod(ChronoZonedDateTime, isBefore, bool, ChronoZonedDateTime*)},
	{"isEqual", "(Ljava/time/chrono/ChronoZonedDateTime;)Z", "(Ljava/time/chrono/ChronoZonedDateTime<*>;)Z", $PUBLIC, $virtualMethod(ChronoZonedDateTime, isEqual, bool, ChronoZonedDateTime*)},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSupported", "(Ljava/time/temporal/TemporalUnit;)Z", nullptr, $PUBLIC, $virtualMethod(ChronoZonedDateTime, isSupported, bool, $TemporalUnit*)},
	{"lambda$timeLineOrder$f56e6d02$1", "(Ljava/time/chrono/ChronoZonedDateTime;Ljava/time/chrono/ChronoZonedDateTime;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ChronoZonedDateTime, lambda$timeLineOrder$f56e6d02$1, int32_t, ChronoZonedDateTime*, ChronoZonedDateTime*)},
	{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC, $virtualMethod(ChronoZonedDateTime, minus, ChronoZonedDateTime*, $TemporalAmount*)},
	{"minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoZonedDateTime;", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC, $virtualMethod(ChronoZonedDateTime, minus, ChronoZonedDateTime*, int64_t, $TemporalUnit*)},
	{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoZonedDateTime;", nullptr, $PUBLIC | $ABSTRACT},
	{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC, $virtualMethod(ChronoZonedDateTime, plus, ChronoZonedDateTime*, $TemporalAmount*)},
	{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC, $virtualMethod(ChronoZonedDateTime, query, $Object*, $TemporalQuery*)},
	{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC, $virtualMethod(ChronoZonedDateTime, range, $ValueRange*, $TemporalField*)},
	{"timeLineOrder", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/time/chrono/ChronoZonedDateTime<*>;>;", $PUBLIC | $STATIC, $staticMethod(ChronoZonedDateTime, timeLineOrder, $Comparator*)},
	{"toEpochSecond", "()J", nullptr, $PUBLIC, $virtualMethod(ChronoZonedDateTime, toEpochSecond, int64_t)},
	{"toInstant", "()Ljava/time/Instant;", nullptr, $PUBLIC, $virtualMethod(ChronoZonedDateTime, toInstant, $Instant*)},
	{"toLocalDate", "()Ljava/time/chrono/ChronoLocalDate;", "()TD;", $PUBLIC, $virtualMethod(ChronoZonedDateTime, toLocalDate, $ChronoLocalDate*)},
	{"toLocalDateTime", "()Ljava/time/chrono/ChronoLocalDateTime;", "()Ljava/time/chrono/ChronoLocalDateTime<TD;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ChronoZonedDateTime, toLocalDateTime, $ChronoLocalDateTime*)},
	{"toLocalTime", "()Ljava/time/LocalTime;", nullptr, $PUBLIC, $virtualMethod(ChronoZonedDateTime, toLocalTime, $LocalTime*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ChronoZonedDateTime;", nullptr, $PUBLIC | $ABSTRACT},
	{"with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC, $virtualMethod(ChronoZonedDateTime, with, ChronoZonedDateTime*, $TemporalAdjuster*)},
	{"withEarlierOffsetAtOverlap", "()Ljava/time/chrono/ChronoZonedDateTime;", "()Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ChronoZonedDateTime, withEarlierOffsetAtOverlap, ChronoZonedDateTime*)},
	{"withLaterOffsetAtOverlap", "()Ljava/time/chrono/ChronoZonedDateTime;", "()Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ChronoZonedDateTime, withLaterOffsetAtOverlap, ChronoZonedDateTime*)},
	{"withZoneSameInstant", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ChronoZonedDateTime, withZoneSameInstant, ChronoZonedDateTime*, $ZoneId*)},
	{"withZoneSameLocal", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ChronoZonedDateTime, withZoneSameLocal, ChronoZonedDateTime*, $ZoneId*)},
	{}
};

$InnerClassInfo _ChronoZonedDateTime_InnerClassesInfo_[] = {
	{"java.time.chrono.ChronoZonedDateTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ChronoZonedDateTime_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.chrono.ChronoZonedDateTime",
	nullptr,
	"java.time.temporal.Temporal,java.lang.Comparable",
	nullptr,
	_ChronoZonedDateTime_MethodInfo_,
	"<D::Ljava/time/chrono/ChronoLocalDate;>Ljava/lang/Object;Ljava/time/temporal/Temporal;Ljava/lang/Comparable<Ljava/time/chrono/ChronoZonedDateTime<*>;>;",
	nullptr,
	_ChronoZonedDateTime_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.time.chrono.ChronoZonedDateTime$1"
};

$Object* allocate$ChronoZonedDateTime($Class* clazz) {
	return $of($alloc(ChronoZonedDateTime));
}

bool ChronoZonedDateTime::equals(Object$* obj) {
	 return this->$Temporal::equals(obj);
}

int32_t ChronoZonedDateTime::hashCode() {
	 return this->$Temporal::hashCode();
}

$String* ChronoZonedDateTime::toString() {
	 return this->$Temporal::toString();
}

$Object* ChronoZonedDateTime::clone() {
	 return this->$Temporal::clone();
}

void ChronoZonedDateTime::finalize() {
	this->$Temporal::finalize();
}

$Comparator* ChronoZonedDateTime::timeLineOrder() {
	$init(ChronoZonedDateTime);
	return $cast($Comparator, $cast($Serializable, static_cast<$Comparator*>($new(ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1))));
}

ChronoZonedDateTime* ChronoZonedDateTime::from($TemporalAccessor* temporal) {
	$init(ChronoZonedDateTime);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(ChronoZonedDateTime, temporal)) {
		return $cast(ChronoZonedDateTime, temporal);
	}
	$Objects::requireNonNull($of(temporal), "temporal"_s);
	$var($Chronology, chrono, $cast($Chronology, $nc(temporal)->query($($TemporalQueries::chronology()))));
	if (chrono == nullptr) {
		$throwNew($DateTimeException, $$str({"Unable to obtain ChronoZonedDateTime from TemporalAccessor: "_s, $of(temporal)->getClass()}));
	}
	return $nc(chrono)->zonedDateTime(temporal);
}

$ValueRange* ChronoZonedDateTime::range($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		$init($ChronoField);
		if ($equals(field, $ChronoField::INSTANT_SECONDS) || $equals(field, $ChronoField::OFFSET_SECONDS)) {
			return field->range();
		}
		return $nc($(toLocalDateTime()))->range(field);
	}
	return $nc(field)->rangeRefinedBy(this);
}

int32_t ChronoZonedDateTime::get($TemporalField* field) {
	$useLocalCurrentObjectStackCache();
	{
		$ChronoField* chronoField = nullptr;
		bool var$0 = $instanceOf($ChronoField, field);
		if (var$0) {
			chronoField = $cast($ChronoField, field);
			var$0 = true;
		}
		if (var$0) {
			$init($ChronoZonedDateTime$1);
			switch ($nc($ChronoZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField)->get($nc((chronoField))->ordinal())) {
			case 1:
				{
					$throwNew($UnsupportedTemporalTypeException, "Invalid field \'InstantSeconds\' for get() method, use getLong() instead"_s);
				}
			case 2:
				{
					return $nc($(getOffset()))->getTotalSeconds();
				}
			}
			return $nc($(toLocalDateTime()))->get(field);
		}
	}
	return $Temporal::get(field);
}

int64_t ChronoZonedDateTime::getLong($TemporalField* field) {
	$useLocalCurrentObjectStackCache();
	{
		$ChronoField* chronoField = nullptr;
		bool var$0 = $instanceOf($ChronoField, field);
		if (var$0) {
			chronoField = $cast($ChronoField, field);
			var$0 = true;
		}
		if (var$0) {
			$init($ChronoZonedDateTime$1);
			switch ($nc($ChronoZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField)->get($nc((chronoField))->ordinal())) {
			case 1:
				{
					return toEpochSecond();
				}
			case 2:
				{
					return $nc($(getOffset()))->getTotalSeconds();
				}
			}
			return $nc($(toLocalDateTime()))->getLong(field);
		}
	}
	return $nc(field)->getFrom(this);
}

$ChronoLocalDate* ChronoZonedDateTime::toLocalDate() {
	return $nc($(toLocalDateTime()))->toLocalDate();
}

$LocalTime* ChronoZonedDateTime::toLocalTime() {
	return $nc($(toLocalDateTime()))->toLocalTime();
}

$Chronology* ChronoZonedDateTime::getChronology() {
	return $nc($(toLocalDate()))->getChronology();
}

bool ChronoZonedDateTime::isSupported($TemporalUnit* unit) {
	if ($instanceOf($ChronoUnit, unit)) {
		$init($ChronoUnit);
		return !$equals(unit, $ChronoUnit::FOREVER);
	}
	return unit != nullptr && unit->isSupportedBy(this);
}

ChronoZonedDateTime* ChronoZonedDateTime::with($TemporalAdjuster* adjuster) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoZonedDateTimeImpl::ensureValid(var$0, $($Temporal::with(adjuster)));
}

ChronoZonedDateTime* ChronoZonedDateTime::plus($TemporalAmount* amount) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoZonedDateTimeImpl::ensureValid(var$0, $($Temporal::plus(amount)));
}

ChronoZonedDateTime* ChronoZonedDateTime::minus($TemporalAmount* amount) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoZonedDateTimeImpl::ensureValid(var$0, $($Temporal::minus(amount)));
}

ChronoZonedDateTime* ChronoZonedDateTime::minus(int64_t amountToSubtract, $TemporalUnit* unit) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoZonedDateTimeImpl::ensureValid(var$0, $($Temporal::minus(amountToSubtract, unit)));
}

$Object* ChronoZonedDateTime::query($TemporalQuery* query) {
	bool var$0 = query == $TemporalQueries::zone();
	if (var$0 || query == $TemporalQueries::zoneId()) {
		return $of($of(getZone()));
	} else if (query == $TemporalQueries::offset()) {
		return $of($of(getOffset()));
	} else if (query == $TemporalQueries::localTime()) {
		return $of($of(toLocalTime()));
	} else if (query == $TemporalQueries::chronology()) {
		return $of($of(getChronology()));
	} else if (query == $TemporalQueries::precision()) {
		$init($ChronoUnit);
		return $of($of($ChronoUnit::NANOS));
	}
	return $of($nc(query)->queryFrom(this));
}

$String* ChronoZonedDateTime::format($DateTimeFormatter* formatter) {
	$Objects::requireNonNull($of(formatter), "formatter"_s);
	return $nc(formatter)->format(this);
}

$Instant* ChronoZonedDateTime::toInstant() {
	int64_t var$0 = toEpochSecond();
	return $Instant::ofEpochSecond(var$0, $nc($(toLocalTime()))->getNano());
}

int64_t ChronoZonedDateTime::toEpochSecond() {
	$useLocalCurrentObjectStackCache();
	int64_t epochDay = $nc($(toLocalDate()))->toEpochDay();
	int64_t secs = epochDay * 0x00015180 + $nc($(toLocalTime()))->toSecondOfDay();
	secs -= $nc($(getOffset()))->getTotalSeconds();
	return secs;
}

int32_t ChronoZonedDateTime::compareTo(ChronoZonedDateTime* other) {
	$useLocalCurrentObjectStackCache();
	int64_t var$0 = toEpochSecond();
	int32_t cmp = $Long::compare(var$0, $nc(other)->toEpochSecond());
	if (cmp == 0) {
		int32_t var$1 = $nc($(toLocalTime()))->getNano();
		cmp = var$1 - $nc($($nc(other)->toLocalTime()))->getNano();
		if (cmp == 0) {
			cmp = $nc($(toLocalDateTime()))->compareTo($(other->toLocalDateTime()));
			if (cmp == 0) {
				cmp = $nc($($nc($(getZone()))->getId()))->compareTo($($nc($(other->getZone()))->getId()));
				if (cmp == 0) {
					cmp = $nc($(getChronology()))->compareTo($(other->getChronology()));
				}
			}
		}
	}
	return cmp;
}

bool ChronoZonedDateTime::isBefore(ChronoZonedDateTime* other) {
	$useLocalCurrentObjectStackCache();
	int64_t thisEpochSec = toEpochSecond();
	int64_t otherEpochSec = $nc(other)->toEpochSecond();
	bool var$0 = thisEpochSec < otherEpochSec;
	if (!var$0) {
		bool var$1 = thisEpochSec == otherEpochSec;
		if (var$1) {
			int32_t var$2 = $nc($(toLocalTime()))->getNano();
			var$1 = var$2 < $nc($(other->toLocalTime()))->getNano();
		}
		var$0 = (var$1);
	}
	return var$0;
}

bool ChronoZonedDateTime::isAfter(ChronoZonedDateTime* other) {
	$useLocalCurrentObjectStackCache();
	int64_t thisEpochSec = toEpochSecond();
	int64_t otherEpochSec = $nc(other)->toEpochSecond();
	bool var$0 = thisEpochSec > otherEpochSec;
	if (!var$0) {
		bool var$1 = thisEpochSec == otherEpochSec;
		if (var$1) {
			int32_t var$2 = $nc($(toLocalTime()))->getNano();
			var$1 = var$2 > $nc($(other->toLocalTime()))->getNano();
		}
		var$0 = (var$1);
	}
	return var$0;
}

bool ChronoZonedDateTime::isEqual(ChronoZonedDateTime* other) {
	$useLocalCurrentObjectStackCache();
	int64_t var$1 = toEpochSecond();
	bool var$0 = var$1 == $nc(other)->toEpochSecond();
	if (var$0) {
		int32_t var$2 = $nc($(toLocalTime()))->getNano();
		var$0 = var$2 == $nc($(other->toLocalTime()))->getNano();
	}
	return var$0;
}

int32_t ChronoZonedDateTime::compareTo(Object$* other) {
	return this->compareTo($cast(ChronoZonedDateTime, other));
}

$Object* ChronoZonedDateTime::$deserializeLambda$($SerializedLambda* lambda) {
	$init(ChronoZonedDateTime);
	$useLocalCurrentObjectStackCache();
	{
		$var($String, s5569$, $nc(lambda)->getImplMethodName());
		int32_t tmp5569$ = -1;
		switch ($nc(s5569$)->hashCode()) {
		case 0x52421F0F:
			{
				if (s5569$->equals("lambda$timeLineOrder$f56e6d02$1"_s)) {
					tmp5569$ = 0;
				}
				break;
			}
		}
		switch (tmp5569$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("java/util/Comparator"_s);
				bool var$2 = var$3 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("compare"_s);
				bool var$1 = var$2 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/Object;Ljava/lang/Object;)I"_s);
				bool var$0 = var$1 && $nc($of($(lambda->getImplClass())))->equals("java/time/chrono/ChronoZonedDateTime"_s);
				if (var$0 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/time/chrono/ChronoZonedDateTime;Ljava/time/chrono/ChronoZonedDateTime;)I"_s)) {
					return $of(static_cast<$Comparator*>($new(ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1)));
				}
				break;
			}
		}
	}
	$throwNew($IllegalArgumentException, "Invalid lambda deserialization"_s);
}

int32_t ChronoZonedDateTime::lambda$timeLineOrder$f56e6d02$1(ChronoZonedDateTime* dateTime1, ChronoZonedDateTime* dateTime2) {
	$init(ChronoZonedDateTime);
	$useLocalCurrentObjectStackCache();
	int64_t var$0 = $nc(dateTime1)->toEpochSecond();
	int32_t cmp = $Long::compare(var$0, $nc(dateTime2)->toEpochSecond());
	if (cmp == 0) {
		int64_t var$1 = (int64_t)$nc($($nc(dateTime1)->toLocalTime()))->getNano();
		cmp = $Long::compare(var$1, $nc($($nc(dateTime2)->toLocalTime()))->getNano());
	}
	return cmp;
}

$Class* ChronoZonedDateTime::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1::classInfo$.name)) {
			return ChronoZonedDateTime$$Lambda$lambda$timeLineOrder$f56e6d02$1::load$(name, initialize);
		}
	}
	$loadClass(ChronoZonedDateTime, name, initialize, &_ChronoZonedDateTime_ClassInfo_, allocate$ChronoZonedDateTime);
	return class$;
}

$Class* ChronoZonedDateTime::class$ = nullptr;

		} // chrono
	} // time
} // java