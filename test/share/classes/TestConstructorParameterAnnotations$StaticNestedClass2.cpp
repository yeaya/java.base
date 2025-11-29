#include <TestConstructorParameterAnnotations$StaticNestedClass2.h>

#include <TestConstructorParameterAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass2_Attribute_var$0[] = {
	{"value", 's', "[[@TestConstructorParameterAnnotations$MarkerAnnotation(2)], []]"},
	{}
};

$Attribute TestConstructorParameterAnnotations$StaticNestedClass2_Attribute_var$2[] = {
	{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(2)"},
	{'s', "null"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass2_Attribute_var$1[] = {
	{"value", '[', TestConstructorParameterAnnotations$StaticNestedClass2_Attribute_var$2},
	{}
};

$CompoundAttribute _TestConstructorParameterAnnotations$StaticNestedClass2_Annotations_[] = {
	{"LTestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;", TestConstructorParameterAnnotations$StaticNestedClass2_Attribute_var$0},
	{"LTestConstructorParameterAnnotations$ExpectedParameterAnnotations;", TestConstructorParameterAnnotations$StaticNestedClass2_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterAnnotations$StaticNestedClass2_Attribute_var$3[] = {
	{"value", 'I', "2"},
	{}
};

$ParameterAnnotation _TestConstructorParameterAnnotations$StaticNestedClass2_MethodParamAnnotations_init$0[] = {
	{"LTestConstructorParameterAnnotations$MarkerAnnotation;", TestConstructorParameterAnnotations$StaticNestedClass2_Attribute_var$3, 0},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$StaticNestedClass2_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(TestConstructorParameterAnnotations$StaticNestedClass2::*)(int32_t,int32_t)>(&TestConstructorParameterAnnotations$StaticNestedClass2::init$)), nullptr, nullptr, nullptr, nullptr, _TestConstructorParameterAnnotations$StaticNestedClass2_MethodParamAnnotations_init$0},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$StaticNestedClass2_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$StaticNestedClass2", "TestConstructorParameterAnnotations", "StaticNestedClass2", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$StaticNestedClass2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestConstructorParameterAnnotations$StaticNestedClass2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$StaticNestedClass2_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$StaticNestedClass2_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$StaticNestedClass2_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$StaticNestedClass2($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$StaticNestedClass2));
}

void TestConstructorParameterAnnotations$StaticNestedClass2::init$(int32_t parameter1, int32_t parameter2) {
}

TestConstructorParameterAnnotations$StaticNestedClass2::TestConstructorParameterAnnotations$StaticNestedClass2() {
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass2::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$StaticNestedClass2, name, initialize, &_TestConstructorParameterAnnotations$StaticNestedClass2_ClassInfo_, allocate$TestConstructorParameterAnnotations$StaticNestedClass2);
	return class$;
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass2::class$ = nullptr;