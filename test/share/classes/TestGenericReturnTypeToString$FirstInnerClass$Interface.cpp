#include <TestGenericReturnTypeToString$FirstInnerClass$Interface.h>

#include <TestGenericReturnTypeToString$FirstInnerClass.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString$FirstInnerClass = ::TestGenericReturnTypeToString$FirstInnerClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _TestGenericReturnTypeToString$FirstInnerClass$Interface_InnerClassesInfo_[] = {
	{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
	{"TestGenericReturnTypeToString$FirstInnerClass$Interface", "TestGenericReturnTypeToString$FirstInnerClass", "Interface", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestGenericReturnTypeToString$FirstInnerClass$Interface_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"TestGenericReturnTypeToString$FirstInnerClass$Interface",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClass$Interface_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestGenericReturnTypeToString"
};

$Object* allocate$TestGenericReturnTypeToString$FirstInnerClass$Interface($Class* clazz) {
	return $of($alloc(TestGenericReturnTypeToString$FirstInnerClass$Interface));
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$Interface::load$($String* name, bool initialize) {
	$loadClass(TestGenericReturnTypeToString$FirstInnerClass$Interface, name, initialize, &_TestGenericReturnTypeToString$FirstInnerClass$Interface_ClassInfo_, allocate$TestGenericReturnTypeToString$FirstInnerClass$Interface);
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$Interface::class$ = nullptr;