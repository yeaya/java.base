#include <java/time/temporal/TemporalQueries$5.h>
#include <java/time/ZoneId.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <jcpp.h>

#undef OFFSET
#undef ZONE_ID

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZoneId = ::java::time::ZoneId;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;

namespace java {
	namespace time {
		namespace temporal {

void TemporalQueries$5::init$() {
}

$Object* TemporalQueries$5::queryFrom($TemporalAccessor* temporal) {
	$init($TemporalQueries);
	$var($ZoneId, zone, $cast($ZoneId, $nc(temporal)->query($TemporalQueries::ZONE_ID)));
	return (zone != nullptr ? zone : $cast($ZoneId, temporal->query($TemporalQueries::OFFSET)));
}

$String* TemporalQueries$5::toString() {
	return "Zone"_s;
}

TemporalQueries$5::TemporalQueries$5() {
}

$Class* TemporalQueries$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TemporalQueries$5, init$, void)},
		{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneId;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$5, queryFrom, $Object*, $TemporalAccessor*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$5, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.temporal.TemporalQueries",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.temporal.TemporalQueries$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.temporal.TemporalQueries$5",
		"java.lang.Object",
		"java.time.temporal.TemporalQuery",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneId;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.temporal.TemporalQueries"
	};
	$loadClass(TemporalQueries$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemporalQueries$5);
	});
	return class$;
}

$Class* TemporalQueries$5::class$ = nullptr;

		} // temporal
	} // time
} // java