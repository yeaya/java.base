#include <TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric.h>

#include <TestGenericReturnTypeToString$FirstInnerClass.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString$FirstInnerClass = ::TestGenericReturnTypeToString$FirstInnerClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric_InnerClassesInfo_[] = {
	{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
	{"TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric", "TestGenericReturnTypeToString$FirstInnerClass", "InterfaceGeneric", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestGenericReturnTypeToString"
};

$Object* allocate$TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric($Class* clazz) {
	return $of($alloc(TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric));
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric::load$($String* name, bool initialize) {
	$loadClass(TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric, name, initialize, &_TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric_ClassInfo_, allocate$TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric);
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric::class$ = nullptr;