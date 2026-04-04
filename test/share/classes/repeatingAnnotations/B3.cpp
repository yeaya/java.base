#include <repeatingAnnotations/B3.h>
#include <repeatingAnnotations/B2.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $B2 = ::repeatingAnnotations::B2;

namespace repeatingAnnotations {

void B3::init$() {
	$B2::init$();
}

B3::B3() {
}

$Class* B3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(B3, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "20"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$compoundAttribute = {
	"LrepeatingAnnotations/Ann;", annotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute[] = {
		{'@', &annotations$$$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LrepeatingAnnotations/ExpectedAssociated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"repeatingAnnotations.B3",
		"repeatingAnnotations.B2",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(B3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B3);
	});
	return class$;
}

$Class* B3::class$ = nullptr;

} // repeatingAnnotations