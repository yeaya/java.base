#include <TestType5.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestType5_Attribute_var$0[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType5_MethodAnnotations_aFoo0[] = {
	{"LExpectedIsDefault;", TestType5_Attribute_var$0},
	{}
};

$NamedAttribute TestType5_Attribute_var$1[] = {
	{"value", 'Z', "true"},
	{}
};

$CompoundAttribute _TestType5_MethodAnnotations_pBar1[] = {
	{"LExpectedIsDefault;", TestType5_Attribute_var$1},
	{}
};

$NamedAttribute TestType5_Attribute_var$2[] = {
	{"value", 'Z', "true"},
	{}
};

$CompoundAttribute _TestType5_MethodAnnotations_sBar2[] = {
	{"LExpectedIsDefault;", TestType5_Attribute_var$2},
	{}
};

$NamedAttribute TestType5_Attribute_var$3[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType5_MethodAnnotations_sFoo3[] = {
	{"LExpectedIsDefault;", TestType5_Attribute_var$3},
	{}
};

$MethodInfo _TestType5_MethodInfo_[] = {
	{"aFoo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestType5, aFoo, void), nullptr, nullptr, _TestType5_MethodAnnotations_aFoo0},
	{"pBar", "()V", nullptr, $PUBLIC, $virtualMethod(TestType5, pBar, void), nullptr, nullptr, _TestType5_MethodAnnotations_pBar1},
	{"sBar", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestType5, sBar, $String*), nullptr, nullptr, _TestType5_MethodAnnotations_sBar2},
	{"sFoo", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestType5, sFoo, void), nullptr, nullptr, _TestType5_MethodAnnotations_sFoo3},
	{}
};

$InnerClassInfo _TestType5_InnerClassesInfo_[] = {
	{"TestType5$nestedTestType5", "TestType5", "nestedTestType5", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestType5_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"TestType5",
	nullptr,
	nullptr,
	nullptr,
	_TestType5_MethodInfo_,
	nullptr,
	nullptr,
	_TestType5_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestType5$nestedTestType5"
};

$Object* allocate$TestType5($Class* clazz) {
	return $of($alloc(TestType5));
}

void TestType5::sFoo() {
}

void TestType5::pBar() {
}

$String* TestType5::sBar() {
	return ""_s;
}

$Class* TestType5::load$($String* name, bool initialize) {
	$loadClass(TestType5, name, initialize, &_TestType5_ClassInfo_, allocate$TestType5);
	return class$;
}

$Class* TestType5::class$ = nullptr;