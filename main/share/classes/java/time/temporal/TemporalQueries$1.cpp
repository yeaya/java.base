#include <java/time/temporal/TemporalQueries$1.h>

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

$MethodInfo _TemporalQueries$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TemporalQueries$1::*)()>(&TemporalQueries$1::init$))},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZoneId;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TemporalQueries$1_EnclosingMethodInfo_ = {
	"java.time.temporal.TemporalQueries",
	nullptr,
	nullptr
};

$InnerClassInfo _TemporalQueries$1_InnerClassesInfo_[] = {
	{"java.time.temporal.TemporalQueries$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TemporalQueries$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.temporal.TemporalQueries$1",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	_TemporalQueries$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneId;>;",
	&_TemporalQueries$1_EnclosingMethodInfo_,
	_TemporalQueries$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.TemporalQueries"
};

$Object* allocate$TemporalQueries$1($Class* clazz) {
	return $of($alloc(TemporalQueries$1));
}

void TemporalQueries$1::init$() {
}

$Object* TemporalQueries$1::queryFrom($TemporalAccessor* temporal) {
	$init($TemporalQueries);
	return $of($cast($ZoneId, $nc(temporal)->query($TemporalQueries::ZONE_ID)));
}

$String* TemporalQueries$1::toString() {
	return "ZoneId"_s;
}

TemporalQueries$1::TemporalQueries$1() {
}

$Class* TemporalQueries$1::load$($String* name, bool initialize) {
	$loadClass(TemporalQueries$1, name, initialize, &_TemporalQueries$1_ClassInfo_, allocate$TemporalQueries$1);
	return class$;
}

$Class* TemporalQueries$1::class$ = nullptr;

		} // temporal
	} // time
} // java