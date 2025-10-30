#include <TestConstructorParameterAnnotations$NestedClass4.h>

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

$NamedAttribute TestConstructorParameterAnnotations$NestedClass4_Attribute_var$0[] = {
	{"value", 's', "[[], [@TestConstructorParameterAnnotations$MarkerAnnotation(4)], []]"},
	{}
};

$Attribute TestConstructorParameterAnnotations$NestedClass4_Attribute_var$2[] = {
	{'s', "null"},
	{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(4)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$NestedClass4_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterAnnotations$NestedClass4_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterAnnotations$NestedClass4_Annotations_[] = {
	{"LTestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterAnnotations$NestedClass4_Attribute_var$0},
	{"LTestConstructorParameterAnnotations$ExpectedParameterAnnotations;", TestConstructorParameterAnnotations$NestedClass4_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterAnnotations$NestedClass4_Attribute_var$3[] = {
	{"value", 'I', "4"},
	{}
};

$ParameterAnnotation _TestConstructorParameterAnnotations$NestedClass4_MethodParamAnnotations_init$0[] = {
	{"LTestConstructorParameterAnnotations$MarkerAnnotation;", TestConstructorParameterAnnotations$NestedClass4_Attribute_var$3, 1},
	{}
};

$FieldInfo _TestConstructorParameterAnnotations$NestedClass4_FieldInfo_[] = {
	{"this$0", "LTestConstructorParameterAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterAnnotations$NestedClass4, this$0)},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$NestedClass4_MethodInfo_[] = {
	{"<init>", "(LTestConstructorParameterAnnotations;Ljava/lang/Object;Ljava/lang/Object;)V", "<P:Ljava/lang/Object;Q:Ljava/lang/Object;>(TP;TQ;)V", $PUBLIC, $method(static_cast<void(TestConstructorParameterAnnotations$NestedClass4::*)($TestConstructorParameterAnnotations*,Object$*,Object$*)>(&TestConstructorParameterAnnotations$NestedClass4::init$)), nullptr, nullptr, nullptr, nullptr, _TestConstructorParameterAnnotations$NestedClass4_MethodParamAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$NestedClass4_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$NestedClass4", "TestConstructorParameterAnnotations", "NestedClass4", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$NestedClass4_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterAnnotations$NestedClass4",
	"java.lang.Object",
	nullptr,
	_TestConstructorParameterAnnotations$NestedClass4_FieldInfo_,
	_TestConstructorParameterAnnotations$NestedClass4_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$NestedClass4_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$NestedClass4_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$NestedClass4($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$NestedClass4));
}

void TestConstructorParameterAnnotations$NestedClass4::init$($TestConstructorParameterAnnotations* this$0, Object$* parameter1, Object$* parameter2) {
	$set(this, this$0, this$0);
}

TestConstructorParameterAnnotations$NestedClass4::TestConstructorParameterAnnotations$NestedClass4() {
}

$Class* TestConstructorParameterAnnotations$NestedClass4::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$NestedClass4, name, initialize, &_TestConstructorParameterAnnotations$NestedClass4_ClassInfo_, allocate$TestConstructorParameterAnnotations$NestedClass4);
	return class$;
}

$Class* TestConstructorParameterAnnotations$NestedClass4::class$ = nullptr;