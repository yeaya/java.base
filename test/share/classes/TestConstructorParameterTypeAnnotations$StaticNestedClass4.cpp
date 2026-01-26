#include <TestConstructorParameterTypeAnnotations$StaticNestedClass4.h>

#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass4_Attribute_var$0[] = {
	{"value", 's', "[[], []]"},
	{}
};

$Attribute TestConstructorParameterTypeAnnotations$StaticNestedClass4_Attribute_var$2[] = {
	{'s', "@TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation(4)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass4_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$StaticNestedClass4_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterTypeAnnotations$StaticNestedClass4_Annotations_[] = {
	{"LTestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterTypeAnnotations$StaticNestedClass4_Attribute_var$0},
	{"LTestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;", TestConstructorParameterTypeAnnotations$StaticNestedClass4_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass4_Attribute_var$3[] = {
	{"value", 'I', "4"},
	{}
};

$TypeAnnotation _TestConstructorParameterTypeAnnotations$StaticNestedClass4_MethodTypeAnnotations_init$0[] = {
	{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", TestConstructorParameterTypeAnnotations$StaticNestedClass4_Attribute_var$3, "METHOD_FORMAL_PARAMETER, param_index = 0"},
	{}
};

$MethodInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "<P:Ljava/lang/Object;Q:Ljava/lang/Object;>(TP;TQ;)V", $PUBLIC, $method(TestConstructorParameterTypeAnnotations$StaticNestedClass4, init$, void, Object$*, Object$*), nullptr, nullptr, nullptr, _TestConstructorParameterTypeAnnotations$StaticNestedClass4_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass4_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$StaticNestedClass4", "TestConstructorParameterTypeAnnotations", "StaticNestedClass4", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass4_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterTypeAnnotations$StaticNestedClass4",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass4_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass4_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass4_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$StaticNestedClass4($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$StaticNestedClass4));
}

void TestConstructorParameterTypeAnnotations$StaticNestedClass4::init$(Object$* parameter1, Object$* parameter2) {
}

TestConstructorParameterTypeAnnotations$StaticNestedClass4::TestConstructorParameterTypeAnnotations$StaticNestedClass4() {
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass4::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$StaticNestedClass4, name, initialize, &_TestConstructorParameterTypeAnnotations$StaticNestedClass4_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$StaticNestedClass4);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass4::class$ = nullptr;