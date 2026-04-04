#include <TestConstructorParameterAnnotations$NestedClass3.h>
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

void TestConstructorParameterAnnotations$NestedClass3::init$($TestConstructorParameterAnnotations* this$0, Object$* parameter1, int32_t parameter2) {
	$set(this, this$0, this$0);
}

TestConstructorParameterAnnotations$NestedClass3::TestConstructorParameterAnnotations$NestedClass3() {
}

$Class* TestConstructorParameterAnnotations$NestedClass3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestConstructorParameterAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterAnnotations$NestedClass3, this$0)},
		{}
	};
	$NamedAttribute init$methodParamAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$ParameterAnnotation init$methodParamAnnotations$$[] = {
		{"LTestConstructorParameterAnnotations$MarkerAnnotation;", init$methodParamAnnotations$$$namedAttribute, 1},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestConstructorParameterAnnotations;Ljava/lang/Object;I)V", "<P:Ljava/lang/Object;>(TP;I)V", $PUBLIC, $method(TestConstructorParameterAnnotations$NestedClass3, init$, void, $TestConstructorParameterAnnotations*, Object$*, int32_t), nullptr, nullptr, nullptr, nullptr, init$methodParamAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterAnnotations$NestedClass3", "TestConstructorParameterAnnotations", "NestedClass3", $PUBLIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "[[], [@TestConstructorParameterAnnotations$MarkerAnnotation(3)], []]"},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "null"},
		{'s', "@TestConstructorParameterAnnotations$MarkerAnnotation(3)"},
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
		"TestConstructorParameterAnnotations$NestedClass3",
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
	$loadClass(TestConstructorParameterAnnotations$NestedClass3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterAnnotations$NestedClass3);
	});
	return class$;
}

$Class* TestConstructorParameterAnnotations$NestedClass3::class$ = nullptr;