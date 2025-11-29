#include <java/time/temporal/TemporalField.h>

#include <java/time/format/ResolverStyle.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/ValueRange.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResolverStyle = ::java::time::format::ResolverStyle;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _TemporalField_MethodInfo_[] = {
	{"adjustInto", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;", "<R::Ljava/time/temporal/Temporal;>(TR;J)TR;", $PUBLIC | $ABSTRACT},
	{"getBaseUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFrom", "(Ljava/time/temporal/TemporalAccessor;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"getRangeUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDateBased", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSupportedBy", "(Ljava/time/temporal/TemporalAccessor;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isTimeBased", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"range", "()Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC | $ABSTRACT},
	{"rangeRefinedBy", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC | $ABSTRACT},
	{"resolve", "(Ljava/util/Map;Ljava/time/temporal/TemporalAccessor;Ljava/time/format/ResolverStyle;)Ljava/time/temporal/TemporalAccessor;", "(Ljava/util/Map<Ljava/time/temporal/TemporalField;Ljava/lang/Long;>;Ljava/time/temporal/TemporalAccessor;Ljava/time/format/ResolverStyle;)Ljava/time/temporal/TemporalAccessor;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TemporalField_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.temporal.TemporalField",
	nullptr,
	nullptr,
	nullptr,
	_TemporalField_MethodInfo_
};

$Object* allocate$TemporalField($Class* clazz) {
	return $of($alloc(TemporalField));
}

$String* TemporalField::toString() {
	 return this->$Object::toString();
}

$String* TemporalField::getDisplayName($Locale* locale) {
	$Objects::requireNonNull($of(locale), "locale"_s);
	return toString();
}

$TemporalAccessor* TemporalField::resolve($Map* fieldValues, $TemporalAccessor* partialTemporal, $ResolverStyle* resolverStyle) {
	return nullptr;
}

$Class* TemporalField::load$($String* name, bool initialize) {
	$loadClass(TemporalField, name, initialize, &_TemporalField_ClassInfo_, allocate$TemporalField);
	return class$;
}

$Class* TemporalField::class$ = nullptr;

		} // temporal
	} // time
} // java