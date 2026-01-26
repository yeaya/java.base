#include <java/time/temporal/TemporalQueries$2.h>

#include <java/time/chrono/Chronology.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <jcpp.h>

#undef CHRONO

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Chronology = ::java::time::chrono::Chronology;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _TemporalQueries$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TemporalQueries$2, init$, void)},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/Chronology;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$2, queryFrom, $Object*, $TemporalAccessor*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TemporalQueries$2, toString, $String*)},
	{}
};

$EnclosingMethodInfo _TemporalQueries$2_EnclosingMethodInfo_ = {
	"java.time.temporal.TemporalQueries",
	nullptr,
	nullptr
};

$InnerClassInfo _TemporalQueries$2_InnerClassesInfo_[] = {
	{"java.time.temporal.TemporalQueries$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TemporalQueries$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.temporal.TemporalQueries$2",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	_TemporalQueries$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/time/temporal/TemporalQuery<Ljava/time/chrono/Chronology;>;",
	&_TemporalQueries$2_EnclosingMethodInfo_,
	_TemporalQueries$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.TemporalQueries"
};

$Object* allocate$TemporalQueries$2($Class* clazz) {
	return $of($alloc(TemporalQueries$2));
}

void TemporalQueries$2::init$() {
}

$Object* TemporalQueries$2::queryFrom($TemporalAccessor* temporal) {
	$init($TemporalQueries);
	return $of($cast($Chronology, $nc(temporal)->query($TemporalQueries::CHRONO)));
}

$String* TemporalQueries$2::toString() {
	return "Chronology"_s;
}

TemporalQueries$2::TemporalQueries$2() {
}

$Class* TemporalQueries$2::load$($String* name, bool initialize) {
	$loadClass(TemporalQueries$2, name, initialize, &_TemporalQueries$2_ClassInfo_, allocate$TemporalQueries$2);
	return class$;
}

$Class* TemporalQueries$2::class$ = nullptr;

		} // temporal
	} // time
} // java