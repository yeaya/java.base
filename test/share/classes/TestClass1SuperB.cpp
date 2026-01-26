#include <TestClass1SuperB.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestClass1SuperB_Attribute_var$0[] = {
	{"value", 'I', "123"},
	{}
};

$NamedAttribute TestClass1SuperB_Attribute_var$4[] = {
	{"value", 'I', "234"},
	{}
};

$CompoundAttribute TestClass1SuperB_CompoundAttribute_var$3 = {
"LAssociatedIndirectOnSuperClass;", TestClass1SuperB_Attribute_var$4
};

$NamedAttribute TestClass1SuperB_Attribute_var$6[] = {
	{"value", 'I', "345"},
	{}
};

$CompoundAttribute TestClass1SuperB_CompoundAttribute_var$5 = {
"LAssociatedIndirectOnSuperClass;", TestClass1SuperB_Attribute_var$6
};

$Attribute TestClass1SuperB_Attribute_var$2[] = {
	{'@', &TestClass1SuperB_CompoundAttribute_var$3},
	{'@', &TestClass1SuperB_CompoundAttribute_var$5},
	{'-'}
};

$NamedAttribute TestClass1SuperB_Attribute_var$1[] = {
	{"value", '[', TestClass1SuperB_Attribute_var$2},
	{}
};

$NamedAttribute TestClass1SuperB_Attribute_var$7[] = {
	{"value", 'I', "987"},
	{}
};

$NamedAttribute TestClass1SuperB_Attribute_var$11[] = {
	{"value", 'I', "1111"},
	{}
};

$CompoundAttribute TestClass1SuperB_CompoundAttribute_var$10 = {
"LAssociatedIndirectOnSuperClassDirectOnSubclass;", TestClass1SuperB_Attribute_var$11
};

$NamedAttribute TestClass1SuperB_Attribute_var$13[] = {
	{"value", 'I', "2222"},
	{}
};

$CompoundAttribute TestClass1SuperB_CompoundAttribute_var$12 = {
"LAssociatedIndirectOnSuperClassDirectOnSubclass;", TestClass1SuperB_Attribute_var$13
};

$Attribute TestClass1SuperB_Attribute_var$9[] = {
	{'@', &TestClass1SuperB_CompoundAttribute_var$10},
	{'@', &TestClass1SuperB_CompoundAttribute_var$12},
	{'-'}
};

$NamedAttribute TestClass1SuperB_Attribute_var$8[] = {
	{"value", '[', TestClass1SuperB_Attribute_var$9},
	{}
};

$CompoundAttribute _TestClass1SuperB_Annotations_[] = {
	{"LAssociatedDirectOnSuperClass;", TestClass1SuperB_Attribute_var$0},
	{"LAssociatedIndirectOnSuperClassContainer;", TestClass1SuperB_Attribute_var$1},
	{"LAssociatedDirectOnSuperClassIndirectOnSubclass;", TestClass1SuperB_Attribute_var$7},
	{"LAssociatedIndirectOnSuperClassDirectOnSubclassContainer;", TestClass1SuperB_Attribute_var$8},
	{}
};

$MethodInfo _TestClass1SuperB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TestClass1SuperB, init$, void)},
	{}
};

$ClassInfo _TestClass1SuperB_ClassInfo_ = {
	$ACC_SUPER,
	"TestClass1SuperB",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestClass1SuperB_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_TestClass1SuperB_Annotations_
};

$Object* allocate$TestClass1SuperB($Class* clazz) {
	return $of($alloc(TestClass1SuperB));
}

void TestClass1SuperB::init$() {
}

TestClass1SuperB::TestClass1SuperB() {
}

$Class* TestClass1SuperB::load$($String* name, bool initialize) {
	$loadClass(TestClass1SuperB, name, initialize, &_TestClass1SuperB_ClassInfo_, allocate$TestClass1SuperB);
	return class$;
}

$Class* TestClass1SuperB::class$ = nullptr;