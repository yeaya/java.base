#include <TestType6.h>

#include <TestType6$nestedTestType6.h>
#include <jcpp.h>

using $TestType6$nestedTestType6 = ::TestType6$nestedTestType6;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestType6_Attribute_var$0[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType6_MethodAnnotations_foo1[] = {
	{"LExpectedIsDefault;", TestType6_Attribute_var$0},
	{}
};

$MethodInfo _TestType6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestType6::*)()>(&TestType6::init$))},
	{"foo", "(LTestType6$nestedTestType6;)V", nullptr, 0, nullptr, nullptr, nullptr, _TestType6_MethodAnnotations_foo1},
	{}
};

$InnerClassInfo _TestType6_InnerClassesInfo_[] = {
	{"TestType6$nestedTestType6", "TestType6", "nestedTestType6", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestType6_ClassInfo_ = {
	$ACC_SUPER,
	"TestType6",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestType6_MethodInfo_,
	nullptr,
	nullptr,
	_TestType6_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestType6$nestedTestType6"
};

$Object* allocate$TestType6($Class* clazz) {
	return $of($alloc(TestType6));
}

void TestType6::init$() {
}

void TestType6::foo($TestType6$nestedTestType6* n) {
}

TestType6::TestType6() {
}

$Class* TestType6::load$($String* name, bool initialize) {
	$loadClass(TestType6, name, initialize, &_TestType6_ClassInfo_, allocate$TestType6);
	return class$;
}

$Class* TestType6::class$ = nullptr;