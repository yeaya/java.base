#include <TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric.h>
#include <TestGenericReturnTypeToString$FirstInnerClassGeneric.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString$FirstInnerClassGeneric = ::TestGenericReturnTypeToString$FirstInnerClassGeneric;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric::init$($TestGenericReturnTypeToString$FirstInnerClassGeneric* this$1) {
	$set(this, this$1, this$1);
}

TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric::TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LTestGenericReturnTypeToString$FirstInnerClassGeneric;", nullptr, $FINAL | $SYNTHETIC, $field(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestGenericReturnTypeToString$FirstInnerClassGeneric;)V", nullptr, $PUBLIC, $method(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric, init$, void, $TestGenericReturnTypeToString$FirstInnerClassGeneric*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestGenericReturnTypeToString$FirstInnerClassGeneric", "TestGenericReturnTypeToString", "FirstInnerClassGeneric", $PUBLIC},
		{"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric", "TestGenericReturnTypeToString$FirstInnerClassGeneric", "SecondInnerClassGeneric", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric",
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
	$loadClass(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric);
	});
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric::class$ = nullptr;