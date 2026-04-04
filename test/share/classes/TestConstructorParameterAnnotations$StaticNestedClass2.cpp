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

void TestConstructorParameterAnnotations$StaticNestedClass2::init$(int32_t parameter1, int32_t parameter2) {
}

TestConstructorParameterAnnotations$StaticNestedClass2::TestConstructorParameterAnnotations$StaticNestedClass2() {
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass2::load$($String* name, bool initialize) {
	$NamedAttribute init$methodParamAnnotations$$$namedAttribute[] = {
		{"value", 'I', "2"},
		{}
	};
	$ParameterAnnotation init$methodParamAnnotations$$[] = {
		{"LTestConstructorParameterAnnotations$MarkerAnnotation;", init$methodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(TestConstructorParameterAnnotations$StaticNestedClass2, init$, void, int32_t, int32_t), nullptr, nullptr, nullptr, nullptr, init$methodParamAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterAnnotations$StaticNestedClass2", "TestConstructorParameterAnnotations", "StaticNestedClass2", $PUBLIC | $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "[[@TestConstructorParameterAnnotations$MarkerAnnotation(2)], []]"},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(2)"},
		{'s', "null"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LTestConstructorParameterAnnotations$ExpectedGetParameterAnnotations;", annotations$$$namedAttribute},
		{"LTestConstructorParameterAnnotations$ExpectedParameterAnnotations;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestConstructorParameterAnnotations$StaticNestedClass2",
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
		"TestConstructorParameterAnnotations"
	};
	$loadClass(TestConstructorParameterAnnotations$StaticNestedClass2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterAnnotations$StaticNestedClass2);
	});
	return class$;
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass2::class$ = nullptr;