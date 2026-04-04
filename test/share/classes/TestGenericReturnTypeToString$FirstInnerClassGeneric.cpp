#include <TestGenericReturnTypeToString$FirstInnerClassGeneric.h>
#include <TestGenericReturnTypeToString.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString = ::TestGenericReturnTypeToString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestGenericReturnTypeToString$FirstInnerClassGeneric::init$($TestGenericReturnTypeToString* this$0) {
	$set(this, this$0, this$0);
}

TestGenericReturnTypeToString$FirstInnerClassGeneric::TestGenericReturnTypeToString$FirstInnerClassGeneric() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestGenericReturnTypeToString;", nullptr, $FINAL | $SYNTHETIC, $field(TestGenericReturnTypeToString$FirstInnerClassGeneric, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestGenericReturnTypeToString;)V", nullptr, $PUBLIC, $method(TestGenericReturnTypeToString$FirstInnerClassGeneric, init$, void, $TestGenericReturnTypeToString*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestGenericReturnTypeToString$FirstInnerClassGeneric", "TestGenericReturnTypeToString", "FirstInnerClassGeneric", $PUBLIC},
		{"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass", "TestGenericReturnTypeToString$FirstInnerClassGeneric", "SecondInnerClass", $PUBLIC},
		{"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric", "TestGenericReturnTypeToString$FirstInnerClassGeneric", "SecondInnerClassGeneric", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestGenericReturnTypeToString$FirstInnerClassGeneric",
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
	$loadClass(TestGenericReturnTypeToString$FirstInnerClassGeneric, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGenericReturnTypeToString$FirstInnerClassGeneric);
	});
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric::class$ = nullptr;