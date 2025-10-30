#include <java/time/temporal/TemporalQueries$3.h>

#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/time/temporal/TemporalUnit.h>
#include <jcpp.h>

#undef PRECISION

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _TemporalQueries$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TemporalQueries$3::*)()>(&TemporalQueries$3::init$))},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TemporalQueries$3_EnclosingMethodInfo_ = {
	"java.time.temporal.TemporalQueries",
	nullptr,
	nullptr
};

$InnerClassInfo _TemporalQueries$3_InnerClassesInfo_[] = {
	{"java.time.temporal.TemporalQueries$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TemporalQueries$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.temporal.TemporalQueries$3",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	_TemporalQueries$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/time/temporal/TemporalQuery<Ljava/time/temporal/TemporalUnit;>;",
	&_TemporalQueries$3_EnclosingMethodInfo_,
	_TemporalQueries$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.TemporalQueries"
};

$Object* allocate$TemporalQueries$3($Class* clazz) {
	return $of($alloc(TemporalQueries$3));
}

void TemporalQueries$3::init$() {
}

$Object* TemporalQueries$3::queryFrom($TemporalAccessor* temporal) {
	$init($TemporalQueries);
	return $of($cast($TemporalUnit, $nc(temporal)->query($TemporalQueries::PRECISION)));
}

$String* TemporalQueries$3::toString() {
	return "Precision"_s;
}

TemporalQueries$3::TemporalQueries$3() {
}

$Class* TemporalQueries$3::load$($String* name, bool initialize) {
	$loadClass(TemporalQueries$3, name, initialize, &_TemporalQueries$3_ClassInfo_, allocate$TemporalQueries$3);
	return class$;
}

$Class* TemporalQueries$3::class$ = nullptr;

		} // temporal
	} // time
} // java