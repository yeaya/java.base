#include <java/time/ZoneOffset.h>

#include <java/io/DataInput.h>
#include <java/io/DataOutput.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/time/DateTimeException.h>
#include <java/time/Ser.h>
#include <java/time/ZoneId.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/time/temporal/ValueRange.h>
#include <java/time/zone/ZoneRules.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <jcpp.h>

#undef ID_CACHE
#undef MAX
#undef MAX_SECONDS
#undef MIN
#undef OFFSET_SECONDS
#undef SECONDS_CACHE
#undef UTC
#undef ZONE_OFFSET_TYPE

using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $Ser = ::java::time::Ser;
using $ZoneId = ::java::time::ZoneId;
using $ChronoField = ::java::time::temporal::ChronoField;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalAdjuster = ::java::time::temporal::TemporalAdjuster;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;
using $ValueRange = ::java::time::temporal::ValueRange;
using $ZoneRules = ::java::time::zone::ZoneRules;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;

namespace java {
	namespace time {

$CompoundAttribute _ZoneOffset_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$FieldInfo _ZoneOffset_FieldInfo_[] = {
	{"SECONDS_CACHE", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/Integer;Ljava/time/ZoneOffset;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ZoneOffset, SECONDS_CACHE)},
	{"ID_CACHE", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/String;Ljava/time/ZoneOffset;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ZoneOffset, ID_CACHE)},
	{"MAX_SECONDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneOffset, MAX_SECONDS)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneOffset, serialVersionUID)},
	{"UTC", "Ljava/time/ZoneOffset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ZoneOffset, UTC)},
	{"MIN", "Ljava/time/ZoneOffset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ZoneOffset, MIN)},
	{"MAX", "Ljava/time/ZoneOffset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ZoneOffset, MAX)},
	{"totalSeconds", "I", nullptr, $PRIVATE | $FINAL, $field(ZoneOffset, totalSeconds$)},
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(ZoneOffset, id)},
	{}
};

$MethodInfo _ZoneOffset_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ZoneOffset::*)(int32_t)>(&ZoneOffset::init$))},
	{"adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"buildId", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&ZoneOffset::buildId))},
	{"compareTo", "(Ljava/time/ZoneOffset;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(ZoneOffset::*)(ZoneOffset*)>(&ZoneOffset::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneOffset;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ZoneOffset*(*)($TemporalAccessor*)>(&ZoneOffset::from))},
	{"get", "(Ljava/time/temporal/TemporalField;)I", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC},
	{"getRules", "()Ljava/time/zone/ZoneRules;", nullptr, $PUBLIC},
	{"getTotalSeconds", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ZoneOffset::*)()>(&ZoneOffset::getTotalSeconds))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC},
	{"of", "(Ljava/lang/String;)Ljava/time/ZoneOffset;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ZoneOffset*(*)($String*)>(&ZoneOffset::of))},
	{"ofHours", "(I)Ljava/time/ZoneOffset;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ZoneOffset*(*)(int32_t)>(&ZoneOffset::ofHours))},
	{"ofHoursMinutes", "(II)Ljava/time/ZoneOffset;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ZoneOffset*(*)(int32_t,int32_t)>(&ZoneOffset::ofHoursMinutes))},
	{"ofHoursMinutesSeconds", "(III)Ljava/time/ZoneOffset;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ZoneOffset*(*)(int32_t,int32_t,int32_t)>(&ZoneOffset::ofHoursMinutesSeconds))},
	{"ofTotalSeconds", "(I)Ljava/time/ZoneOffset;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ZoneOffset*(*)(int32_t)>(&ZoneOffset::ofTotalSeconds))},
	{"parseNumber", "(Ljava/lang/CharSequence;IZ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($CharSequence*,int32_t,bool)>(&ZoneOffset::parseNumber))},
	{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC},
	{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"readExternal", "(Ljava/io/DataInput;)Ljava/time/ZoneOffset;", nullptr, $STATIC, $method(static_cast<ZoneOffset*(*)($DataInput*)>(&ZoneOffset::readExternal)), "java.io.IOException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ZoneOffset::*)($ObjectInputStream*)>(&ZoneOffset::readObject)), "java.io.InvalidObjectException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"totalSeconds", "(III)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&ZoneOffset::totalSeconds))},
	{"validate", "(III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&ZoneOffset::validate))},
	{"write", "(Ljava/io/DataOutput;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeExternal", "(Ljava/io/DataOutput;)V", nullptr, 0, $method(static_cast<void(ZoneOffset::*)($DataOutput*)>(&ZoneOffset::writeExternal)), "java.io.IOException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ZoneOffset::*)()>(&ZoneOffset::writeReplace))},
	{}
};

$ClassInfo _ZoneOffset_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.ZoneOffset",
	"java.time.ZoneId",
	"java.time.temporal.TemporalAccessor,java.time.temporal.TemporalAdjuster,java.lang.Comparable",
	_ZoneOffset_FieldInfo_,
	_ZoneOffset_MethodInfo_,
	"Ljava/time/ZoneId;Ljava/time/temporal/TemporalAccessor;Ljava/time/temporal/TemporalAdjuster;Ljava/lang/Comparable<Ljava/time/ZoneOffset;>;Ljava/io/Serializable;",
	nullptr,
	nullptr,
	_ZoneOffset_Annotations_
};

$Object* allocate$ZoneOffset($Class* clazz) {
	return $of($alloc(ZoneOffset));
}

$Object* ZoneOffset::clone() {
	 return this->$ZoneId::clone();
}

void ZoneOffset::finalize() {
	this->$ZoneId::finalize();
}

$ConcurrentMap* ZoneOffset::SECONDS_CACHE = nullptr;
$ConcurrentMap* ZoneOffset::ID_CACHE = nullptr;
ZoneOffset* ZoneOffset::UTC = nullptr;
ZoneOffset* ZoneOffset::MIN = nullptr;
ZoneOffset* ZoneOffset::MAX = nullptr;

ZoneOffset* ZoneOffset::of($String* offsetId$renamed) {
	$init(ZoneOffset);
	$useLocalCurrentObjectStackCache();
	$var($String, offsetId, offsetId$renamed);
	$Objects::requireNonNull($of(offsetId), "offsetId"_s);
	$var(ZoneOffset, offset, $cast(ZoneOffset, $nc(ZoneOffset::ID_CACHE)->get(offsetId)));
	if (offset != nullptr) {
		return offset;
	}
	int32_t hours = 0;
	int32_t minutes = 0;
	int32_t seconds = 0;
	switch ($nc(offsetId)->length()) {
	case 2:
		{
			$var($String, var$0, $$str({$$str(offsetId->charAt(0)), "0"_s}));
			$assign(offsetId, $concat(var$0, $$str(offsetId->charAt(1))));
		}
	case 3:
		{
			hours = parseNumber(offsetId, 1, false);
			minutes = 0;
			seconds = 0;
			break;
		}
	case 5:
		{
			hours = parseNumber(offsetId, 1, false);
			minutes = parseNumber(offsetId, 3, false);
			seconds = 0;
			break;
		}
	case 6:
		{
			hours = parseNumber(offsetId, 1, false);
			minutes = parseNumber(offsetId, 4, true);
			seconds = 0;
			break;
		}
	case 7:
		{
			hours = parseNumber(offsetId, 1, false);
			minutes = parseNumber(offsetId, 3, false);
			seconds = parseNumber(offsetId, 5, false);
			break;
		}
	case 9:
		{
			hours = parseNumber(offsetId, 1, false);
			minutes = parseNumber(offsetId, 4, true);
			seconds = parseNumber(offsetId, 7, true);
			break;
		}
	default:
		{
			$throwNew($DateTimeException, $$str({"Invalid ID for ZoneOffset, invalid format: "_s, offsetId}));
		}
	}
	char16_t first = offsetId->charAt(0);
	if (first != u'+' && first != u'-') {
		$throwNew($DateTimeException, $$str({"Invalid ID for ZoneOffset, plus/minus not found when expected: "_s, offsetId}));
	}
	if (first == u'-') {
		return ofHoursMinutesSeconds(-hours, -minutes, -seconds);
	} else {
		return ofHoursMinutesSeconds(hours, minutes, seconds);
	}
}

int32_t ZoneOffset::parseNumber($CharSequence* offsetId, int32_t pos, bool precededByColon) {
	$init(ZoneOffset);
	$useLocalCurrentObjectStackCache();
	if (precededByColon && $nc(offsetId)->charAt(pos - 1) != u':') {
		$throwNew($DateTimeException, $$str({"Invalid ID for ZoneOffset, colon not found when expected: "_s, offsetId}));
	}
	char16_t ch1 = $nc(offsetId)->charAt(pos);
	char16_t ch2 = offsetId->charAt(pos + 1);
	if (ch1 < u'0' || ch1 > u'9' || ch2 < u'0' || ch2 > u'9') {
		$throwNew($DateTimeException, $$str({"Invalid ID for ZoneOffset, non numeric characters found: "_s, offsetId}));
	}
	return (ch1 - 48) * 10 + (ch2 - 48);
}

ZoneOffset* ZoneOffset::ofHours(int32_t hours) {
	$init(ZoneOffset);
	return ofHoursMinutesSeconds(hours, 0, 0);
}

ZoneOffset* ZoneOffset::ofHoursMinutes(int32_t hours, int32_t minutes) {
	$init(ZoneOffset);
	return ofHoursMinutesSeconds(hours, minutes, 0);
}

ZoneOffset* ZoneOffset::ofHoursMinutesSeconds(int32_t hours, int32_t minutes, int32_t seconds) {
	$init(ZoneOffset);
	validate(hours, minutes, seconds);
	int32_t totalSeconds = ZoneOffset::totalSeconds(hours, minutes, seconds);
	return ofTotalSeconds(totalSeconds);
}

ZoneOffset* ZoneOffset::from($TemporalAccessor* temporal) {
	$init(ZoneOffset);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(temporal), "temporal"_s);
	$var(ZoneOffset, offset, $cast(ZoneOffset, $nc(temporal)->query($($TemporalQueries::offset()))));
	if (offset == nullptr) {
		$var($String, var$0, $$str({"Unable to obtain ZoneOffset from TemporalAccessor: "_s, temporal, " of type "_s}));
		$throwNew($DateTimeException, $$concat(var$0, $($of(temporal)->getClass()->getName())));
	}
	return offset;
}

void ZoneOffset::validate(int32_t hours, int32_t minutes, int32_t seconds) {
	$init(ZoneOffset);
	$useLocalCurrentObjectStackCache();
	if (hours < -18 || hours > 18) {
		$throwNew($DateTimeException, $$str({"Zone offset hours not in valid range: value "_s, $$str(hours), " is not in the range -18 to 18"_s}));
	}
	if (hours > 0) {
		if (minutes < 0 || seconds < 0) {
			$throwNew($DateTimeException, "Zone offset minutes and seconds must be positive because hours is positive"_s);
		}
	} else if (hours < 0) {
		if (minutes > 0 || seconds > 0) {
			$throwNew($DateTimeException, "Zone offset minutes and seconds must be negative because hours is negative"_s);
		}
	} else if ((minutes > 0 && seconds < 0) || (minutes < 0 && seconds > 0)) {
		$throwNew($DateTimeException, "Zone offset minutes and seconds must have the same sign"_s);
	}
	if (minutes < -59 || minutes > 59) {
		$throwNew($DateTimeException, $$str({"Zone offset minutes not in valid range: value "_s, $$str(minutes), " is not in the range -59 to 59"_s}));
	}
	if (seconds < -59 || seconds > 59) {
		$throwNew($DateTimeException, $$str({"Zone offset seconds not in valid range: value "_s, $$str(seconds), " is not in the range -59 to 59"_s}));
	}
	if ($Math::abs(hours) == 18 && (minutes | seconds) != 0) {
		$throwNew($DateTimeException, "Zone offset not in valid range: -18:00 to +18:00"_s);
	}
}

int32_t ZoneOffset::totalSeconds(int32_t hours, int32_t minutes, int32_t seconds) {
	$init(ZoneOffset);
	return hours * 3600 + minutes * 60 + seconds;
}

ZoneOffset* ZoneOffset::ofTotalSeconds(int32_t totalSeconds) {
	$init(ZoneOffset);
	$useLocalCurrentObjectStackCache();
	if (totalSeconds < -ZoneOffset::MAX_SECONDS || totalSeconds > ZoneOffset::MAX_SECONDS) {
		$throwNew($DateTimeException, "Zone offset not in valid range: -18:00 to +18:00"_s);
	}
	if ($mod(totalSeconds, (15 * 60)) == 0) {
		$var($Integer, totalSecs, $Integer::valueOf(totalSeconds));
		$var(ZoneOffset, result, $cast(ZoneOffset, $nc(ZoneOffset::SECONDS_CACHE)->get(totalSecs)));
		if (result == nullptr) {
			$assign(result, $new(ZoneOffset, totalSeconds));
			$nc(ZoneOffset::SECONDS_CACHE)->putIfAbsent(totalSecs, result);
			$assign(result, $cast(ZoneOffset, $nc(ZoneOffset::SECONDS_CACHE)->get(totalSecs)));
			$nc(ZoneOffset::ID_CACHE)->putIfAbsent($($nc(result)->getId()), result);
		}
		return result;
	} else {
		return $new(ZoneOffset, totalSeconds);
	}
}

void ZoneOffset::init$(int32_t totalSeconds) {
	$ZoneId::init$();
	this->totalSeconds$ = totalSeconds;
	$set(this, id, buildId(totalSeconds));
}

$String* ZoneOffset::buildId(int32_t totalSeconds) {
	$init(ZoneOffset);
	if (totalSeconds == 0) {
		return "Z"_s;
	} else {
		int32_t absTotalSeconds = $Math::abs(totalSeconds);
		$var($StringBuilder, buf, $new($StringBuilder));
		int32_t absHours = absTotalSeconds / 3600;
		int32_t absMinutes = (absTotalSeconds / 60) % 60;
		buf->append(totalSeconds < 0 ? "-"_s : "+"_s)->append(absHours < 10 ? "0"_s : ""_s)->append(absHours)->append(absMinutes < 10 ? ":0"_s : ":"_s)->append(absMinutes);
		int32_t absSeconds = absTotalSeconds % 60;
		if (absSeconds != 0) {
			buf->append(absSeconds < 10 ? ":0"_s : ":"_s)->append(absSeconds);
		}
		return buf->toString();
	}
}

int32_t ZoneOffset::getTotalSeconds() {
	return this->totalSeconds$;
}

$String* ZoneOffset::getId() {
	return this->id;
}

$ZoneRules* ZoneOffset::getRules() {
	return $ZoneRules::of(this);
}

bool ZoneOffset::isSupported($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		$init($ChronoField);
		return $equals(field, $ChronoField::OFFSET_SECONDS);
	}
	return field != nullptr && field->isSupportedBy(this);
}

$ValueRange* ZoneOffset::range($TemporalField* field) {
	return $TemporalAccessor::range(field);
}

int32_t ZoneOffset::get($TemporalField* field) {
	$useLocalCurrentObjectStackCache();
	$init($ChronoField);
	if ($equals(field, $ChronoField::OFFSET_SECONDS)) {
		return this->totalSeconds$;
	} else if ($instanceOf($ChronoField, field)) {
		$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
	}
	return $nc($(range(field)))->checkValidIntValue(getLong(field), field);
}

int64_t ZoneOffset::getLong($TemporalField* field) {
	$init($ChronoField);
	if ($equals(field, $ChronoField::OFFSET_SECONDS)) {
		return this->totalSeconds$;
	} else if ($instanceOf($ChronoField, field)) {
		$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
	}
	return $nc(field)->getFrom(this);
}

$Object* ZoneOffset::query($TemporalQuery* query) {
	bool var$0 = query == $TemporalQueries::offset();
	if (var$0 || query == $TemporalQueries::zone()) {
		return $of($of(this));
	}
	return $of($TemporalAccessor::query(query));
}

$Temporal* ZoneOffset::adjustInto($Temporal* temporal) {
	$init($ChronoField);
	return $nc(temporal)->with($ChronoField::OFFSET_SECONDS, this->totalSeconds$);
}

int32_t ZoneOffset::compareTo(ZoneOffset* other) {
	return $nc(other)->totalSeconds$ - this->totalSeconds$;
}

bool ZoneOffset::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf(ZoneOffset, obj)) {
		return this->totalSeconds$ == $nc(($cast(ZoneOffset, obj)))->totalSeconds$;
	}
	return false;
}

int32_t ZoneOffset::hashCode() {
	return this->totalSeconds$;
}

$String* ZoneOffset::toString() {
	return this->id;
}

$Object* ZoneOffset::writeReplace() {
	return $of($new($Ser, $Ser::ZONE_OFFSET_TYPE, this));
}

void ZoneOffset::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

void ZoneOffset::write($DataOutput* out) {
	$nc(out)->writeByte($Ser::ZONE_OFFSET_TYPE);
	writeExternal(out);
}

void ZoneOffset::writeExternal($DataOutput* out) {
	int32_t offsetSecs = this->totalSeconds$;
	int32_t offsetByte = offsetSecs % 900 == 0 ? offsetSecs / 900 : 127;
	$nc(out)->writeByte(offsetByte);
	if (offsetByte == 127) {
		out->writeInt(offsetSecs);
	}
}

ZoneOffset* ZoneOffset::readExternal($DataInput* in) {
	$init(ZoneOffset);
	int32_t offsetByte = $nc(in)->readByte();
	return (offsetByte == 127 ? ZoneOffset::ofTotalSeconds(in->readInt()) : ZoneOffset::ofTotalSeconds(offsetByte * 900));
}

int32_t ZoneOffset::compareTo(Object$* other) {
	return this->compareTo($cast(ZoneOffset, other));
}

void clinit$ZoneOffset($Class* class$) {
	$assignStatic(ZoneOffset::SECONDS_CACHE, $new($ConcurrentHashMap, 16, 0.75f, 4));
	$assignStatic(ZoneOffset::ID_CACHE, $new($ConcurrentHashMap, 16, 0.75f, 4));
	$assignStatic(ZoneOffset::UTC, ZoneOffset::ofTotalSeconds(0));
	$assignStatic(ZoneOffset::MIN, ZoneOffset::ofTotalSeconds(-ZoneOffset::MAX_SECONDS));
	$assignStatic(ZoneOffset::MAX, ZoneOffset::ofTotalSeconds(ZoneOffset::MAX_SECONDS));
}

ZoneOffset::ZoneOffset() {
}

$Class* ZoneOffset::load$($String* name, bool initialize) {
	$loadClass(ZoneOffset, name, initialize, &_ZoneOffset_ClassInfo_, clinit$ZoneOffset, allocate$ZoneOffset);
	return class$;
}

$Class* ZoneOffset::class$ = nullptr;

	} // time
} // java