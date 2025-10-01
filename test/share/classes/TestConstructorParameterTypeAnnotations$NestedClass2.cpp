#include <TestConstructorParameterTypeAnnotations$NestedClass2.h>

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

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass2_Attribute_var$0[] = {
	{"value", 's', "[[], [], []]"},
	{}
};

$Attribute TestConstructorParameterTypeAnnotations$NestedClass2_Attribute_var$2[] = {
	{'s', "null"},
	{'s', "@TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation(2)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass2_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$NestedClass2_Attribute_var$2},
	{}
};
$CompoundAttribute _TestConstructorParameterTypeAnnotations$NestedClass2_Annotations_[] = {
	{"LTestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterTypeAnnotations$NestedClass2_Attribute_var$0},
	{"LTestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;", TestConstructorParameterTypeAnnotations$NestedClass2_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass2_Attribute_var$3[] = {
	{"value", 'I', "2"},
	{}
};

$TypeAnnotation _TestConstructorParameterTypeAnnotations$NestedClass2_MethodTypeAnnotations_init$0[] = {
	{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", TestConstructorParameterTypeAnnotations$NestedClass2_Attribute_var$3, "METHOD_FORMAL_PARAMETER, param_index = 0"},
	{}
};


$FieldInfo _TestConstructorParameterTypeAnnotations$NestedClass2_FieldInfo_[] = {
	{"this$0", "LTestConstructorParameterTypeAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterTypeAnnotations$NestedClass2, this$0)},
	{}
};

$MethodInfo _TestConstructorParameterTypeAnnotations$NestedClass2_MethodInfo_[] = {
	{"<init>", "(LTestConstructorParameterTypeAnnotations;II)V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterTypeAnnotations$NestedClass2::*)($TestConstructorParameterTypeAnnotations*,int32_t,int32_t)>(&TestConstructorParameterTypeAnnotations$NestedClass2::init$)), nullptr, nullptr, nullptr, _TestConstructorParameterTypeAnnotations$NestedClass2_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$NestedClass2_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$NestedClass2", "TestConstructorParameterTypeAnnotations", "NestedClass2", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$NestedClass2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterTypeAnnotations$NestedClass2",
	"java.lang.Object",
	nullptr,
	_TestConstructorParameterTypeAnnotations$NestedClass2_FieldInfo_,
	_TestConstructorParameterTypeAnnotations$NestedClass2_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$NestedClass2_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$NestedClass2_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$NestedClass2($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$NestedClass2));
}

void TestConstructorParameterTypeAnnotations$NestedClass2::init$($TestConstructorParameterTypeAnnotations* this$0, int32_t parameter1, int32_t parameter2) {
	$set(this, this$0, this$0);
}

TestConstructorParameterTypeAnnotations$NestedClass2::TestConstructorParameterTypeAnnotations$NestedClass2() {
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass2::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$NestedClass2, name, initialize, &_TestConstructorParameterTypeAnnotations$NestedClass2_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$NestedClass2);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass2::class$ = nullptr;