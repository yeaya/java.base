#include <TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric.h>
#include <TestGenericReturnTypeToString$FirstInnerClass.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString$FirstInnerClass = ::TestGenericReturnTypeToString$FirstInnerClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric::init$($TestGenericReturnTypeToString$FirstInnerClass* this$0) {
	$set(this, this$0, this$0);
}

TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric::TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestGenericReturnTypeToString$FirstInnerClass;", nullptr, $FINAL | $SYNTHETIC, $field(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestGenericReturnTypeToString$FirstInnerClass;)V", nullptr, $PUBLIC, $method(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric, init$, void, $TestGenericReturnTypeToString$FirstInnerClass*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
		{"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric", "TestGenericReturnTypeToString$FirstInnerClass", "SecondInnerClassGeneric", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestGenericReturnTypeToString"
	};
	$loadClass(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric);
	});
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric::class$ = nullptr;