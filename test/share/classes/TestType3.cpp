#include <TestType3.h>

#include <jcpp.h>

using $TestType1 = ::TestType1;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestType3_Attribute_var$0[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType3_MethodAnnotations_bar1[] = {
	{"LExpectedIsDefault;", TestType3_Attribute_var$0},
	{}
};

$NamedAttribute TestType3_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType3_MethodAnnotations_bar2[] = {
	{"LExpectedIsDefault;", TestType3_Attribute_var$1},
	{}
};

$NamedAttribute TestType3_Attribute_var$2[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType3_MethodAnnotations_foo3[] = {
	{"LExpectedIsDefault;", TestType3_Attribute_var$2},
	{}
};

$MethodInfo _TestType3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestType3::*)()>(&TestType3::init$))},
	{"bar", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestType3_MethodAnnotations_bar1},
	{"bar", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestType3_MethodAnnotations_bar2},
	{"foo", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestType3_MethodAnnotations_foo3},
	{}
};

$ClassInfo _TestType3_ClassInfo_ = {
	$ACC_SUPER,
	"TestType3",
	"java.lang.Object",
	"TestType1",
	nullptr,
	_TestType3_MethodInfo_
};

$Object* allocate$TestType3($Class* clazz) {
	return $of($alloc(TestType3));
}

void TestType3::init$() {
}

void TestType3::foo() {
}

void TestType3::bar() {
}

void TestType3::bar(int32_t i) {
}

TestType3::TestType3() {
}

$Class* TestType3::load$($String* name, bool initialize) {
	$loadClass(TestType3, name, initialize, &_TestType3_ClassInfo_, allocate$TestType3);
	return class$;
}

$Class* TestType3::class$ = nullptr;