#include <TestGenericReturnTypeToString$FirstInnerClass.h>

#include <TestGenericReturnTypeToString.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestGenericReturnTypeToString$FirstInnerClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TestGenericReturnTypeToString$FirstInnerClass, init$, void)},
	{}
};

$InnerClassInfo _TestGenericReturnTypeToString$FirstInnerClass_InnerClassesInfo_[] = {
	{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
	{"TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric", "TestGenericReturnTypeToString$FirstInnerClass", "InterfaceGeneric", $STATIC | $INTERFACE | $ABSTRACT},
	{"TestGenericReturnTypeToString$FirstInnerClass$Interface", "TestGenericReturnTypeToString$FirstInnerClass", "Interface", $STATIC | $INTERFACE | $ABSTRACT},
	{"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass", "TestGenericReturnTypeToString$FirstInnerClass", "SecondInnerClass", $PUBLIC},
	{"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric", "TestGenericReturnTypeToString$FirstInnerClass", "SecondInnerClassGeneric", $PUBLIC},
	{}
};

$ClassInfo _TestGenericReturnTypeToString$FirstInnerClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestGenericReturnTypeToString$FirstInnerClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClass_MethodInfo_,
	nullptr,
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestGenericReturnTypeToString"
};

$Object* allocate$TestGenericReturnTypeToString$FirstInnerClass($Class* clazz) {
	return $of($alloc(TestGenericReturnTypeToString$FirstInnerClass));
}

void TestGenericReturnTypeToString$FirstInnerClass::init$() {
}

TestGenericReturnTypeToString$FirstInnerClass::TestGenericReturnTypeToString$FirstInnerClass() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClass::load$($String* name, bool initialize) {
	$loadClass(TestGenericReturnTypeToString$FirstInnerClass, name, initialize, &_TestGenericReturnTypeToString$FirstInnerClass_ClassInfo_, allocate$TestGenericReturnTypeToString$FirstInnerClass);
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClass::class$ = nullptr;