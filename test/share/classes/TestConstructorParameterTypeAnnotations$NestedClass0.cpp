#include <TestConstructorParameterTypeAnnotations$NestedClass0.h>

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

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass0_Attribute_var$0[] = {
	{"value", 's', "[[]]"},
	{}
};

$Attribute TestConstructorParameterTypeAnnotations$NestedClass0_Attribute_var$2[] = {
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$NestedClass0_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$NestedClass0_Attribute_var$2},
	{}
};
$CompoundAttribute _TestConstructorParameterTypeAnnotations$NestedClass0_Annotations_[] = {
	{"LTestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterTypeAnnotations$NestedClass0_Attribute_var$0},
	{"LTestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;", TestConstructorParameterTypeAnnotations$NestedClass0_Attribute_var$1},
	{}
};


$FieldInfo _TestConstructorParameterTypeAnnotations$NestedClass0_FieldInfo_[] = {
	{"this$0", "LTestConstructorParameterTypeAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterTypeAnnotations$NestedClass0, this$0)},
	{}
};

$MethodInfo _TestConstructorParameterTypeAnnotations$NestedClass0_MethodInfo_[] = {
	{"<init>", "(LTestConstructorParameterTypeAnnotations;)V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterTypeAnnotations$NestedClass0::*)($TestConstructorParameterTypeAnnotations*)>(&TestConstructorParameterTypeAnnotations$NestedClass0::init$))},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$NestedClass0_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$NestedClass0", "TestConstructorParameterTypeAnnotations", "NestedClass0", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$NestedClass0_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterTypeAnnotations$NestedClass0",
	"java.lang.Object",
	nullptr,
	_TestConstructorParameterTypeAnnotations$NestedClass0_FieldInfo_,
	_TestConstructorParameterTypeAnnotations$NestedClass0_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$NestedClass0_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$NestedClass0_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$NestedClass0($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$NestedClass0));
}

void TestConstructorParameterTypeAnnotations$NestedClass0::init$($TestConstructorParameterTypeAnnotations* this$0) {
	$set(this, this$0, this$0);
}

TestConstructorParameterTypeAnnotations$NestedClass0::TestConstructorParameterTypeAnnotations$NestedClass0() {
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass0::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$NestedClass0, name, initialize, &_TestConstructorParameterTypeAnnotations$NestedClass0_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$NestedClass0);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass0::class$ = nullptr;