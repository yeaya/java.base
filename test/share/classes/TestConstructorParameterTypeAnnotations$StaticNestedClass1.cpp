#include <TestConstructorParameterTypeAnnotations$StaticNestedClass1.h>

#include <TestConstructorParameterTypeAnnotations.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/TypeAnnotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestConstructorParameterTypeAnnotations = ::TestConstructorParameterTypeAnnotations;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass1_Attribute_var$0[] = {
	{"value", 's', "[[]]"},
	{}
};

$Attribute TestConstructorParameterTypeAnnotations$StaticNestedClass1_Attribute_var$2[] = {
	{'s', "@TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation(1)"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass1_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$StaticNestedClass1_Attribute_var$2},
	{}
};
$CompoundAttribute _TestConstructorParameterTypeAnnotations$StaticNestedClass1_Annotations_[] = {
	{"LTestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterTypeAnnotations$StaticNestedClass1_Attribute_var$0},
	{"LTestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;", TestConstructorParameterTypeAnnotations$StaticNestedClass1_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass1_Attribute_var$3[] = {
	{"value", 'I', "1"},
	{}
};

$TypeAnnotation _TestConstructorParameterTypeAnnotations$StaticNestedClass1_MethodTypeAnnotations_init$0[] = {
	{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", TestConstructorParameterTypeAnnotations$StaticNestedClass1_Attribute_var$3, "METHOD_FORMAL_PARAMETER, param_index = 0"},
	{}
};


$MethodInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass1_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterTypeAnnotations$StaticNestedClass1::*)(int32_t)>(&TestConstructorParameterTypeAnnotations$StaticNestedClass1::init$)), nullptr, nullptr, nullptr, _TestConstructorParameterTypeAnnotations$StaticNestedClass1_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass1_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$StaticNestedClass1", "TestConstructorParameterTypeAnnotations", "StaticNestedClass1", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterTypeAnnotations$StaticNestedClass1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass1_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass1_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass1_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$StaticNestedClass1($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$StaticNestedClass1));
}

void TestConstructorParameterTypeAnnotations$StaticNestedClass1::init$(int32_t parameter) {
}

TestConstructorParameterTypeAnnotations$StaticNestedClass1::TestConstructorParameterTypeAnnotations$StaticNestedClass1() {
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass1::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$StaticNestedClass1, name, initialize, &_TestConstructorParameterTypeAnnotations$StaticNestedClass1_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$StaticNestedClass1);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass1::class$ = nullptr;