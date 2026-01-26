#include <TestConstructorParameterTypeAnnotations$NestedClass3.h>

#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $TestConstructorParameterTypeAnnotations = ::TestConstructorParameterTypeAnnotations;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass3_Attribute_var$0[] = {
	{"value", 's', "[[], [], []]"},
	{}
};

$Attribute TestConstructorParameterTypeAnnotations$NestedClass3_Attribute_var$2[] = {
	{'s', "null"},
	{'s', "@TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation(3)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass3_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$NestedClass3_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterTypeAnnotations$NestedClass3_Annotations_[] = {
	{"LTestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterTypeAnnotations$NestedClass3_Attribute_var$0},
	{"LTestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;", TestConstructorParameterTypeAnnotations$NestedClass3_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass3_Attribute_var$3[] = {
	{"value", 'I', "3"},
	{}
};

$TypeAnnotation _TestConstructorParameterTypeAnnotations$NestedClass3_MethodTypeAnnotations_init$0[] = {
	{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", TestConstructorParameterTypeAnnotations$NestedClass3_Attribute_var$3, "METHOD_FORMAL_PARAMETER, param_index = 0"},
	{}
};

$FieldInfo _TestConstructorParameterTypeAnnotations$NestedClass3_FieldInfo_[] = {
	{"this$0", "LTestConstructorParameterTypeAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterTypeAnnotations$NestedClass3, this$0)},
	{}
};

$MethodInfo _TestConstructorParameterTypeAnnotations$NestedClass3_MethodInfo_[] = {
	{"<init>", "(LTestConstructorParameterTypeAnnotations;Ljava/lang/Object;I)V", "<P:Ljava/lang/Object;>(TP;I)V", $PUBLIC, $method(TestConstructorParameterTypeAnnotations$NestedClass3, init$, void, $TestConstructorParameterTypeAnnotations*, Object$*, int32_t), nullptr, nullptr, nullptr, _TestConstructorParameterTypeAnnotations$NestedClass3_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$NestedClass3_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$NestedClass3", "TestConstructorParameterTypeAnnotations", "NestedClass3", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$NestedClass3_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterTypeAnnotations$NestedClass3",
	"java.lang.Object",
	nullptr,
	_TestConstructorParameterTypeAnnotations$NestedClass3_FieldInfo_,
	_TestConstructorParameterTypeAnnotations$NestedClass3_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$NestedClass3_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$NestedClass3_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$NestedClass3($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$NestedClass3));
}

void TestConstructorParameterTypeAnnotations$NestedClass3::init$($TestConstructorParameterTypeAnnotations* this$0, Object$* parameter1, int32_t parameter2) {
	$set(this, this$0, this$0);
}

TestConstructorParameterTypeAnnotations$NestedClass3::TestConstructorParameterTypeAnnotations$NestedClass3() {
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass3::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$NestedClass3, name, initialize, &_TestConstructorParameterTypeAnnotations$NestedClass3_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$NestedClass3);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass3::class$ = nullptr;