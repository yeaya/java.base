#include <TestClass1B.h>
#include <TestClass1SuperB.h>
#include <jcpp.h>

using $TestClass1SuperB = ::TestClass1SuperB;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestClass1B::init$() {
	$TestClass1SuperB::init$();
}

void TestClass1B::foo() {
	return;
}

void TestClass1B::bar() {
	return;
}

TestClass1B::TestClass1B() {
}

$Class* TestClass1B::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'-'}
	};
	$NamedAttribute barmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$NamedAttribute barmethodAnnotations$$$namedAttribute$1$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "11"},
		{}
	};
$CompoundAttribute barmethodAnnotations$$$namedAttribute$1$compoundAttribute = {
	"LDirectlyAndIndirectlyPresent;", barmethodAnnotations$$$namedAttribute$1$compoundAttribute$namedAttribute
};
	$NamedAttribute barmethodAnnotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "22"},
		{}
	};
$CompoundAttribute barmethodAnnotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute = {
	"LDirectlyAndIndirectlyPresent;", barmethodAnnotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$1[] = {
		{'@', &barmethodAnnotations$$$namedAttribute$1$compoundAttribute},
		{'@', &barmethodAnnotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute barmethodAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$1},
		{}
	};
	$NamedAttribute barmethodAnnotations$$$namedAttribute$2[] = {
		{"value", 'I', "33"},
		{}
	};
	$CompoundAttribute barmethodAnnotations$$[] = {
		{"LIndirectlyPresentContainer;", barmethodAnnotations$$$namedAttribute},
		{"LDirectlyAndIndirectlyPresentContainer;", barmethodAnnotations$$$namedAttribute$1},
		{"LDirectlyAndIndirectlyPresent;", barmethodAnnotations$$$namedAttribute$2},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute[] = {
		{"value", 'I', "2"},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute$1$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "12"},
		{}
	};
$CompoundAttribute foomethodAnnotations$$$namedAttribute$1$compoundAttribute = {
	"LIndirectlyPresent;", foomethodAnnotations$$$namedAttribute$1$compoundAttribute$namedAttribute
};
	$Attribute $attribute$2[] = {
		{'@', &foomethodAnnotations$$$namedAttribute$1$compoundAttribute},
		{'-'}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$2},
		{}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute$2$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "84"},
		{}
	};
$CompoundAttribute foomethodAnnotations$$$namedAttribute$2$compoundAttribute = {
	"LDirectlyAndIndirectlyPresent;", foomethodAnnotations$$$namedAttribute$2$compoundAttribute$namedAttribute
};
	$NamedAttribute foomethodAnnotations$$$namedAttribute$2$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "96"},
		{}
	};
$CompoundAttribute foomethodAnnotations$$$namedAttribute$2$compoundAttribute$namedAttribute$compoundAttribute = {
	"LDirectlyAndIndirectlyPresent;", foomethodAnnotations$$$namedAttribute$2$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$3[] = {
		{'@', &foomethodAnnotations$$$namedAttribute$2$compoundAttribute},
		{'@', &foomethodAnnotations$$$namedAttribute$2$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute foomethodAnnotations$$$namedAttribute$2[] = {
		{"value", '[', $attribute$3},
		{}
	};
	$CompoundAttribute foomethodAnnotations$$[] = {
		{"LDirectlyPresent;", foomethodAnnotations$$$namedAttribute},
		{"LIndirectlyPresentContainer;", foomethodAnnotations$$$namedAttribute$1},
		{"LDirectlyAndIndirectlyPresentContainer;", foomethodAnnotations$$$namedAttribute$2},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestClass1B, init$, void)},
		{"bar", "()V", nullptr, $PUBLIC, $virtualMethod(TestClass1B, bar, void), nullptr, nullptr, barmethodAnnotations$$},
		{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(TestClass1B, foo, void), nullptr, nullptr, foomethodAnnotations$$},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'I', "1"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "10"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$1$compoundAttribute = {
	"LIndirectlyPresent;", annotations$$$namedAttribute$1$compoundAttribute$namedAttribute
};
	$NamedAttribute annotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "11"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute = {
	"LIndirectlyPresent;", annotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$4[] = {
		{'@', &annotations$$$namedAttribute$1$compoundAttribute},
		{'@', &annotations$$$namedAttribute$1$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$4},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$2$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "876"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$2$compoundAttribute = {
	"LAssociatedDirectOnSuperClassIndirectOnSubclass;", annotations$$$namedAttribute$2$compoundAttribute$namedAttribute
};
	$NamedAttribute annotations$$$namedAttribute$2$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"value", 'I', "765"},
		{}
	};
$CompoundAttribute annotations$$$namedAttribute$2$compoundAttribute$namedAttribute$compoundAttribute = {
	"LAssociatedDirectOnSuperClassIndirectOnSubclass;", annotations$$$namedAttribute$2$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$5[] = {
		{'@', &annotations$$$namedAttribute$2$compoundAttribute},
		{'@', &annotations$$$namedAttribute$2$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$2[] = {
		{"value", '[', $attribute$5},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$3[] = {
		{"value", 'I', "3333"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LDirectlyPresent;", annotations$$$namedAttribute},
		{"LIndirectlyPresentContainer;", annotations$$$namedAttribute$1},
		{"LAssociatedDirectOnSuperClassIndirectOnSubclassContainer;", annotations$$$namedAttribute$2},
		{"LAssociatedIndirectOnSuperClassDirectOnSubclass;", annotations$$$namedAttribute$3},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestClass1B",
		"TestClass1SuperB",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(TestClass1B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestClass1B);
	});
	return class$;
}

$Class* TestClass1B::class$ = nullptr;