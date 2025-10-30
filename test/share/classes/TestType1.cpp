#include <TestType1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestType1_Attribute_var$0[] = {
	{"value", 'Z', "true"},
	{}
};

$CompoundAttribute _TestType1_MethodAnnotations_bar0[] = {
	{"LExpectedIsDefault;", TestType1_Attribute_var$0},
	{}
};

$NamedAttribute TestType1_Attribute_var$1[] = {
	{"value", 'Z', "true"},
	{}
};

$CompoundAttribute _TestType1_MethodAnnotations_bar1[] = {
	{"LExpectedIsDefault;", TestType1_Attribute_var$1},
	{}
};

$NamedAttribute TestType1_Attribute_var$2[] = {
	{"value", 'Z', "true"},
	{}
};

$CompoundAttribute _TestType1_MethodAnnotations_bar2[] = {
	{"LExpectedIsDefault;", TestType1_Attribute_var$2},
	{}
};

$NamedAttribute TestType1_Attribute_var$3[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _TestType1_MethodAnnotations_foo3[] = {
	{"LExpectedIsDefault;", TestType1_Attribute_var$3},
	{}
};

$MethodInfo _TestType1_MethodInfo_[] = {
	{"bar", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestType1_MethodAnnotations_bar0},
	{"bar", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestType1_MethodAnnotations_bar1},
	{"bar", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _TestType1_MethodAnnotations_bar2},
	{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, nullptr, _TestType1_MethodAnnotations_foo3},
	{}
};

$ClassInfo _TestType1_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"TestType1",
	nullptr,
	nullptr,
	nullptr,
	_TestType1_MethodInfo_
};

$Object* allocate$TestType1($Class* clazz) {
	return $of($alloc(TestType1));
}

void TestType1::bar() {
}

void TestType1::bar(int32_t i) {
}

void TestType1::bar($String* i) {
}

$Class* TestType1::load$($String* name, bool initialize) {
	$loadClass(TestType1, name, initialize, &_TestType1_ClassInfo_, allocate$TestType1);
	return class$;
}

$Class* TestType1::class$ = nullptr;