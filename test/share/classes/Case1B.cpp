#include <Case1B.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void Case1B::init$() {
}

Case1B::Case1B() {
}

$Class* Case1B::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Case1B, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"isDirect", 'Z', "true"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1$compoundAttribute$namedAttribute[] = {
		{"isDirect", 'Z', "false"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$1$compoundAttribute = {
	"LFoo4OrderUnitTest;", annotations$$$namedAttribute$1$compoundAttribute$namedAttribute
};
	$Attribute $attribute[] = {
		{'@', &annotations$$$namedAttribute$1$compoundAttribute},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LFoo4OrderUnitTest;", annotations$$$namedAttribute},
		{"LFooContainer;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Case1B",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Case1B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Case1B);
	});
	return class$;
}

$Class* Case1B::class$ = nullptr;