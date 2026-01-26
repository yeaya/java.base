#include <TestType2.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestType2_Attribute_var$0[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType2_MethodAnnotations_bar1[] = {
	{"LExpectedIsDefault;", TestType2_Attribute_var$0},
	{}
};

$MethodInfo _TestType2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TestType2, init$, void)},
	{"bar", "()V", nullptr, 0, $virtualMethod(TestType2, bar, void), nullptr, nullptr, _TestType2_MethodAnnotations_bar1},
	{}
};

$InnerClassInfo _TestType2_InnerClassesInfo_[] = {
	{"TestType2$nestedTestType2", "TestType2", "nestedTestType2", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestType2_ClassInfo_ = {
	$ACC_SUPER,
	"TestType2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestType2_MethodInfo_,
	nullptr,
	nullptr,
	_TestType2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestType2$nestedTestType2"
};

$Object* allocate$TestType2($Class* clazz) {
	return $of($alloc(TestType2));
}

void TestType2::init$() {
}

void TestType2::bar() {
}

TestType2::TestType2() {
}

$Class* TestType2::load$($String* name, bool initialize) {
	$loadClass(TestType2, name, initialize, &_TestType2_ClassInfo_, allocate$TestType2);
	return class$;
}

$Class* TestType2::class$ = nullptr;