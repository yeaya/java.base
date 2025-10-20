#include <tck/java/time/MockSimplePeriod.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Comparable = ::java::lang::Comparable;
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

namespace tck {
	namespace java {
		namespace time {

$FieldInfo _MockSimplePeriod_FieldInfo_[] = {
	{"ZERO_DAYS", "Ltck/java/time/MockSimplePeriod;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MockSimplePeriod, ZERO_DAYS)},
	{"ZERO_SECONDS", "Ltck/java/time/MockSimplePeriod;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MockSimplePeriod, ZERO_SECONDS)},
	{"amount", "J", nullptr, $PRIVATE | $FINAL, $field(MockSimplePeriod, amount)},
	{"unit", "Ljava/time/temporal/TemporalUnit;", nullptr, $PRIVATE | $FINAL, $field(MockSimplePeriod, unit)},
	{}
};

$MethodInfo _MockSimplePeriod_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(JLjava/time/temporal/TemporalUnit;)V", nullptr, $PRIVATE, $method(static_cast<void(MockSimplePeriod::*)(int64_t,$TemporalUnit*)>(&MockSimplePeriod::init$))},
	{"addTo", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"compareTo", "(Ltck/java/time/MockSimplePeriod;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(MockSimplePeriod::*)(MockSimplePeriod*)>(&MockSimplePeriod::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC},
	{"getAmount", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(MockSimplePeriod::*)()>(&MockSimplePeriod::getAmount))},
	{"getUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC, $method(static_cast<$TemporalUnit*(MockSimplePeriod::*)()>(&MockSimplePeriod::getUnit))},
	{"getUnits", "()Ljava/util/List;", "()Ljava/util/List<Ljava/time/temporal/TemporalUnit;>;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"of", "(JLjava/time/temporal/TemporalUnit;)Ltck/java/time/MockSimplePeriod;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MockSimplePeriod*(*)(int64_t,$TemporalUnit*)>(&MockSimplePeriod::of))},
	{"subtractFrom", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MockSimplePeriod_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"tck.java.time.MockSimplePeriod",
	"java.lang.Object",
	"java.time.temporal.TemporalAmount,java.lang.Comparable",
	_MockSimplePeriod_FieldInfo_,
	_MockSimplePeriod_MethodInfo_,
	"Ljava/lang/Object;Ljava/time/temporal/TemporalAmount;Ljava/lang/Comparable<Ltck/java/time/MockSimplePeriod;>;"
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
} // tck