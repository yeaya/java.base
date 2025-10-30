#include <java/time/zone/ZoneOffsetTransition.h>

#include <java/io/DataInput.h>
#include <java/io/DataOutput.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Comparable.h>
#include <java/time/Duration.h>
#include <java/time/Instant.h>
#include <java/time/LocalDateTime.h>
#include <java/time/ZoneOffset.h>
#include <java/time/zone/Ser.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ZOT

using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Duration = ::java::time::Duration;
using $Instant = ::java::time::Instant;
using $LocalDateTime = ::java::time::LocalDateTime;
using $ZoneOffset = ::java::time::ZoneOffset;
using $ChronoLocalDateTime = ::java::time::chrono::ChronoLocalDateTime;
using $Ser = ::java::time::zone::Ser;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace zone {

$FieldInfo _ZoneOffsetTransition_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZoneOffsetTransition, $assertionsDisabled)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneOffsetTransition, serialVersionUID)},
	{"epochSecond", "J", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransition, epochSecond)},
	{"transition", "Ljava/time/LocalDateTime;", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransition, transition)},
	{"offsetBefore", "Ljava/time/ZoneOffset;", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransition, offsetBefore)},
	{"offsetAfter", "Ljava/time/ZoneOffset;", nullptr, $PRIVATE | $FINAL, $field(ZoneOffsetTransition, offsetAfter)},
	{}
};

$MethodInfo _ZoneOffsetTransition_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)V", nullptr, 0, $method(static_cast<void(ZoneOffsetTransition::*)($LocalDateTime*,$ZoneOffset*,$ZoneOffset*)>(&ZoneOffsetTransition::init$))},
	{"<init>", "(JLjava/time/ZoneOffset;Ljava/time/ZoneOffset;)V", nullptr, 0, $method(static_cast<void(ZoneOffsetTransition::*)(int64_t,$ZoneOffset*,$ZoneOffset*)>(&ZoneOffsetTransition::init$))},
	{"compareTo", "(Ljava/time/zone/ZoneOffsetTransition;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(ZoneOffsetTransition::*)(ZoneOffsetTransition*)>(&ZoneOffsetTransition::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDateTimeAfter", "()Ljava/time/LocalDateTime;", nullptr, $PUBLIC, $method(static_cast<$LocalDateTime*(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::getDateTimeAfter))},
	{"getDateTimeBefore", "()Ljava/time/LocalDateTime;", nullptr, $PUBLIC, $method(static_cast<$LocalDateTime*(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::getDateTimeBefore))},
	{"getDuration", "()Ljava/time/Duration;", nullptr, $PUBLIC, $method(static_cast<$Duration*(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::getDuration))},
	{"getDurationSeconds", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::getDurationSeconds))},
	{"getInstant", "()Ljava/time/Instant;", nullptr, $PUBLIC, $method(static_cast<$Instant*(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::getInstant))},
	{"getOffsetAfter", "()Ljava/time/ZoneOffset;", nullptr, $PUBLIC, $method(static_cast<$ZoneOffset*(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::getOffsetAfter))},
	{"getOffsetBefore", "()Ljava/time/ZoneOffset;", nullptr, $PUBLIC, $method(static_cast<$ZoneOffset*(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::getOffsetBefore))},
	{"getValidOffsets", "()Ljava/util/List;", "()Ljava/util/List<Ljava/time/ZoneOffset;>;", 0, $method(static_cast<$List*(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::getValidOffsets))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isGap", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::isGap))},
	{"isOverlap", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::isOverlap))},
	{"isValidOffset", "(Ljava/time/ZoneOffset;)Z", nullptr, $PUBLIC, $method(static_cast<bool(ZoneOffsetTransition::*)($ZoneOffset*)>(&ZoneOffsetTransition::isValidOffset))},
	{"of", "(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneOffsetTransition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ZoneOffsetTransition*(*)($LocalDateTime*,$ZoneOffset*,$ZoneOffset*)>(&ZoneOffsetTransition::of))},
	{"readExternal", "(Ljava/io/DataInput;)Ljava/time/zone/ZoneOffsetTransition;", nullptr, $STATIC, $method(static_cast<ZoneOffsetTransition*(*)($DataInput*)>(&ZoneOffsetTransition::readExternal)), "java.io.IOException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ZoneOffsetTransition::*)($ObjectInputStream*)>(&ZoneOffsetTransition::readObject)), "java.io.InvalidObjectException"},
	{"toEpochSecond", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::toEpochSecond))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeExternal", "(Ljava/io/DataOutput;)V", nullptr, 0, $method(static_cast<void(ZoneOffsetTransition::*)($DataOutput*)>(&ZoneOffsetTransition::writeExternal)), "java.io.IOException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ZoneOffsetTransition::*)()>(&ZoneOffsetTransition::writeReplace))},
	{}
};

