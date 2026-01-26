#include <java/time/chrono/Chronology$1.h>

#include <java/time/chrono/Chronology.h>
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
using $Chronology = ::java::time::chrono::Chronology;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _Chronology$1_FieldInfo_[] = {
	{"this$0", "Ljava/time/chrono/Chronology;", nullptr, $FINAL | $SYNTHETIC, $field(Chronology$1, this$0)},
	{}
};

$MethodInfo _Chronology$1_MethodInfo_[] = {
	{"<init>", "(Ljava/time/chrono/Chronology;)V", nullptr, 0, $method(Chronology$1, init$, void, $Chronology*)},
	{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC, $virtualMethod(Chronology$1, getLong, int64_t, $TemporalField*)},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC, $virtualMethod(Chronology$1, isSupported, bool, $TemporalField*)},
	{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC, $virtualMethod(Chronology$1, query, $Object*, $TemporalQuery*)},
	{}
};

$EnclosingMethodInfo _Chronology$1_EnclosingMethodInfo_ = {
	"java.time.chrono.Chronology",
	"getDisplayName",
	"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;"
};

$InnerClassInfo _Chronology$1_InnerClassesInfo_[] = {
	{"java.time.chrono.Chronology$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Chronology$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.chrono.Chronology$1",
	"java.lang.Object",
	"java.time.temporal.TemporalAccessor",
	_Chronology$1_FieldInfo_,
	_Chronology$1_MethodInfo_,
	nullptr,
	&_Chronology$1_EnclosingMethodInfo_,
	_Chronology$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.Chronology"
};

$Object* allocate$Chronology$1($Class* clazz) {
	return $of($alloc(Chronology$1));
}

void Chronology$1::init$($Chronology* this$0) {
	$set(this, this$0, this$0);
}

bool Chronology$1::isSupported($TemporalField* field) {
	return false;
}

int64_t Chronology$1::getLong($TemporalField* field) {
	$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
	$shouldNotReachHere();
}

$Object* Chronology$1::query($TemporalQuery* query) {
	if (query == $TemporalQueries::chronology()) {
		return $of($of(this->this$0));
	}
	return $of($TemporalAccessor::query(query));
}

Chronology$1::Chronology$1() {
}

$Class* Chronology$1::load$($String* name, bool initialize) {
	$loadClass(Chronology$1, name, initialize, &_Chronology$1_ClassInfo_, allocate$Chronology$1);
	return class$;
}

$Class* Chronology$1::class$ = nullptr;

		} // chrono
	} // time
} // java