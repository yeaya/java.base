#include <java/time/temporal/TemporalQueries$7.h>
#include <java/time/LocalTime.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <jcpp.h>

#undef NANO_OF_DAY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocalTime = ::java::time::LocalTime;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;

namespace java {
	namespace time {
		namespace temporal {

void TemporalQueries$7::init$() {
}

$Object* TemporalQueries$7::queryFrom($TemporalAccessor* temporal) {
	$init($ChronoField);
	if ($nc(temporal)->isSupported($ChronoField::NANO_OF_DAY)) {
		return $of($LocalTime::ofNanoOfDay(temporal->getLong($ChronoField::NANO_OF_DAY)));
	}
	return nullptr;
}

$String* TemporalQueries$7::toString() {
	return "LocalTime"_s;
}

TemporalQueries$7::TemporalQueries$7() {
}

$Class* TemporalQueries$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TemporalQueries$7, init$, void)},
		{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalTime;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$7, queryFrom, $Object*, $TemporalAccessor*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$7, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.temporal.TemporalQueries",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.temporal.TemporalQueries$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.temporal.TemporalQueries$7",
		"java.lang.Object",
		"java.time.temporal.TemporalQuery",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/time/temporal/TemporalQuery<Ljava/time/LocalTime;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.temporal.TemporalQueries"
	};
	$loadClass(TemporalQueries$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemporalQueries$7);
	});
	return class$;
}

$Class* TemporalQueries$7::class$ = nullptr;

		} // temporal
	} // time
} // java