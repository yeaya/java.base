#include <test/java/time/temporal/MockFieldValue.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/time/temporal/ValueRange.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalField = ::java::time::temporal::TemporalField;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;
using $ValueRange = ::java::time::temporal::ValueRange;

namespace test {
	namespace java {
		namespace time {
			namespace temporal {

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
			return field->range();
		}
		$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
	}
	return $nc(field)->rangeRefinedBy(this);
}

int64_t MockFieldValue::getLong($TemporalField* field) {
	if ($nc(this->field)->equals(field)) {
		return this->value;
	}
	$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
}

MockFieldValue::MockFieldValue() {
}

$Class* MockFieldValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"field", "Ljava/time/temporal/TemporalField;", nullptr, $PRIVATE | $FINAL, $field(MockFieldValue, field)},
		{"value", "J", nullptr, $PRIVATE | $FINAL, $field(MockFieldValue, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/temporal/TemporalField;J)V", nullptr, $PUBLIC, $method(MockFieldValue, init$, void, $TemporalField*, int64_t)},
		{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC, $virtualMethod(MockFieldValue, getLong, int64_t, $TemporalField*)},
		{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC, $virtualMethod(MockFieldValue, isSupported, bool, $TemporalField*)},
		{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC, $virtualMethod(MockFieldValue, range, $ValueRange*, $TemporalField*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"test.java.time.temporal.MockFieldValue",
		"java.lang.Object",
		"java.time.temporal.TemporalAccessor",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MockFieldValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MockFieldValue);
	});
	return class$;
}

$Class* MockFieldValue::class$ = nullptr;

			} // temporal
		} // time
	} // java
} // test