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

$Class* TemporalAmount::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addTo", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TemporalAmount, addTo, $Temporal*, $Temporal*)},
		{"get", "(Ljava/time/temporal/TemporalUnit;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TemporalAmount, get, int64_t, $TemporalUnit*)},
		{"getUnits", "()Ljava/util/List;", "()Ljava/util/List<Ljava/time/temporal/TemporalUnit;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TemporalAmount, getUnits, $List*)},
		{"subtractFrom", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TemporalAmount, subtractFrom, $Temporal*, $Temporal*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.time.temporal.TemporalAmount",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TemporalAmount, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemporalAmount);
	});
	return class$;
}

$Class* TemporalAmount::class$ = nullptr;

		} // temporal
	} // time
} // java