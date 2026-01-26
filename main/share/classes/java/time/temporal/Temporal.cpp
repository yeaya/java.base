#include <java/time/temporal/Temporal.h>

#include <java/time/temporal/TemporalAdjuster.h>
#include <java/time/temporal/TemporalAmount.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $TemporalAdjuster = ::java::time::temporal::TemporalAdjuster;
using $TemporalAmount = ::java::time::temporal::TemporalAmount;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _Temporal_MethodInfo_[] = {
	{"isSupported", "(Ljava/time/temporal/TemporalUnit;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Temporal, isSupported, bool, $TemporalUnit*)},
	{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC, $virtualMethod(Temporal, minus, Temporal*, $TemporalAmount*)},
	{"minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC, $virtualMethod(Temporal, minus, Temporal*, int64_t, $TemporalUnit*)},
	{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC, $virtualMethod(Temporal, plus, Temporal*, $TemporalAmount*)},
	{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Temporal, plus, Temporal*, int64_t, $TemporalUnit*)},
	{"until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Temporal, until, int64_t, Temporal*, $TemporalUnit*)},
	{"with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC, $virtualMethod(Temporal, with, Temporal*, $TemporalAdjuster*)},
	{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Temporal, with, Temporal*, $TemporalField*, int64_t)},
	{}
};

$ClassInfo _Temporal_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.temporal.Temporal",
	nullptr,
	"java.time.temporal.TemporalAccessor",
	nullptr,
	_Temporal_MethodInfo_
};

$Object* allocate$Temporal($Class* clazz) {
	return $of($alloc(Temporal));
}

Temporal* Temporal::with($TemporalAdjuster* adjuster) {
	return $nc(adjuster)->adjustInto(this);
}

Temporal* Temporal::plus($TemporalAmount* amount) {
	return $nc(amount)->addTo(this);
}

Temporal* Temporal::minus($TemporalAmount* amount) {
	return $nc(amount)->subtractFrom(this);
}

Temporal* Temporal::minus(int64_t amountToSubtract, $TemporalUnit* unit) {
	return (amountToSubtract == $Long::MIN_VALUE ? $nc($(plus($Long::MAX_VALUE, unit)))->plus(1, unit) : plus(-amountToSubtract, unit));
}

$Class* Temporal::load$($String* name, bool initialize) {
	$loadClass(Temporal, name, initialize, &_Temporal_ClassInfo_, allocate$Temporal);
	return class$;
}

$Class* Temporal::class$ = nullptr;

		} // temporal
	} // time
} // java