$ClassInfo _ZoneOffsetTransition_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.zone.ZoneOffsetTransition",
	"java.lang.Object",
	"java.lang.Comparable,java.io.Serializable",
	_ZoneOffsetTransition_FieldInfo_,
	_ZoneOffsetTransition_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/time/zone/ZoneOffsetTransition;>;Ljava/io/Serializable;"
};

$Object* allocate$ZoneOffsetTransition($Class* clazz) {
	return $of($alloc(ZoneOffsetTransition));
}

$Object* ZoneOffsetTransition::clone() {
	 return this->$Comparable::clone();
}

void ZoneOffsetTransition::finalize() {
	this->$Comparable::finalize();
}

bool ZoneOffsetTransition::$assertionsDisabled = false;

ZoneOffsetTransition* ZoneOffsetTransition::of($LocalDateTime* transition, $ZoneOffset* offsetBefore, $ZoneOffset* offsetAfter) {
	$init(ZoneOffsetTransition);
	$Objects::requireNonNull($of(transition), "transition"_s);
	$Objects::requireNonNull($of(offsetBefore), "offsetBefore"_s);
	$Objects::requireNonNull($of(offsetAfter), "offsetAfter"_s);
	if ($nc(offsetBefore)->equals(offsetAfter)) {
		$throwNew($IllegalArgumentException, "Offsets must not be equal"_s);
	}
	if ($nc(transition)->getNano() != 0) {
		$throwNew($IllegalArgumentException, "Nano-of-second must be zero"_s);
	}
	return $new(ZoneOffsetTransition, transition, offsetBefore, offsetAfter);
}

void ZoneOffsetTransition::init$($LocalDateTime* transition, $ZoneOffset* offsetBefore, $ZoneOffset* offsetAfter) {
	if (!ZoneOffsetTransition::$assertionsDisabled && !($nc(transition)->getNano() == 0)) {
		$throwNew($AssertionError);
	}
	this->epochSecond = $nc(transition)->toEpochSecond(offsetBefore);
	$set(this, transition, transition);
	$set(this, offsetBefore, offsetBefore);
	$set(this, offsetAfter, offsetAfter);
}

void ZoneOffsetTransition::init$(int64_t epochSecond, $ZoneOffset* offsetBefore, $ZoneOffset* offsetAfter) {
	this->epochSecond = epochSecond;
	$set(this, transition, $LocalDateTime::ofEpochSecond(epochSecond, 0, offsetBefore));
	$set(this, offsetBefore, offsetBefore);
	$set(this, offsetAfter, offsetAfter);
}

void ZoneOffsetTransition::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

$Object* ZoneOffsetTransition::writeReplace() {
	return $of($new($Ser, $Ser::ZOT, this));
}

void ZoneOffsetTransition::writeExternal($DataOutput* out) {
	$Ser::writeEpochSec(this->epochSecond, out);
	$Ser::writeOffset(this->offsetBefore, out);
	$Ser::writeOffset(this->offsetAfter, out);
}

ZoneOffsetTransition* ZoneOffsetTransition::readExternal($DataInput* in) {
	$init(ZoneOffsetTransition);
	$useLocalCurrentObjectStackCache();
	int64_t epochSecond = $Ser::readEpochSec(in);
	$var($ZoneOffset, before, $Ser::readOffset(in));
	$var($ZoneOffset, after, $Ser::readOffset(in));
	if ($nc(before)->equals(after)) {
		$throwNew($IllegalArgumentException, "Offsets must not be equal"_s);
	}
	return $new(ZoneOffsetTransition, epochSecond, before, after);
}

$Instant* ZoneOffsetTransition::getInstant() {
	return $Instant::ofEpochSecond(this->epochSecond);
}

