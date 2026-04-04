#include <TestConstructorParameterTypeAnnotations$StaticNestedClass1.h>
#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TestConstructorParameterTypeAnnotations$StaticNestedClass1::init$(int32_t parameter) {
}

TestConstructorParameterTypeAnnotations$StaticNestedClass1::TestConstructorParameterTypeAnnotations$StaticNestedClass1() {
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass1::load$($String* name, bool initialize) {
	$NamedAttribute init$methodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "1"},
		{}
	};
	$TypeAnnotation init$methodTypeAnnotations$$[] = {
		{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", init$methodTypeAnnotations$$$namedAttribute, "METHOD_FORMAL_PARAMETER, param_index = 0"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(TestConstructorParameterTypeAnnotations$StaticNestedClass1, init$, void, int32_t), nullptr, nullptr, nullptr, init$methodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterTypeAnnotations$StaticNestedClass1", "TestConstructorParameterTypeAnnotations", "StaticNestedClass1", $PUBLIC | $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "[[]]"},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "@TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation(1)"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LTestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations;", annotations$$$namedAttribute},
		{"LTestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestConstructorParameterTypeAnnotations$StaticNestedClass1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"TestConstructorParameterTypeAnnotations"
	};
	$loadClass(TestConstructorParameterTypeAnnotations$StaticNestedClass1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterTypeAnnotations$StaticNestedClass1);
	});
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass1::class$ = nullptr;