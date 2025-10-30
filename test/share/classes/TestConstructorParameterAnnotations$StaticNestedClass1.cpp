#include <TestConstructorParameterAnnotations$StaticNestedClass1.h>

#include <TestConstructorParameterAnnotations.h>
#include <jcpp.h>

using $TestConstructorParameterAnnotations = ::TestConstructorParameterAnnotations;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass1_Attribute_var$0[] = {
	{"value", 's', "[[@TestConstructorParameterAnnotations$MarkerAnnotation(1)]]"},
	{}
};

$Attribute TestConstructorParameterAnnotations$StaticNestedClass1_Attribute_var$2[] = {
	{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(1)"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass1_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterAnnotations$StaticNestedClass1_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterAnnotations$StaticNestedClass1_Annotations_[] = {
	{"LTestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterAnnotations$StaticNestedClass1_Attribute_var$0},
	{"LTestConstructorParameterAnnotations$ExpectedParameterAnnotations;", TestConstructorParameterAnnotations$StaticNestedClass1_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass1_Attribute_var$3[] = {
	{"value", 'I', "1"},
	{}
};

$ParameterAnnotation _TestConstructorParameterAnnotations$StaticNestedClass1_MethodParamAnnotations_init$0[] = {
	{"LTestConstructorParameterAnnotations$MarkerAnnotation;", TestConstructorParameterAnnotations$StaticNestedClass1_Attribute_var$3, 0},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$StaticNestedClass1_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterAnnotations$StaticNestedClass1::*)(int32_t)>(&TestConstructorParameterAnnotations$StaticNestedClass1::init$)), nullptr, nullptr, nullptr, nullptr, _TestConstructorParameterAnnotations$StaticNestedClass1_MethodParamAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$StaticNestedClass1_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$StaticNestedClass1", "TestConstructorParameterAnnotations", "StaticNestedClass1", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$StaticNestedClass1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterAnnotations$StaticNestedClass1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$StaticNestedClass1_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$StaticNestedClass1_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$StaticNestedClass1_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$StaticNestedClass1($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$StaticNestedClass1));
}

void TestConstructorParameterAnnotations$StaticNestedClass1::init$(int32_t parameter) {
}

TestConstructorParameterAnnotations$StaticNestedClass1::TestConstructorParameterAnnotations$StaticNestedClass1() {
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass1::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$StaticNestedClass1, name, initialize, &_TestConstructorParameterAnnotations$StaticNestedClass1_ClassInfo_, allocate$TestConstructorParameterAnnotations$StaticNestedClass1);
	return class$;
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass1::class$ = nullptr;