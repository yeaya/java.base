#include <java/time/temporal/TemporalQueries$1.h>
#include <java/time/ZoneId.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <jcpp.h>

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

void TemporalQueries$1::init$() {
}

$Object* TemporalQueries$1::queryFrom($TemporalAccessor* temporal) {
	$init($TemporalQueries);
	return $cast($ZoneId, $nc(temporal)->query($TemporalQueries::ZONE_ID));
}

$String* TemporalQueries$1::toString() {
	return "ZoneId"_s;
}

TemporalQueries$1::TemporalQueries$1() {
}

$Class* TemporalQueries$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TemporalQueries$1, init$, void)},
		{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneId;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$1, queryFrom, $Object*, $TemporalAccessor*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$1, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.temporal.TemporalQueries",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.temporal.TemporalQueries$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.temporal.TemporalQueries$1",
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
	$loadClass(TemporalQueries$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemporalQueries$1);
	});
	return class$;
}

$Class* TemporalQueries$1::class$ = nullptr;

		} // temporal
	} // time
} // java