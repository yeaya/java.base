#include <java/time/temporal/TemporalQuery.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;

namespace java {
	namespace time {
		namespace temporal {

$Class* TemporalQuery::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/Object;", "(Ljava/time/temporal/TemporalAccessor;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(TemporalQuery, queryFrom, $Object*, $TemporalAccessor*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.time.temporal.TemporalQuery",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TemporalQuery, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemporalQuery);
	});
	return class$;
}

$Class* TemporalQuery::class$ = nullptr;

		} // temporal
	} // time
} // java