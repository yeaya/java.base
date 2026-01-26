#include <TestClass1B.h>

#include <TestClass1SuperB.h>
#include <jcpp.h>

using $TestClass1SuperB = ::TestClass1SuperB;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestClass1B_Attribute_var$0[] = {
	{"value", 'I', "1"},
	{}
};

$NamedAttribute TestClass1B_Attribute_var$4[] = {
	{"value", 'I', "10"},
	{}
};

$CompoundAttribute TestClass1B_CompoundAttribute_var$3 = {
"LIndirectlyPresent;", TestClass1B_Attribute_var$4
};

$NamedAttribute TestClass1B_Attribute_var$6[] = {
	{"value", 'I', "11"},
	{}
};

$CompoundAttribute TestClass1B_CompoundAttribute_var$5 = {
"LIndirectlyPresent;", TestClass1B_Attribute_var$6
};

$Attribute TestClass1B_Attribute_var$2[] = {
	{'@', &TestClass1B_CompoundAttribute_var$3},
	{'@', &TestClass1B_CompoundAttribute_var$5},
	{'-'}
};

$NamedAttribute TestClass1B_Attribute_var$1[] = {
	{"value", '[', TestClass1B_Attribute_var$2},
	{}
};

$NamedAttribute TestClass1B_Attribute_var$10[] = {
	{"value", 'I', "876"},
	{}
};

$CompoundAttribute TestClass1B_CompoundAttribute_var$9 = {
"LAssociatedDirectOnSuperClassIndirectOnSubclass;", TestClass1B_Attribute_var$10
};

$NamedAttribute TestClass1B_Attribute_var$12[] = {
	{"value", 'I', "765"},
	{}
};

$CompoundAttribute TestClass1B_CompoundAttribute_var$11 = {
"LAssociatedDirectOnSuperClassIndirectOnSubclass;", TestClass1B_Attribute_var$12
};

$Attribute TestClass1B_Attribute_var$8[] = {
	{'@', &TestClass1B_CompoundAttribute_var$9},
	{'@', &TestClass1B_CompoundAttribute_var$11},
	{'-'}
};

$NamedAttribute TestClass1B_Attribute_var$7[] = {
	{"value", '[', TestClass1B_Attribute_var$8},
	{}
};

$NamedAttribute TestClass1B_Attribute_var$13[] = {
	{"value", 'I', "3333"},
	{}
};

$CompoundAttribute _TestClass1B_Annotations_[] = {
	{"LDirectlyPresent;", TestClass1B_Attribute_var$0},
	{"LIndirectlyPresentContainer;", TestClass1B_Attribute_var$1},
	{"LAssociatedDirectOnSuperClassIndirectOnSubclassContainer;", TestClass1B_Attribute_var$7},
	{"LAssociatedIndirectOnSuperClassDirectOnSubclass;", TestClass1B_Attribute_var$13},
	{}
};

$Attribute TestClass1B_Attribute_var$15[] = {
	{'-'}
};

$NamedAttribute TestClass1B_Attribute_var$14[] = {
	{"value", '[', TestClass1B_Attribute_var$15},
	{}
};

$NamedAttribute TestClass1B_Attribute_var$19[] = {
	{"value", 'I', "11"},
	{}
};

$CompoundAttribute TestClass1B_CompoundAttribute_var$18 = {
"LDirectlyAndIndirectlyPresent;", TestClass1B_Attribute_var$19
};

$NamedAttribute TestClass1B_Attribute_var$21[] = {
	{"value", 'I', "22"},
	{}
};

$CompoundAttribute TestClass1B_CompoundAttribute_var$20 = {
"LDirectlyAndIndirectlyPresent;", TestClass1B_Attribute_var$21
};

$Attribute TestClass1B_Attribute_var$17[] = {
	{'@', &TestClass1B_CompoundAttribute_var$18},
	{'@', &TestClass1B_CompoundAttribute_var$20},
	{'-'}
};

$NamedAttribute TestClass1B_Attribute_var$16[] = {
	{"value", '[', TestClass1B_Attribute_var$17},
	{}
};

$NamedAttribute TestClass1B_Attribute_var$22[] = {
	{"value", 'I', "33"},
	{}
};

$CompoundAttribute _TestClass1B_MethodAnnotations_bar1[] = {
	{"LIndirectlyPresentContainer;", TestClass1B_Attribute_var$14},
	{"LDirectlyAndIndirectlyPresentContainer;", TestClass1B_Attribute_var$16},
	{"LDirectlyAndIndirectlyPresent;", TestClass1B_Attribute_var$22},
	{}
};

$NamedAttribute TestClass1B_Attribute_var$23[] = {
	{"value", 'I', "2"},
	{}
};

$NamedAttribute TestClass1B_Attribute_var$27[] = {
	{"value", 'I', "12"},
	{}
};

$CompoundAttribute TestClass1B_CompoundAttribute_var$26 = {
"LIndirectlyPresent;", TestClass1B_Attribute_var$27
};

$Attribute TestClass1B_Attribute_var$25[] = {
	{'@', &TestClass1B_CompoundAttribute_var$26},
	{'-'}
};

$NamedAttribute TestClass1B_Attribute_var$24[] = {
	{"value", '[', TestClass1B_Attribute_var$25},
	{}
};

$NamedAttribute TestClass1B_Attribute_var$31[] = {
	{"value", 'I', "84"},
	{}
};

$CompoundAttribute TestClass1B_CompoundAttribute_var$30 = {
"LDirectlyAndIndirectlyPresent;", TestClass1B_Attribute_var$31
};

$NamedAttribute TestClass1B_Attribute_var$33[] = {
	{"value", 'I', "96"},
	{}
};

$CompoundAttribute TestClass1B_CompoundAttribute_var$32 = {
"LDirectlyAndIndirectlyPresent;", TestClass1B_Attribute_var$33
};

$Attribute TestClass1B_Attribute_var$29[] = {
	{'@', &TestClass1B_CompoundAttribute_var$30},
	{'@', &TestClass1B_CompoundAttribute_var$32},
	{'-'}
};

$NamedAttribute TestClass1B_Attribute_var$28[] = {
	{"value", '[', TestClass1B_Attribute_var$29},
	{}
};

$CompoundAttribute _TestClass1B_MethodAnnotations_foo2[] = {
	{"LDirectlyPresent;", TestClass1B_Attribute_var$23},
	{"LIndirectlyPresentContainer;", TestClass1B_Attribute_var$24},
	{"LDirectlyAndIndirectlyPresentContainer;", TestClass1B_Attribute_var$28},
	{}
};

$MethodInfo _TestClass1B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TestClass1B, init$, void)},
	{"bar", "()V", nullptr, $PUBLIC, $virtualMethod(TestClass1B, bar, void), nullptr, nullptr, _TestClass1B_MethodAnnotations_bar1},
	{"foo", "()V", nullptr, $PUBLIC, $virtualMethod(TestClass1B, foo, void), nullptr, nullptr, _TestClass1B_MethodAnnotations_foo2},
	{}
};

$ClassInfo _TestClass1B_ClassInfo_ = {
	$ACC_SUPER,
	"TestClass1B",
	"TestClass1SuperB",
	nullptr,
	nullptr,
	_TestClass1B_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TestClass1B_Annotations_
};

$Object* allocate$TestClass1B($Class* clazz) {
	return $of($alloc(TestClass1B));
}

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
	$loadClass(TestClass1B, name, initialize, &_TestClass1B_ClassInfo_, allocate$TestClass1B);
	return class$;
}

$Class* TestClass1B::class$ = nullptr;