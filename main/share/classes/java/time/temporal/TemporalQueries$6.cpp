#include <java/time/temporal/TemporalQueries$6.h>
#include <java/time/LocalDate.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <jcpp.h>

#undef EPOCH_DAY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocalDate = ::java::time::LocalDate;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;

namespace java {
	namespace time {
		namespace temporal {

void TemporalQueries$6::init$() {
}

$Object* TemporalQueries$6::queryFrom($TemporalAccessor* temporal) {
	$init($ChronoField);
	if ($nc(temporal)->isSupported($ChronoField::EPOCH_DAY)) {
		return $of($LocalDate::ofEpochDay(temporal->getLong($ChronoField::EPOCH_DAY)));
	}
	return nullptr;
}

$String* TemporalQueries$6::toString() {
	return "LocalDate"_s;
}

TemporalQueries$6::TemporalQueries$6() {
}

$Class* TemporalQueries$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TemporalQueries$6, init$, void)},
		{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$6, queryFrom, $Object*, $TemporalAccessor*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$6, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.temporal.TemporalQueries",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.temporal.TemporalQueries$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.temporal.TemporalQueries$6",
		"java.lang.Object",
		"java.time.temporal.TemporalQuery",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/time/temporal/TemporalQuery<Ljava/time/LocalDate;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.temporal.TemporalQueries"
	};
	$loadClass(TemporalQueries$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemporalQueries$6);
	});
	return class$;
}

$Class* TemporalQueries$6::class$ = nullptr;

		} // temporal
	} // time
} // java