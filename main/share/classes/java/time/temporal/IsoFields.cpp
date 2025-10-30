#include <java/time/temporal/IsoFields.h>

#include <java/lang/AssertionError.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/chrono/IsoChronology.h>
#include <java/time/temporal/IsoFields$Field.h>
#include <java/time/temporal/IsoFields$Unit.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <jcpp.h>

#undef DAY_OF_QUARTER
#undef INSTANCE
#undef QUARTER_OF_YEAR
#undef QUARTER_YEARS
#undef WEEK_BASED_YEAR
#undef WEEK_BASED_YEARS
#undef WEEK_OF_WEEK_BASED_YEAR

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Chronology = ::java::time::chrono::Chronology;
using $IsoChronology = ::java::time::chrono::IsoChronology;
using $IsoFields$Field = ::java::time::temporal::IsoFields$Field;
using $IsoFields$Unit = ::java::time::temporal::IsoFields$Unit;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _IsoFields_FieldInfo_[] = {
	{"DAY_OF_QUARTER", "Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IsoFields, DAY_OF_QUARTER)},
	{"QUARTER_OF_YEAR", "Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IsoFields, QUARTER_OF_YEAR)},
	{"WEEK_OF_WEEK_BASED_YEAR", "Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IsoFields, WEEK_OF_WEEK_BASED_YEAR)},
	{"WEEK_BASED_YEAR", "Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IsoFields, WEEK_BASED_YEAR)},
	{"WEEK_BASED_YEARS", "Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IsoFields, WEEK_BASED_YEARS)},
	{"QUARTER_YEARS", "Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IsoFields, QUARTER_YEARS)},
	{}
};

$MethodInfo _IsoFields_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IsoFields::*)()>(&IsoFields::init$))},
	{"isIso", "(Ljava/time/temporal/TemporalAccessor;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($TemporalAccessor*)>(&IsoFields::isIso))},
	{}
};

$InnerClassInfo _IsoFields_InnerClassesInfo_[] = {
	{"java.time.temporal.IsoFields$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.time.temporal.IsoFields$Unit", "java.time.temporal.IsoFields", "Unit", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"java.time.temporal.IsoFields$Field", "java.time.temporal.IsoFields", "Field", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{}
};

$ClassInfo _IsoFields_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.temporal.IsoFields",
	"java.lang.Object",
	nullptr,
	_IsoFields_FieldInfo_,
	_IsoFields_MethodInfo_,
	nullptr,
	nullptr,
	_IsoFields_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.time.temporal.IsoFields$1,java.time.temporal.IsoFields$Unit,java.time.temporal.IsoFields$Field,java.time.temporal.IsoFields$Field$4,java.time.temporal.IsoFields$Field$3,java.time.temporal.IsoFields$Field$2,java.time.temporal.IsoFields$Field$1"
};

$Object* allocate$IsoFields($Class* clazz) {
	return $of($alloc(IsoFields));
}

$TemporalField* IsoFields::DAY_OF_QUARTER = nullptr;
$TemporalField* IsoFields::QUARTER_OF_YEAR = nullptr;
$TemporalField* IsoFields::WEEK_OF_WEEK_BASED_YEAR = nullptr;
$TemporalField* IsoFields::WEEK_BASED_YEAR = nullptr;
$TemporalUnit* IsoFields::WEEK_BASED_YEARS = nullptr;
$TemporalUnit* IsoFields::QUARTER_YEARS = nullptr;

void IsoFields::init$() {
	$throwNew($AssertionError, $of("Not instantiable"_s));
}

bool IsoFields::isIso($TemporalAccessor* temporal) {
	$init(IsoFields);
	$init($IsoChronology);
	return $nc($($Chronology::from(temporal)))->equals($IsoChronology::INSTANCE);
}

void clinit$IsoFields($Class* class$) {
	$init($IsoFields$Field);
	$assignStatic(IsoFields::DAY_OF_QUARTER, $IsoFields$Field::DAY_OF_QUARTER);
	$assignStatic(IsoFields::QUARTER_OF_YEAR, $IsoFields$Field::QUARTER_OF_YEAR);
	$assignStatic(IsoFields::WEEK_OF_WEEK_BASED_YEAR, $IsoFields$Field::WEEK_OF_WEEK_BASED_YEAR);
	$assignStatic(IsoFields::WEEK_BASED_YEAR, $IsoFields$Field::WEEK_BASED_YEAR);
	$init($IsoFields$Unit);
	$assignStatic(IsoFields::WEEK_BASED_YEARS, $IsoFields$Unit::WEEK_BASED_YEARS);
	$assignStatic(IsoFields::QUARTER_YEARS, $IsoFields$Unit::QUARTER_YEARS);
}

IsoFields::IsoFields() {
}

$Class* IsoFields::load$($String* name, bool initialize) {
	$loadClass(IsoFields, name, initialize, &_IsoFields_ClassInfo_, clinit$IsoFields, allocate$IsoFields);
	return class$;
}

$Class* IsoFields::class$ = nullptr;

		} // temporal
	} // time
} // java