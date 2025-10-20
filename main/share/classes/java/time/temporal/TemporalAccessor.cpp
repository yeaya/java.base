#include <java/time/temporal/TemporalAccessor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/time/temporal/ValueRange.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;
using $ValueRange = ::java::time::temporal::ValueRange;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _TemporalAccessor_MethodInfo_[] = {
	{"get", "(Ljava/time/temporal/TemporalField;)I", nullptr, $PUBLIC},
	{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC},
	{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TemporalAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.temporal.TemporalAccessor",
	nullptr,
	nullptr,
	nullptr,
	_TemporalAccessor_MethodInfo_
};

$Object* allocate$TemporalAccessor($Class* clazz) {
	return $of($alloc(TemporalAccessor));
}

$ValueRange* TemporalAccessor::range($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		if (isSupported(field)) {
			return $nc(field)->range();
		}
		$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
	}
	$Objects::requireNonNull($of(field), "field"_s);
	return $nc(field)->rangeRefinedBy(this);
}

int32_t TemporalAccessor::get($TemporalField* field) {
	$useLocalCurrentObjectStackCache();
	$var($ValueRange, range, this->range(field));
	if ($nc(range)->isIntValue() == false) {
		$throwNew($UnsupportedTemporalTypeException, $$str({"Invalid field "_s, field, " for get() method, use getLong() instead"_s}));
	}
	int64_t value = getLong(field);
	if ($nc(range)->isValidValue(value) == false) {
		$throwNew($DateTimeException, $$str({"Invalid value for "_s, field, " (valid values "_s, range, "): "_s, $$str(value)}));
	}
	return (int32_t)value;
}

$Object* TemporalAccessor::query($TemporalQuery* query) {
	bool var$1 = query == $TemporalQueries::zoneId();
	bool var$0 = var$1 || query == $TemporalQueries::chronology();
	if (var$0 || query == $TemporalQueries::precision()) {
		return $of(nullptr);
	}
	return $of($nc(query)->queryFrom(this));
}

$Class* TemporalAccessor::load$($String* name, bool initialize) {
	$loadClass(TemporalAccessor, name, initialize, &_TemporalAccessor_ClassInfo_, allocate$TemporalAccessor);
	return class$;
}

$Class* TemporalAccessor::class$ = nullptr;

		} // temporal
	} // time
} // java