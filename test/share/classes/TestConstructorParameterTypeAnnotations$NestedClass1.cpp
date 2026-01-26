#include <TestConstructorParameterTypeAnnotations$NestedClass1.h>

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

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass1_Attribute_var$0[] = {
	{"value", 's', "[[], []]"},
	{}
};

$Attribute TestConstructorParameterTypeAnnotations$NestedClass1_Attribute_var$2[] = {
	{'s', "null"},
	{'s', "@TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation(1)"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass1_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$NestedClass1_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterTypeAnnotations$NestedClass1_Annotations_[] = {
	{"LTestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterTypeAnnotations$NestedClass1_Attribute_var$0},
	{"LTestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;", TestConstructorParameterTypeAnnotations$NestedClass1_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass1_Attribute_var$3[] = {
	{"value", 'I', "1"},
	{}
};

$TypeAnnotation _TestConstructorParameterTypeAnnotations$NestedClass1_MethodTypeAnnotations_init$0[] = {
	{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", TestConstructorParameterTypeAnnotations$NestedClass1_Attribute_var$3, "METHOD_FORMAL_PARAMETER, param_index = 0"},
	{}
};

$FieldInfo _TestConstructorParameterTypeAnnotations$NestedClass1_FieldInfo_[] = {
	{"this$0", "LTestConstructorParameterTypeAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterTypeAnnotations$NestedClass1, this$0)},
	{}
};

$MethodInfo _TestConstructorParameterTypeAnnotations$NestedClass1_MethodInfo_[] = {
	{"<init>", "(LTestConstructorParameterTypeAnnotations;I)V", nullptr, $PUBLIC, $method(TestConstructorParameterTypeAnnotations$NestedClass1, init$, void, $TestConstructorParameterTypeAnnotations*, int32_t), nullptr, nullptr, nullptr, _TestConstructorParameterTypeAnnotations$NestedClass1_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$NestedClass1_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$NestedClass1", "TestConstructorParameterTypeAnnotations", "NestedClass1", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$NestedClass1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterTypeAnnotations$NestedClass1",
	"java.lang.Object",
	nullptr,
	_TestConstructorParameterTypeAnnotations$NestedClass1_FieldInfo_,
	_TestConstructorParameterTypeAnnotations$NestedClass1_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$NestedClass1_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$NestedClass1_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$NestedClass1($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$NestedClass1));
}

void TestConstructorParameterTypeAnnotations$NestedClass1::init$($TestConstructorParameterTypeAnnotations* this$0, int32_t parameter) {
	$set(this, this$0, this$0);
}

TestConstructorParameterTypeAnnotations$NestedClass1::TestConstructorParameterTypeAnnotations$NestedClass1() {
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass1::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$NestedClass1, name, initialize, &_TestConstructorParameterTypeAnnotations$NestedClass1_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$NestedClass1);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass1::class$ = nullptr;