#include <TestConstructorParameterTypeAnnotations$StaticNestedClass3.h>

#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $TestConstructorParameterTypeAnnotations = ::TestConstructorParameterTypeAnnotations;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass3_Attribute_var$0[] = {
	{"value", 's', "[[], []]"},
	{}
};

$Attribute TestConstructorParameterTypeAnnotations$StaticNestedClass3_Attribute_var$2[] = {
	{'s', "@TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation(3)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass3_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$StaticNestedClass3_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterTypeAnnotations$StaticNestedClass3_Annotations_[] = {
	{"LTestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterTypeAnnotations$StaticNestedClass3_Attribute_var$0},
	{"LTestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;", TestConstructorParameterTypeAnnotations$StaticNestedClass3_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass3_Attribute_var$3[] = {
	{"value", 'I', "3"},
	{}
};

$TypeAnnotation _TestConstructorParameterTypeAnnotations$StaticNestedClass3_MethodTypeAnnotations_init$0[] = {
	{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", TestConstructorParameterTypeAnnotations$StaticNestedClass3_Attribute_var$3, "METHOD_FORMAL_PARAMETER, param_index = 0"},
	{}
};

$MethodInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;I)V", "<P:Ljava/lang/Object;>(TP;I)V", $PUBLIC, $method(static_cast<void(TestConstructorParameterTypeAnnotations$StaticNestedClass3::*)(Object$*,int32_t)>(&TestConstructorParameterTypeAnnotations$StaticNestedClass3::init$)), nullptr, nullptr, nullptr, _TestConstructorParameterTypeAnnotations$StaticNestedClass3_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass3_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$StaticNestedClass3", "TestConstructorParameterTypeAnnotations", "StaticNestedClass3", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass3_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterTypeAnnotations$StaticNestedClass3",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass3_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass3_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass3_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$StaticNestedClass3($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$StaticNestedClass3));
}

void TestConstructorParameterTypeAnnotations$StaticNestedClass3::init$(Object$* parameter1, int32_t parameter2) {
}

TestConstructorParameterTypeAnnotations$StaticNestedClass3::TestConstructorParameterTypeAnnotations$StaticNestedClass3() {
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass3::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$StaticNestedClass3, name, initialize, &_TestConstructorParameterTypeAnnotations$StaticNestedClass3_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$StaticNestedClass3);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass3::class$ = nullptr;