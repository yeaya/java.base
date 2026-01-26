#include <test/java/time/MockSimplePeriod.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/time/DateTimeException.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAmount.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef DAYS
#undef FOREVER
#undef SECONDS
#undef ZERO_DAYS
#undef ZERO_SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $DateTimeException = ::java::time::DateTimeException;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAmount = ::java::time::temporal::TemporalAmount;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;

namespace test {
	namespace java {
		namespace time {

$FieldInfo _MockSimplePeriod_FieldInfo_[] = {
	{"ZERO_DAYS", "Ltest/java/time/MockSimplePeriod;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MockSimplePeriod, ZERO_DAYS)},
	{"ZERO_SECONDS", "Ltest/java/time/MockSimplePeriod;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MockSimplePeriod, ZERO_SECONDS)},
	{"amount", "J", nullptr, $PRIVATE | $FINAL, $field(MockSimplePeriod, amount)},
	{"unit", "Ljava/time/temporal/TemporalUnit;", nullptr, $PRIVATE | $FINAL, $field(MockSimplePeriod, unit)},
	{}
};

$MethodInfo _MockSimplePeriod_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(JLjava/time/temporal/TemporalUnit;)V", nullptr, $PRIVATE, $method(MockSimplePeriod, init$, void, int64_t, $TemporalUnit*)},
	{"addTo", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC, $virtualMethod(MockSimplePeriod, addTo, $Temporal*, $Temporal*)},
	{"compareTo", "(Ltest/java/time/MockSimplePeriod;)I", nullptr, $PUBLIC, $method(MockSimplePeriod, compareTo, int32_t, MockSimplePeriod*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MockSimplePeriod, compareTo, int32_t, Object$*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MockSimplePeriod, equals, bool, Object$*)},
	{"get", "(Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC, $virtualMethod(MockSimplePeriod, get, int64_t, $TemporalUnit*)},
	{"getAmount", "()J", nullptr, $PUBLIC, $method(MockSimplePeriod, getAmount, int64_t)},
	{"getUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC, $method(MockSimplePeriod, getUnit, $TemporalUnit*)},
	{"getUnits", "()Ljava/util/List;", "()Ljava/util/List<Ljava/time/temporal/TemporalUnit;>;", $PUBLIC, $virtualMethod(MockSimplePeriod, getUnits, $List*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MockSimplePeriod, hashCode, int32_t)},
	{"of", "(JLjava/time/temporal/TemporalUnit;)Ltest/java/time/MockSimplePeriod;", nullptr, $PUBLIC | $STATIC, $staticMethod(MockSimplePeriod, of, MockSimplePeriod*, int64_t, $TemporalUnit*)},
	{"subtractFrom", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC, $virtualMethod(MockSimplePeriod, subtractFrom, $Temporal*, $Temporal*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MockSimplePeriod, toString, $String*)},
	{}
};

$ClassInfo _MockSimplePeriod_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"test.java.time.MockSimplePeriod",
	"java.lang.Object",
	"java.time.temporal.TemporalAmount,java.lang.Comparable",
	_MockSimplePeriod_FieldInfo_,
	_MockSimplePeriod_MethodInfo_,
	"Ljava/lang/Object;Ljava/time/temporal/TemporalAmount;Ljava/lang/Comparable<Ltest/java/time/MockSimplePeriod;>;"
};

$Object* allocate$MockSimplePeriod($Class* clazz) {
	return $of($alloc(MockSimplePeriod));
}

$Object* MockSimplePeriod::clone() {
	 return this->$TemporalAmount::clone();
}

void MockSimplePeriod::finalize() {
	this->$TemporalAmount::finalize();
}

MockSimplePeriod* MockSimplePeriod::ZERO_DAYS = nullptr;
MockSimplePeriod* MockSimplePeriod::ZERO_SECONDS = nullptr;

MockSimplePeriod* MockSimplePeriod::of(int64_t amount, $TemporalUnit* unit) {
	$init(MockSimplePeriod);
	return $new(MockSimplePeriod, amount, unit);
}

void MockSimplePeriod::init$(int64_t amount, $TemporalUnit* unit) {
	$Objects::requireNonNull($of(unit), "unit"_s);
	$init($ChronoUnit);
	if ($equals(unit, $ChronoUnit::FOREVER)) {
		$throwNew($DateTimeException, "Cannot create a period of the Forever unit"_s);
	}
	this->amount = amount;
	$set(this, unit, unit);
}

int64_t MockSimplePeriod::get($TemporalUnit* unit) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$List* MockSimplePeriod::getUnits() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

int64_t MockSimplePeriod::getAmount() {
	return this->amount;
}

$TemporalUnit* MockSimplePeriod::getUnit() {
	return this->unit;
}

$Temporal* MockSimplePeriod::addTo($Temporal* temporal) {
	return $nc(temporal)->plus(this->amount, this->unit);
}

$Temporal* MockSimplePeriod::subtractFrom($Temporal* temporal) {
	return $nc(temporal)->minus(this->amount, this->unit);
}

int32_t MockSimplePeriod::compareTo(MockSimplePeriod* otherPeriod) {
	$useLocalCurrentObjectStackCache();
	if ($nc($of(this->unit))->equals($($nc(otherPeriod)->getUnit())) == false) {
		$var($String, var$0, $$str({"Units cannot be compared: "_s, this->unit, " and "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$0, $($nc(otherPeriod)->getUnit())));
	}
	return $Long::compare(this->amount, $nc(otherPeriod)->amount);
}

bool MockSimplePeriod::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf(MockSimplePeriod, obj)) {
		$var(MockSimplePeriod, other, $cast(MockSimplePeriod, obj));
		return this->amount == $nc(other)->amount && $nc($of(this->unit))->equals(other->unit);
	}
	return false;
}

int32_t MockSimplePeriod::hashCode() {
	return $nc($of(this->unit))->hashCode() ^ (int32_t)(this->amount ^ ((int64_t)((uint64_t)this->amount >> 32)));
}

$String* MockSimplePeriod::toString() {
	return $str({$$str(this->amount), " "_s, this->unit});
}

int32_t MockSimplePeriod::compareTo(Object$* otherPeriod) {
	return this->compareTo($cast(MockSimplePeriod, otherPeriod));
}

void clinit$MockSimplePeriod($Class* class$) {
	$init($ChronoUnit);
	$assignStatic(MockSimplePeriod::ZERO_DAYS, $new(MockSimplePeriod, 0, $ChronoUnit::DAYS));
	$assignStatic(MockSimplePeriod::ZERO_SECONDS, $new(MockSimplePeriod, 0, $ChronoUnit::SECONDS));
}

MockSimplePeriod::MockSimplePeriod() {
}

$Class* MockSimplePeriod::load$($String* name, bool initialize) {
	$loadClass(MockSimplePeriod, name, initialize, &_MockSimplePeriod_ClassInfo_, clinit$MockSimplePeriod, allocate$MockSimplePeriod);
	return class$;
}

$Class* MockSimplePeriod::class$ = nullptr;

		} // time
	} // java
} // test