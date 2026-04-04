#include <repeatingAnnotations/B1.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace repeatingAnnotations {

void B1::init$() {
}

B1::B1() {
}

$Class* B1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(B1, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "10"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$compoundAttribute = {
	"LrepeatingAnnotations/Ann;", annotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "11"},
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
		"repeatingAnnotations.B1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(B1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B1);
	});
	return class$;
}

$Class* B1::class$ = nullptr;

} // repeatingAnnotations