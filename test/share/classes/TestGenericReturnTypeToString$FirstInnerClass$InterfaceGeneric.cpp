#include <TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric.h>
#include <TestGenericReturnTypeToString$FirstInnerClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
		{"TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric", "TestGenericReturnTypeToString$FirstInnerClass", "InterfaceGeneric", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestGenericReturnTypeToString"
	};
	$loadClass(TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric);
	});
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric::class$ = nullptr;