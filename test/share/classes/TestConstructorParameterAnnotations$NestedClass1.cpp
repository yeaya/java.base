#include <TestConstructorParameterAnnotations$NestedClass1.h>
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
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

void TestConstructorParameterAnnotations$NestedClass1::init$($TestConstructorParameterAnnotations* this$0, int32_t parameter) {
	$set(this, this$0, this$0);
}

TestConstructorParameterAnnotations$NestedClass1::TestConstructorParameterAnnotations$NestedClass1() {
}

$Class* TestConstructorParameterAnnotations$NestedClass1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestConstructorParameterAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterAnnotations$NestedClass1, this$0)},
		{}
	};
	$NamedAttribute init$methodParamAnnotations$$$namedAttribute[] = {
		{"value", 'I', "1"},
		{}
	};
	$ParameterAnnotation init$methodParamAnnotations$$[] = {
		{"LTestConstructorParameterAnnotations$MarkerAnnotation;", init$methodParamAnnotations$$$namedAttribute, 1},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestConstructorParameterAnnotations;I)V", nullptr, $PUBLIC, $method(TestConstructorParameterAnnotations$NestedClass1, init$, void, $TestConstructorParameterAnnotations*, int32_t), nullptr, nullptr, nullptr, nullptr, init$methodParamAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterAnnotations$NestedClass1", "TestConstructorParameterAnnotations", "NestedClass1", $PUBLIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "[[], [@TestConstructorParameterAnnotations$MarkerAnnotation(1)]]"},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "null"},
		{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(1)"},
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
		"TestConstructorParameterAnnotations$NestedClass1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"TestConstructorParameterAnnotations"
	};
	$loadClass(TestConstructorParameterAnnotations$NestedClass1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterAnnotations$NestedClass1);
	});
	return class$;
}

$Class* TestConstructorParameterAnnotations$NestedClass1::class$ = nullptr;