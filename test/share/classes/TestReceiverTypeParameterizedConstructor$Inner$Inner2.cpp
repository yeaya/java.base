#include <TestReceiverTypeParameterizedConstructor$Inner$Inner2.h>
#include <TestReceiverTypeParameterizedConstructor$Inner.h>
#include <jcpp.h>

using $TestReceiverTypeParameterizedConstructor$Inner = ::TestReceiverTypeParameterizedConstructor$Inner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TestReceiverTypeParameterizedConstructor$Inner$Inner2::init$($TestReceiverTypeParameterizedConstructor$Inner* this$1) {
	$set(this, this$1, this$1);
}

TestReceiverTypeParameterizedConstructor$Inner$Inner2::TestReceiverTypeParameterizedConstructor$Inner$Inner2() {
}

$Class* TestReceiverTypeParameterizedConstructor$Inner$Inner2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LTestReceiverTypeParameterizedConstructor$Inner;", nullptr, $FINAL | $SYNTHETIC, $field(TestReceiverTypeParameterizedConstructor$Inner$Inner2, this$1)},
		{}
	};
	$NamedAttribute init$methodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "1"},
		{}
	};
	$NamedAttribute init$methodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 'I', "0"},
		{}
	};
	$TypeAnnotation init$methodTypeAnnotations$$[] = {
		{"LTestReceiverTypeParameterizedConstructor$TypeAnnotation;", init$methodTypeAnnotations$$$namedAttribute, "METHOD_RECEIVER, location = (TYPE_ARGUMENT(0))"},
		{"LTestReceiverTypeParameterizedConstructor$TypeAnnotation;", init$methodTypeAnnotations$$$namedAttribute$1, "METHOD_RECEIVER, location = (INNER_TYPE,TYPE_ARGUMENT(0))"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestReceiverTypeParameterizedConstructor$Inner;)V", nullptr, 0, $method(TestReceiverTypeParameterizedConstructor$Inner$Inner2, init$, void, $TestReceiverTypeParameterizedConstructor$Inner*), nullptr, nullptr, nullptr, init$methodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestReceiverTypeParameterizedConstructor$Inner", "TestReceiverTypeParameterizedConstructor", "Inner", 0},
		{"TestReceiverTypeParameterizedConstructor$Inner$Inner2", "TestReceiverTypeParameterizedConstructor$Inner", "Inner2", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestReceiverTypeParameterizedConstructor$Inner$Inner2",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestReceiverTypeParameterizedConstructor"
	};
	$loadClass(TestReceiverTypeParameterizedConstructor$Inner$Inner2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestReceiverTypeParameterizedConstructor$Inner$Inner2);
	});
	return class$;
}

$Class* TestReceiverTypeParameterizedConstructor$Inner$Inner2::class$ = nullptr;