#include <test/java/time/temporal/MockFieldNoValue.h>

#include <java/lang/Enum.h>
#include <java/time/DateTimeException.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/ValueRange.h>
#include <jcpp.h>

#undef INSTANCE
#undef MONTHS
#undef WEEKS

using $MockFieldNoValueArray = $Array<::test::java::time::temporal::MockFieldNoValue>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $ValueRange = ::java::time::temporal::ValueRange;

namespace test {
	namespace java {
		namespace time {
			namespace temporal {

$FieldInfo _MockFieldNoValue_FieldInfo_[] = {
	{"INSTANCE", "Ltest/java/time/temporal/MockFieldNoValue;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MockFieldNoValue, INSTANCE)},
	{"$VALUES", "[Ltest/java/time/temporal/MockFieldNoValue;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MockFieldNoValue, $VALUES)},
	{}
};

$MethodInfo _MockFieldNoValue_MethodInfo_[] = {
	{"$values", "()[Ltest/java/time/temporal/MockFieldNoValue;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MockFieldNoValueArray*(*)()>(&MockFieldNoValue::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(MockFieldNoValue::*)($String*,int32_t)>(&MockFieldNoValue::init$))},
	{"adjustInto", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;", "<R::Ljava/time/temporal/Temporal;>(TR;J)TR;", $PUBLIC},
	{"getBaseUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC},
	{"getFrom", "(Ljava/time/temporal/TemporalAccessor;)J", nullptr, $PUBLIC},
	{"getRangeUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC},
	{"isDateBased", "()Z", nullptr, $PUBLIC},
	{"isSupportedBy", "(Ljava/time/temporal/TemporalAccessor;)Z", nullptr, $PUBLIC},
	{"isTimeBased", "()Z", nullptr, $PUBLIC},
	{"range", "()Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"rangeRefinedBy", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ltest/java/time/temporal/MockFieldNoValue;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MockFieldNoValue*(*)($String*)>(&MockFieldNoValue::valueOf))},
	{"values", "()[Ltest/java/time/temporal/MockFieldNoValue;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MockFieldNoValueArray*(*)()>(&MockFieldNoValue::values))},
	{}
};

$ClassInfo _MockFieldNoValue_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"test.java.time.temporal.MockFieldNoValue",
	"java.lang.Enum",
	"java.time.temporal.TemporalField",
	_MockFieldNoValue_FieldInfo_,
	_MockFieldNoValue_MethodInfo_,
	"Ljava/lang/Enum<Ltest/java/time/temporal/MockFieldNoValue;>;Ljava/time/temporal/TemporalField;"
};

$Object* allocate$MockFieldNoValue($Class* clazz) {
	return $of($alloc(MockFieldNoValue));
}

bool MockFieldNoValue::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t MockFieldNoValue::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* MockFieldNoValue::clone() {
	 return this->$Enum::clone();
}

void MockFieldNoValue::finalize() {
	this->$Enum::finalize();
}

MockFieldNoValue* MockFieldNoValue::INSTANCE = nullptr;
$MockFieldNoValueArray* MockFieldNoValue::$VALUES = nullptr;

$MockFieldNoValueArray* MockFieldNoValue::$values() {
	$init(MockFieldNoValue);
	return $new($MockFieldNoValueArray, {MockFieldNoValue::INSTANCE});
}

$MockFieldNoValueArray* MockFieldNoValue::values() {
	$init(MockFieldNoValue);
	return $cast($MockFieldNoValueArray, MockFieldNoValue::$VALUES->clone());
}

MockFieldNoValue* MockFieldNoValue::valueOf($String* name) {
	$init(MockFieldNoValue);
	return $cast(MockFieldNoValue, $Enum::valueOf(MockFieldNoValue::class$, name));
}

void MockFieldNoValue::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

$TemporalUnit* MockFieldNoValue::getBaseUnit() {
	$init($ChronoUnit);
	return $ChronoUnit::WEEKS;
}

$TemporalUnit* MockFieldNoValue::getRangeUnit() {
	$init($ChronoUnit);
	return $ChronoUnit::MONTHS;
}

$ValueRange* MockFieldNoValue::range() {
	return $ValueRange::of(1, 20);
}

bool MockFieldNoValue::isDateBased() {
	return false;
}

bool MockFieldNoValue::isTimeBased() {
	return false;
}

bool MockFieldNoValue::isSupportedBy($TemporalAccessor* temporal) {
	return true;
}

$ValueRange* MockFieldNoValue::rangeRefinedBy($TemporalAccessor* temporal) {
	return $ValueRange::of(1, 20);
}

int64_t MockFieldNoValue::getFrom($TemporalAccessor* temporal) {
	$throwNew($DateTimeException, "Mock"_s);
	$shouldNotReachHere();
}

$Temporal* MockFieldNoValue::adjustInto($Temporal* temporal, int64_t newValue) {
	$throwNew($DateTimeException, "Mock"_s);
	$shouldNotReachHere();
}

$String* MockFieldNoValue::toString() {
	return nullptr;
}

void clinit$MockFieldNoValue($Class* class$) {
	$assignStatic(MockFieldNoValue::INSTANCE, $new(MockFieldNoValue, "INSTANCE"_s, 0));
	$assignStatic(MockFieldNoValue::$VALUES, MockFieldNoValue::$values());
}

MockFieldNoValue::MockFieldNoValue() {
}

$Class* MockFieldNoValue::load$($String* name, bool initialize) {
	$loadClass(MockFieldNoValue, name, initialize, &_MockFieldNoValue_ClassInfo_, clinit$MockFieldNoValue, allocate$MockFieldNoValue);
	return class$;
}

$Class* MockFieldNoValue::class$ = nullptr;

			} // temporal
		} // time
	} // java
} // test