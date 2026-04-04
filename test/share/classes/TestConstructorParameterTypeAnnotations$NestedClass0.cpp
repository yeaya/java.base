#include <TestConstructorParameterTypeAnnotations$NestedClass0.h>
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

void TestConstructorParameterTypeAnnotations$NestedClass0::init$($TestConstructorParameterTypeAnnotations* this$0) {
	$set(this, this$0, this$0);
}

TestConstructorParameterTypeAnnotations$NestedClass0::TestConstructorParameterTypeAnnotations$NestedClass0() {
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestConstructorParameterTypeAnnotations;", nullptr, $FINAL | $SYNTHETIC, $field(TestConstructorParameterTypeAnnotations$NestedClass0, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestConstructorParameterTypeAnnotations;)V", nullptr, $PUBLIC, $method(TestConstructorParameterTypeAnnotations$NestedClass0, init$, void, $TestConstructorParameterTypeAnnotations*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestConstructorParameterTypeAnnotations$NestedClass0", "TestConstructorParameterTypeAnnotations", "NestedClass0", $PUBLIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "[[]]"},
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
		"TestConstructorParameterTypeAnnotations$NestedClass0",
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
	$loadClass(TestConstructorParameterTypeAnnotations$NestedClass0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestConstructorParameterTypeAnnotations$NestedClass0);
	});
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$NestedClass0::class$ = nullptr;