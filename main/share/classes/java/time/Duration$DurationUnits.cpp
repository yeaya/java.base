#include <java/time/Duration$DurationUnits.h>
#include <java/time/Duration.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NANOS
#undef SECONDS
#undef UNITS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $List = ::java::util::List;

namespace java {
	namespace time {

$List* Duration$DurationUnits::UNITS = nullptr;

void Duration$DurationUnits::init$() {
}

void Duration$DurationUnits::clinit$($Class* clazz) {
	$init($ChronoUnit);
	$assignStatic(Duration$DurationUnits::UNITS, $List::of($ChronoUnit::SECONDS, $ChronoUnit::NANOS));
}

Duration$DurationUnits::Duration$DurationUnits() {
}

$Class* Duration$DurationUnits::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"UNITS", "Ljava/util/List;", "Ljava/util/List<Ljava/time/temporal/TemporalUnit;>;", $STATIC | $FINAL, $staticField(Duration$DurationUnits, UNITS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Duration$DurationUnits, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.Duration$DurationUnits", "java.time.Duration", "DurationUnits", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.Duration$DurationUnits",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.Duration"
	};
	$loadClass(Duration$DurationUnits, name, initialize, &classInfo$$, Duration$DurationUnits::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Duration$DurationUnits);
	});
	return class$;
}

$Class* Duration$DurationUnits::class$ = nullptr;

	} // time
} // java