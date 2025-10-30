#include <TestConstructorParameterTypeAnnotations$StaticNestedClass0.h>

#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $TestConstructorParameterTypeAnnotations = ::TestConstructorParameterTypeAnnotations;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass0_Attribute_var$0[] = {
	{"value", 's', "[]"},
	{}
};

$Attribute TestConstructorParameterTypeAnnotations$StaticNestedClass0_Attribute_var$2[] = {
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$StaticNestedClass0_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$StaticNestedClass0_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterTypeAnnotations$StaticNestedClass0_Annotations_[] = {
	{"LTestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterTypeAnnotations$StaticNestedClass0_Attribute_var$0},
	{"LTestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;", TestConstructorParameterTypeAnnotations$StaticNestedClass0_Attribute_var$1},
	{}
};

$MethodInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass0_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterTypeAnnotations$StaticNestedClass0::*)()>(&TestConstructorParameterTypeAnnotations$StaticNestedClass0::init$))},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass0_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$StaticNestedClass0", "TestConstructorParameterTypeAnnotations", "StaticNestedClass0", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$StaticNestedClass0_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterTypeAnnotations$StaticNestedClass0",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass0_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass0_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$StaticNestedClass0_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$StaticNestedClass0($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$StaticNestedClass0));
}

void TestConstructorParameterTypeAnnotations$StaticNestedClass0::init$() {
}

TestConstructorParameterTypeAnnotations$StaticNestedClass0::TestConstructorParameterTypeAnnotations$StaticNestedClass0() {
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass0::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$StaticNestedClass0, name, initialize, &_TestConstructorParameterTypeAnnotations$StaticNestedClass0_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$StaticNestedClass0);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass0::class$ = nullptr;