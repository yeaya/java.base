#include <TestConstructorParameterAnnotations$StaticNestedClass4.h>
#include <TestConstructorParameterAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

void TestConstructorParameterAnnotations$StaticNestedClass4::init$(Object$* parameter1, Object$* parameter2) {
}

TestConstructorParameterAnnotations$StaticNestedClass4::TestConstructorParameterAnnotations$StaticNestedClass4() {
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass4::load$($String* name, bool initialize) {
	$NamedAttribute init$methodParamAnnotations$$$namedAttribute[] = {
		{"value", 'I', "4"},
		{}
	};
	$ParameterAnnotation init$methodParamAnnotations$$[] = {
		{"LTestConstructorParameterAnnotations$MarkerAnnotation;", init$methodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "<P:Ljava/lang/Object;Q:Ljava/lang/Object;>(TP;TQ;)V", $PUBLIC, $method(TestConstructorParameterAnnotations$StaticNestedClass4, init$, void, Object$*, Object$*), nullptr, nullptr, nullptr, nullptr, init$methodParamAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterAnnotations$StaticNestedClass4", "TestConstructorParameterAnnotations", "StaticNestedClass4", $PUBLIC | $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "[[@TestConstructorParameterAnnotations$MarkerAnnotation(4)], []]"},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(4)"},
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
		"TestConstructorParameterAnnotations$StaticNestedClass4",
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
	$loadClass(TestConstructorParameterAnnotations$StaticNestedClass4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterAnnotations$StaticNestedClass4);
	});
	return class$;
}

$Class* TestConstructorParameterAnnotations$StaticNestedClass4::class$ = nullptr;