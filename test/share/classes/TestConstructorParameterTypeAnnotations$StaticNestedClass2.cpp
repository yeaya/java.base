#include <TestConstructorParameterTypeAnnotations$StaticNestedClass2.h>

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

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass2_Attribute_var$0[] = {
	{"value", 's', "[[], []]"},
	{}
};

$Attribute TestConstructorParameterTypeAnnotations$StaticNestedClass2_Attribute_var$2[] = {
	{'s', "@TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation(2)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass2_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$StaticNestedClass2_Attribute_var$2},
	{}
};
$CompoundAttribute _TestConstructorParameterTypeAnnotations$StaticNestedClass2_Annotations_[] = {
	{"LTestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterTypeAnnotations$StaticNestedClass2_Attribute_var$0},
	{"LTestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;", TestConstructorParameterTypeAnnotations$StaticNestedClass2_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass2_Attribute_var$3[] = {
	{"value", 'I', "2"},
	{}
};

$TypeAnnotation _TestConstructorParameterTypeAnnotations$StaticNestedClass2_MethodTypeAnnotations_init$0[] = {
	{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", TestConstructorParameterTypeAnnotations$StaticNestedClass2_Attribute_var$3, "METHOD_FORMAL_PARAMETER, param_index = 0"},
	{}
};


$MethodInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass2_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterTypeAnnotations$StaticNestedClass2::*)(int32_t,int32_t)>(&TestConstructorParameterTypeAnnotations$StaticNestedClass2::init$)), nullptr, nullptr, nullptr, _TestConstructorParameterTypeAnnotations$StaticNestedClass2_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass2_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$StaticNestedClass2", "TestConstructorParameterTypeAnnotations", "StaticNestedClass2", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterTypeAnnotations$StaticNestedClass2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass2_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass2_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass2_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$StaticNestedClass2($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$StaticNestedClass2));
}

void TestConstructorParameterTypeAnnotations$StaticNestedClass2::init$(int32_t parameter1, int32_t parameter2) {
}

TestConstructorParameterTypeAnnotations$StaticNestedClass2::TestConstructorParameterTypeAnnotations$StaticNestedClass2() {
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass2::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$StaticNestedClass2, name, initialize, &_TestConstructorParameterTypeAnnotations$StaticNestedClass2_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$StaticNestedClass2);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass2::class$ = nullptr;