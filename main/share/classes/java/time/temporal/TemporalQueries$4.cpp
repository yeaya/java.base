#include <java/time/temporal/TemporalQueries$4.h>

#include <java/time/ZoneOffset.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <jcpp.h>

#undef OFFSET_SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZoneOffset = ::java::time::ZoneOffset;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _TemporalQueries$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TemporalQueries$4::*)()>(&TemporalQueries$4::init$))},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneOffset;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TemporalQueries$4_EnclosingMethodInfo_ = {
	"java.time.temporal.TemporalQueries",
	nullptr,
	nullptr
};

$InnerClassInfo _TemporalQueries$4_InnerClassesInfo_[] = {
	{"java.time.temporal.TemporalQueries$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TemporalQueries$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.temporal.TemporalQueries$4",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	_TemporalQueries$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneOffset;>;",
	&_TemporalQueries$4_EnclosingMethodInfo_,
	_TemporalQueries$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.TemporalQueries"
};

$Object* allocate$TemporalQueries$4($Class* clazz) {
	return $of($alloc(TemporalQueries$4));
}

void TemporalQueries$4::init$() {
}

$Object* TemporalQueries$4::queryFrom($TemporalAccessor* temporal) {
	$init($ChronoField);
	if ($nc(temporal)->isSupported($ChronoField::OFFSET_SECONDS)) {
		return $of($ZoneOffset::ofTotalSeconds(temporal->get($ChronoField::OFFSET_SECONDS)));
	}
	return $of(nullptr);
}

$String* TemporalQueries$4::toString() {
	return "ZoneOffset"_s;
}

TemporalQueries$4::TemporalQueries$4() {
}

$Class* TemporalQueries$4::load$($String* name, bool initialize) {
	$loadClass(TemporalQueries$4, name, initialize, &_TemporalQueries$4_ClassInfo_, allocate$TemporalQueries$4);
	return class$;
}

$Class* TemporalQueries$4::class$ = nullptr;

		} // temporal
	} // time
} // java