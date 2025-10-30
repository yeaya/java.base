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
using $Duration = ::java::time::Duration;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $List = ::java::util::List;

namespace java {
	namespace time {

$FieldInfo _Duration$DurationUnits_FieldInfo_[] = {
	{"UNITS", "Ljava/util/List;", "Ljava/util/List<Ljava/time/temporal/TemporalUnit;>;", $STATIC | $FINAL, $staticField(Duration$DurationUnits, UNITS)},
	{}
};

$MethodInfo _Duration$DurationUnits_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Duration$DurationUnits::*)()>(&Duration$DurationUnits::init$))},
	{}
};

$InnerClassInfo _Duration$DurationUnits_InnerClassesInfo_[] = {
	{"java.time.Duration$DurationUnits", "java.time.Duration", "DurationUnits", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Duration$DurationUnits_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.Duration$DurationUnits",
	"java.lang.Object",
	nullptr,
	_Duration$DurationUnits_FieldInfo_,
	_Duration$DurationUnits_MethodInfo_,
	nullptr,
	nullptr,
	_Duration$DurationUnits_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Duration"
};

$Object* allocate$Duration$DurationUnits($Class* clazz) {
	return $of($alloc(Duration$DurationUnits));
}

$List* Duration$DurationUnits::UNITS = nullptr;

void Duration$DurationUnits::init$() {
}

void clinit$Duration$DurationUnits($Class* class$) {
	$init($ChronoUnit);
	$assignStatic(Duration$DurationUnits::UNITS, $List::of($ChronoUnit::SECONDS, $ChronoUnit::NANOS));
}

Duration$DurationUnits::Duration$DurationUnits() {
}

$Class* Duration$DurationUnits::load$($String* name, bool initialize) {
	$loadClass(Duration$DurationUnits, name, initialize, &_Duration$DurationUnits_ClassInfo_, clinit$Duration$DurationUnits, allocate$Duration$DurationUnits);
	return class$;
}

$Class* Duration$DurationUnits::class$ = nullptr;

	} // time
} // java