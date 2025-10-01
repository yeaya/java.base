#include <java/time/temporal/ValueRange.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <java/time/temporal/TemporalField.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $TemporalField = ::java::time::temporal::TemporalField;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _ValueRange_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ValueRange, serialVersionUID)},
	{"minSmallest", "J", nullptr, $PRIVATE | $FINAL, $field(ValueRange, minSmallest)},
	{"minLargest", "J", nullptr, $PRIVATE | $FINAL, $field(ValueRange, minLargest)},
	{"maxSmallest", "J", nullptr, $PRIVATE | $FINAL, $field(ValueRange, maxSmallest)},
	{"maxLargest", "J", nullptr, $PRIVATE | $FINAL, $field(ValueRange, maxLargest)},
	{}
};

$MethodInfo _ValueRange_MethodInfo_[] = {
	{"<init>", "(JJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(ValueRange::*)(int64_t,int64_t,int64_t,int64_t)>(&ValueRange::init$))},
	{"checkValidIntValue", "(JLjava/time/temporal/TemporalField;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(ValueRange::*)(int64_t,$TemporalField*)>(&ValueRange::checkValidIntValue))},
	{"checkValidValue", "(JLjava/time/temporal/TemporalField;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(ValueRange::*)(int64_t,$TemporalField*)>(&ValueRange::checkValidValue))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"genInvalidFieldMessage", "(Ljava/time/temporal/TemporalField;J)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ValueRange::*)($TemporalField*,int64_t)>(&ValueRange::genInvalidFieldMessage))},
	{"getLargestMinimum", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(ValueRange::*)()>(&ValueRange::getLargestMinimum))},
	{"getMaximum", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(ValueRange::*)()>(&ValueRange::getMaximum))},
	{"getMinimum", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(ValueRange::*)()>(&ValueRange::getMinimum))},
	{"getSmallestMaximum", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(ValueRange::*)()>(&ValueRange::getSmallestMaximum))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isFixed", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ValueRange::*)()>(&ValueRange::isFixed))},
	{"isIntValue", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ValueRange::*)()>(&ValueRange::isIntValue))},
	{"isValidIntValue", "(J)Z", nullptr, $PUBLIC, $method(static_cast<bool(ValueRange::*)(int64_t)>(&ValueRange::isValidIntValue))},
	{"isValidValue", "(J)Z", nullptr, $PUBLIC, $method(static_cast<bool(ValueRange::*)(int64_t)>(&ValueRange::isValidValue))},
	{"of", "(JJ)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ValueRange*(*)(int64_t,int64_t)>(&ValueRange::of))},
	{"of", "(JJJ)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ValueRange*(*)(int64_t,int64_t,int64_t)>(&ValueRange::of))},
	{"of", "(JJJJ)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ValueRange*(*)(int64_t,int64_t,int64_t,int64_t)>(&ValueRange::of))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ValueRange::*)($ObjectInputStream*)>(&ValueRange::readObject)), "java.io.IOException,java.lang.ClassNotFoundException,java.io.InvalidObjectException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ValueRange_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.temporal.ValueRange",
	"java.lang.Object",
	"java.io.Serializable",
	_ValueRange_FieldInfo_,
	_ValueRange_MethodInfo_
};

$Object* allocate$ValueRange($Class* clazz) {
	return $of($alloc(ValueRange));
}

ValueRange* ValueRange::of(int64_t min, int64_t max) {
	$init(ValueRange);
	if (min > max) {
		$throwNew($IllegalArgumentException, "Minimum value must be less than maximum value"_s);
	}
	return $new(ValueRange, min, min, max, max);
}

ValueRange* ValueRange::of(int64_t min, int64_t maxSmallest, int64_t maxLargest) {
	$init(ValueRange);
	if (min > maxSmallest) {
		$throwNew($IllegalArgumentException, "Minimum value must be less than smallest maximum value"_s);
	}
	return of(min, min, maxSmallest, maxLargest);
}

ValueRange* ValueRange::of(int64_t minSmallest, int64_t minLargest, int64_t maxSmallest, int64_t maxLargest) {
	$init(ValueRange);
	if (minSmallest > minLargest) {
		$throwNew($IllegalArgumentException, "Smallest minimum value must be less than largest minimum value"_s);
	}
	if (maxSmallest > maxLargest) {
		$throwNew($IllegalArgumentException, "Smallest maximum value must be less than largest maximum value"_s);
	}
	if (minLargest > maxLargest) {
		$throwNew($IllegalArgumentException, "Largest minimum value must be less than largest maximum value"_s);
	}
	if (minSmallest > maxSmallest) {
		$throwNew($IllegalArgumentException, "Smallest minimum value must be less than smallest maximum value"_s);
	}
	return $new(ValueRange, minSmallest, minLargest, maxSmallest, maxLargest);
}

void ValueRange::init$(int64_t minSmallest, int64_t minLargest, int64_t maxSmallest, int64_t maxLargest) {
	this->minSmallest = minSmallest;
	this->minLargest = minLargest;
	this->maxSmallest = maxSmallest;
	this->maxLargest = maxLargest;
}

bool ValueRange::isFixed() {
	return this->minSmallest == this->minLargest && this->maxSmallest == this->maxLargest;
}

int64_t ValueRange::getMinimum() {
	return this->minSmallest;
}

int64_t ValueRange::getLargestMinimum() {
	return this->minLargest;
}

int64_t ValueRange::getSmallestMaximum() {
	return this->maxSmallest;
}

int64_t ValueRange::getMaximum() {
	return this->maxLargest;
}

bool ValueRange::isIntValue() {
	bool var$0 = getMinimum() >= $Integer::MIN_VALUE;
	return var$0 && getMaximum() <= $Integer::MAX_VALUE;
}

bool ValueRange::isValidValue(int64_t value) {
	bool var$0 = value >= getMinimum();
	return (var$0 && value <= getMaximum());
}

bool ValueRange::isValidIntValue(int64_t value) {
	bool var$0 = isIntValue();
	return var$0 && isValidValue(value);
}

int64_t ValueRange::checkValidValue(int64_t value, $TemporalField* field) {
	if (isValidValue(value) == false) {
		$throwNew($DateTimeException, $(genInvalidFieldMessage(field, value)));
	}
	return value;
}

int32_t ValueRange::checkValidIntValue(int64_t value, $TemporalField* field) {
	if (isValidIntValue(value) == false) {
		$throwNew($DateTimeException, $(genInvalidFieldMessage(field, value)));
	}
	return (int32_t)value;
}

$String* ValueRange::genInvalidFieldMessage($TemporalField* field, int64_t value) {
	if (field != nullptr) {
		return $str({"Invalid value for "_s, field, " (valid values "_s, this, "): "_s, $$str(value)});
	} else {
		return $str({"Invalid value (valid values "_s, this, "): "_s, $$str(value)});
	}
}

void ValueRange::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->minSmallest > this->minLargest) {
		$throwNew($InvalidObjectException, "Smallest minimum value must be less than largest minimum value"_s);
	}
	if (this->maxSmallest > this->maxLargest) {
		$throwNew($InvalidObjectException, "Smallest maximum value must be less than largest maximum value"_s);
	}
	if (this->minLargest > this->maxLargest) {
		$throwNew($InvalidObjectException, "Minimum value must be less than maximum value"_s);
	}
}

