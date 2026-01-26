#include <test/java/time/temporal/MockFieldValue.h>

#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/time/temporal/ValueRange.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;
using $ValueRange = ::java::time::temporal::ValueRange;

namespace test {
	namespace java {
		namespace time {
			namespace temporal {

$FieldInfo _MockFieldValue_FieldInfo_[] = {
	{"field", "Ljava/time/temporal/TemporalField;", nullptr, $PRIVATE | $FINAL, $field(MockFieldValue, field)},
	{"value", "J", nullptr, $PRIVATE | $FINAL, $field(MockFieldValue, value)},
	{}
};

$MethodInfo _MockFieldValue_MethodInfo_[] = {
	{"<init>", "(Ljava/time/temporal/TemporalField;J)V", nullptr, $PUBLIC, $method(MockFieldValue, init$, void, $TemporalField*, int64_t)},
	{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC, $virtualMethod(MockFieldValue, getLong, int64_t, $TemporalField*)},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC, $virtualMethod(MockFieldValue, isSupported, bool, $TemporalField*)},
	{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC, $virtualMethod(MockFieldValue, range, $ValueRange*, $TemporalField*)},
	{}
};

$ClassInfo _MockFieldValue_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"test.java.time.temporal.MockFieldValue",
	"java.lang.Object",
	"java.time.temporal.TemporalAccessor",
	_MockFieldValue_FieldInfo_,
	_MockFieldValue_MethodInfo_
};

$Object* allocate$MockFieldValue($Class* clazz) {
	return $of($alloc(MockFieldValue));
}

void MockFieldValue::init$($TemporalField* field, int64_t value) {
	$set(this, field, field);
	this->value = value;
}

bool MockFieldValue::isSupported($TemporalField* field) {
	return field != nullptr && $of(field)->equals(this->field);
}

$ValueRange* MockFieldValue::range($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		if (isSupported(field)) {
			return $nc(field)->range();
		}
		$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
	}
	return $nc(field)->rangeRefinedBy(this);
}

int64_t MockFieldValue::getLong($TemporalField* field) {
	if ($nc($of(this->field))->equals(field)) {
		return this->value;
	}
	$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
}

MockFieldValue::MockFieldValue() {
}

$Class* MockFieldValue::load$($String* name, bool initialize) {
	$loadClass(MockFieldValue, name, initialize, &_MockFieldValue_ClassInfo_, allocate$MockFieldValue);
	return class$;
}

$Class* MockFieldValue::class$ = nullptr;

			} // temporal
		} // time
	} // java
} // test