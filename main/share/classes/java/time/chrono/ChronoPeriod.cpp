#include <java/time/chrono/ChronoPeriod.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace chrono {

$MethodInfo _ChronoPeriod_MethodInfo_[] = {
	{"addTo", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT},
	{"between", "(Ljava/time/chrono/ChronoLocalDate;Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ChronoPeriod*(*)($ChronoLocalDate*,$ChronoLocalDate*)>(&ChronoPeriod::between))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getChronology", "()Ljava/time/chrono/Chronology;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnits", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isNegative", "()Z", nullptr, $PUBLIC},
	{"isZero", "()Z", nullptr, $PUBLIC},
	{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC | $ABSTRACT},
	{"multipliedBy", "(I)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC | $ABSTRACT},
	{"negated", "()Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC},
	{"normalized", "()Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC | $ABSTRACT},
	{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoPeriod;", nullptr, $PUBLIC | $ABSTRACT},
	{"subtractFrom", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ChronoPeriod_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.chrono.ChronoPeriod",
	nullptr,
	"java.time.temporal.TemporalAmount",
	nullptr,
	_ChronoPeriod_MethodInfo_
};

$Object* allocate$ChronoPeriod($Class* clazz) {
	return $of($alloc(ChronoPeriod));
}

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
	$Objects::requireNonNull($of(startDateInclusive), "startDateInclusive"_s);
	$Objects::requireNonNull($of(endDateExclusive), "endDateExclusive"_s);
	return $nc(startDateInclusive)->until(endDateExclusive);
}

bool ChronoPeriod::isZero() {
	{
		$var($Iterator, i$, $nc($(getUnits()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($TemporalUnit, unit, $cast($TemporalUnit, i$->next()));
			{
				if (get(unit) != 0) {
					return false;
				}
			}
		}
	}
	return true;
}

bool ChronoPeriod::isNegative() {
	{
		$var($Iterator, i$, $nc($(getUnits()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($TemporalUnit, unit, $cast($TemporalUnit, i$->next()));
			{
				if (get(unit) < 0) {
					return true;
				}
			}
		}
	}
	return false;
}

ChronoPeriod* ChronoPeriod::negated() {
	return multipliedBy(-1);
}

$Class* ChronoPeriod::load$($String* name, bool initialize) {
	$loadClass(ChronoPeriod, name, initialize, &_ChronoPeriod_ClassInfo_, allocate$ChronoPeriod);
	return class$;
}

$Class* ChronoPeriod::class$ = nullptr;

		} // chrono
	} // time
} // java