#include <java/time/LocalTime.h>

#include <java/io/DataInput.h>
#include <java/io/DataOutput.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/time/Clock.h>
#include <java/time/DateTimeException.h>
#include <java/time/Duration.h>
#include <java/time/Instant.h>
#include <java/time/LocalDate.h>
#include <java/time/LocalDateTime.h>
#include <java/time/LocalTime$1.h>
#include <java/time/OffsetTime.h>
#include <java/time/Ser.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
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
#include <java/time/zone/ZoneRules.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef HOURS
#undef HOURS_PER_DAY
#undef HOUR_OF_DAY
#undef ISO_LOCAL_TIME
#undef LOCAL_TIME_TYPE
#undef MAX
#undef MAX_VALUE
#undef MICROS_PER_DAY
#undef MICRO_OF_DAY
#undef MIDNIGHT
#undef MILLIS_PER_DAY
#undef MIN
#undef MINUTES_PER_DAY
#undef MINUTES_PER_HOUR
#undef MINUTE_OF_HOUR
#undef MIN_VALUE
#undef NANOS
#undef NANOS_PER_DAY
#undef NANOS_PER_HOUR
#undef NANOS_PER_MILLI
#undef NANOS_PER_MINUTE
#undef NANOS_PER_SECOND
#undef NANO_OF_DAY
#undef NANO_OF_SECOND
#undef NOON
#undef SECONDS_PER_DAY
#undef SECONDS_PER_HOUR
#undef SECONDS_PER_MINUTE
#undef SECOND_OF_DAY
#undef SECOND_OF_MINUTE

