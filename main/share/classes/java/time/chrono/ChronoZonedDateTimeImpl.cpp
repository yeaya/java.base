#include <java/time/chrono/ChronoZonedDateTimeImpl.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutput.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/Duration.h>
#include <java/time/Instant.h>
#include <java/time/LocalDateTime.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <java/time/chrono/ChronoLocalDateTime.h>
#include <java/time/chrono/ChronoLocalDateTimeImpl.h>
#include <java/time/chrono/ChronoZonedDateTime.h>
#include <java/time/chrono/ChronoZonedDateTimeImpl$1.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/Ser.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalAdjuster.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/zone/ZoneOffsetTransition.h>
#include <java/time/zone/ZoneRules.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef CHRONO_ZONE_DATE_TIME_TYPE
#undef SECONDS

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutput = ::java::io::ObjectOutput;
using $Serializable = ::java::io::Serializable;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Duration = ::java::time::Duration;
using $Instant = ::java::time::Instant;
using $LocalDateTime = ::java::time::LocalDateTime;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;
using $ChronoLocalDateTime = ::java::time::chrono::ChronoLocalDateTime;
using $ChronoLocalDateTimeImpl = ::java::time::chrono::ChronoLocalDateTimeImpl;
using $ChronoZonedDateTime = ::java::time::chrono::ChronoZonedDateTime;
using $ChronoZonedDateTimeImpl$1 = ::java::time::chrono::ChronoZonedDateTimeImpl$1;
using $Chronology = ::java::time::chrono::Chronology;
using $Ser = ::java::time::chrono::Ser;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalAdjuster = ::java::time::temporal::TemporalAdjuster;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $ZoneOffsetTransition = ::java::time::zone::ZoneOffsetTransition;
using $ZoneRules = ::java::time::zone::ZoneRules;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _ChronoZonedDateTimeImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChronoZonedDateTimeImpl, serialVersionUID)},
	{"dateTime", "Ljava/time/chrono/ChronoLocalDateTimeImpl;", "Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;", $PRIVATE | $FINAL | $TRANSIENT, $field(ChronoZonedDateTimeImpl, dateTime)},
	{"offset", "Ljava/time/ZoneOffset;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(ChronoZonedDateTimeImpl, offset)},
	{"zone", "Ljava/time/ZoneId;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(ChronoZonedDateTimeImpl, zone)},
	{}
};

$MethodInfo _ChronoZonedDateTimeImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/time/chrono/ChronoLocalDateTimeImpl;Ljava/time/ZoneOffset;Ljava/time/ZoneId;)V", "(Ljava/time/chrono/ChronoLocalDateTimeImpl<TD;>;Ljava/time/ZoneOffset;Ljava/time/ZoneId;)V", $PRIVATE, $method(static_cast<void(ChronoZonedDateTimeImpl::*)($ChronoLocalDateTimeImpl*,$ZoneOffset*,$ZoneId*)>(&ChronoZonedDateTimeImpl::init$))},
	{"create", "(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTimeImpl;", "(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTimeImpl<TD;>;", $PRIVATE, $method(static_cast<ChronoZonedDateTimeImpl*(ChronoZonedDateTimeImpl::*)($Instant*,$ZoneId*)>(&ChronoZonedDateTimeImpl::create))},
	{"ensureValid", "(Ljava/time/chrono/Chronology;Ljava/time/temporal/Temporal;)Ljava/time/chrono/ChronoZonedDateTimeImpl;", "<R::Ljava/time/chrono/ChronoLocalDate;>(Ljava/time/chrono/Chronology;Ljava/time/temporal/Temporal;)Ljava/time/chrono/ChronoZonedDateTimeImpl<TR;>;", $STATIC, $method(static_cast<ChronoZonedDateTimeImpl*(*)($Chronology*,$Temporal*)>(&ChronoZonedDateTimeImpl::ensureValid))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getOffset", "()Ljava/time/ZoneOffset;", nullptr, $PUBLIC},
	{"getZone", "()Ljava/time/ZoneId;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC},
	{"ofBest", "(Ljava/time/chrono/ChronoLocalDateTimeImpl;Ljava/time/ZoneId;Ljava/time/ZoneOffset;)Ljava/time/chrono/ChronoZonedDateTime;", "<R::Ljava/time/chrono/ChronoLocalDate;>(Ljava/time/chrono/ChronoLocalDateTimeImpl<TR;>;Ljava/time/ZoneId;Ljava/time/ZoneOffset;)Ljava/time/chrono/ChronoZonedDateTime<TR;>;", $STATIC, $method(static_cast<$ChronoZonedDateTime*(*)($ChronoLocalDateTimeImpl*,$ZoneId*,$ZoneOffset*)>(&ChronoZonedDateTimeImpl::ofBest))},
	{"ofInstant", "(Ljava/time/chrono/Chronology;Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTimeImpl;", "(Ljava/time/chrono/Chronology;Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTimeImpl<*>;", $STATIC, $method(static_cast<ChronoZonedDateTimeImpl*(*)($Chronology*,$Instant*,$ZoneId*)>(&ChronoZonedDateTimeImpl::ofInstant))},
	{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoZonedDateTime;", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC},
	{"readExternal", "(Ljava/io/ObjectInput;)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/io/ObjectInput;)Ljava/time/chrono/ChronoZonedDateTime<*>;", $STATIC, $method(static_cast<$ChronoZonedDateTime*(*)($ObjectInput*)>(&ChronoZonedDateTimeImpl::readExternal)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ChronoZonedDateTimeImpl::*)($ObjectInputStream*)>(&ChronoZonedDateTimeImpl::readObject)), "java.io.InvalidObjectException"},
	{"toLocalDateTime", "()Ljava/time/chrono/ChronoLocalDateTime;", "()Ljava/time/chrono/ChronoLocalDateTime<TD;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC},
	{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC},
	{"withEarlierOffsetAtOverlap", "()Ljava/time/chrono/ChronoZonedDateTime;", "()Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC},
	{"withLaterOffsetAtOverlap", "()Ljava/time/chrono/ChronoZonedDateTime;", "()Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC},
	{"withZoneSameInstant", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC},
	{"withZoneSameLocal", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime<TD;>;", $PUBLIC},
	{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, 0, $method(static_cast<void(ChronoZonedDateTimeImpl::*)($ObjectOutput*)>(&ChronoZonedDateTimeImpl::writeExternal)), "java.io.IOException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(ChronoZonedDateTimeImpl::*)()>(&ChronoZonedDateTimeImpl::writeReplace))},
	{}
};

$InnerClassInfo _ChronoZonedDateTimeImpl_InnerClassesInfo_[] = {
	{"java.time.chrono.ChronoZonedDateTimeImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ChronoZonedDateTimeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.chrono.ChronoZonedDateTimeImpl",
	"java.lang.Object",
	"java.time.chrono.ChronoZonedDateTime,java.io.Serializable",
	_ChronoZonedDateTimeImpl_FieldInfo_,
	_ChronoZonedDateTimeImpl_MethodInfo_,
	"<D::Ljava/time/chrono/ChronoLocalDate;>Ljava/lang/Object;Ljava/time/chrono/ChronoZonedDateTime<TD;>;Ljava/io/Serializable;",
	nullptr,
	_ChronoZonedDateTimeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.time.chrono.ChronoZonedDateTimeImpl$1"
};

$Object* allocate$ChronoZonedDateTimeImpl($Class* clazz) {
	return $of($alloc(ChronoZonedDateTimeImpl));
}

$Object* ChronoZonedDateTimeImpl::clone() {
	 return this->$ChronoZonedDateTime::clone();
}

void ChronoZonedDateTimeImpl::finalize() {
	this->$ChronoZonedDateTime::finalize();
}

$ChronoZonedDateTime* ChronoZonedDateTimeImpl::ofBest($ChronoLocalDateTimeImpl* localDateTime$renamed, $ZoneId* zone, $ZoneOffset* preferredOffset) {
	$init(ChronoZonedDateTimeImpl);
	$var($ChronoLocalDateTimeImpl, localDateTime, localDateTime$renamed);
	$Objects::requireNonNull($of(localDateTime), "localDateTime"_s);
	$Objects::requireNonNull($of(zone), "zone"_s);
	if ($instanceOf($ZoneOffset, zone)) {
		return $new(ChronoZonedDateTimeImpl, localDateTime, $cast($ZoneOffset, zone), zone);
	}
	$var($ZoneRules, rules, $nc(zone)->getRules());
	$var($LocalDateTime, isoLDT, $LocalDateTime::from(localDateTime));
	$var($List, validOffsets, $nc(rules)->getValidOffsets(isoLDT));
	$var($ZoneOffset, offset, nullptr);
	if ($nc(validOffsets)->size() == 1) {
		$assign(offset, $cast($ZoneOffset, validOffsets->get(0)));
	} else if ($nc(validOffsets)->size() == 0) {
		$var($ZoneOffsetTransition, trans, $nc(rules)->getTransition(isoLDT));
		$assign(localDateTime, $nc(localDateTime)->plusSeconds($nc($($nc(trans)->getDuration()))->getSeconds()));
		$assign(offset, $nc(trans)->getOffsetAfter());
	} else if (preferredOffset != nullptr && $nc(validOffsets)->contains(preferredOffset)) {
		$assign(offset, preferredOffset);
	} else {
		$assign(offset, $cast($ZoneOffset, validOffsets->get(0)));
	}
	$Objects::requireNonNull($of(offset), "offset"_s);
	return $new(ChronoZonedDateTimeImpl, localDateTime, offset, zone);
}

ChronoZonedDateTimeImpl* ChronoZonedDateTimeImpl::ofInstant($Chronology* chrono, $Instant* instant, $ZoneId* zone) {
	$init(ChronoZonedDateTimeImpl);
	$var($ZoneRules, rules, $nc(zone)->getRules());
	$var($ZoneOffset, offset, $nc(rules)->getOffset(instant));
	$Objects::requireNonNull($of(offset), "offset"_s);
	int64_t var$0 = $nc(instant)->getEpochSecond();
	$var($LocalDateTime, ldt, $LocalDateTime::ofEpochSecond(var$0, instant->getNano(), offset));
	$var($ChronoLocalDateTimeImpl, cldt, $cast($ChronoLocalDateTimeImpl, $nc(chrono)->localDateTime(ldt)));
	return $new(ChronoZonedDateTimeImpl, cldt, offset, zone);
}

ChronoZonedDateTimeImpl* ChronoZonedDateTimeImpl::create($Instant* instant, $ZoneId* zone) {
	return ofInstant($(getChronology()), instant, zone);
}

ChronoZonedDateTimeImpl* ChronoZonedDateTimeImpl::ensureValid($Chronology* chrono, $Temporal* temporal) {
	$init(ChronoZonedDateTimeImpl);
	$var(ChronoZonedDateTimeImpl, other, $cast(ChronoZonedDateTimeImpl, temporal));
	if ($nc(chrono)->equals($($nc(other)->getChronology())) == false) {
		$var($String, var$0, $$str({"Chronology mismatch, required: "_s, $(chrono->getId()), ", actual: "_s}));
		$throwNew($ClassCastException, $$concat(var$0, $($nc($($nc(other)->getChronology()))->getId())));
	}
	return other;
}

void ChronoZonedDateTimeImpl::init$($ChronoLocalDateTimeImpl* dateTime, $ZoneOffset* offset, $ZoneId* zone) {
	$set(this, dateTime, $cast($ChronoLocalDateTimeImpl, $Objects::requireNonNull($of(dateTime), "dateTime"_s)));
	$set(this, offset, $cast($ZoneOffset, $Objects::requireNonNull($of(offset), "offset"_s)));
	$set(this, zone, $cast($ZoneId, $Objects::requireNonNull($of(zone), "zone"_s)));
}

$ZoneOffset* ChronoZonedDateTimeImpl::getOffset() {
	return this->offset;
}

$ChronoZonedDateTime* ChronoZonedDateTimeImpl::withEarlierOffsetAtOverlap() {
	$var($ZoneOffsetTransition, trans, $nc($($nc($(getZone()))->getRules()))->getTransition($($LocalDateTime::from(this))));
	if (trans != nullptr && trans->isOverlap()) {
		$var($ZoneOffset, earlierOffset, trans->getOffsetBefore());
		if ($nc(earlierOffset)->equals(this->offset) == false) {
			return $new(ChronoZonedDateTimeImpl, this->dateTime, earlierOffset, this->zone);
		}
	}
	return this;
}

$ChronoZonedDateTime* ChronoZonedDateTimeImpl::withLaterOffsetAtOverlap() {
	$var($ZoneOffsetTransition, trans, $nc($($nc($(getZone()))->getRules()))->getTransition($($LocalDateTime::from(this))));
	if (trans != nullptr) {
		$var($ZoneOffset, offset, trans->getOffsetAfter());
		if ($nc(offset)->equals($(getOffset())) == false) {
			return $new(ChronoZonedDateTimeImpl, this->dateTime, offset, this->zone);
		}
	}
	return this;
}

$ChronoLocalDateTime* ChronoZonedDateTimeImpl::toLocalDateTime() {
	return this->dateTime;
}

$ZoneId* ChronoZonedDateTimeImpl::getZone() {
	return this->zone;
}

$ChronoZonedDateTime* ChronoZonedDateTimeImpl::withZoneSameLocal($ZoneId* zone) {
	return ofBest(this->dateTime, zone, this->offset);
}

$ChronoZonedDateTime* ChronoZonedDateTimeImpl::withZoneSameInstant($ZoneId* zone) {
	$Objects::requireNonNull($of(zone), "zone"_s);
	return $nc(this->zone)->equals(zone) ? static_cast<$ChronoZonedDateTime*>(this) : static_cast<$ChronoZonedDateTime*>(create($($nc(this->dateTime)->toInstant(this->offset)), zone));
}

bool ChronoZonedDateTimeImpl::isSupported($TemporalField* field) {
	return $instanceOf($ChronoField, field) || (field != nullptr && field->isSupportedBy(this));
}

$ChronoZonedDateTime* ChronoZonedDateTimeImpl::with($TemporalField* field, int64_t newValue) {
	{
		$ChronoField* chronoField = nullptr;
		bool var$0 = $instanceOf($ChronoField, field);
		if (var$0) {
			chronoField = $cast($ChronoField, field);
			var$0 = true;
		}
		if (var$0) {
			$init($ChronoZonedDateTimeImpl$1);
			switch ($nc($ChronoZonedDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoField)->get($nc((chronoField))->ordinal())) {
			case 1:
				{
					$init($ChronoUnit);
					return plus(newValue - toEpochSecond(), $ChronoUnit::SECONDS);
				}
			case 2:
				{
					{
						$var($ZoneOffset, offset, $ZoneOffset::ofTotalSeconds(chronoField->checkValidIntValue(newValue)));
						return create($($nc(this->dateTime)->toInstant(offset)), this->zone);
					}
				}
			}
			return ofBest($($nc(this->dateTime)->with(field, newValue)), this->zone, this->offset);
		}
	}
	$var($Chronology, var$1, getChronology());
	return ChronoZonedDateTimeImpl::ensureValid(var$1, $($nc(field)->adjustInto(this, newValue)));
}

$ChronoZonedDateTime* ChronoZonedDateTimeImpl::plus(int64_t amountToAdd, $TemporalUnit* unit) {
	if ($instanceOf($ChronoUnit, unit)) {
		return with($($nc(this->dateTime)->plus(amountToAdd, unit)));
	}
	$var($Chronology, var$0, getChronology());
	return ChronoZonedDateTimeImpl::ensureValid(var$0, $($nc(unit)->addTo(this, amountToAdd)));
}

int64_t ChronoZonedDateTimeImpl::until($Temporal* endExclusive, $TemporalUnit* unit) {
	$Objects::requireNonNull($of(endExclusive), "endExclusive"_s);
	$var($ChronoZonedDateTime, end, $nc($(getChronology()))->zonedDateTime(endExclusive));
	if ($instanceOf($ChronoUnit, unit)) {
		$assign(end, $nc(end)->withZoneSameInstant(this->offset));
		return $nc(this->dateTime)->until($(end->toLocalDateTime()), unit);
	}
	$Objects::requireNonNull($of(unit), "unit"_s);
	return $nc(unit)->between(this, end);
}

$Object* ChronoZonedDateTimeImpl::writeReplace() {
	return $of($new($Ser, $Ser::CHRONO_ZONE_DATE_TIME_TYPE, this));
}

void ChronoZonedDateTimeImpl::readObject($ObjectInputStream* s) {
	$throwNew($InvalidObjectException, "Deserialization via serialization delegate"_s);
}

void ChronoZonedDateTimeImpl::writeExternal($ObjectOutput* out) {
	$nc(out)->writeObject(this->dateTime);
	out->writeObject(this->offset);
	out->writeObject(this->zone);
}

$ChronoZonedDateTime* ChronoZonedDateTimeImpl::readExternal($ObjectInput* in) {
	$init(ChronoZonedDateTimeImpl);
	$var($ChronoLocalDateTime, dateTime, $cast($ChronoLocalDateTime, $nc(in)->readObject()));
	$var($ZoneOffset, offset, $cast($ZoneOffset, in->readObject()));
	$var($ZoneId, zone, $cast($ZoneId, in->readObject()));
	return $nc($($nc(dateTime)->atZone(offset)))->withZoneSameLocal(zone);
}

bool ChronoZonedDateTimeImpl::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf($ChronoZonedDateTime, obj)) {
		return compareTo($cast($ChronoZonedDateTime, obj)) == 0;
	}
	return false;
}

int32_t ChronoZonedDateTimeImpl::hashCode() {
	int32_t var$1 = $nc($(toLocalDateTime()))->hashCode();
	int32_t var$0 = var$1 ^ $nc($(getOffset()))->hashCode();
	return var$0 ^ $Integer::rotateLeft($nc($(getZone()))->hashCode(), 3);
}

$String* ChronoZonedDateTimeImpl::toString() {
	$var($String, var$0, $($nc($(toLocalDateTime()))->toString()));
	$var($String, str, $concat(var$0, $($nc($(getOffset()))->toString())));
	if (!$equals(getOffset(), getZone())) {
		$plusAssign(str, $$str({$$str(u'['), $($nc($(getZone()))->toString()), $$str(u']')}));
	}
	return str;
}

ChronoZonedDateTimeImpl::ChronoZonedDateTimeImpl() {
}

$Class* ChronoZonedDateTimeImpl::load$($String* name, bool initialize) {
	$loadClass(ChronoZonedDateTimeImpl, name, initialize, &_ChronoZonedDateTimeImpl_ClassInfo_, allocate$ChronoZonedDateTimeImpl);
	return class$;
}

$Class* ChronoZonedDateTimeImpl::class$ = nullptr;

		} // chrono
	} // time
} // java