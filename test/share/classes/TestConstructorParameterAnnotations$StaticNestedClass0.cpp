#include <TestConstructorParameterAnnotations$StaticNestedClass0.h>

#include <TestConstructorParameterAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass0_Attribute_var$0[] = {
	{"value", 's', "[]"},
	{}
};

$Attribute TestConstructorParameterAnnotations$StaticNestedClass0_Attribute_var$2[] = {
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass0_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterAnnotations$StaticNestedClass0_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterAnnotations$StaticNestedClass0_Annotations_[] = {
	{"LTestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterAnnotations$StaticNestedClass0_Attribute_var$0},
	{"LTestConstructorParameterAnnotations$ExpectedParameterAnnotations;", TestConstructorParameterAnnotations$StaticNestedClass0_Attribute_var$1},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$StaticNestedClass0_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterAnnotations$StaticNestedClass0::*)()>(&TestConstructorParameterAnnotations$StaticNestedClass0::init$))},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$StaticNestedClass0_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$StaticNestedClass0", "TestConstructorParameterAnnotations", "StaticNestedClass0", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$StaticNestedClass0_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterAnnotations$StaticNestedClass0",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$StaticNestedClass0_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$StaticNestedClass0_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$StaticNestedClass0_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$StaticNestedClass0($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$StaticNestedClass0));
}

void TestConstructorParameterAnnotations$StaticNestedClass0::init$() {
}

TestConstructorParameterAnnotations$StaticNestedClass0::TestConstructorParameterAnnotations$StaticNestedClass0() {
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass0::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$StaticNestedClass0, name, initialize, &_TestConstructorParameterAnnotations$StaticNestedClass0_ClassInfo_, allocate$TestConstructorParameterAnnotations$StaticNestedClass0);
	return class$;
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass0::class$ = nullptr;