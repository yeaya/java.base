#include <TestConstructorParameterAnnotations$NestedClass0.h>

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

$NamedAttribute TestConstructorParameterAnnotations$NestedClass0_Attribute_var$0[] = {
	{"value", 's', "[[]]"},
	{}
};

$Attribute TestConstructorParameterAnnotations$NestedClass0_Attribute_var$2[] = {
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$NestedClass0_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterAnnotations$NestedClass0_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterAnnotations$NestedClass0_Annotations_[] = {
	{"LTestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterAnnotations$NestedClass0_Attribute_var$0},
	{"LTestConstructorParameterAnnotations$ExpectedParameterAnnotations;", TestConstructorParameterAnnotations$NestedClass0_Attribute_var$1},
	{}
};

$FieldInfo _TestConstructorParameterAnnotations$NestedClass0_FieldInfo_[] = {
	{"this$0", "LTestConstructorParameterAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterAnnotations$NestedClass0, this$0)},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$NestedClass0_MethodInfo_[] = {
	{"<init>", "(LTestConstructorParameterAnnotations;)V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterAnnotations$NestedClass0::*)($TestConstructorParameterAnnotations*)>(&TestConstructorParameterAnnotations$NestedClass0::init$))},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$NestedClass0_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$NestedClass0", "TestConstructorParameterAnnotations", "NestedClass0", $PUBLIC},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$NestedClass0_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterAnnotations$NestedClass0",
	"java.lang.Object",
	nullptr,
	_TestConstructorParameterAnnotations$NestedClass0_FieldInfo_,
	_TestConstructorParameterAnnotations$NestedClass0_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$NestedClass0_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$NestedClass0_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$NestedClass0($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$NestedClass0));
}

void TestConstructorParameterAnnotations$NestedClass0::init$($TestConstructorParameterAnnotations* this$0) {
	$set(this, this$0, this$0);
}

TestConstructorParameterAnnotations$NestedClass0::TestConstructorParameterAnnotations$NestedClass0() {
}

$Class* TestConstructorParameterAnnotations$NestedClass0::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$NestedClass0, name, initialize, &_TestConstructorParameterAnnotations$NestedClass0_ClassInfo_, allocate$TestConstructorParameterAnnotations$NestedClass0);
	return class$;
}

$Class* TestConstructorParameterAnnotations$NestedClass0::class$ = nullptr;