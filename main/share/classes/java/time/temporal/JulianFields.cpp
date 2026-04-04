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

$TemporalField* JulianFields::JULIAN_DAY = nullptr;
$TemporalField* JulianFields::MODIFIED_JULIAN_DAY = nullptr;
$TemporalField* JulianFields::RATA_DIE = nullptr;

void JulianFields::init$() {
	$throwNew($AssertionError, $of("Not instantiable"_s));
}

void JulianFields::clinit$($Class* clazz) {
	$init($JulianFields$Field);
	$assignStatic(JulianFields::JULIAN_DAY, $JulianFields$Field::JULIAN_DAY);
	$assignStatic(JulianFields::MODIFIED_JULIAN_DAY, $JulianFields$Field::MODIFIED_JULIAN_DAY);
	$assignStatic(JulianFields::RATA_DIE, $JulianFields$Field::RATA_DIE);
}

JulianFields::JulianFields() {
}

$Class* JulianFields::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JULIAN_DAY_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JulianFields, JULIAN_DAY_OFFSET)},
		{"JULIAN_DAY", "Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JulianFields, JULIAN_DAY)},
		{"MODIFIED_JULIAN_DAY", "Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JulianFields, MODIFIED_JULIAN_DAY)},
		{"RATA_DIE", "Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JulianFields, RATA_DIE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JulianFields, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.temporal.JulianFields$Field", "java.time.temporal.JulianFields", "Field", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.time.temporal.JulianFields",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.time.temporal.JulianFields$Field"
	};
	$loadClass(JulianFields, name, initialize, &classInfo$$, JulianFields::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JulianFields);
	});
	return class$;
}

$Class* JulianFields::class$ = nullptr;

		} // temporal
	} // time
} // java