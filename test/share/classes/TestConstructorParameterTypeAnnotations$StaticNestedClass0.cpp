#include <TestConstructorParameterTypeAnnotations$StaticNestedClass0.h>
#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void TestConstructorParameterTypeAnnotations$StaticNestedClass0::init$() {
}

TestConstructorParameterTypeAnnotations$StaticNestedClass0::TestConstructorParameterTypeAnnotations$StaticNestedClass0() {
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestConstructorParameterTypeAnnotations$StaticNestedClass0, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterTypeAnnotations$StaticNestedClass0", "TestConstructorParameterTypeAnnotations", "StaticNestedClass0", $PUBLIC | $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "[]"},
		{}
	};
	$Attribute $attribute[] = {
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
		"TestConstructorParameterTypeAnnotations$StaticNestedClass0",
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
	$loadClass(TestConstructorParameterTypeAnnotations$StaticNestedClass0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterTypeAnnotations$StaticNestedClass0);
	});
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$StaticNestedClass0::class$ = nullptr;