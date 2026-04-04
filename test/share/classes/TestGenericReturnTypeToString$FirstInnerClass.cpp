#include <TestGenericReturnTypeToString$FirstInnerClass.h>
#include <TestGenericReturnTypeToString.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestGenericReturnTypeToString$FirstInnerClass::init$() {
}

TestGenericReturnTypeToString$FirstInnerClass::TestGenericReturnTypeToString$FirstInnerClass() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestGenericReturnTypeToString$FirstInnerClass, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
		{"TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric", "TestGenericReturnTypeToString$FirstInnerClass", "InterfaceGeneric", $STATIC | $INTERFACE | $ABSTRACT},
		{"TestGenericReturnTypeToString$FirstInnerClass$Interface", "TestGenericReturnTypeToString$FirstInnerClass", "Interface", $STATIC | $INTERFACE | $ABSTRACT},
		{"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass", "TestGenericReturnTypeToString$FirstInnerClass", "SecondInnerClass", $PUBLIC},
		{"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric", "TestGenericReturnTypeToString$FirstInnerClass", "SecondInnerClassGeneric", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestGenericReturnTypeToString$FirstInnerClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestGenericReturnTypeToString"
	};
	$loadClass(TestGenericReturnTypeToString$FirstInnerClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGenericReturnTypeToString$FirstInnerClass);
	});
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClass::class$ = nullptr;