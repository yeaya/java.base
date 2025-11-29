#include <java/time/temporal/TemporalQuery.h>

#include <java/time/temporal/TemporalAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace time {
		namespace temporal {

$CompoundAttribute _TemporalQuery_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _TemporalQuery_MethodInfo_[] = {
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/Object;", "(Ljava/time/temporal/TemporalAccessor;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TemporalQuery_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.temporal.TemporalQuery",
	nullptr,
	nullptr,
	nullptr,
	_TemporalQuery_MethodInfo_,
	"<R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_TemporalQuery_Annotations_
};

$Object* allocate$TemporalQuery($Class* clazz) {
	return $of($alloc(TemporalQuery));
}

$Class* TemporalQuery::load$($String* name, bool initialize) {
	$loadClass(TemporalQuery, name, initialize, &_TemporalQuery_ClassInfo_, allocate$TemporalQuery);
	return class$;
}

$Class* TemporalQuery::class$ = nullptr;

		} // temporal
	} // time
} // java