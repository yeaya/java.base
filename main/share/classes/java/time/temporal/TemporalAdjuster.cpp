#include <java/time/temporal/TemporalAdjuster.h>
#include <java/time/temporal/Temporal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Temporal = ::java::time::temporal::Temporal;

namespace java {
	namespace time {
		namespace temporal {

$Class* TemporalAdjuster::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TemporalAdjuster, adjustInto, $Temporal*, $Temporal*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.time.temporal.TemporalAdjuster",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TemporalAdjuster, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemporalAdjuster);
	});
	return class$;
}

$Class* TemporalAdjuster::class$ = nullptr;

		} // temporal
	} // time
} // java