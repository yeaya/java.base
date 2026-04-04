#include <TestClass1SuperB.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestClass1SuperB::init$() {
}

TestClass1SuperB::TestClass1SuperB() {
}

$Class* TestClass1SuperB::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestClass1SuperB, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'I', "123"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "234"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$1$compoundAttribute = {
	"LAssociatedIndirectOnSuperClass;", annotations$$$namedAttribute$1$compoundAttribute$namedAttribute
};
	$NamedAttribute annotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "345"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute = {
	"LAssociatedIndirectOnSuperClass;", annotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute[] = {
		{'@', &annotations$$$namedAttribute$1$compoundAttribute},
		{'@', &annotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$2[] = {
		{"value", 'I', "987"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$3$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "1111"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$3$compoundAttribute = {
	"LAssociatedIndirectOnSuperClassDirectOnSubclass;", annotations$$$namedAttribute$3$compoundAttribute$namedAttribute
};
	$NamedAttribute annotations$$$namedAttribute$3$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "2222"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$3$compoundAttribute$namedAttribute$compoundAttribute = {
	"LAssociatedIndirectOnSuperClassDirectOnSubclass;", annotations$$$namedAttribute$3$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$1[] = {
		{'@', &annotations$$$namedAttribute$3$compoundAttribute},
		{'@', &annotations$$$namedAttribute$3$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$3[] = {
		{"value", '[', $attribute$1},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LAssociatedDirectOnSuperClass;", annotations$$$namedAttribute},
		{"LAssociatedIndirectOnSuperClassContainer;", annotations$$$namedAttribute$1},
		{"LAssociatedDirectOnSuperClassIndirectOnSubclass;", annotations$$$namedAttribute$2},
		{"LAssociatedIndirectOnSuperClassDirectOnSubclassContainer;", annotations$$$namedAttribute$3},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestClass1SuperB",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TestClass1SuperB, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestClass1SuperB);
	});
	return class$;
}

$Class* TestClass1SuperB::class$ = nullptr;