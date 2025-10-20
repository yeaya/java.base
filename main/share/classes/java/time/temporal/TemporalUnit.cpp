#include <java/time/temporal/TemporalUnit.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/Duration.h>
#include <java/time/LocalTime.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/ChronoLocalDateTime.h>
#include <java/time/chrono/ChronoZonedDateTime.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Duration = ::java::time::Duration;
using $LocalTime = ::java::time::LocalTime;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $ChronoLocalDateTime = ::java::time::chrono::ChronoLocalDateTime;
using $ChronoZonedDateTime = ::java::time::chrono::ChronoZonedDateTime;
using $Temporal = ::java::time::temporal::Temporal;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _TemporalUnit_MethodInfo_[] = {
	{"addTo", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;", "<R::Ljava/time/temporal/Temporal;>(TR;J)TR;", $PUBLIC | $ABSTRACT},
	{"between", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getDuration", "()Ljava/time/Duration;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDateBased", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isDurationEstimated", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSupportedBy", "(Ljava/time/temporal/Temporal;)Z", nullptr, $PUBLIC},
	{"isTimeBased", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TemporalUnit_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.temporal.TemporalUnit",
	nullptr,
	nullptr,
	nullptr,
	_TemporalUnit_MethodInfo_
};

$Object* allocate$TemporalUnit($Class* clazz) {
	return $of($alloc(TemporalUnit));
}

$String* TemporalUnit::toString() {
	 return this->$Object::toString();
}

bool TemporalUnit::isSupportedBy($Temporal* temporal) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($LocalTime, temporal)) {
		return isTimeBased();
	}
	if ($instanceOf($ChronoLocalDate, temporal)) {
		return isDateBased();
	}
	if ($instanceOf($ChronoLocalDateTime, temporal) || $instanceOf($ChronoZonedDateTime, temporal)) {
		return true;
	}
	try {
		$nc(temporal)->plus(1, this);
		return true;
	} catch ($UnsupportedTemporalTypeException&) {
		$var($UnsupportedTemporalTypeException, ex, $catch());
		return false;
	} catch ($RuntimeException&) {
		$var($RuntimeException, ex, $catch());
		try {
			$nc(temporal)->plus(-1, this);
			return true;
		} catch ($RuntimeException&) {
			$var($RuntimeException, ex2, $catch());
			return false;
		}
	}
	$shouldNotReachHere();
}

$Class* TemporalUnit::load$($String* name, bool initialize) {
	$loadClass(TemporalUnit, name, initialize, &_TemporalUnit_ClassInfo_, allocate$TemporalUnit);
	return class$;
}

$Class* TemporalUnit::class$ = nullptr;

		} // temporal
	} // time
} // java