#include <java/time/temporal/TemporalQueries$4.h>
#include <java/time/ZoneOffset.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <jcpp.h>

#undef OFFSET_SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZoneOffset = ::java::time::ZoneOffset;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;

namespace java {
	namespace time {
		namespace temporal {

void TemporalQueries$4::init$() {
}

$Object* TemporalQueries$4::queryFrom($TemporalAccessor* temporal) {
	$init($ChronoField);
	if ($nc(temporal)->isSupported($ChronoField::OFFSET_SECONDS)) {
		return $of($ZoneOffset::ofTotalSeconds(temporal->get($ChronoField::OFFSET_SECONDS)));
	}
	return nullptr;
}

$String* TemporalQueries$4::toString() {
	return "ZoneOffset"_s;
}

TemporalQueries$4::TemporalQueries$4() {
}

$Class* TemporalQueries$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TemporalQueries$4, init$, void)},
		{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneOffset;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$4, queryFrom, $Object*, $TemporalAccessor*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$4, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.temporal.TemporalQueries",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.temporal.TemporalQueries$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.temporal.TemporalQueries$4",
		"java.lang.Object",
		"java.time.temporal.TemporalQuery",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneOffset;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.temporal.TemporalQueries"
	};
	$loadClass(TemporalQueries$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemporalQueries$4);
	});
	return class$;
}

$Class* TemporalQueries$4::class$ = nullptr;

		} // temporal
	} // time
} // java