#include <TestConstructorParameterAnnotations$StaticNestedClass4.h>

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

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass4_Attribute_var$0[] = {
	{"value", 's', "[[@TestConstructorParameterAnnotations$MarkerAnnotation(4)], []]"},
	{}
};

$Attribute TestConstructorParameterAnnotations$StaticNestedClass4_Attribute_var$2[] = {
	{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(4)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass4_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterAnnotations$StaticNestedClass4_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterAnnotations$StaticNestedClass4_Annotations_[] = {
	{"LTestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterAnnotations$StaticNestedClass4_Attribute_var$0},
	{"LTestConstructorParameterAnnotations$ExpectedParameterAnnotations;", TestConstructorParameterAnnotations$StaticNestedClass4_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass4_Attribute_var$3[] = {
	{"value", 'I', "4"},
	{}
};

$ParameterAnnotation _TestConstructorParameterAnnotations$StaticNestedClass4_MethodParamAnnotations_init$0[] = {
	{"LTestConstructorParameterAnnotations$MarkerAnnotation;", TestConstructorParameterAnnotations$StaticNestedClass4_Attribute_var$3, 0},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$StaticNestedClass4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "<P:Ljava/lang/Object;Q:Ljava/lang/Object;>(TP;TQ;)V", $PUBLIC, $method(static_cast<void(TestConstructorParameterAnnotations$StaticNestedClass4::*)(Object$*,Object$*)>(&TestConstructorParameterAnnotations$StaticNestedClass4::init$)), nullptr, nullptr, nullptr, nullptr, _TestConstructorParameterAnnotations$StaticNestedClass4_MethodParamAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$StaticNestedClass4_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$StaticNestedClass4", "TestConstructorParameterAnnotations", "StaticNestedClass4", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$StaticNestedClass4_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterAnnotations$StaticNestedClass4",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$StaticNestedClass4_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$StaticNestedClass4_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$StaticNestedClass4_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$StaticNestedClass4($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$StaticNestedClass4));
}

void TestConstructorParameterAnnotations$StaticNestedClass4::init$(Object$* parameter1, Object$* parameter2) {
}

TestConstructorParameterAnnotations$StaticNestedClass4::TestConstructorParameterAnnotations$StaticNestedClass4() {
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass4::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$StaticNestedClass4, name, initialize, &_TestConstructorParameterAnnotations$StaticNestedClass4_ClassInfo_, allocate$TestConstructorParameterAnnotations$StaticNestedClass4);
	return class$;
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass4::class$ = nullptr;