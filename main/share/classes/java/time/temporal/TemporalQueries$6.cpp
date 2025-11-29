#include <java/time/temporal/TemporalQueries$6.h>

#include <java/time/LocalDate.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <jcpp.h>

#undef EPOCH_DAY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocalDate = ::java::time::LocalDate;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _TemporalQueries$6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TemporalQueries$6::*)()>(&TemporalQueries$6::init$))},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TemporalQueries$6_EnclosingMethodInfo_ = {
	"java.time.temporal.TemporalQueries",
	nullptr,
	nullptr
};

$InnerClassInfo _TemporalQueries$6_InnerClassesInfo_[] = {
	{"java.time.temporal.TemporalQueries$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TemporalQueries$6_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.temporal.TemporalQueries$6",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	_TemporalQueries$6_MethodInfo_,
	"Ljava/lang/Object;Ljava/time/temporal/TemporalQuery<Ljava/time/LocalDate;>;",
	&_TemporalQueries$6_EnclosingMethodInfo_,
	_TemporalQueries$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.TemporalQueries"
};

$Object* allocate$TemporalQueries$6($Class* clazz) {
	return $of($alloc(TemporalQueries$6));
}

void TemporalQueries$6::init$() {
}

$Object* TemporalQueries$6::queryFrom($TemporalAccessor* temporal) {
	$init($ChronoField);
	if ($nc(temporal)->isSupported($ChronoField::EPOCH_DAY)) {
		return $of($LocalDate::ofEpochDay(temporal->getLong($ChronoField::EPOCH_DAY)));
	}
	return $of(nullptr);
}

$String* TemporalQueries$6::toString() {
	return "LocalDate"_s;
}

TemporalQueries$6::TemporalQueries$6() {
}

$Class* TemporalQueries$6::load$($String* name, bool initialize) {
	$loadClass(TemporalQueries$6, name, initialize, &_TemporalQueries$6_ClassInfo_, allocate$TemporalQueries$6);
	return class$;
}

$Class* TemporalQueries$6::class$ = nullptr;

		} // temporal
	} // time
} // java