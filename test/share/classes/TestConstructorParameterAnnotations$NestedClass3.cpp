#include <TestConstructorParameterAnnotations$NestedClass3.h>

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

$NamedAttribute TestConstructorParameterAnnotations$NestedClass3_Attribute_var$0[] = {
	{"value", 's', "[[], [@TestConstructorParameterAnnotations$MarkerAnnotation(3)], []]"},
	{}
};

$Attribute TestConstructorParameterAnnotations$NestedClass3_Attribute_var$2[] = {
	{'s', "null"},
	{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(3)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$NestedClass3_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterAnnotations$NestedClass3_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterAnnotations$NestedClass3_Annotations_[] = {
	{"LTestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterAnnotations$NestedClass3_Attribute_var$0},
	{"LTestConstructorParameterAnnotations$ExpectedParameterAnnotations;", TestConstructorParameterAnnotations$NestedClass3_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterAnnotations$NestedClass3_Attribute_var$3[] = {
	{"value", 'I', "3"},
	{}
};

$ParameterAnnotation _TestConstructorParameterAnnotations$NestedClass3_MethodParamAnnotations_init$0[] = {
	{"LTestConstructorParameterAnnotations$MarkerAnnotation;", TestConstructorParameterAnnotations$NestedClass3_Attribute_var$3, 1},
	{}
};

$FieldInfo _TestConstructorParameterAnnotations$NestedClass3_FieldInfo_[] = {
	{"this$0", "LTestConstructorParameterAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterAnnotations$NestedClass3, this$0)},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$NestedClass3_MethodInfo_[] = {
	{"<init>", "(LTestConstructorParameterAnnotations;Ljava/lang/Object;I)V", "<P:Ljava/lang/Object;>(TP;I)V", $PUBLIC, $method(static_cast<void(TestConstructorParameterAnnotations$NestedClass3::*)($TestConstructorParameterAnnotations*,Object$*,int32_t)>(&TestConstructorParameterAnnotations$NestedClass3::init$)), nullptr, nullptr, nullptr, nullptr, _TestConstructorParameterAnnotations$NestedClass3_MethodParamAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$NestedClass3_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$NestedClass3", "TestConstructorParameterAnnotations", "NestedClass3", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$NestedClass3_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterAnnotations$NestedClass3",
	"java.lang.Object",
	nullptr,
	_TestConstructorParameterAnnotations$NestedClass3_FieldInfo_,
	_TestConstructorParameterAnnotations$NestedClass3_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$NestedClass3_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$NestedClass3_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$NestedClass3($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$NestedClass3));
}

void TestConstructorParameterAnnotations$NestedClass3::init$($TestConstructorParameterAnnotations* this$0, Object$* parameter1, int32_t parameter2) {
	$set(this, this$0, this$0);
}

TestConstructorParameterAnnotations$NestedClass3::TestConstructorParameterAnnotations$NestedClass3() {
}

$Class* TestConstructorParameterAnnotations$NestedClass3::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$NestedClass3, name, initialize, &_TestConstructorParameterAnnotations$NestedClass3_ClassInfo_, allocate$TestConstructorParameterAnnotations$NestedClass3);
	return class$;
}

$Class* TestConstructorParameterAnnotations$NestedClass3::class$ = nullptr;