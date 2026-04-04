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
		return $of(this->this$0);
	}
	return $TemporalAccessor::query(query);
}

ZoneId$1::ZoneId$1() {
}

$Class* ZoneId$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/time/ZoneId;", nullptr, $FINAL | $SYNTHETIC, $field(ZoneId$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/ZoneId;)V", nullptr, 0, $method(ZoneId$1, init$, void, $ZoneId*)},
		{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC, $virtualMethod(ZoneId$1, getLong, int64_t, $TemporalField*)},
		{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC, $virtualMethod(ZoneId$1, isSupported, bool, $TemporalField*)},
		{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC, $virtualMethod(ZoneId$1, query, $Object*, $TemporalQuery*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.ZoneId",
		"toTemporal",
		"()Ljava/time/temporal/TemporalAccessor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.ZoneId$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.ZoneId$1",
		"java.lang.Object",
		"java.time.temporal.TemporalAccessor",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.ZoneId"
	};
	$loadClass(ZoneId$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZoneId$1);
	});
	return class$;
}

$Class* ZoneId$1::class$ = nullptr;

	} // time
} // java