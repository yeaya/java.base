#include <TestConstructorParameterAnnotations$NestedClass4.h>
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

void TestConstructorParameterAnnotations$NestedClass4::init$($TestConstructorParameterAnnotations* this$0, Object$* parameter1, Object$* parameter2) {
	$set(this, this$0, this$0);
}

TestConstructorParameterAnnotations$NestedClass4::TestConstructorParameterAnnotations$NestedClass4() {
}

$Class* TestConstructorParameterAnnotations$NestedClass4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestConstructorParameterAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterAnnotations$NestedClass4, this$0)},
		{}
	};
	$NamedAttribute init$methodParamAnnotations$$$namedAttribute[] = {
		{"value", 'I', "4"},
		{}
	};
	$ParameterAnnotation init$methodParamAnnotations$$[] = {
		{"LTestConstructorParameterAnnotations$MarkerAnnotation;", init$methodParamAnnotations$$$namedAttribute, 1},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestConstructorParameterAnnotations;Ljava/lang/Object;Ljava/lang/Object;)V", "<P:Ljava/lang/Object;Q:Ljava/lang/Object;>(TP;TQ;)V", $PUBLIC, $method(TestConstructorParameterAnnotations$NestedClass4, init$, void, $TestConstructorParameterAnnotations*, Object$*, Object$*), nullptr, nullptr, nullptr, nullptr, init$methodParamAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterAnnotations$NestedClass4", "TestConstructorParameterAnnotations", "NestedClass4", $PUBLIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "[[], [@TestConstructorParameterAnnotations$MarkerAnnotation(4)], []]"},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "null"},
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
		"TestConstructorParameterAnnotations$NestedClass4",
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
	$loadClass(TestConstructorParameterAnnotations$NestedClass4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterAnnotations$NestedClass4);
	});
	return class$;
}

$Class* TestConstructorParameterAnnotations$NestedClass4::class$ = nullptr;