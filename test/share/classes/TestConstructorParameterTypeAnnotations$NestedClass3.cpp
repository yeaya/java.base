#include <TestConstructorParameterTypeAnnotations$NestedClass3.h>
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

void TestConstructorParameterTypeAnnotations$NestedClass3::init$($TestConstructorParameterTypeAnnotations* this$0, Object$* parameter1, int32_t parameter2) {
	$set(this, this$0, this$0);
}

TestConstructorParameterTypeAnnotations$NestedClass3::TestConstructorParameterTypeAnnotations$NestedClass3() {
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestConstructorParameterTypeAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterTypeAnnotations$NestedClass3, this$0)},
		{}
	};
	$NamedAttribute init$methodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$TypeAnnotation init$methodTypeAnnotations$$[] = {
		{"LTestConstructorParameterTypeAnnotations$MarkerTypeAnnotation;", init$methodTypeAnnotations$$$namedAttribute, "METHOD_FORMAL_PARAMETER, param_index = 0"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestConstructorParameterTypeAnnotations;Ljava/lang/Object;I)V", "<P:Ljava/lang/Object;>(TP;I)V", $PUBLIC, $method(TestConstructorParameterTypeAnnotations$NestedClass3, init$, void, $TestConstructorParameterTypeAnnotations*, Object$*, int32_t), nullptr, nullptr, nullptr, init$methodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterTypeAnnotations$NestedClass3", "TestConstructorParameterTypeAnnotations", "NestedClass3", $PUBLIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "[[], [], []]"},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "null"},
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
		"TestConstructorParameterTypeAnnotations$NestedClass3",
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
	$loadClass(TestConstructorParameterTypeAnnotations$NestedClass3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterTypeAnnotations$NestedClass3);
	});
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass3::class$ = nullptr;