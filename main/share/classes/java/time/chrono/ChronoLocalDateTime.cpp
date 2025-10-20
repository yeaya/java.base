#include <java/time/chrono/ChronoLocalDateTime.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/SerializedLambda.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <java/time/Instant.h>
#include <java/time/LocalTime.h>
#include <java/time/ZoneOffset.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/ChronoLocalDateTimeImpl.h>
#include <java/time/chrono/ChronoZonedDateTime.h>
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
#include <java/util/Comparator.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef EPOCH_DAY
#undef FOREVER
#undef NANOS
#undef NANO_OF_DAY

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $SerializedLambda = ::java::lang::invoke::SerializedLambda;
using $DateTimeException = ::java::time::DateTimeException;
using $Instant = ::java::time::Instant;
using $LocalTime = ::java::time::LocalTime;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $ChronoLocalDateTimeImpl = ::java::time::chrono::ChronoLocalDateTimeImpl;
using $ChronoZonedDateTime = ::java::time::chrono::ChronoZonedDateTime;
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
using $Comparator = ::java::util::Comparator;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace chrono {

class ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1 : public $Comparator, public $Serializable {
	$class(ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1, $NO_CLASS_INIT, $Comparator, $Serializable)
public:
virtual $Object0* toObject0$() const override {return ($Object0*)(void*)this;}
	void init$() {
	}
	virtual int32_t compare(Object$* dateTime1, Object$* dateTime2) override {
		 return ChronoLocalDateTime::lambda$timeLineOrder$b9959cb5$1($cast(ChronoLocalDateTime, dateTime1), $cast(ChronoLocalDateTime, dateTime2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1::*)()>(&ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.time.chrono.ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	nullptr,
	methodInfos
};
$Class* ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1::load$($String* name, bool initialize) {
	$loadClass(ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1::class$ = nullptr;

$MethodInfo _ChronoLocalDateTime_MethodInfo_[] = {
	{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($SerializedLambda*)>(&ChronoLocalDateTime::$deserializeLambda$))},
	{"adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"atZone", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"compareTo", "(Ljava/time/chrono/ChronoLocalDateTime;)I", "(Ljava/time/chrono/ChronoLocalDateTime<*>;)I", $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"format", "(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime<*>;", $PUBLIC | $STATIC, $method(static_cast<ChronoLocalDateTime*(*)($TemporalAccessor*)>(&ChronoLocalDateTime::from))},
	{"getChronology", "()Ljava/time/chrono/Chronology;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isAfter", "(Ljava/time/chrono/ChronoLocalDateTime;)Z", "(Ljava/time/chrono/ChronoLocalDateTime<*>;)Z", $PUBLIC},
	{"isBefore", "(Ljava/time/chrono/ChronoLocalDateTime;)Z", "(Ljava/time/chrono/ChronoLocalDateTime<*>;)Z", $PUBLIC},
	{"isEqual", "(Ljava/time/chrono/ChronoLocalDateTime;)Z", "(Ljava/time/chrono/ChronoLocalDateTime<*>;)Z", $PUBLIC},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSupported", "(Ljava/time/temporal/TemporalUnit;)Z", nullptr, $PUBLIC},
	{"lambda$timeLineOrder$b9959cb5$1", "(Ljava/time/chrono/ChronoLocalDateTime;Ljava/time/chrono/ChronoLocalDateTime;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(ChronoLocalDateTime*,ChronoLocalDateTime*)>(&ChronoLocalDateTime::lambda$timeLineOrder$b9959cb5$1))},
	{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDateTime;", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDateTime<TD;>;", $PUBLIC},
	{"minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDateTime;", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDateTime<TD;>;", $PUBLIC},
	{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDateTime;", nullptr, $PUBLIC | $ABSTRACT},
	{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDateTime;", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDateTime<TD;>;", $PUBLIC},
	{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC},
	{"timeLineOrder", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/time/chrono/ChronoLocalDateTime<*>;>;", $PUBLIC | $STATIC, $method(static_cast<$Comparator*(*)()>(&ChronoLocalDateTime::timeLineOrder))},
	{"toEpochSecond", "(Ljava/time/ZoneOffset;)J", nullptr, $PUBLIC},
	{"toInstant", "(Ljava/time/ZoneOffset;)Ljava/time/Instant;", nullptr, $PUBLIC},
	{"toLocalDate", "()Ljava/time/chrono/ChronoLocalDate;", "()TD;", $PUBLIC | $ABSTRACT},
	{"toLocalTime", "()Ljava/time/LocalTime;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ChronoLocalDateTime;", nullptr, $PUBLIC | $ABSTRACT},
	{"with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ChronoLocalDateTime;", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ChronoLocalDateTime<TD;>;", $PUBLIC},
	{}
};

$ClassInfo _ChronoLocalDateTime_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.chrono.ChronoLocalDateTime",
	nullptr,
	"java.time.temporal.Temporal,java.time.temporal.TemporalAdjuster,java.lang.Comparable",
	nullptr,
	_ChronoLocalDateTime_MethodInfo_,
	"<D::Ljava/time/chrono/ChronoLocalDate;>Ljava/lang/Object;Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalAdjuster;Ljava/lang/Comparable<Ljava/time/chrono/ChronoLocalDateTime<*>;>;"
};

$Object* allocate$ChronoLocalDateTime($Class* clazz) {
	return $of($alloc(ChronoLocalDateTime));
}

bool ChronoLocalDateTime::equals(Object$* obj) {
	 return this->$Temporal::equals(obj);
}

int32_t ChronoLocalDateTime::hashCode() {
	 return this->$Temporal::hashCode();
}

$String* ChronoLocalDateTime::toString() {
	 return this->$Temporal::toString();
}

$Object* ChronoLocalDateTime::clone() {
	 return this->$Temporal::clone();
}

void ChronoLocalDateTime::finalize() {
	this->$Temporal::finalize();
}

$Comparator* ChronoLocalDateTime::timeLineOrder() {
	$init(ChronoLocalDateTime);
	return $cast($Comparator, $cast($Serializable, static_cast<$Comparator*>($new(ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1))));
}

ChronoLocalDateTime* ChronoLocalDateTime::from($TemporalAccessor* temporal) {
	$init(ChronoLocalDateTime);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(ChronoLocalDateTime, temporal)) {
		return $cast(ChronoLocalDateTime, temporal);
	}
	$Objects::requireNonNull($of(temporal), "temporal"_s);
	$var($Chronology, chrono, $cast($Chronology, $nc(temporal)->query($($TemporalQueries::chronology()))));
	if (chrono == nullptr) {
		$throwNew($DateTimeException, $$str({"Unable to obtain ChronoLocalDateTime from TemporalAccessor: "_s, $of(temporal)->getClass()}));
	}
	return $nc(chrono)->localDateTime(temporal);
}

$Chronology* ChronoLocalDateTime::getChronology() {
	return $nc($(toLocalDate()))->getChronology();
}

bool ChronoLocalDateTime::isSupported($TemporalUnit* unit) {
	if ($instanceOf($ChronoUnit, unit)) {
		$init($ChronoUnit);
		return !$equals(unit, $ChronoUnit::FOREVER);
	}
	return unit != nullptr && unit->isSupportedBy(this);
}

ChronoLocalDateTime* ChronoLocalDateTime::with($TemporalAdjuster* adjuster) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoLocalDateTimeImpl::ensureValid(var$0, $($Temporal::with(adjuster)));
}

ChronoLocalDateTime* ChronoLocalDateTime::plus($TemporalAmount* amount) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoLocalDateTimeImpl::ensureValid(var$0, $($Temporal::plus(amount)));
}

ChronoLocalDateTime* ChronoLocalDateTime::minus($TemporalAmount* amount) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoLocalDateTimeImpl::ensureValid(var$0, $($Temporal::minus(amount)));
}

ChronoLocalDateTime* ChronoLocalDateTime::minus(int64_t amountToSubtract, $TemporalUnit* unit) {
	$useLocalCurrentObjectStackCache();
	$var($Chronology, var$0, getChronology());
	return $ChronoLocalDateTimeImpl::ensureValid(var$0, $($Temporal::minus(amountToSubtract, unit)));
}

$Object* ChronoLocalDateTime::query($TemporalQuery* query) {
	bool var$1 = query == $TemporalQueries::zoneId();
	bool var$0 = var$1 || query == $TemporalQueries::zone();
	if (var$0 || query == $TemporalQueries::offset()) {
		return $of(nullptr);
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

$Temporal* ChronoLocalDateTime::adjustInto($Temporal* temporal) {
	$useLocalCurrentObjectStackCache();
	$init($ChronoField);
	return $nc($($nc(temporal)->with($ChronoField::EPOCH_DAY, $nc($(toLocalDate()))->toEpochDay())))->with($ChronoField::NANO_OF_DAY, $nc($(toLocalTime()))->toNanoOfDay());
}

$String* ChronoLocalDateTime::format($DateTimeFormatter* formatter) {
	$Objects::requireNonNull($of(formatter), "formatter"_s);
	return $nc(formatter)->format(this);
}

$Instant* ChronoLocalDateTime::toInstant($ZoneOffset* offset) {
	int64_t var$0 = toEpochSecond(offset);
	return $Instant::ofEpochSecond(var$0, $nc($(toLocalTime()))->getNano());
}

int64_t ChronoLocalDateTime::toEpochSecond($ZoneOffset* offset) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(offset), "offset"_s);
	int64_t epochDay = $nc($(toLocalDate()))->toEpochDay();
	int64_t secs = epochDay * 0x00015180 + $nc($(toLocalTime()))->toSecondOfDay();
	secs -= $nc(offset)->getTotalSeconds();
	return secs;
}

int32_t ChronoLocalDateTime::compareTo(ChronoLocalDateTime* other) {
	$useLocalCurrentObjectStackCache();
	int32_t cmp = $nc($(toLocalDate()))->compareTo($($nc(other)->toLocalDate()));
	if (cmp == 0) {
		cmp = $nc($(toLocalTime()))->compareTo($($nc(other)->toLocalTime()));
		if (cmp == 0) {
			cmp = $nc($(getChronology()))->compareTo($($nc(other)->getChronology()));
		}
	}
	return cmp;
}

bool ChronoLocalDateTime::isAfter(ChronoLocalDateTime* other) {
	$useLocalCurrentObjectStackCache();
	int64_t thisEpDay = $nc($(this->toLocalDate()))->toEpochDay();
	int64_t otherEpDay = $nc($($nc(other)->toLocalDate()))->toEpochDay();
	bool var$0 = thisEpDay > otherEpDay;
	if (!var$0) {
		bool var$1 = thisEpDay == otherEpDay;
		if (var$1) {
			int64_t var$2 = $nc($(this->toLocalTime()))->toNanoOfDay();
			var$1 = var$2 > $nc($(other->toLocalTime()))->toNanoOfDay();
		}
		var$0 = (var$1);
	}
	return var$0;
}

bool ChronoLocalDateTime::isBefore(ChronoLocalDateTime* other) {
	$useLocalCurrentObjectStackCache();
	int64_t thisEpDay = $nc($(this->toLocalDate()))->toEpochDay();
	int64_t otherEpDay = $nc($($nc(other)->toLocalDate()))->toEpochDay();
	bool var$0 = thisEpDay < otherEpDay;
	if (!var$0) {
		bool var$1 = thisEpDay == otherEpDay;
		if (var$1) {
			int64_t var$2 = $nc($(this->toLocalTime()))->toNanoOfDay();
			var$1 = var$2 < $nc($(other->toLocalTime()))->toNanoOfDay();
		}
		var$0 = (var$1);
	}
	return var$0;
}

bool ChronoLocalDateTime::isEqual(ChronoLocalDateTime* other) {
	$useLocalCurrentObjectStackCache();
	int64_t var$1 = $nc($(this->toLocalTime()))->toNanoOfDay();
	bool var$0 = var$1 == $nc($($nc(other)->toLocalTime()))->toNanoOfDay();
	if (var$0) {
		int64_t var$2 = $nc($(this->toLocalDate()))->toEpochDay();
		var$0 = var$2 == $nc($(other->toLocalDate()))->toEpochDay();
	}
	return var$0;
}

int32_t ChronoLocalDateTime::compareTo(Object$* other) {
	return this->compareTo($cast(ChronoLocalDateTime, other));
}

$Object* ChronoLocalDateTime::$deserializeLambda$($SerializedLambda* lambda) {
	$init(ChronoLocalDateTime);
	$useLocalCurrentObjectStackCache();
	{
		$var($String, s5496$, $nc(lambda)->getImplMethodName());
		int32_t tmp5496$ = -1;
		switch ($nc(s5496$)->hashCode()) {
		case 0x23CDB931:
			{
				if (s5496$->equals("lambda$timeLineOrder$b9959cb5$1"_s)) {
					tmp5496$ = 0;
				}
				break;
			}
		}
		switch (tmp5496$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("java/util/Comparator"_s);
				bool var$2 = var$3 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("compare"_s);
				bool var$1 = var$2 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/Object;Ljava/lang/Object;)I"_s);
				bool var$0 = var$1 && $nc($of($(lambda->getImplClass())))->equals("java/time/chrono/ChronoLocalDateTime"_s);
				if (var$0 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/time/chrono/ChronoLocalDateTime;Ljava/time/chrono/ChronoLocalDateTime;)I"_s)) {
					return $of(static_cast<$Comparator*>($new(ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1)));
				}
				break;
			}
		}
	}
	$throwNew($IllegalArgumentException, "Invalid lambda deserialization"_s);
}

int32_t ChronoLocalDateTime::lambda$timeLineOrder$b9959cb5$1(ChronoLocalDateTime* dateTime1, ChronoLocalDateTime* dateTime2) {
	$init(ChronoLocalDateTime);
	$useLocalCurrentObjectStackCache();
	int64_t var$0 = $nc($($nc(dateTime1)->toLocalDate()))->toEpochDay();
	int32_t cmp = $Long::compare(var$0, $nc($($nc(dateTime2)->toLocalDate()))->toEpochDay());
	if (cmp == 0) {
		int64_t var$1 = $nc($($nc(dateTime1)->toLocalTime()))->toNanoOfDay();
		cmp = $Long::compare(var$1, $nc($($nc(dateTime2)->toLocalTime()))->toNanoOfDay());
	}
	return cmp;
}

$Class* ChronoLocalDateTime::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1::classInfo$.name)) {
			return ChronoLocalDateTime$$Lambda$lambda$timeLineOrder$b9959cb5$1::load$(name, initialize);
		}
	}
	$loadClass(ChronoLocalDateTime, name, initialize, &_ChronoLocalDateTime_ClassInfo_, allocate$ChronoLocalDateTime);
	return class$;
}

$Class* ChronoLocalDateTime::class$ = nullptr;

		} // chrono
	} // time
} // java