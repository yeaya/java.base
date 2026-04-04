#include <TestReceiverTypeParameterizedConstructor$Inner.h>
#include <TestReceiverTypeParameterizedConstructor.h>
#include <jcpp.h>

using $TestReceiverTypeParameterizedConstructor = ::TestReceiverTypeParameterizedConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TestReceiverTypeParameterizedConstructor$Inner::init$($TestReceiverTypeParameterizedConstructor* this$0) {
	$set(this, this$0, this$0);
}

TestReceiverTypeParameterizedConstructor$Inner::TestReceiverTypeParameterizedConstructor$Inner() {
}

$Class* TestReceiverTypeParameterizedConstructor$Inner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestReceiverTypeParameterizedConstructor;", nullptr, $FINAL | $SYNTHETIC, $field(TestReceiverTypeParameterizedConstructor$Inner, this$0)},
		{}
	};
	$NamedAttribute init$methodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "0"},
		{}
	};
	$TypeAnnotation init$methodTypeAnnotations$$[] = {
		{"LTestReceiverTypeParameterizedConstructor$TypeAnnotation;", init$methodTypeAnnotations$$$namedAttribute, "METHOD_RECEIVER, location = (TYPE_ARGUMENT(0))"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestReceiverTypeParameterizedConstructor;)V", nullptr, 0, $method(TestReceiverTypeParameterizedConstructor$Inner, init$, void, $TestReceiverTypeParameterizedConstructor*), nullptr, nullptr, nullptr, init$methodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestReceiverTypeParameterizedConstructor$Inner", "TestReceiverTypeParameterizedConstructor", "Inner", 0},
		{"TestReceiverTypeParameterizedConstructor$Inner$Inner2", "TestReceiverTypeParameterizedConstructor$Inner", "Inner2", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestReceiverTypeParameterizedConstructor$Inner",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<S:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestReceiverTypeParameterizedConstructor"
	};
	$loadClass(TestReceiverTypeParameterizedConstructor$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestReceiverTypeParameterizedConstructor$Inner);
	});
	return class$;
}

$Class* TestReceiverTypeParameterizedConstructor$Inner::class$ = nullptr;