using $LocalTimeArray = $Array<::java::time::LocalTime>;
using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Clock = ::java::time::Clock;
using $DateTimeException = ::java::time::DateTimeException;
using $Duration = ::java::time::Duration;
using $Instant = ::java::time::Instant;
using $LocalDate = ::java::time::LocalDate;
using $LocalDateTime = ::java::time::LocalDateTime;
using $LocalTime$1 = ::java::time::LocalTime$1;
using $OffsetTime = ::java::time::OffsetTime;
using $Ser = ::java::time::Ser;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;
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
using $ZoneRules = ::java::time::zone::ZoneRules;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {

class LocalTime$$Lambda$from : public $TemporalQuery {
	$class(LocalTime$$Lambda$from, $NO_CLASS_INIT, $TemporalQuery)
public:
	void init$() {
	}
	virtual $Object* queryFrom($TemporalAccessor* temporal) override {
		 return $of(LocalTime::from(temporal));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LocalTime$$Lambda$from>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LocalTime$$Lambda$from::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocalTime$$Lambda$from::*)()>(&LocalTime$$Lambda$from::init$))},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LocalTime$$Lambda$from::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.time.LocalTime$$Lambda$from",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	methodInfos
};
$Class* LocalTime$$Lambda$from::load$($String* name, bool initialize) {
	$loadClass(LocalTime$$Lambda$from, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LocalTime$$Lambda$from::class$ = nullptr;

$CompoundAttribute _LocalTime_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$FieldInfo _LocalTime_FieldInfo_[] = {
	{"MIN", "Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LocalTime, MIN)},
	{"MAX", "Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LocalTime, MAX)},
	{"MIDNIGHT", "Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LocalTime, MIDNIGHT)},
	{"NOON", "Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LocalTime, NOON)},
	{"HOURS", "[Ljava/time/LocalTime;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LocalTime, HOURS)},
	{"HOURS_PER_DAY", "I", nullptr, $STATIC | $FINAL, $constField(LocalTime, HOURS_PER_DAY)},
	{"MINUTES_PER_HOUR", "I", nullptr, $STATIC | $FINAL, $constField(LocalTime, MINUTES_PER_HOUR)},
	{"MINUTES_PER_DAY", "I", nullptr, $STATIC | $FINAL, $constField(LocalTime, MINUTES_PER_DAY)},
	{"SECONDS_PER_MINUTE", "I", nullptr, $STATIC | $FINAL, $constField(LocalTime, SECONDS_PER_MINUTE)},
	{"SECONDS_PER_HOUR", "I", nullptr, $STATIC | $FINAL, $constField(LocalTime, SECONDS_PER_HOUR)},
	{"SECONDS_PER_DAY", "I", nullptr, $STATIC | $FINAL, $constField(LocalTime, SECONDS_PER_DAY)},
	{"MILLIS_PER_DAY", "J", nullptr, $STATIC | $FINAL, $constField(LocalTime, MILLIS_PER_DAY)},
	{"MICROS_PER_DAY", "J", nullptr, $STATIC | $FINAL, $constField(LocalTime, MICROS_PER_DAY)},
	{"NANOS_PER_MILLI", "J", nullptr, $STATIC | $FINAL, $constField(LocalTime, NANOS_PER_MILLI)},
	{"NANOS_PER_SECOND", "J", nullptr, $STATIC | $FINAL, $constField(LocalTime, NANOS_PER_SECOND)},
	{"NANOS_PER_MINUTE", "J", nullptr, $STATIC | $FINAL, $constField(LocalTime, NANOS_PER_MINUTE)},
	{"NANOS_PER_HOUR", "J", nullptr, $STATIC | $FINAL, $constField(LocalTime, NANOS_PER_HOUR)},
	{"NANOS_PER_DAY", "J", nullptr, $STATIC | $FINAL, $constField(LocalTime, NANOS_PER_DAY)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LocalTime, serialVersionUID)},
	{"hour", "B", nullptr, $PRIVATE | $FINAL, $field(LocalTime, hour)},
	{"minute", "B", nullptr, $PRIVATE | $FINAL, $field(LocalTime, minute)},
	{"second", "B", nullptr, $PRIVATE | $FINAL, $field(LocalTime, second)},
	{"nano", "I", nullptr, $PRIVATE | $FINAL, $field(LocalTime, nano)},
	{}
};

$MethodInfo _LocalTime_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(LocalTime::*)(int32_t,int32_t,int32_t,int32_t)>(&LocalTime::init$))},
	{"adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"atDate", "(Ljava/time/LocalDate;)Ljava/time/LocalDateTime;", nullptr, $PUBLIC, $method(static_cast<$LocalDateTime*(LocalTime::*)($LocalDate*)>(&LocalTime::atDate))},
	{"atOffset", "(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;", nullptr, $PUBLIC, $method(static_cast<$OffsetTime*(LocalTime::*)($ZoneOffset*)>(&LocalTime::atOffset))},
	{"compareTo", "(Ljava/time/LocalTime;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(LocalTime::*)(LocalTime*)>(&LocalTime::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"create", "(IIII)Ljava/time/LocalTime;", nullptr, $PRIVATE | $STATIC, $method(static_cast<LocalTime*(*)(int32_t,int32_t,int32_t,int32_t)>(&LocalTime::create))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"format", "(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(LocalTime::*)($DateTimeFormatter*)>(&LocalTime::format))},
	{"from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)($TemporalAccessor*)>(&LocalTime::from))},
	{"get", "(Ljava/time/temporal/TemporalField;)I", nullptr, $PUBLIC},
	{"get0", "(Ljava/time/temporal/TemporalField;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(LocalTime::*)($TemporalField*)>(&LocalTime::get0))},
	{"getHour", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(LocalTime::*)()>(&LocalTime::getHour))},
	{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC},
	{"getMinute", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(LocalTime::*)()>(&LocalTime::getMinute))},
	{"getNano", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(LocalTime::*)()>(&LocalTime::getNano))},
	{"getSecond", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(LocalTime::*)()>(&LocalTime::getSecond))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isAfter", "(Ljava/time/LocalTime;)Z", nullptr, $PUBLIC, $method(static_cast<bool(LocalTime::*)(LocalTime*)>(&LocalTime::isAfter))},
	{"isBefore", "(Ljava/time/LocalTime;)Z", nullptr, $PUBLIC, $method(static_cast<bool(LocalTime::*)(LocalTime*)>(&LocalTime::isBefore))},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/time/temporal/TemporalUnit;)Z", nullptr, $PUBLIC},
	{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;", nullptr, $PUBLIC},
	{"minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;", nullptr, $PUBLIC},
	{"minusHours", "(J)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int64_t)>(&LocalTime::minusHours))},
	{"minusMinutes", "(J)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int64_t)>(&LocalTime::minusMinutes))},
	{"minusNanos", "(J)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int64_t)>(&LocalTime::minusNanos))},
	{"minusSeconds", "(J)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int64_t)>(&LocalTime::minusSeconds))},
	{"now", "()Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)()>(&LocalTime::now))},
	{"now", "(Ljava/time/ZoneId;)Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)($ZoneId*)>(&LocalTime::now))},
	{"now", "(Ljava/time/Clock;)Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)($Clock*)>(&LocalTime::now))},
	{"of", "(II)Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)(int32_t,int32_t)>(&LocalTime::of))},
	{"of", "(III)Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)(int32_t,int32_t,int32_t)>(&LocalTime::of))},
	{"of", "(IIII)Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)(int32_t,int32_t,int32_t,int32_t)>(&LocalTime::of))},
	{"ofInstant", "(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)($Instant*,$ZoneId*)>(&LocalTime::ofInstant))},
	{"ofNanoOfDay", "(J)Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)(int64_t)>(&LocalTime::ofNanoOfDay))},
	{"ofSecondOfDay", "(J)Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)(int64_t)>(&LocalTime::ofSecondOfDay))},
	{"parse", "(Ljava/lang/CharSequence;)Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)($CharSequence*)>(&LocalTime::parse))},
	{"parse", "(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LocalTime*(*)($CharSequence*,$DateTimeFormatter*)>(&LocalTime::parse))},
	{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;", nullptr, $PUBLIC},
	{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;", nullptr, $PUBLIC},
	{"plusHours", "(J)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int64_t)>(&LocalTime::plusHours))},
	{"plusMinutes", "(J)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int64_t)>(&LocalTime::plusMinutes))},
	{"plusNanos", "(J)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int64_t)>(&LocalTime::plusNanos))},
	{"plusSeconds", "(J)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int64_t)>(&LocalTime::plusSeconds))},
	{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC},
	{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"readExternal", "(Ljava/io/DataInput;)Ljava/time/LocalTime;", nullptr, $STATIC, $method(static_cast<LocalTime*(*)($DataInput*)>(&LocalTime::readExternal)), "java.io.IOException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LocalTime::*)($ObjectInputStream*)>(&LocalTime::readObject)), "java.io.InvalidObjectException"},
	{"toEpochSecond", "(Ljava/time/LocalDate;Ljava/time/ZoneOffset;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(LocalTime::*)($LocalDate*,$ZoneOffset*)>(&LocalTime::toEpochSecond))},
	{"toNanoOfDay", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(LocalTime::*)()>(&LocalTime::toNanoOfDay))},
	{"toSecondOfDay", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(LocalTime::*)()>(&LocalTime::toSecondOfDay))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"truncatedTo", "(Ljava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)($TemporalUnit*)>(&LocalTime::truncatedTo))},
	{"until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC},
	{"with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalTime;", nullptr, $PUBLIC},
	{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalTime;", nullptr, $PUBLIC},
	{"withHour", "(I)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int32_t)>(&LocalTime::withHour))},
	{"withMinute", "(I)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int32_t)>(&LocalTime::withMinute))},
	{"withNano", "(I)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int32_t)>(&LocalTime::withNano))},
	{"withSecond", "(I)Ljava/time/LocalTime;", nullptr, $PUBLIC, $method(static_cast<LocalTime*(LocalTime::*)(int32_t)>(&LocalTime::withSecond))},
	{"writeExternal", "(Ljava/io/DataOutput;)V", nullptr, 0, $method(static_cast<void(LocalTime::*)($DataOutput*)>(&LocalTime::writeExternal)), "java.io.IOException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(LocalTime::*)()>(&LocalTime::writeReplace))},
	{}
};

$InnerClassInfo _LocalTime_InnerClassesInfo_[] = {
	{"java.time.LocalTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _LocalTime_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.LocalTime",
	"java.lang.Object",
	"java.time.temporal.Temporal,java.time.temporal.TemporalAdjuster,java.lang.Comparable,java.io.Serializable",
	_LocalTime_FieldInfo_,
	_LocalTime_MethodInfo_,
	"Ljava/lang/Object;Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalAdjuster;Ljava/lang/Comparable<Ljava/time/LocalTime;>;Ljava/io/Serializable;",
	nullptr,
	_LocalTime_InnerClassesInfo_,
	_LocalTime_Annotations_,
	nullptr,
	"java.time.LocalTime$1"
};

$Object* allocate$LocalTime($Class* clazz) {
	return $of($alloc(LocalTime));
}

$Object* LocalTime::clone() {
	 return this->$Temporal::clone();
}

void LocalTime::finalize() {
	this->$Temporal::finalize();
}

LocalTime* LocalTime::MIN = nullptr;
LocalTime* LocalTime::MAX = nullptr;
LocalTime* LocalTime::MIDNIGHT = nullptr;
LocalTime* LocalTime::NOON = nullptr;
$LocalTimeArray* LocalTime::HOURS = nullptr;

LocalTime* LocalTime::now() {
	$init(LocalTime);
	return now($($Clock::systemDefaultZone()));
}

LocalTime* LocalTime::now($ZoneId* zone) {
	$init(LocalTime);
	return now($($Clock::system(zone)));
}

LocalTime* LocalTime::now($Clock* clock) {
	$init(LocalTime);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(clock), "clock"_s);
	$var($Instant, now, $nc(clock)->instant());
	return ofInstant(now, $(clock->getZone()));
}

LocalTime* LocalTime::of(int32_t hour, int32_t minute) {
	$init(LocalTime);
	$init($ChronoField);
	$ChronoField::HOUR_OF_DAY->checkValidValue(hour);
	if (minute == 0) {
		return $nc(LocalTime::HOURS)->get(hour);
	}
	$ChronoField::MINUTE_OF_HOUR->checkValidValue(minute);
	return $new(LocalTime, hour, minute, 0, 0);
}

LocalTime* LocalTime::of(int32_t hour, int32_t minute, int32_t second) {
	$init(LocalTime);
	$init($ChronoField);
	$ChronoField::HOUR_OF_DAY->checkValidValue(hour);
	if ((minute | second) == 0) {
		return $nc(LocalTime::HOURS)->get(hour);
	}
	$ChronoField::MINUTE_OF_HOUR->checkValidValue(minute);
	$ChronoField::SECOND_OF_MINUTE->checkValidValue(second);
	return $new(LocalTime, hour, minute, second, 0);
}

LocalTime* LocalTime::of(int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond) {
	$init(LocalTime);
	$init($ChronoField);
	$ChronoField::HOUR_OF_DAY->checkValidValue(hour);
	$ChronoField::MINUTE_OF_HOUR->checkValidValue(minute);
	$ChronoField::SECOND_OF_MINUTE->checkValidValue(second);
	$ChronoField::NANO_OF_SECOND->checkValidValue(nanoOfSecond);
	return create(hour, minute, second, nanoOfSecond);
}

LocalTime* LocalTime::ofInstant($Instant* instant, $ZoneId* zone) {
	$init(LocalTime);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(instant), "instant"_s);
	$Objects::requireNonNull($of(zone), "zone"_s);
	$var($ZoneOffset, offset, $nc($($nc(zone)->getRules()))->getOffset(instant));
	int64_t var$0 = $nc(instant)->getEpochSecond();
	int64_t localSecond = var$0 + $nc(offset)->getTotalSeconds();
	int32_t secsOfDay = $Math::floorMod(localSecond, LocalTime::SECONDS_PER_DAY);
	return ofNanoOfDay(secsOfDay * LocalTime::NANOS_PER_SECOND + instant->getNano());
}

LocalTime* LocalTime::ofSecondOfDay(int64_t secondOfDay) {
	$init(LocalTime);
	$init($ChronoField);
	$ChronoField::SECOND_OF_DAY->checkValidValue(secondOfDay);
	int32_t hours = (int32_t)($div(secondOfDay, LocalTime::SECONDS_PER_HOUR));
	secondOfDay -= hours * LocalTime::SECONDS_PER_HOUR;
	int32_t minutes = (int32_t)($div(secondOfDay, LocalTime::SECONDS_PER_MINUTE));
	secondOfDay -= minutes * LocalTime::SECONDS_PER_MINUTE;
	return create(hours, minutes, (int32_t)secondOfDay, 0);
}

LocalTime* LocalTime::ofNanoOfDay(int64_t nanoOfDay) {
	$init(LocalTime);
	$init($ChronoField);
	$ChronoField::NANO_OF_DAY->checkValidValue(nanoOfDay);
	int32_t hours = (int32_t)($div(nanoOfDay, LocalTime::NANOS_PER_HOUR));
	nanoOfDay -= hours * LocalTime::NANOS_PER_HOUR;
	int32_t minutes = (int32_t)($div(nanoOfDay, LocalTime::NANOS_PER_MINUTE));
	nanoOfDay -= minutes * LocalTime::NANOS_PER_MINUTE;
	int32_t seconds = (int32_t)($div(nanoOfDay, LocalTime::NANOS_PER_SECOND));
	nanoOfDay -= seconds * LocalTime::NANOS_PER_SECOND;
	return create(hours, minutes, seconds, (int32_t)nanoOfDay);
}

LocalTime* LocalTime::from($TemporalAccessor* temporal) {
	$init(LocalTime);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(temporal), "temporal"_s);
	$var(LocalTime, time, $cast(LocalTime, $nc(temporal)->query($($TemporalQueries::localTime()))));
	if (time == nullptr) {
		$var($String, var$0, $$str({"Unable to obtain LocalTime from TemporalAccessor: "_s, temporal, " of type "_s}));
		$throwNew($DateTimeException, $$concat(var$0, $($of(temporal)->getClass()->getName())));
	}
	return time;
}

LocalTime* LocalTime::parse($CharSequence* text) {
	$init(LocalTime);
	$init($DateTimeFormatter);
	return parse(text, $DateTimeFormatter::ISO_LOCAL_TIME);
}

LocalTime* LocalTime::parse($CharSequence* text, $DateTimeFormatter* formatter) {
	$init(LocalTime);
	$Objects::requireNonNull($of(formatter), "formatter"_s);
	return $cast(LocalTime, $nc(formatter)->parse(text, static_cast<$TemporalQuery*>($$new(LocalTime$$Lambda$from))));
}

LocalTime* LocalTime::create(int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond) {
	$init(LocalTime);
	if (((minute | second) | nanoOfSecond) == 0) {
		return $nc(LocalTime::HOURS)->get(hour);
	}
	return $new(LocalTime, hour, minute, second, nanoOfSecond);
}

void LocalTime::init$(int32_t hour, int32_t minute, int32_t second, int32_t nanoOfSecond) {
	this->hour = (int8_t)hour;
	this->minute = (int8_t)minute;
	this->second = (int8_t)second;
	this->nano = nanoOfSecond;
}

bool LocalTime::isSupported($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		return $nc(field)->isTimeBased();
	}
	return field != nullptr && field->isSupportedBy(this);
}

bool LocalTime::isSupported($TemporalUnit* unit) {
	if ($instanceOf($ChronoUnit, unit)) {
		return $nc(unit)->isTimeBased();
	}
	return unit != nullptr && unit->isSupportedBy(this);
}

$ValueRange* LocalTime::range($TemporalField* field) {
	return $Temporal::range(field);
}

int32_t LocalTime::get($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		return get0(field);
	}
	return $Temporal::get(field);
}

int64_t LocalTime::getLong($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		$init($ChronoField);
		if ($equals(field, $ChronoField::NANO_OF_DAY)) {
			return toNanoOfDay();
		}
		if ($equals(field, $ChronoField::MICRO_OF_DAY)) {
			return toNanoOfDay() / 1000;
		}
		return get0(field);
	}
	return $nc(field)->getFrom(this);
}

int32_t LocalTime::get0($TemporalField* field) {
	$init($LocalTime$1);
	{
		int32_t ham = 0;
		switch ($nc($LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->get($nc(($cast($ChronoField, field)))->ordinal())) {
		case 1:
			{
				return this->nano;
			}
		case 2:
			{
				$throwNew($UnsupportedTemporalTypeException, "Invalid field \'NanoOfDay\' for get() method, use getLong() instead"_s);
			}
		case 3:
			{
				return this->nano / 1000;
			}
		case 4:
			{
				$throwNew($UnsupportedTemporalTypeException, "Invalid field \'MicroOfDay\' for get() method, use getLong() instead"_s);
			}
		case 5:
			{
				return this->nano / 0x000F4240;
			}
		case 6:
			{
				return (int32_t)(toNanoOfDay() / 0x000F4240);
			}
		case 7:
			{
				return this->second;
			}
		case 8:
			{
				return toSecondOfDay();
			}
		case 9:
			{
				return this->minute;
			}
		case 10:
			{
				return this->hour * 60 + this->minute;
			}
		case 11:
			{
				return this->hour % 12;
			}
		case 12:
			{
				ham = this->hour % 12;
				return (ham % 12 == 0 ? 12 : ham);
			}
		case 13:
			{
				return this->hour;
			}
		case 14:
			{
				return (this->hour == 0 ? (int8_t)24 : this->hour);
			}
		case 15:
			{
				return this->hour / 12;
			}
		}
	}
	$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
}

int32_t LocalTime::getHour() {
	return this->hour;
}

int32_t LocalTime::getMinute() {
	return this->minute;
}

int32_t LocalTime::getSecond() {
	return this->second;
}

int32_t LocalTime::getNano() {
	return this->nano;
}

LocalTime* LocalTime::with($TemporalAdjuster* adjuster) {
	if ($instanceOf(LocalTime, adjuster)) {
		return $cast(LocalTime, adjuster);
	}
	return $cast(LocalTime, $nc(adjuster)->adjustInto(this));
}

LocalTime* LocalTime::with($TemporalField* field, int64_t newValue) {
	{
		$ChronoField* chronoField = nullptr;
		bool var$0 = $instanceOf($ChronoField, field);
		if (var$0) {
			chronoField = $cast($ChronoField, field);
			var$0 = true;
		}
		if (var$0) {
			$nc(chronoField)->checkValidValue(newValue);
			$init($LocalTime$1);
			switch ($nc($LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->get((chronoField)->ordinal())) {
			case 1:
				{
					return withNano((int32_t)newValue);
				}
			case 2:
				{
					return LocalTime::ofNanoOfDay(newValue);
				}
			case 3:
				{
					return withNano((int32_t)newValue * 1000);
				}
			case 4:
				{
					return LocalTime::ofNanoOfDay(newValue * 1000);
				}
			case 5:
				{
					return withNano((int32_t)newValue * 0x000F4240);
				}
			case 6:
				{
					return LocalTime::ofNanoOfDay(newValue * 0x000F4240);
				}
			case 7:
				{
					return withSecond((int32_t)newValue);
				}
			case 8:
				{
					return plusSeconds(newValue - toSecondOfDay());
				}
			case 9:
				{
					return withMinute((int32_t)newValue);
				}
			case 10:
				{
					return plusMinutes(newValue - (this->hour * 60 + this->minute));
				}
			case 11:
				{
					return plusHours(newValue - (this->hour % 12));
				}
			case 12:
				{
					return plusHours((newValue == 12 ? (int64_t)0 : newValue) - (this->hour % 12));
				}
			case 13:
				{
					return withHour((int32_t)newValue);
				}
			case 14:
				{
					return withHour((int32_t)(newValue == 24 ? (int64_t)0 : newValue));
				}
			case 15:
				{
					return plusHours((newValue - (this->hour / 12)) * 12);
				}
			}
			$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
		}
	}
	return $cast(LocalTime, $nc(field)->adjustInto(this, newValue));
}

LocalTime* LocalTime::withHour(int32_t hour) {
	if (this->hour == hour) {
		return this;
	}
	$init($ChronoField);
	$ChronoField::HOUR_OF_DAY->checkValidValue(hour);
	return create(hour, this->minute, this->second, this->nano);
}

LocalTime* LocalTime::withMinute(int32_t minute) {
	if (this->minute == minute) {
		return this;
	}
	$init($ChronoField);
	$ChronoField::MINUTE_OF_HOUR->checkValidValue(minute);
	return create(this->hour, minute, this->second, this->nano);
}

LocalTime* LocalTime::withSecond(int32_t second) {
	if (this->second == second) {
		return this;
	}
	$init($ChronoField);
	$ChronoField::SECOND_OF_MINUTE->checkValidValue(second);
	return create(this->hour, this->minute, second, this->nano);
}

LocalTime* LocalTime::withNano(int32_t nanoOfSecond) {
	if (this->nano == nanoOfSecond) {
		return this;
	}
	$init($ChronoField);
	$ChronoField::NANO_OF_SECOND->checkValidValue(nanoOfSecond);
	return create(this->hour, this->minute, this->second, nanoOfSecond);
}

LocalTime* LocalTime::truncatedTo($TemporalUnit* unit) {
	$init($ChronoUnit);
	if ($equals(unit, $ChronoUnit::NANOS)) {
		return this;
	}
	$var($Duration, unitDur, $nc(unit)->getDuration());
	if ($nc(unitDur)->getSeconds() > LocalTime::SECONDS_PER_DAY) {
		$throwNew($UnsupportedTemporalTypeException, "Unit is too large to be used for truncation"_s);
	}
	int64_t dur = $nc(unitDur)->toNanos();
	if (($mod(LocalTime::NANOS_PER_DAY, dur)) != 0) {
		$throwNew($UnsupportedTemporalTypeException, "Unit must divide into a standard day without remainder"_s);
	}
	int64_t nod = toNanoOfDay();
	return ofNanoOfDay(($div(nod, dur)) * dur);
}

LocalTime* LocalTime::plus($TemporalAmount* amountToAdd) {
	return $cast(LocalTime, $nc(amountToAdd)->addTo(this));
}

LocalTime* LocalTime::plus(int64_t amountToAdd, $TemporalUnit* unit) {
	{
		$ChronoUnit* chronoUnit = nullptr;
		bool var$0 = $instanceOf($ChronoUnit, unit);
		if (var$0) {
			chronoUnit = $cast($ChronoUnit, unit);
			var$0 = true;
		}
		if (var$0) {
			$init($LocalTime$1);
			switch ($nc($LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->get($nc((chronoUnit))->ordinal())) {
			case 1:
				{
					return plusNanos(amountToAdd);
				}
			case 2:
				{
					return plusNanos(($mod(amountToAdd, LocalTime::MICROS_PER_DAY)) * 1000);
				}
			case 3:
				{
					return plusNanos(($mod(amountToAdd, LocalTime::MILLIS_PER_DAY)) * 0x000F4240);
				}
			case 4:
				{
					return plusSeconds(amountToAdd);
				}
			case 5:
				{
					return plusMinutes(amountToAdd);
				}
			case 6:
				{
					return plusHours(amountToAdd);
				}
			case 7:
				{
					return plusHours((amountToAdd % 2) * 12);
				}
			}
			$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported unit: "_s, unit}));
		}
	}
	return $cast(LocalTime, $nc(unit)->addTo(this, amountToAdd));
}

LocalTime* LocalTime::plusHours(int64_t hoursToAdd) {
	if (hoursToAdd == 0) {
		return this;
	}
	int32_t newHour = $mod(((int32_t)($mod(hoursToAdd, LocalTime::HOURS_PER_DAY)) + this->hour + LocalTime::HOURS_PER_DAY), LocalTime::HOURS_PER_DAY);
	return create(newHour, this->minute, this->second, this->nano);
}

LocalTime* LocalTime::plusMinutes(int64_t minutesToAdd) {
	if (minutesToAdd == 0) {
		return this;
	}
	int32_t mofd = this->hour * LocalTime::MINUTES_PER_HOUR + this->minute;
	int32_t newMofd = $mod(((int32_t)($mod(minutesToAdd, LocalTime::MINUTES_PER_DAY)) + mofd + LocalTime::MINUTES_PER_DAY), LocalTime::MINUTES_PER_DAY);
	if (mofd == newMofd) {
		return this;
	}
	int32_t newHour = $div(newMofd, LocalTime::MINUTES_PER_HOUR);
	int32_t newMinute = $mod(newMofd, LocalTime::MINUTES_PER_HOUR);
	return create(newHour, newMinute, this->second, this->nano);
}

LocalTime* LocalTime::plusSeconds(int64_t secondstoAdd) {
	if (secondstoAdd == 0) {
		return this;
	}
	int32_t sofd = this->hour * LocalTime::SECONDS_PER_HOUR + this->minute * LocalTime::SECONDS_PER_MINUTE + this->second;
	int32_t newSofd = $mod(((int32_t)($mod(secondstoAdd, LocalTime::SECONDS_PER_DAY)) + sofd + LocalTime::SECONDS_PER_DAY), LocalTime::SECONDS_PER_DAY);
	if (sofd == newSofd) {
		return this;
	}
	int32_t newHour = $div(newSofd, LocalTime::SECONDS_PER_HOUR);
	int32_t newMinute = $mod(($div(newSofd, LocalTime::SECONDS_PER_MINUTE)), LocalTime::MINUTES_PER_HOUR);
	int32_t newSecond = $mod(newSofd, LocalTime::SECONDS_PER_MINUTE);
	return create(newHour, newMinute, newSecond, this->nano);
}

LocalTime* LocalTime::plusNanos(int64_t nanosToAdd) {
	if (nanosToAdd == 0) {
		return this;
	}
	int64_t nofd = toNanoOfDay();
	int64_t newNofd = $mod((($mod(nanosToAdd, LocalTime::NANOS_PER_DAY)) + nofd + LocalTime::NANOS_PER_DAY), LocalTime::NANOS_PER_DAY);
	if (nofd == newNofd) {
		return this;
	}
	int32_t newHour = (int32_t)($div(newNofd, LocalTime::NANOS_PER_HOUR));
	int32_t newMinute = (int32_t)($mod(($div(newNofd, LocalTime::NANOS_PER_MINUTE)), LocalTime::MINUTES_PER_HOUR));
	int32_t newSecond = (int32_t)($mod(($div(newNofd, LocalTime::NANOS_PER_SECOND)), LocalTime::SECONDS_PER_MINUTE));
	int32_t newNano = (int32_t)($mod(newNofd, LocalTime::NANOS_PER_SECOND));
	return create(newHour, newMinute, newSecond, newNano);
}

LocalTime* LocalTime::minus($TemporalAmount* amountToSubtract) {
	return $cast(LocalTime, $nc(amountToSubtract)->subtractFrom(this));
}

LocalTime* LocalTime::minus(int64_t amountToSubtract, $TemporalUnit* unit) {
	return (amountToSubtract == $Long::MIN_VALUE ? $nc($(plus($Long::MAX_VALUE, unit)))->plus(1, unit) : plus(-amountToSubtract, unit));
}

LocalTime* LocalTime::minusHours(int64_t hoursToSubtract) {
	return plusHours(-($mod(hoursToSubtract, LocalTime::HOURS_PER_DAY)));
}

LocalTime* LocalTime::minusMinutes(int64_t minutesToSubtract) {
	return plusMinutes(-($mod(minutesToSubtract, LocalTime::MINUTES_PER_DAY)));
}

LocalTime* LocalTime::minusSeconds(int64_t secondsToSubtract) {
	return plusSeconds(-($mod(secondsToSubtract, LocalTime::SECONDS_PER_DAY)));
}

LocalTime* LocalTime::minusNanos(int64_t nanosToSubtract) {
	return plusNanos(-($mod(nanosToSubtract, LocalTime::NANOS_PER_DAY)));
}

$Object* LocalTime::query($TemporalQuery* query) {
	bool var$2 = query == $TemporalQueries::chronology();
	bool var$1 = var$2 || query == $TemporalQueries::zoneId();
	bool var$0 = var$1 || query == $TemporalQueries::zone();
	if (var$0 || query == $TemporalQueries::offset()) {
		return $of(nullptr);
	} else if (query == $TemporalQueries::localTime()) {
		return $of($of(this));
	} else if (query == $TemporalQueries::localDate()) {
		return $of(nullptr);
	} else if (query == $TemporalQueries::precision()) {
		$init($ChronoUnit);
		return $of($of($ChronoUnit::NANOS));
	}
	return $of($nc(query)->queryFrom(this));
}

$Temporal* LocalTime::adjustInto($Temporal* temporal) {
	$init($ChronoField);
	return $nc(temporal)->with($ChronoField::NANO_OF_DAY, toNanoOfDay());
}

int64_t LocalTime::until($Temporal* endExclusive, $TemporalUnit* unit) {
	$useLocalCurrentObjectStackCache();
	$var(LocalTime, end, LocalTime::from(endExclusive));
	{
		$ChronoUnit* chronoUnit = nullptr;
		bool var$0 = $instanceOf($ChronoUnit, unit);
		if (var$0) {
			chronoUnit = $cast($ChronoUnit, unit);
			var$0 = true;
		}
		if (var$0) {
			int64_t var$1 = $nc(end)->toNanoOfDay();
			int64_t nanosUntil = var$1 - toNanoOfDay();
			$init($LocalTime$1);
			switch ($nc($LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->get($nc((chronoUnit))->ordinal())) {
			case 1:
				{
					return nanosUntil;
				}
			case 2:
				{
					return nanosUntil / 1000;
				}
			case 3:
				{
					return nanosUntil / 0x000F4240;
				}
			case 4:
				{
					return $div(nanosUntil, LocalTime::NANOS_PER_SECOND);
				}
			case 5:
				{
					return $div(nanosUntil, LocalTime::NANOS_PER_MINUTE);
				}
			case 6:
				{
					return $div(nanosUntil, LocalTime::NANOS_PER_HOUR);
				}
			case 7:
				{
					return $div(nanosUntil, (12 * LocalTime::NANOS_PER_HOUR));
				}
			}
			$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported unit: "_s, unit}));
		}
	}
	return $nc(unit)->between(this, end);
}

$String* LocalTime::format($DateTimeFormatter* formatter) {
	$Objects::requireNonNull($of(formatter), "formatter"_s);
	return $nc(formatter)->format(this);
}

$LocalDateTime* LocalTime::atDate($LocalDate* date) {
	return $LocalDateTime::of(date, this);
}

$OffsetTime* LocalTime::atOffset($ZoneOffset* offset) {
	return $OffsetTime::of(this, offset);
}

int32_t LocalTime::toSecondOfDay() {
	int32_t total = this->hour * LocalTime::SECONDS_PER_HOUR;
	total += this->minute * LocalTime::SECONDS_PER_MINUTE;
	total += this->second;
	return total;
}

int64_t LocalTime::toNanoOfDay() {
	int64_t total = this->hour * LocalTime::NANOS_PER_HOUR;
	total += this->minute * LocalTime::NANOS_PER_MINUTE;
	total += this->second * LocalTime::NANOS_PER_SECOND;
	total += this->nano;
	return total;
}

int64_t LocalTime::toEpochSecond($LocalDate* date, $ZoneOffset* offset) {
	$Objects::requireNonNull($of(date), "date"_s);
	$Objects::requireNonNull($of(offset), "offset"_s);
	int64_t epochDay = $nc(date)->toEpochDay();
	int64_t secs = epochDay * 0x00015180 + toSecondOfDay();
	secs -= $nc(offset)->getTotalSeconds();
	return secs;
}

int32_t LocalTime::compareTo(LocalTime* other) {
	int32_t cmp = $Integer::compare(this->hour, $nc(other)->hour);
	if (cmp == 0) {
		cmp = $Integer::compare(this->minute, $nc(other)->minute);
		if (cmp == 0) {
			cmp = $Integer::compare(this->second, $nc(other)->second);
			if (cmp == 0) {
				cmp = $Integer::compare(this->nano, $nc(other)->nano);
			}
		}
	}
	return cmp;
}

bool LocalTime::isAfter(LocalTime* other) {
	return compareTo(other) > 0;
}

bool LocalTime::isBefore(LocalTime* other) {
	return compareTo(other) < 0;
}

bool LocalTime::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(LocalTime, other, nullptr);
	bool var$4 = $instanceOf(LocalTime, obj);
	if (var$4) {
		$assign(other, $cast(LocalTime, obj));
		var$4 = true;
	}
	bool var$3 = (var$4);
	bool var$2 = var$3 && this->hour == $nc(other)->hour;
	bool var$1 = var$2 && this->minute == other->minute;
	bool var$0 = var$1 && this->second == other->second;
	return var$0 && this->nano == other->nano;
}

int32_t LocalTime::hashCode() {
	int64_t nod = toNanoOfDay();
	return (int32_t)(nod ^ ((int64_t)((uint64_t)nod >> 32)));
}

$String* LocalTime::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, 18));
	int32_t hourValue = this->hour;
	int32_t minuteValue = this->minute;
	int32_t secondValue = this->second;
	int32_t nanoValue = this->nano;
	buf->append(hourValue < 10 ? "0"_s : ""_s)->append(hourValue)->append(minuteValue < 10 ? ":0"_s : ":"_s)->append(minuteValue);
	if (secondValue > 0 || nanoValue > 0) {
		buf->append(secondValue < 10 ? ":0"_s : ":"_s)->append(secondValue);
		if (nanoValue > 0) {
			buf->append(u'.');
			if (nanoValue % 0x000F4240 == 0) {
				buf->append($($nc($($Integer::toString((nanoValue / 0x000F4240) + 1000)))->substring(1)));
			} else if (nanoValue % 1000 == 0) {
				buf->append($($nc($($Integer::toString((nanoValue / 1000) + 0x000F4240)))->substring(1)));
			} else {
				buf->append($($nc($($Integer::toString((nanoValue) + 0x3B9ACA00)))->substring(1)));
			}
		}
	}
	return buf->toString();
}

$Object* LocalTime::writeReplace() {
	return $of($new($Ser, $Ser::LOCAL_TIME_TYPE, this));
}

void LocalTime::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

void LocalTime::writeExternal($DataOutput* out) {
	if (this->nano == 0) {
		if (this->second == 0) {
			if (this->minute == 0) {
				$nc(out)->writeByte(~this->hour);
			} else {
				$nc(out)->writeByte(this->hour);
				out->writeByte(~this->minute);
			}
		} else {
			$nc(out)->writeByte(this->hour);
			out->writeByte(this->minute);
			out->writeByte(~this->second);
		}
	} else {
		$nc(out)->writeByte(this->hour);
		out->writeByte(this->minute);
		out->writeByte(this->second);
		out->writeInt(this->nano);
	}
}

LocalTime* LocalTime::readExternal($DataInput* in) {
	$init(LocalTime);
	int32_t hour = $nc(in)->readByte();
	int32_t minute = 0;
	int32_t second = 0;
	int32_t nano = 0;
	if (hour < 0) {
		hour = ~hour;
	} else {
		minute = in->readByte();
		if (minute < 0) {
			minute = ~minute;
		} else {
			second = in->readByte();
			if (second < 0) {
				second = ~second;
			} else {
				nano = in->readInt();
			}
		}
	}
	return LocalTime::of(hour, minute, second, nano);
}

int32_t LocalTime::compareTo(Object$* other) {
	return this->compareTo($cast(LocalTime, other));
}

void clinit$LocalTime($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(LocalTime::HOURS, $new($LocalTimeArray, 24));
	{
		for (int32_t i = 0; i < $nc(LocalTime::HOURS)->length; ++i) {
			$nc(LocalTime::HOURS)->set(i, $$new(LocalTime, i, 0, 0, 0));
		}
		$assignStatic(LocalTime::MIDNIGHT, $nc(LocalTime::HOURS)->get(0));
		$assignStatic(LocalTime::NOON, $nc(LocalTime::HOURS)->get(12));
		$assignStatic(LocalTime::MIN, $nc(LocalTime::HOURS)->get(0));
		$assignStatic(LocalTime::MAX, $new(LocalTime, 23, 59, 59, 0x3B9AC9FF));
	}
}

LocalTime::LocalTime() {
}

$Class* LocalTime::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LocalTime$$Lambda$from::classInfo$.name)) {
			return LocalTime$$Lambda$from::load$(name, initialize);
		}
	}
	$loadClass(LocalTime, name, initialize, &_LocalTime_ClassInfo_, clinit$LocalTime, allocate$LocalTime);
	return class$;
}

$Class* LocalTime::class$ = nullptr;

	} // time
} // java