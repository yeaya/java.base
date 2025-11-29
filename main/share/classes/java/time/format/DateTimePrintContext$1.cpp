#include <java/time/format/DateTimePrintContext$1.h>

#include <java/time/ZoneId.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/time/temporal/ValueRange.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZoneId = ::java::time::ZoneId;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $Chronology = ::java::time::chrono::Chronology;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $ValueRange = ::java::time::temporal::ValueRange;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimePrintContext$1_FieldInfo_[] = {
	{"val$effectiveZone", "Ljava/time/ZoneId;", nullptr, $FINAL | $SYNTHETIC, $field(DateTimePrintContext$1, val$effectiveZone)},
	{"val$effectiveChrono", "Ljava/time/chrono/Chronology;", nullptr, $FINAL | $SYNTHETIC, $field(DateTimePrintContext$1, val$effectiveChrono)},
	{"val$temporal", "Ljava/time/temporal/TemporalAccessor;", nullptr, $FINAL | $SYNTHETIC, $field(DateTimePrintContext$1, val$temporal)},
	{"val$effectiveDate", "Ljava/time/chrono/ChronoLocalDate;", nullptr, $FINAL | $SYNTHETIC, $field(DateTimePrintContext$1, val$effectiveDate)},
	{}
};

$MethodInfo _DateTimePrintContext$1_MethodInfo_[] = {
	{"<init>", "(Ljava/time/chrono/ChronoLocalDate;Ljava/time/temporal/TemporalAccessor;Ljava/time/chrono/Chronology;Ljava/time/ZoneId;)V", "()V", 0, $method(static_cast<void(DateTimePrintContext$1::*)($ChronoLocalDate*,$TemporalAccessor*,$Chronology*,$ZoneId*)>(&DateTimePrintContext$1::init$))},
	{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC},
	{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC},
	{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DateTimePrintContext$1_EnclosingMethodInfo_ = {
	"java.time.format.DateTimePrintContext",
	"adjust",
	"(Ljava/time/temporal/TemporalAccessor;Ljava/time/format/DateTimeFormatter;)Ljava/time/temporal/TemporalAccessor;"
};

$InnerClassInfo _DateTimePrintContext$1_InnerClassesInfo_[] = {
	{"java.time.format.DateTimePrintContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DateTimePrintContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.format.DateTimePrintContext$1",
	"java.lang.Object",
	"java.time.temporal.TemporalAccessor",
	_DateTimePrintContext$1_FieldInfo_,
	_DateTimePrintContext$1_MethodInfo_,
	nullptr,
	&_DateTimePrintContext$1_EnclosingMethodInfo_,
	_DateTimePrintContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimePrintContext"
};

$Object* allocate$DateTimePrintContext$1($Class* clazz) {
	return $of($alloc(DateTimePrintContext$1));
}

void DateTimePrintContext$1::init$($ChronoLocalDate* val$effectiveDate, $TemporalAccessor* val$temporal, $Chronology* val$effectiveChrono, $ZoneId* val$effectiveZone) {
	$set(this, val$effectiveDate, val$effectiveDate);
	$set(this, val$temporal, val$temporal);
	$set(this, val$effectiveChrono, val$effectiveChrono);
	$set(this, val$effectiveZone, val$effectiveZone);
}

bool DateTimePrintContext$1::isSupported($TemporalField* field) {
	if (this->val$effectiveDate != nullptr && $nc(field)->isDateBased()) {
		return $nc(this->val$effectiveDate)->isSupported(field);
	}
	return $nc(this->val$temporal)->isSupported(field);
}

$ValueRange* DateTimePrintContext$1::range($TemporalField* field) {
	if (this->val$effectiveDate != nullptr && $nc(field)->isDateBased()) {
		return $nc(this->val$effectiveDate)->range(field);
	}
	return $nc(this->val$temporal)->range(field);
}

int64_t DateTimePrintContext$1::getLong($TemporalField* field) {
	if (this->val$effectiveDate != nullptr && $nc(field)->isDateBased()) {
		return $nc(this->val$effectiveDate)->getLong(field);
	}
	return $nc(this->val$temporal)->getLong(field);
}

$Object* DateTimePrintContext$1::query($TemporalQuery* query) {
	if (query == $TemporalQueries::chronology()) {
		return $of($of(this->val$effectiveChrono));
	}
	if (query == $TemporalQueries::zoneId()) {
		return $of($of(this->val$effectiveZone));
	}
	if (query == $TemporalQueries::precision()) {
		return $of($nc(this->val$temporal)->query(query));
	}
	return $of($nc(query)->queryFrom(this));
}

$String* DateTimePrintContext$1::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({this->val$temporal, (this->val$effectiveChrono != nullptr ? $$str({" with chronology "_s, this->val$effectiveChrono}) : ""_s)}));
	return $concat(var$0, (this->val$effectiveZone != nullptr ? $$str({" with zone "_s, this->val$effectiveZone}) : ""_s));
}

DateTimePrintContext$1::DateTimePrintContext$1() {
}

$Class* DateTimePrintContext$1::load$($String* name, bool initialize) {
	$loadClass(DateTimePrintContext$1, name, initialize, &_DateTimePrintContext$1_ClassInfo_, allocate$DateTimePrintContext$1);
	return class$;
}

$Class* DateTimePrintContext$1::class$ = nullptr;

		} // format
	} // time
} // java