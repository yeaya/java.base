#include <java/time/temporal/TemporalQueries$7.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/LocalTime.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <jcpp.h>

#undef NANO_OF_DAY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocalTime = ::java::time::LocalTime;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _TemporalQueries$7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TemporalQueries$7::*)()>(&TemporalQueries$7::init$))},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalTime;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TemporalQueries$7_EnclosingMethodInfo_ = {
	"java.time.temporal.TemporalQueries",
	nullptr,
	nullptr
};

$InnerClassInfo _TemporalQueries$7_InnerClassesInfo_[] = {
	{"java.time.temporal.TemporalQueries$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TemporalQueries$7_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.temporal.TemporalQueries$7",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	_TemporalQueries$7_MethodInfo_,
	"Ljava/lang/Object;Ljava/time/temporal/TemporalQuery<Ljava/time/LocalTime;>;",
	&_TemporalQueries$7_EnclosingMethodInfo_,
	_TemporalQueries$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.TemporalQueries"
};

$Object* allocate$TemporalQueries$7($Class* clazz) {
	return $of($alloc(TemporalQueries$7));
}

void TemporalQueries$7::init$() {
}

$Object* TemporalQueries$7::queryFrom($TemporalAccessor* temporal) {
	$init($ChronoField);
	if ($nc(temporal)->isSupported($ChronoField::NANO_OF_DAY)) {
		return $of($LocalTime::ofNanoOfDay(temporal->getLong($ChronoField::NANO_OF_DAY)));
	}
	return $of(nullptr);
}

$String* TemporalQueries$7::toString() {
	return "LocalTime"_s;
}

TemporalQueries$7::TemporalQueries$7() {
}

$Class* TemporalQueries$7::load$($String* name, bool initialize) {
	$loadClass(TemporalQueries$7, name, initialize, &_TemporalQueries$7_ClassInfo_, allocate$TemporalQueries$7);
	return class$;
}

$Class* TemporalQueries$7::class$ = nullptr;

		} // temporal
	} // time
} // java