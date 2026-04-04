#include <TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass.h>
#include <TestGenericReturnTypeToString$FirstInnerClassGeneric.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString$FirstInnerClassGeneric = ::TestGenericReturnTypeToString$FirstInnerClassGeneric;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass::init$($TestGenericReturnTypeToString$FirstInnerClassGeneric* this$1) {
	$set(this, this$1, this$1);
}

TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass::TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LTestGenericReturnTypeToString$FirstInnerClassGeneric;", nullptr, $FINAL | $SYNTHETIC, $field(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestGenericReturnTypeToString$FirstInnerClassGeneric;)V", nullptr, $PUBLIC, $method(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass, init$, void, $TestGenericReturnTypeToString$FirstInnerClassGeneric*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestGenericReturnTypeToString$FirstInnerClassGeneric", "TestGenericReturnTypeToString", "FirstInnerClassGeneric", $PUBLIC},
		{"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass", "TestGenericReturnTypeToString$FirstInnerClassGeneric", "SecondInnerClass", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass",
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
	$loadClass(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass);
	});
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass::class$ = nullptr;