int64_t ZoneOffsetTransition::toEpochSecond() {
	return this->epochSecond;
}

$LocalDateTime* ZoneOffsetTransition::getDateTimeBefore() {
	return this->transition;
}

$LocalDateTime* ZoneOffsetTransition::getDateTimeAfter() {
	return $nc(this->transition)->plusSeconds(getDurationSeconds());
}

$ZoneOffset* ZoneOffsetTransition::getOffsetBefore() {
	return this->offsetBefore;
}

$ZoneOffset* ZoneOffsetTransition::getOffsetAfter() {
	return this->offsetAfter;
}

$Duration* ZoneOffsetTransition::getDuration() {
	return $Duration::ofSeconds(getDurationSeconds());
}

int32_t ZoneOffsetTransition::getDurationSeconds() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc($(getOffsetAfter()))->getTotalSeconds();
	return var$0 - $nc($(getOffsetBefore()))->getTotalSeconds();
}

bool ZoneOffsetTransition::isGap() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc($(getOffsetAfter()))->getTotalSeconds();
	return var$0 > $nc($(getOffsetBefore()))->getTotalSeconds();
}

bool ZoneOffsetTransition::isOverlap() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc($(getOffsetAfter()))->getTotalSeconds();
	return var$0 < $nc($(getOffsetBefore()))->getTotalSeconds();
}

bool ZoneOffsetTransition::isValidOffset($ZoneOffset* offset) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = false;
	if (isGap()) {
		var$0 = false;
	} else {
		bool var$1 = $nc($(getOffsetBefore()))->equals(offset);
		var$0 = (var$1 || $nc($(getOffsetAfter()))->equals(offset));
	}
	return var$0;
}

$List* ZoneOffsetTransition::getValidOffsets() {
	$useLocalCurrentObjectStackCache();
	if (isGap()) {
		return $List::of();
	}
	$var($Object, var$0, $of(getOffsetBefore()));
	return $List::of(var$0, $(getOffsetAfter()));
}

int32_t ZoneOffsetTransition::compareTo(ZoneOffsetTransition* transition) {
	return $Long::compare(this->epochSecond, $nc(transition)->epochSecond);
}

bool ZoneOffsetTransition::equals(Object$* other) {
	if ($equals(other, this)) {
		return true;
	}
	$var(ZoneOffsetTransition, d, nullptr);
	bool var$3 = $instanceOf(ZoneOffsetTransition, other);
	if (var$3) {
		$assign(d, $cast(ZoneOffsetTransition, other));
		var$3 = true;
	}
	bool var$2 = (var$3);
	bool var$1 = var$2 && this->epochSecond == $nc(d)->epochSecond;
	bool var$0 = var$1 && $nc(this->offsetBefore)->equals(d->offsetBefore);
	return var$0 && $nc(this->offsetAfter)->equals(d->offsetAfter);
}

int32_t ZoneOffsetTransition::hashCode() {
	int32_t var$1 = $nc(this->transition)->hashCode();
	int32_t var$0 = var$1 ^ $nc(this->offsetBefore)->hashCode();
	return var$0 ^ $Integer::rotateLeft($nc(this->offsetAfter)->hashCode(), 16);
}

$String* ZoneOffsetTransition::toString() {
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("Transition["_s)->append(isGap() ? "Gap"_s : "Overlap"_s)->append(" at "_s)->append($of(this->transition))->append($of(this->offsetBefore))->append(" to "_s)->append($of(this->offsetAfter))->append(u']');
	return buf->toString();
}

int32_t ZoneOffsetTransition::compareTo(Object$* transition) {
	return this->compareTo($cast(ZoneOffsetTransition, transition));
}

void clinit$ZoneOffsetTransition($Class* class$) {
	ZoneOffsetTransition::$assertionsDisabled = !ZoneOffsetTransition::class$->desiredAssertionStatus();
}

ZoneOffsetTransition::ZoneOffsetTransition() {
}

$Class* ZoneOffsetTransition::load$($String* name, bool initialize) {
	$loadClass(ZoneOffsetTransition, name, initialize, &_ZoneOffsetTransition_ClassInfo_, clinit$ZoneOffsetTransition, allocate$ZoneOffsetTransition);
	return class$;
}

$Class* ZoneOffsetTransition::class$ = nullptr;

		} // zone
	} // time
} // java