bool ValueRange::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	$var(ValueRange, other, nullptr);
	bool var$4 = $instanceOf(ValueRange, obj);
	if (var$4) {
		$assign(other, $cast(ValueRange, obj));
		var$4 = true;
	}
	bool var$3 = (var$4);
	bool var$2 = var$3 && this->minSmallest == $nc(other)->minSmallest;
	bool var$1 = var$2 && this->minLargest == other->minLargest;
	bool var$0 = var$1 && this->maxSmallest == other->maxSmallest;
	return var$0 && this->maxLargest == other->maxLargest;
}

int32_t ValueRange::hashCode() {
	int64_t hash = this->minSmallest + (this->minLargest << 16) + (this->minLargest >> 48) + (this->maxSmallest << 32) + (this->maxSmallest >> 32) + (this->maxLargest << 48) + (this->maxLargest >> 16);
	return (int32_t)(hash ^ ((int64_t)((uint64_t)hash >> 32)));
}

$String* ValueRange::toString() {
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append(this->minSmallest);
	if (this->minSmallest != this->minLargest) {
		buf->append(u'/')->append(this->minLargest);
	}
	buf->append(" - "_s)->append(this->maxSmallest);
	if (this->maxSmallest != this->maxLargest) {
		buf->append(u'/')->append(this->maxLargest);
	}
	return buf->toString();
}

ValueRange::ValueRange() {
}

$Class* ValueRange::load$($String* name, bool initialize) {
	$loadClass(ValueRange, name, initialize, &_ValueRange_ClassInfo_, allocate$ValueRange);
	return class$;
}

$Class* ValueRange::class$ = nullptr;

		} // temporal
	} // time
} // java