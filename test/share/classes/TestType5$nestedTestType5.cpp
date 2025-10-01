#include <TestType5$nestedTestType5.h>

#include <TestType5.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestType5 = ::TestType5;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestType5$nestedTestType5_Attribute_var$0[] = {
	{"value", 'Z', "true"},
	{}
};

$CompoundAttribute _TestType5$nestedTestType5_MethodAnnotations_nestedBar0[] = {
	{"LExpectedIsDefault;", TestType5$nestedTestType5_Attribute_var$0},
	{}
};

$NamedAttribute TestType5$nestedTestType5_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType5$nestedTestType5_MethodAnnotations_nestedFoo1[] = {
	{"LExpectedIsDefault;", TestType5$nestedTestType5_Attribute_var$1},
	{}
};

$MethodInfo _TestType5$nestedTestType5_MethodInfo_[] = {
	{"nestedBar", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestType5$nestedTestType5_MethodAnnotations_nestedBar0},
	{"nestedFoo", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _TestType5$nestedTestType5_MethodAnnotations_nestedFoo1},
	{}
};

$InnerClassInfo _TestType5$nestedTestType5_InnerClassesInfo_[] = {
	{"TestType5$nestedTestType5", "TestType5", "nestedTestType5", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestType5$nestedTestType5_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"TestType5$nestedTestType5",
	nullptr,
	nullptr,
	nullptr,
	_TestType5$nestedTestType5_MethodInfo_,
	nullptr,
	nullptr,
	_TestType5$nestedTestType5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestType5"
};

$Object* allocate$TestType5$nestedTestType5($Class* clazz) {
	return $of($alloc(TestType5$nestedTestType5));
}

void TestType5$nestedTestType5::nestedBar() {
}

$Class* TestType5$nestedTestType5::load$($String* name, bool initialize) {
	$loadClass(TestType5$nestedTestType5, name, initialize, &_TestType5$nestedTestType5_ClassInfo_, allocate$TestType5$nestedTestType5);
	return class$;
}

$Class* TestType5$nestedTestType5::class$ = nullptr;