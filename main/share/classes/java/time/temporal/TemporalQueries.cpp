#include <java/time/temporal/TemporalQueries.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/temporal/TemporalQueries$1.h>
#include <java/time/temporal/TemporalQueries$2.h>
#include <java/time/temporal/TemporalQueries$3.h>
#include <java/time/temporal/TemporalQueries$4.h>
#include <java/time/temporal/TemporalQueries$5.h>
#include <java/time/temporal/TemporalQueries$6.h>
#include <java/time/temporal/TemporalQueries$7.h>
#include <java/time/temporal/TemporalQuery.h>
#include <jcpp.h>

#undef CHRONO
#undef LOCAL_DATE
#undef LOCAL_TIME
#undef OFFSET
#undef PRECISION
#undef ZONE
#undef ZONE_ID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TemporalQueries$1 = ::java::time::temporal::TemporalQueries$1;
using $TemporalQueries$2 = ::java::time::temporal::TemporalQueries$2;
using $TemporalQueries$3 = ::java::time::temporal::TemporalQueries$3;
using $TemporalQueries$4 = ::java::time::temporal::TemporalQueries$4;
using $TemporalQueries$5 = ::java::time::temporal::TemporalQueries$5;
using $TemporalQueries$6 = ::java::time::temporal::TemporalQueries$6;
using $TemporalQueries$7 = ::java::time::temporal::TemporalQueries$7;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _TemporalQueries_FieldInfo_[] = {
	{"ZONE_ID", "Ljava/time/temporal/TemporalQuery;", "Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneId;>;", $STATIC | $FINAL, $staticField(TemporalQueries, ZONE_ID)},
	{"CHRONO", "Ljava/time/temporal/TemporalQuery;", "Ljava/time/temporal/TemporalQuery<Ljava/time/chrono/Chronology;>;", $STATIC | $FINAL, $staticField(TemporalQueries, CHRONO)},
	{"PRECISION", "Ljava/time/temporal/TemporalQuery;", "Ljava/time/temporal/TemporalQuery<Ljava/time/temporal/TemporalUnit;>;", $STATIC | $FINAL, $staticField(TemporalQueries, PRECISION)},
	{"OFFSET", "Ljava/time/temporal/TemporalQuery;", "Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneOffset;>;", $STATIC | $FINAL, $staticField(TemporalQueries, OFFSET)},
	{"ZONE", "Ljava/time/temporal/TemporalQuery;", "Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneId;>;", $STATIC | $FINAL, $staticField(TemporalQueries, ZONE)},
	{"LOCAL_DATE", "Ljava/time/temporal/TemporalQuery;", "Ljava/time/temporal/TemporalQuery<Ljava/time/LocalDate;>;", $STATIC | $FINAL, $staticField(TemporalQueries, LOCAL_DATE)},
	{"LOCAL_TIME", "Ljava/time/temporal/TemporalQuery;", "Ljava/time/temporal/TemporalQuery<Ljava/time/LocalTime;>;", $STATIC | $FINAL, $staticField(TemporalQueries, LOCAL_TIME)},
	{}
};

$MethodInfo _TemporalQueries_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TemporalQueries::*)()>(&TemporalQueries::init$))},
	{"chronology", "()Ljava/time/temporal/TemporalQuery;", "()Ljava/time/temporal/TemporalQuery<Ljava/time/chrono/Chronology;>;", $PUBLIC | $STATIC, $method(static_cast<$TemporalQuery*(*)()>(&TemporalQueries::chronology))},
	{"localDate", "()Ljava/time/temporal/TemporalQuery;", "()Ljava/time/temporal/TemporalQuery<Ljava/time/LocalDate;>;", $PUBLIC | $STATIC, $method(static_cast<$TemporalQuery*(*)()>(&TemporalQueries::localDate))},
	{"localTime", "()Ljava/time/temporal/TemporalQuery;", "()Ljava/time/temporal/TemporalQuery<Ljava/time/LocalTime;>;", $PUBLIC | $STATIC, $method(static_cast<$TemporalQuery*(*)()>(&TemporalQueries::localTime))},
	{"offset", "()Ljava/time/temporal/TemporalQuery;", "()Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneOffset;>;", $PUBLIC | $STATIC, $method(static_cast<$TemporalQuery*(*)()>(&TemporalQueries::offset))},
	{"precision", "()Ljava/time/temporal/TemporalQuery;", "()Ljava/time/temporal/TemporalQuery<Ljava/time/temporal/TemporalUnit;>;", $PUBLIC | $STATIC, $method(static_cast<$TemporalQuery*(*)()>(&TemporalQueries::precision))},
	{"zone", "()Ljava/time/temporal/TemporalQuery;", "()Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneId;>;", $PUBLIC | $STATIC, $method(static_cast<$TemporalQuery*(*)()>(&TemporalQueries::zone))},
	{"zoneId", "()Ljava/time/temporal/TemporalQuery;", "()Ljava/time/temporal/TemporalQuery<Ljava/time/ZoneId;>;", $PUBLIC | $STATIC, $method(static_cast<$TemporalQuery*(*)()>(&TemporalQueries::zoneId))},
	{}
};

