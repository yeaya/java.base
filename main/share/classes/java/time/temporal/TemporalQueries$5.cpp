#include <java/time/temporal/TemporalQueries$5.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/ZoneId.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <jcpp.h>

#undef ZONE_ID
#undef OFFSET

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZoneId = ::java::time::ZoneId;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _TemporalQueries$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TemporalQueries$5::*)()>(&TemporalQueries$5::init$))},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneId;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TemporalQueries$5_EnclosingMethodInfo_ = {
	"java.time.temporal.TemporalQueries",
	nullptr,
	nullptr
};

$InnerClassInfo _TemporalQueries$5_InnerClassesInfo_[] = {
	{"java.time.temporal.TemporalQueries$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TemporalQueries$5_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.temporal.TemporalQueries$5",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	_TemporalQueries$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneId;>;",
	&_TemporalQueries$5_EnclosingMethodInfo_,
	_TemporalQueries$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.TemporalQueries"
};

$Object* allocate$TemporalQueries$5($Class* clazz) {
	return $of($alloc(TemporalQueries$5));
}

void TemporalQueries$5::init$() {
}

$Object* TemporalQueries$5::queryFrom($TemporalAccessor* temporal) {
	$init($TemporalQueries);
	$var($ZoneId, zone, $cast($ZoneId, $nc(temporal)->query($TemporalQueries::ZONE_ID)));
	return $of((zone != nullptr ? zone : $cast($ZoneId, temporal->query($TemporalQueries::OFFSET))));
}

$String* TemporalQueries$5::toString() {
	return "Zone"_s;
}

TemporalQueries$5::TemporalQueries$5() {
}

$Class* TemporalQueries$5::load$($String* name, bool initialize) {
	$loadClass(TemporalQueries$5, name, initialize, &_TemporalQueries$5_ClassInfo_, allocate$TemporalQueries$5);
	return class$;
}

$Class* TemporalQueries$5::class$ = nullptr;

		} // temporal
	} // time
} // java