#include <Case2B.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void Case2B::init$() {
}

Case2B::Case2B() {
}

$Class* Case2B::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Case2B, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"isDirect", 'Z', "false"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$compoundAttribute = {
	"LFoo4OrderUnitTest;", annotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute[] = {
		{'@', &annotations$$$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"isDirect", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LFooContainer;", annotations$$$namedAttribute},
		{"LFoo4OrderUnitTest;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Case2B",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Case2B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Case2B);
	});
	return class$;
}

$Class* Case2B::class$ = nullptr;