#include <TestConstructorParameterAnnotations$NestedClass2.h>

#include <TestConstructorParameterAnnotations.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/ParameterAnnotation.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$NamedAttribute TestConstructorParameterAnnotations$NestedClass2_Attribute_var$0[] = {
	{"value", 's', "[[], [@TestConstructorParameterAnnotations$MarkerAnnotation(2)], []]"},
	{}
};

$Attribute TestConstructorParameterAnnotations$NestedClass2_Attribute_var$2[] = {
	{'s', "null"},
	{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(2)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$NestedClass2_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterAnnotations$NestedClass2_Attribute_var$2},
	{}
};
$CompoundAttribute _TestConstructorParameterAnnotations$NestedClass2_Annotations_[] = {
	{"LTestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterAnnotations$NestedClass2_Attribute_var$0},
	{"LTestConstructorParameterAnnotations$ExpectedParameterAnnotations;", TestConstructorParameterAnnotations$NestedClass2_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterAnnotations$NestedClass2_Attribute_var$3[] = {
	{"value", 'I', "2"},
	{}
};

$ParameterAnnotation _TestConstructorParameterAnnotations$NestedClass2_MethodParamAnnotations_init$0[] = {
	{"LTestConstructorParameterAnnotations$MarkerAnnotation;", TestConstructorParameterAnnotations$NestedClass2_Attribute_var$3, 1},
	{}
};


$FieldInfo _TestConstructorParameterAnnotations$NestedClass2_FieldInfo_[] = {
	{"this$0", "LTestConstructorParameterAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterAnnotations$NestedClass2, this$0)},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$NestedClass2_MethodInfo_[] = {
	{"<init>", "(LTestConstructorParameterAnnotations;II)V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterAnnotations$NestedClass2::*)($TestConstructorParameterAnnotations*,int32_t,int32_t)>(&TestConstructorParameterAnnotations$NestedClass2::init$)), nullptr, nullptr, nullptr, nullptr, _TestConstructorParameterAnnotations$NestedClass2_MethodParamAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$NestedClass2_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$NestedClass2", "TestConstructorParameterAnnotations", "NestedClass2", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$NestedClass2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterAnnotations$NestedClass2",
	"java.lang.Object",
	nullptr,
	_TestConstructorParameterAnnotations$NestedClass2_FieldInfo_,
	_TestConstructorParameterAnnotations$NestedClass2_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$NestedClass2_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$NestedClass2_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$NestedClass2($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$NestedClass2));
}

void TestConstructorParameterAnnotations$NestedClass2::init$($TestConstructorParameterAnnotations* this$0, int32_t parameter1, int32_t parameter2) {
	$set(this, this$0, this$0);
}

TestConstructorParameterAnnotations$NestedClass2::TestConstructorParameterAnnotations$NestedClass2() {
}

$Class* TestConstructorParameterAnnotations$NestedClass2::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$NestedClass2, name, initialize, &_TestConstructorParameterAnnotations$NestedClass2_ClassInfo_, allocate$TestConstructorParameterAnnotations$NestedClass2);
	return class$;
}

$Class* TestConstructorParameterAnnotations$NestedClass2::class$ = nullptr;