#include <java/time/temporal/IsoFields$Field$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/IsoFields$Field.h>
#include <java/time/temporal/IsoFields.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/UnsupportedTemporalTypeException.h>
#include <java/time/temporal/ValueRange.h>
#include <jcpp.h>

#undef YEARS
#undef QUARTER_YEARS
#undef MONTH_OF_YEAR

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $IsoFields = ::java::time::temporal::IsoFields;
using $IsoFields$Field = ::java::time::temporal::IsoFields$Field;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $UnsupportedTemporalTypeException = ::java::time::temporal::UnsupportedTemporalTypeException;
using $ValueRange = ::java::time::temporal::ValueRange;

namespace java {
	namespace time {
		namespace temporal {

$MethodInfo _IsoFields$Field$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(IsoFields$Field$2::*)($String*,int32_t)>(&IsoFields$Field$2::init$))},
	{"adjustInto", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;", "<R::Ljava/time/temporal/Temporal;>(TR;J)TR;", $PUBLIC},
	{"getBaseUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC},
	{"getFrom", "(Ljava/time/temporal/TemporalAccessor;)J", nullptr, $PUBLIC},
	{"getRangeUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC},
	{"isSupportedBy", "(Ljava/time/temporal/TemporalAccessor;)Z", nullptr, $PUBLIC},
	{"range", "()Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"rangeRefinedBy", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IsoFields$Field$2_EnclosingMethodInfo_ = {
	"java.time.temporal.IsoFields$Field",
	nullptr,
	nullptr
};

$InnerClassInfo _IsoFields$Field$2_InnerClassesInfo_[] = {
	{"java.time.temporal.IsoFields$Field", "java.time.temporal.IsoFields", "Field", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"java.time.temporal.IsoFields$Field$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _IsoFields$Field$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.time.temporal.IsoFields$Field$2",
	"java.time.temporal.IsoFields$Field",
	nullptr,
	nullptr,
	_IsoFields$Field$2_MethodInfo_,
	nullptr,
	&_IsoFields$Field$2_EnclosingMethodInfo_,
	_IsoFields$Field$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.IsoFields"
};

$Object* allocate$IsoFields$Field$2($Class* clazz) {
	return $of($alloc(IsoFields$Field$2));
}

void IsoFields$Field$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$IsoFields$Field::init$($enum$name, $enum$ordinal);
}

$TemporalUnit* IsoFields$Field$2::getBaseUnit() {
	$init($IsoFields);
	return $IsoFields::QUARTER_YEARS;
}

$TemporalUnit* IsoFields$Field$2::getRangeUnit() {
	$init($ChronoUnit);
	return $ChronoUnit::YEARS;
}

$ValueRange* IsoFields$Field$2::range() {
	return $ValueRange::of(1, 4);
}

bool IsoFields$Field$2::isSupportedBy($TemporalAccessor* temporal) {
	$init($ChronoField);
	bool var$0 = $nc(temporal)->isSupported($ChronoField::MONTH_OF_YEAR);
	return var$0 && $IsoFields::isIso(temporal);
}

int64_t IsoFields$Field$2::getFrom($TemporalAccessor* temporal) {
	if (isSupportedBy(temporal) == false) {
		$throwNew($UnsupportedTemporalTypeException, "Unsupported field: QuarterOfYear"_s);
	}
	$init($ChronoField);
	int64_t moy = $nc(temporal)->getLong($ChronoField::MONTH_OF_YEAR);
	return ((moy + 2) / 3);
}

$ValueRange* IsoFields$Field$2::rangeRefinedBy($TemporalAccessor* temporal) {
	if (isSupportedBy(temporal) == false) {
		$throwNew($UnsupportedTemporalTypeException, "Unsupported field: QuarterOfYear"_s);
	}
	return $IsoFields$Field::rangeRefinedBy(temporal);
}

$Temporal* IsoFields$Field$2::adjustInto($Temporal* temporal, int64_t newValue) {
	int64_t curValue = getFrom(temporal);
	$nc($(range()))->checkValidValue(newValue, this);
	$init($ChronoField);
	return $nc(temporal)->with($ChronoField::MONTH_OF_YEAR, temporal->getLong($ChronoField::MONTH_OF_YEAR) + (newValue - curValue) * 3);
}

$String* IsoFields$Field$2::toString() {
	return "QuarterOfYear"_s;
}

IsoFields$Field$2::IsoFields$Field$2() {
}

$Class* IsoFields$Field$2::load$($String* name, bool initialize) {
	$loadClass(IsoFields$Field$2, name, initialize, &_IsoFields$Field$2_ClassInfo_, allocate$IsoFields$Field$2);
	return class$;
}

$Class* IsoFields$Field$2::class$ = nullptr;

		} // temporal
	} // time
} // java