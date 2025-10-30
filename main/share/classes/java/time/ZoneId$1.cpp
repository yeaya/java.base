#include <java/time/ZoneId$1.h>

#include <java/time/ZoneId.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZoneId = ::java::time::ZoneId;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;

namespace java {
	namespace time {

$FieldInfo _ZoneId$1_FieldInfo_[] = {
	{"this$0", "Ljava/time/ZoneId;", nullptr, $FINAL | $SYNTHETIC, $field(ZoneId$1, this$0)},
	{}
};

$MethodInfo _ZoneId$1_MethodInfo_[] = {
	{"<init>", "(Ljava/time/ZoneId;)V", nullptr, 0, $method(static_cast<void(ZoneId$1::*)($ZoneId*)>(&ZoneId$1::init$))},
	{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC},
	{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ZoneId$1_EnclosingMethodInfo_ = {
	"java.time.ZoneId",
	"toTemporal",
	"()Ljava/time/temporal/TemporalAccessor;"
};

$InnerClassInfo _ZoneId$1_InnerClassesInfo_[] = {
	{"java.time.ZoneId$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ZoneId$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.ZoneId$1",
	"java.lang.Object",
	"java.time.temporal.TemporalAccessor",
	_ZoneId$1_FieldInfo_,
	_ZoneId$1_MethodInfo_,
	nullptr,
	&_ZoneId$1_EnclosingMethodInfo_,
	_ZoneId$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.ZoneId"
};

$Object* allocate$ZoneId$1($Class* clazz) {
	return $of($alloc(ZoneId$1));
}

void ZoneId$1::init$($ZoneId* this$0) {
	$set(this, this$0, this$0);
}

bool ZoneId$1::isSupported($TemporalField* field) {
	return false;
}

int64_t ZoneId$1::getLong($TemporalField* field) {
	$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
	$shouldNotReachHere();
}

$Object* ZoneId$1::query($TemporalQuery* query) {
	if (query == $TemporalQueries::zoneId()) {
		return $of($of(this->this$0));
	}
	return $of($TemporalAccessor::query(query));
}

ZoneId$1::ZoneId$1() {
}

$Class* ZoneId$1::load$($String* name, bool initialize) {
	$loadClass(ZoneId$1, name, initialize, &_ZoneId$1_ClassInfo_, allocate$ZoneId$1);
	return class$;
}

$Class* ZoneId$1::class$ = nullptr;

	} // time
} // java