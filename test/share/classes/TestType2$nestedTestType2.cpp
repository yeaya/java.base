#include <TestType2$nestedTestType2.h>

#include <TestType2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestType2$nestedTestType2_Attribute_var$0[] = {
	{"value", 'Z', "true"},
	{}
};

$CompoundAttribute _TestType2$nestedTestType2_MethodAnnotations_nestedBar0[] = {
	{"LExpectedIsDefault;", TestType2$nestedTestType2_Attribute_var$0},
	{}
};

$MethodInfo _TestType2$nestedTestType2_MethodInfo_[] = {
	{"nestedBar", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestType2$nestedTestType2_MethodAnnotations_nestedBar0},
	{}
};

$InnerClassInfo _TestType2$nestedTestType2_InnerClassesInfo_[] = {
	{"TestType2$nestedTestType2", "TestType2", "nestedTestType2", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestType2$nestedTestType2_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"TestType2$nestedTestType2",
	nullptr,
	nullptr,
	nullptr,
	_TestType2$nestedTestType2_MethodInfo_,
	nullptr,
	nullptr,
	_TestType2$nestedTestType2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestType2"
};

$Object* allocate$TestType2$nestedTestType2($Class* clazz) {
	return $of($alloc(TestType2$nestedTestType2));
}

void TestType2$nestedTestType2::nestedBar() {
}

$Class* TestType2$nestedTestType2::load$($String* name, bool initialize) {
	$loadClass(TestType2$nestedTestType2, name, initialize, &_TestType2$nestedTestType2_ClassInfo_, allocate$TestType2$nestedTestType2);
	return class$;
}

$Class* TestType2$nestedTestType2::class$ = nullptr;