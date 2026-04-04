#include <TestConstructorParameterTypeAnnotations$NestedClass4.h>
#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $TestConstructorParameterTypeAnnotations = ::TestConstructorParameterTypeAnnotations;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TestConstructorParameterTypeAnnotations$NestedClass4::init$($TestConstructorParameterTypeAnnotations* this$0, Object$* parameter1, Object$* parameter2) {
	$set(this, this$0, this$0);
}

TestConstructorParameterTypeAnnotations$NestedClass4::TestConstructorParameterTypeAnnotations$NestedClass4() {
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestConstructorParameterTypeAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterTypeAnnotations$NestedClass4, this$0)},
		{}
	};
	$NamedAttribute init$methodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "4"},
		{}
	};
	$TypeAnnotation init$methodTypeAnnotations$$[] = {
		{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", init$methodTypeAnnotations$$$namedAttribute, "METHOD_FORMAL_PARAMETER, param_index = 0"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestConstructorParameterTypeAnnotations;Ljava/lang/Object;Ljava/lang/Object;)V", "<P:Ljava/lang/Object;Q:Ljava/lang/Object;>(TP;TQ;)V", $PUBLIC, $method(TestConstructorParameterTypeAnnotations$NestedClass4, init$, void, $TestConstructorParameterTypeAnnotations*, Object$*, Object$*), nullptr, nullptr, nullptr, init$methodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterTypeAnnotations$NestedClass4", "TestConstructorParameterTypeAnnotations", "NestedClass4", $PUBLIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "[[], [], []]"},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "null"},
		{'s', "@TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation(4)"},
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
		"TestConstructorParameterTypeAnnotations$NestedClass4",
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
		"TestConstructorParameterTypeAnnotations"
	};
	$loadClass(TestConstructorParameterTypeAnnotations$NestedClass4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterTypeAnnotations$NestedClass4);
	});
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass4::class$ = nullptr;