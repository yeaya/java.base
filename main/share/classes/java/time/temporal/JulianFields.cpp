#include <java/time/temporal/JulianFields.h>

#include <java/lang/AssertionError.h>
#include <java/time/temporal/JulianFields$Field.h>
#include <java/time/temporal/TemporalField.h>
#include <jcpp.h>

#undef JULIAN_DAY
#undef JULIAN_DAY_OFFSET
#undef MODIFIED_JULIAN_DAY
#undef RATA_DIE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JulianFields$Field = ::java::time::temporal::JulianFields$Field;
using $TemporalField = ::java::time::temporal::TemporalField;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _JulianFields_FieldInfo_[] = {
	{"JULIAN_DAY_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JulianFields, JULIAN_DAY_OFFSET)},
	{"JULIAN_DAY", "Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JulianFields, JULIAN_DAY)},
	{"MODIFIED_JULIAN_DAY", "Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JulianFields, MODIFIED_JULIAN_DAY)},
	{"RATA_DIE", "Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JulianFields, RATA_DIE)},
	{}
};

$MethodInfo _JulianFields_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JulianFields::*)()>(&JulianFields::init$))},
	{}
};

$InnerClassInfo _JulianFields_InnerClassesInfo_[] = {
	{"java.time.temporal.JulianFields$Field", "java.time.temporal.JulianFields", "Field", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JulianFields_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.temporal.JulianFields",
	"java.lang.Object",
	nullptr,
	_JulianFields_FieldInfo_,
	_JulianFields_MethodInfo_,
	nullptr,
	nullptr,
	_JulianFields_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.time.temporal.JulianFields$Field"
};

$Object* allocate$JulianFields($Class* clazz) {
	return $of($alloc(JulianFields));
}

$TemporalField* JulianFields::JULIAN_DAY = nullptr;
$TemporalField* JulianFields::MODIFIED_JULIAN_DAY = nullptr;
$TemporalField* JulianFields::RATA_DIE = nullptr;

void JulianFields::init$() {
	$throwNew($AssertionError, $of("Not instantiable"_s));
}

void clinit$JulianFields($Class* class$) {
	$init($JulianFields$Field);
	$assignStatic(JulianFields::JULIAN_DAY, $JulianFields$Field::JULIAN_DAY);
	$assignStatic(JulianFields::MODIFIED_JULIAN_DAY, $JulianFields$Field::MODIFIED_JULIAN_DAY);
	$assignStatic(JulianFields::RATA_DIE, $JulianFields$Field::RATA_DIE);
}

JulianFields::JulianFields() {
}

$Class* JulianFields::load$($String* name, bool initialize) {
	$loadClass(JulianFields, name, initialize, &_JulianFields_ClassInfo_, clinit$JulianFields, allocate$JulianFields);
	return class$;
}

$Class* JulianFields::class$ = nullptr;

		} // temporal
	} // time
} // java