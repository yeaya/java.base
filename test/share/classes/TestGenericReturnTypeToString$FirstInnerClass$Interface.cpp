#include <TestGenericReturnTypeToString$FirstInnerClass$Interface.h>
#include <TestGenericReturnTypeToString$FirstInnerClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* TestGenericReturnTypeToString$FirstInnerClass$Interface::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
		{"TestGenericReturnTypeToString$FirstInnerClass$Interface", "TestGenericReturnTypeToString$FirstInnerClass", "Interface", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"TestGenericReturnTypeToString$FirstInnerClass$Interface",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestGenericReturnTypeToString"
	};
	$loadClass(TestGenericReturnTypeToString$FirstInnerClass$Interface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestGenericReturnTypeToString$FirstInnerClass$Interface);
	});
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$Interface::class$ = nullptr;