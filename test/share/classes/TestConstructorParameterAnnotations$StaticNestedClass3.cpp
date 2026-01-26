#include <TestConstructorParameterAnnotations$StaticNestedClass3.h>

#include <TestConstructorParameterAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass3_Attribute_var$0[] = {
	{"value", 's', "[[@TestConstructorParameterAnnotations$MarkerAnnotation(3)], []]"},
	{}
};

$Attribute TestConstructorParameterAnnotations$StaticNestedClass3_Attribute_var$2[] = {
	{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(3)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass3_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterAnnotations$StaticNestedClass3_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterAnnotations$StaticNestedClass3_Annotations_[] = {
	{"LTestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterAnnotations$StaticNestedClass3_Attribute_var$0},
	{"LTestConstructorParameterAnnotations$ExpectedParameterAnnotations;", TestConstructorParameterAnnotations$StaticNestedClass3_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass3_Attribute_var$3[] = {
	{"value", 'I', "3"},
	{}
};

$ParameterAnnotation _TestConstructorParameterAnnotations$StaticNestedClass3_MethodParamAnnotations_init$0[] = {
	{"LTestConstructorParameterAnnotations$MarkerAnnotation;", TestConstructorParameterAnnotations$StaticNestedClass3_Attribute_var$3, 0},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$StaticNestedClass3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;I)V", "<P:Ljava/lang/Object;>(TP;I)V", $PUBLIC, $method(TestConstructorParameterAnnotations$StaticNestedClass3, init$, void, Object$*, int32_t), nullptr, nullptr, nullptr, nullptr, _TestConstructorParameterAnnotations$StaticNestedClass3_MethodParamAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$StaticNestedClass3_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$StaticNestedClass3", "TestConstructorParameterAnnotations", "StaticNestedClass3", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$StaticNestedClass3_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterAnnotations$StaticNestedClass3",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$StaticNestedClass3_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$StaticNestedClass3_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$StaticNestedClass3_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$StaticNestedClass3($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$StaticNestedClass3));
}

void TestConstructorParameterAnnotations$StaticNestedClass3::init$(Object$* parameter1, int32_t parameter2) {
}

TestConstructorParameterAnnotations$StaticNestedClass3::TestConstructorParameterAnnotations$StaticNestedClass3() {
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass3::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$StaticNestedClass3, name, initialize, &_TestConstructorParameterAnnotations$StaticNestedClass3_ClassInfo_, allocate$TestConstructorParameterAnnotations$StaticNestedClass3);
	return class$;
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass3::class$ = nullptr;