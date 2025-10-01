#include <java/time/temporal/Temporal.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalAdjuster = ::java::time::temporal::TemporalAdjuster;
using $TemporalAmount = ::java::time::temporal::TemporalAmount;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _Temporal_MethodInfo_[] = {
	{"isSupported", "(Ljava/time/temporal/TemporalUnit;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT},
	{"until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT},
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