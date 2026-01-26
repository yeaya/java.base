#include <TestConstructorParameterAnnotations$NestedClass1.h>

#include <TestConstructorParameterAnnotations.h>
#include <jcpp.h>

using $TestConstructorParameterAnnotations = ::TestConstructorParameterAnnotations;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

$NamedAttribute TestConstructorParameterAnnotations$NestedClass1_Attribute_var$0[] = {
	{"value", 's', "[[], [@TestConstructorParameterAnnotations$MarkerAnnotation(1)]]"},
	{}
};

$Attribute TestConstructorParameterAnnotations$NestedClass1_Attribute_var$2[] = {
	{'s', "null"},
	{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(1)"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$NestedClass1_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterAnnotations$NestedClass1_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterAnnotations$NestedClass1_Annotations_[] = {
	{"LTestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterAnnotations$NestedClass1_Attribute_var$0},
	{"LTestConstructorParameterAnnotations$ExpectedParameterAnnotations;", TestConstructorParameterAnnotations$NestedClass1_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterAnnotations$NestedClass1_Attribute_var$3[] = {
	{"value", 'I', "1"},
	{}
};

$ParameterAnnotation _TestConstructorParameterAnnotations$NestedClass1_MethodParamAnnotations_init$0[] = {
	{"LTestConstructorParameterAnnotations$MarkerAnnotation;", TestConstructorParameterAnnotations$NestedClass1_Attribute_var$3, 1},
	{}
};

$FieldInfo _TestConstructorParameterAnnotations$NestedClass1_FieldInfo_[] = {
	{"this$0", "LTestConstructorParameterAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterAnnotations$NestedClass1, this$0)},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$NestedClass1_MethodInfo_[] = {
	{"<init>", "(LTestConstructorParameterAnnotations;I)V", nullptr, $PUBLIC, $method(TestConstructorParameterAnnotations$NestedClass1, init$, void, $TestConstructorParameterAnnotations*, int32_t), nullptr, nullptr, nullptr, nullptr, _TestConstructorParameterAnnotations$NestedClass1_MethodParamAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$NestedClass1_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$NestedClass1", "TestConstructorParameterAnnotations", "NestedClass1", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$NestedClass1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterAnnotations$NestedClass1",
	"java.lang.Object",
	nullptr,
	_TestConstructorParameterAnnotations$NestedClass1_FieldInfo_,
	_TestConstructorParameterAnnotations$NestedClass1_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$NestedClass1_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$NestedClass1_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$NestedClass1($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$NestedClass1));
}

void TestConstructorParameterAnnotations$NestedClass1::init$($TestConstructorParameterAnnotations* this$0, int32_t parameter) {
	$set(this, this$0, this$0);
}

TestConstructorParameterAnnotations$NestedClass1::TestConstructorParameterAnnotations$NestedClass1() {
}

$Class* TestConstructorParameterAnnotations$NestedClass1::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$NestedClass1, name, initialize, &_TestConstructorParameterAnnotations$NestedClass1_ClassInfo_, allocate$TestConstructorParameterAnnotations$NestedClass1);
	return class$;
}

$Class* TestConstructorParameterAnnotations$NestedClass1::class$ = nullptr;