$InnerClassInfo _TemporalQueries_InnerClassesInfo_[] = {
	{"java.time.temporal.TemporalQueries$7", nullptr, nullptr, 0},
	{"java.time.temporal.TemporalQueries$6", nullptr, nullptr, 0},
	{"java.time.temporal.TemporalQueries$5", nullptr, nullptr, 0},
	{"java.time.temporal.TemporalQueries$4", nullptr, nullptr, 0},
	{"java.time.temporal.TemporalQueries$3", nullptr, nullptr, 0},
	{"java.time.temporal.TemporalQueries$2", nullptr, nullptr, 0},
	{"java.time.temporal.TemporalQueries$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TemporalQueries_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.temporal.TemporalQueries",
	"java.lang.Object",
	nullptr,
	_TemporalQueries_FieldInfo_,
	_TemporalQueries_MethodInfo_,
	nullptr,
	nullptr,
	_TemporalQueries_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.time.temporal.TemporalQueries$7,java.time.temporal.TemporalQueries$6,java.time.temporal.TemporalQueries$5,java.time.temporal.TemporalQueries$4,java.time.temporal.TemporalQueries$3,java.time.temporal.TemporalQueries$2,java.time.temporal.TemporalQueries$1"
};

$Object* allocate$TemporalQueries($Class* clazz) {
	return $of($alloc(TemporalQueries));
}


$TemporalQuery* TemporalQueries::ZONE_ID = nullptr;

$TemporalQuery* TemporalQueries::CHRONO = nullptr;

$TemporalQuery* TemporalQueries::PRECISION = nullptr;

$TemporalQuery* TemporalQueries::OFFSET = nullptr;

$TemporalQuery* TemporalQueries::ZONE = nullptr;

$TemporalQuery* TemporalQueries::LOCAL_DATE = nullptr;

$TemporalQuery* TemporalQueries::LOCAL_TIME = nullptr;

void TemporalQueries::init$() {
}

$TemporalQuery* TemporalQueries::zoneId() {
	$init(TemporalQueries);
	return TemporalQueries::ZONE_ID;
}

$TemporalQuery* TemporalQueries::chronology() {
	$init(TemporalQueries);
	return TemporalQueries::CHRONO;
}

$TemporalQuery* TemporalQueries::precision() {
	$init(TemporalQueries);
	return TemporalQueries::PRECISION;
}

$TemporalQuery* TemporalQueries::zone() {
	$init(TemporalQueries);
	return TemporalQueries::ZONE;
}

$TemporalQuery* TemporalQueries::offset() {
	$init(TemporalQueries);
	return TemporalQueries::OFFSET;
}

$TemporalQuery* TemporalQueries::localDate() {
	$init(TemporalQueries);
	return TemporalQueries::LOCAL_DATE;
}

$TemporalQuery* TemporalQueries::localTime() {
	$init(TemporalQueries);
	return TemporalQueries::LOCAL_TIME;
}

void clinit$TemporalQueries($Class* class$) {
	$assignStatic(TemporalQueries::ZONE_ID, $new($TemporalQueries$1));
	$assignStatic(TemporalQueries::CHRONO, $new($TemporalQueries$2));
	$assignStatic(TemporalQueries::PRECISION, $new($TemporalQueries$3));
	$assignStatic(TemporalQueries::OFFSET, $new($TemporalQueries$4));
	$assignStatic(TemporalQueries::ZONE, $new($TemporalQueries$5));
	$assignStatic(TemporalQueries::LOCAL_DATE, $new($TemporalQueries$6));
	$assignStatic(TemporalQueries::LOCAL_TIME, $new($TemporalQueries$7));
}

TemporalQueries::TemporalQueries() {
}

$Class* TemporalQueries::load$($String* name, bool initialize) {
	$loadClass(TemporalQueries, name, initialize, &_TemporalQueries_ClassInfo_, clinit$TemporalQueries, allocate$TemporalQueries);
	return class$;
}

$Class* TemporalQueries::class$ = nullptr;

		} // temporal
	} // time
} // java