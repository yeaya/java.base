#include <TestType7.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestType7_Attribute_var$0[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType7_MethodAnnotations_nestedBar1[] = {
	{"LExpectedIsDefault;", TestType7_Attribute_var$0},
	{}
};

$NamedAttribute TestType7_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType7_MethodAnnotations_nestedFoo2[] = {
	{"LExpectedIsDefault;", TestType7_Attribute_var$1},
	{}
};

$MethodInfo _TestType7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TestType7, init$, void)},
	{"nestedBar", "()V", nullptr, $PUBLIC, $virtualMethod(TestType7, nestedBar, void), nullptr, nullptr, _TestType7_MethodAnnotations_nestedBar1},
	{"nestedFoo", "()V", nullptr, $PUBLIC, $virtualMethod(TestType7, nestedFoo, void), nullptr, nullptr, _TestType7_MethodAnnotations_nestedFoo2},
	{}
};

$InnerClassInfo _TestType7_InnerClassesInfo_[] = {
	{"TestType6$nestedTestType6", "TestType6", "nestedTestType6", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestType7_ClassInfo_ = {
	$ACC_SUPER,
	"TestType7",
	"java.lang.Object",
	"TestType6$nestedTestType6",
	nullptr,
	_TestType7_MethodInfo_,
	nullptr,
	nullptr,
	_TestType7_InnerClassesInfo_
};

$Object* allocate$TestType7($Class* clazz) {
	return $of($alloc(TestType7));
}

void TestType7::init$() {
}

void TestType7::nestedFoo() {
}

void TestType7::nestedBar() {
}

TestType7::TestType7() {
}

$Class* TestType7::load$($String* name, bool initialize) {
	$loadClass(TestType7, name, initialize, &_TestType7_ClassInfo_, allocate$TestType7);
	return class$;
}

$Class* TestType7::class$ = nullptr;