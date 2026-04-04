#include <TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass.h>
#include <TestGenericReturnTypeToString$FirstInnerClass.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString$FirstInnerClass = ::TestGenericReturnTypeToString$FirstInnerClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass::init$($TestGenericReturnTypeToString$FirstInnerClass* this$0) {
	$set(this, this$0, this$0);
}

TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass::TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestGenericReturnTypeToString$FirstInnerClass;", nullptr, $FINAL | $SYNTHETIC, $field(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestGenericReturnTypeToString$FirstInnerClass;)V", nullptr, $PUBLIC, $method(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass, init$, void, $TestGenericReturnTypeToString$FirstInnerClass*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
		{"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass", "TestGenericReturnTypeToString$FirstInnerClass", "SecondInnerClass", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass",
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
		"TestGenericReturnTypeToString"
	};
	$loadClass(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass);
	});
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass::class$ = nullptr;