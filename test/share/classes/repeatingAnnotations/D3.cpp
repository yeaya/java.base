#include <repeatingAnnotations/D3.h>
#include <repeatingAnnotations/D2.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $D2 = ::repeatingAnnotations::D2;

namespace repeatingAnnotations {

void D3::init$() {
	$D2::init$();
}

D3::D3() {
}

$Class* D3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(D3, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "20"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$compoundAttribute = {
	"LrepeatingAnnotations/Ann;", annotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "21"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LrepeatingAnnotations/Ann;", annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute[] = {
		{'@', &annotations$$$namedAttribute$compoundAttribute},
		{'@', &annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
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
		"repeatingAnnotations.D3",
		"repeatingAnnotations.D2",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(D3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3);
	});
	return class$;
}

$Class* D3::class$ = nullptr;

} // repeatingAnnotations