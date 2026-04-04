#include <repeatingAnnotations/D2.h>
#include <repeatingAnnotations/D1.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $D1 = ::repeatingAnnotations::D1;

namespace repeatingAnnotations {

void D2::init$() {
	$D1::init$();
}

D2::D2() {
}

$Class* D2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(D2, init$, void)},
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
		{"LrepeatingAnnotations/AnnCont;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"repeatingAnnotations.D2",
		"repeatingAnnotations.D1",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(D2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D2);
	});
	return class$;
}

$Class* D2::class$ = nullptr;

} // repeatingAnnotations