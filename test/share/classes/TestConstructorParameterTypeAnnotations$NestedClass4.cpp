#include <TestConstructorParameterTypeAnnotations$NestedClass4.h>

#include <TestConstructorParameterTypeAnnotations.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
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
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass4_Attribute_var$0[] = {
	{"value", 's', "[[], [], []]"},
	{}
};

$Attribute TestConstructorParameterTypeAnnotations$NestedClass4_Attribute_var$2[] = {
	{'s', "null"},
	{'s', "@TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation(4)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass4_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$NestedClass4_Attribute_var$2},
	{}
};
$CompoundAttribute _TestConstructorParameterTypeAnnotations$NestedClass4_Annotations_[] = {
	{"LTestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterTypeAnnotations$NestedClass4_Attribute_var$0},
	{"LTestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;", TestConstructorParameterTypeAnnotations$NestedClass4_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass4_Attribute_var$3[] = {
	{"value", 'I', "4"},
	{}
};

$TypeAnnotation _TestConstructorParameterTypeAnnotations$NestedClass4_MethodTypeAnnotations_init$0[] = {
	{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", TestConstructorParameterTypeAnnotations$NestedClass4_Attribute_var$3, "METHOD_FORMAL_PARAMETER, param_index = 0"},
	{}
};


$FieldInfo _TestConstructorParameterTypeAnnotations$NestedClass4_FieldInfo_[] = {
	{"this$0", "LTestConstructorParameterTypeAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterTypeAnnotations$NestedClass4, this$0)},
	{}
};

$MethodInfo _TestConstructorParameterTypeAnnotations$NestedClass4_MethodInfo_[] = {
	{"<init>", "(LTestConstructorParameterTypeAnnotations;Ljava/lang/Object;Ljava/lang/Object;)V", "<P:Ljava/lang/Object;Q:Ljava/lang/Object;>(TP;TQ;)V", $PUBLIC, $method(static_cast<void(TestConstructorParameterTypeAnnotations$NestedClass4::*)($TestConstructorParameterTypeAnnotations*,Object$*,Object$*)>(&TestConstructorParameterTypeAnnotations$NestedClass4::init$)), nullptr, nullptr, nullptr, _TestConstructorParameterTypeAnnotations$NestedClass4_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$NestedClass4_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$NestedClass4", "TestConstructorParameterTypeAnnotations", "NestedClass4", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$NestedClass4_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterTypeAnnotations$NestedClass4",
	"java.lang.Object",
	nullptr,
	_TestConstructorParameterTypeAnnotations$NestedClass4_FieldInfo_,
	_TestConstructorParameterTypeAnnotations$NestedClass4_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$NestedClass4_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$NestedClass4_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$NestedClass4($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$NestedClass4));
}

void TestConstructorParameterTypeAnnotations$NestedClass4::init$($TestConstructorParameterTypeAnnotations* this$0, Object$* parameter1, Object$* parameter2) {
	$set(this, this$0, this$0);
}

TestConstructorParameterTypeAnnotations$NestedClass4::TestConstructorParameterTypeAnnotations$NestedClass4() {
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass4::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$NestedClass4, name, initialize, &_TestConstructorParameterTypeAnnotations$NestedClass4_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$NestedClass4);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass4::class$ = nullptr;