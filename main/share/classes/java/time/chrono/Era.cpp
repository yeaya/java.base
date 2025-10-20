#include <java/time/chrono/Era.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/TextStyle.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalQueries.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/time/temporal/ValueRange.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ERA
#undef ERAS

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $TextStyle = ::java::time::format::TextStyle;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalAdjuster = ::java::time::temporal::TemporalAdjuster;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalQueries = ::java::time::temporal::TemporalQueries;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;
using $ValueRange = ::java::time::temporal::ValueRange;
using $Locale = ::java::util::Locale;

namespace java {
	namespace time {
		namespace chrono {

$MethodInfo _Era_MethodInfo_[] = {
	{"adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"get", "(Ljava/time/temporal/TemporalField;)I", nullptr, $PUBLIC},
	{"getDisplayName", "(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLong", "(Ljava/time/temporal/TemporalField;)J", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isSupported", "(Ljava/time/temporal/TemporalField;)Z", nullptr, $PUBLIC},
	{"query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;", "<R:Ljava/lang/Object;>(Ljava/time/temporal/TemporalQuery<TR;>;)TR;", $PUBLIC},
	{"range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Era_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.chrono.Era",
	nullptr,
	"java.time.temporal.TemporalAccessor,java.time.temporal.TemporalAdjuster",
	nullptr,
	_Era_MethodInfo_
};

$Object* allocate$Era($Class* clazz) {
	return $of($alloc(Era));
}

int32_t Era::hashCode() {
	 return this->$TemporalAccessor::hashCode();
}

bool Era::equals(Object$* obj) {
	 return this->$TemporalAccessor::equals(obj);
}

$Object* Era::clone() {
	 return this->$TemporalAccessor::clone();
}

$String* Era::toString() {
	 return this->$TemporalAccessor::toString();
}

void Era::finalize() {
	this->$TemporalAccessor::finalize();
}

bool Era::isSupported($TemporalField* field) {
	if ($instanceOf($ChronoField, field)) {
		$init($ChronoField);
		return $equals(field, $ChronoField::ERA);
	}
	return field != nullptr && field->isSupportedBy(this);
}

$ValueRange* Era::range($TemporalField* field) {
	return $TemporalAccessor::range(field);
}

int32_t Era::get($TemporalField* field) {
	$init($ChronoField);
	if ($equals(field, $ChronoField::ERA)) {
		return getValue();
	}
	return $TemporalAccessor::get(field);
}

int64_t Era::getLong($TemporalField* field) {
	$init($ChronoField);
	if ($equals(field, $ChronoField::ERA)) {
		return getValue();
	} else if ($instanceOf($ChronoField, field)) {
		$throwNew($UnsupportedTemporalTypeException, $$str({"Unsupported field: "_s, field}));
	}
	return $nc(field)->getFrom(this);
}

$Object* Era::query($TemporalQuery* query) {
	if (query == $TemporalQueries::precision()) {
		$init($ChronoUnit);
		return $of($of($ChronoUnit::ERAS));
	}
	return $of($TemporalAccessor::query(query));
}

$Temporal* Era::adjustInto($Temporal* temporal) {
	$init($ChronoField);
	return $nc(temporal)->with($ChronoField::ERA, getValue());
}

$String* Era::getDisplayName($TextStyle* style, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$init($ChronoField);
	return $nc($($nc($($$new($DateTimeFormatterBuilder)->appendText(static_cast<$TemporalField*>($ChronoField::ERA), style)))->toFormatter(locale)))->format(this);
}

$Class* Era::load$($String* name, bool initialize) {
	$loadClass(Era, name, initialize, &_Era_ClassInfo_, allocate$Era);
	return class$;
}

$Class* Era::class$ = nullptr;

		} // chrono
	} // time
} // java