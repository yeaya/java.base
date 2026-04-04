#include <java/time/chrono/ChronoPeriod.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/temporal/TemporalAmount.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $Chronology = ::java::time::chrono::Chronology;
using $TemporalAmount = ::java::time::temporal::TemporalAmount;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace chrono {

bool ChronoPeriod::equals(Object$* obj) {
	 return this->$TemporalAmount::equals(obj);
}

int32_t ChronoPeriod::hashCode() {
	 return this->$TemporalAmount::hashCode();
}

$String* ChronoPeriod::toString() {
	 return this->$TemporalAmount::toString();
}

ChronoPeriod* ChronoPeriod::between($ChronoLocalDate* startDateInclusive, $ChronoLocalDate* endDateExclusive) {
	$init(ChronoPeriod);
	$Objects::requireNonNull(startDateInclusive, "startDateInclusive"_s);
	$Objects::requireNonNull(endDateExclusive, "endDateExclusive"_s);
	return $nc(startDateInclusive)->until(endDateExclusive);
}

bool ChronoPeriod::isZero() {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc(getUnits())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($TemporalUnit, unit, $cast($TemporalUnit, i$->next()));
		if (get(unit) != 0) {
			return false;
		}
	}
	return true;
}

bool ChronoPeriod::isNegative() {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc(getUnits())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($TemporalUnit, unit, $cast($TemporalUnit, i$->next()));
		if (get(unit) < 0) {
			return true;
		}
	}
	return false;
}

ChronoPeriod* ChronoPeriod::negated() {
	return multipliedBy(-1);
}

$Class* ChronoPeriod::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addTo", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT},
		{"between", "(Ljava/time/chrono/ChronoLocalDate;Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC | $STATIC, $staticMethod(ChronoPeriod, between, ChronoPeriod*, $ChronoLocalDate*, $ChronoLocalDate*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"get", "(Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC | $ABSTRACT},
		{"getChronology", "()Ljava/time/chrono/Chronology;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChronoPeriod, getChronology, $Chronology*)},
		{"getUnits", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"isNegative", "()Z", nullptr, $PUBLIC, $virtualMethod(ChronoPeriod, isNegative, bool)},
		{"isZero", "()Z", nullptr, $PUBLIC, $virtualMethod(ChronoPeriod, isZero, bool)},
		{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChronoPeriod, minus, ChronoPeriod*, $TemporalAmount*)},
		{"multipliedBy", "(I)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChronoPeriod, multipliedBy, ChronoPeriod*, int32_t)},
		{"negated", "()Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC, $virtualMethod(ChronoPeriod, negated, ChronoPeriod*)},
		{"normalized", "()Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChronoPeriod, normalized, ChronoPeriod*)},
		{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ChronoPeriod, plus, ChronoPeriod*, $TemporalAmount*)},
		{"subtractFrom", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.time.chrono.ChronoPeriod",
		nullptr,
		"java.time.temporal.TemporalAmount",
		nullptr,
		methodInfos$$
	};
	$loadClass(ChronoPeriod, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ChronoPeriod);
	});
	return class$;
}

$Class* ChronoPeriod::class$ = nullptr;

		} // chrono
	} // time
} // java