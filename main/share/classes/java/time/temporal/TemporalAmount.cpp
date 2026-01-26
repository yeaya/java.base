#include <java/time/temporal/TemporalAmount.h>

#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $List = ::java::util::List;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _TemporalAmount_MethodInfo_[] = {
	{"addTo", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TemporalAmount, addTo, $Temporal*, $Temporal*)},
	{"get", "(Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TemporalAmount, get, int64_t, $TemporalUnit*)},
	{"getUnits", "()Ljava/util/List;", "()Ljava/util/List<Ljava/time/temporal/TemporalUnit;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TemporalAmount, getUnits, $List*)},
	{"subtractFrom", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TemporalAmount, subtractFrom, $Temporal*, $Temporal*)},
	{}
};

$ClassInfo _TemporalAmount_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.temporal.TemporalAmount",
	nullptr,
	nullptr,
	nullptr,
	_TemporalAmount_MethodInfo_
};

$Object* allocate$TemporalAmount($Class* clazz) {
	return $of($alloc(TemporalAmount));
}

$Class* TemporalAmount::load$($String* name, bool initialize) {
	$loadClass(TemporalAmount, name, initialize, &_TemporalAmount_ClassInfo_, allocate$TemporalAmount);
	return class$;
}

$Class* TemporalAmount::class$ = nullptr;

		} // temporal
	} // time
} // java