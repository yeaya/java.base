#include <java/time/temporal/TemporalAdjuster.h>

#include <java/time/temporal/Temporal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Temporal = ::java::time::temporal::Temporal;

namespace java {
	namespace time {
		namespace temporal {

$CompoundAttribute _TemporalAdjuster_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _TemporalAdjuster_MethodInfo_[] = {
	{"adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TemporalAdjuster, adjustInto, $Temporal*, $Temporal*)},
	{}
};

$ClassInfo _TemporalAdjuster_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.temporal.TemporalAdjuster",
	nullptr,
	nullptr,
	nullptr,
	_TemporalAdjuster_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TemporalAdjuster_Annotations_
};

$Object* allocate$TemporalAdjuster($Class* clazz) {
	return $of($alloc(TemporalAdjuster));
}

$Class* TemporalAdjuster::load$($String* name, bool initialize) {
	$loadClass(TemporalAdjuster, name, initialize, &_TemporalAdjuster_ClassInfo_, allocate$TemporalAdjuster);
	return class$;
}

$Class* TemporalAdjuster::class$ = nullptr;

		} // temporal
	} // time
} // java