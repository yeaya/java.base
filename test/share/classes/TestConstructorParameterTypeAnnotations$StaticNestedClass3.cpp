#include <TestConstructorParameterTypeAnnotations$StaticNestedClass3.h>
#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TestConstructorParameterTypeAnnotations$StaticNestedClass3::init$(Object$* parameter1, int32_t parameter2) {
}

TestConstructorParameterTypeAnnotations$StaticNestedClass3::TestConstructorParameterTypeAnnotations$StaticNestedClass3() {
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass3::load$($String* name, bool initialize) {
	$NamedAttribute init$methodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$TypeAnnotation init$methodTypeAnnotations$$[] = {
		{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", init$methodTypeAnnotations$$$namedAttribute, "METHOD_FORMAL_PARAMETER, param_index = 0"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;I)V", "<P:Ljava/lang/Object;>(TP;I)V", $PUBLIC, $method(TestConstructorParameterTypeAnnotations$StaticNestedClass3, init$, void, Object$*, int32_t), nullptr, nullptr, nullptr, init$methodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterTypeAnnotations$StaticNestedClass3", "TestConstructorParameterTypeAnnotations", "StaticNestedClass3", $PUBLIC | $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "[[], []]"},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "@TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation(3)"},
		{'s', "null"},
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
		"TestConstructorParameterTypeAnnotations$StaticNestedClass3",
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
	$loadClass(TestConstructorParameterTypeAnnotations$StaticNestedClass3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterTypeAnnotations$StaticNestedClass3);
	});
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass3::class$ = nullptr;