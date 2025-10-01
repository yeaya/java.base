#include <TestType6$nestedTestType6.h>

#include <TestType6.h>
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

using $TestType6 = ::TestType6;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestType6$nestedTestType6_Attribute_var$0[] = {
	{"value", 'Z', "true"},
	{}
};

$CompoundAttribute _TestType6$nestedTestType6_MethodAnnotations_nestedBar0[] = {
	{"LExpectedIsDefault;", TestType6$nestedTestType6_Attribute_var$0},
	{}
};

$NamedAttribute TestType6$nestedTestType6_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType6$nestedTestType6_MethodAnnotations_nestedFoo1[] = {
	{"LExpectedIsDefault;", TestType6$nestedTestType6_Attribute_var$1},
	{}
};

$MethodInfo _TestType6$nestedTestType6_MethodInfo_[] = {
	{"nestedBar", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestType6$nestedTestType6_MethodAnnotations_nestedBar0},
	{"nestedFoo", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _TestType6$nestedTestType6_MethodAnnotations_nestedFoo1},
	{}
};

$InnerClassInfo _TestType6$nestedTestType6_InnerClassesInfo_[] = {
	{"TestType6$nestedTestType6", "TestType6", "nestedTestType6", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestType6$nestedTestType6_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"TestType6$nestedTestType6",
	nullptr,
	nullptr,
	nullptr,
	_TestType6$nestedTestType6_MethodInfo_,
	nullptr,
	nullptr,
	_TestType6$nestedTestType6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestType6"
};

$Object* allocate$TestType6$nestedTestType6($Class* clazz) {
	return $of($alloc(TestType6$nestedTestType6));
}

void TestType6$nestedTestType6::nestedBar() {
}

$Class* TestType6$nestedTestType6::load$($String* name, bool initialize) {
	$loadClass(TestType6$nestedTestType6, name, initialize, &_TestType6$nestedTestType6_ClassInfo_, allocate$TestType6$nestedTestType6);
	return class$;
}

$Class* TestType6$nestedTestType6::class$ = nullptr;