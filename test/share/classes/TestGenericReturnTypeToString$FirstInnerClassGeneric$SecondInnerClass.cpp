#include <TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass.h>

#include <TestGenericReturnTypeToString$FirstInnerClassGeneric.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString$FirstInnerClassGeneric = ::TestGenericReturnTypeToString$FirstInnerClassGeneric;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass_FieldInfo_[] = {
	{"this$1", "LTestGenericReturnTypeToString$FirstInnerClassGeneric;", nullptr, $FINAL | $SYNTHETIC, $field(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass, this$1)},
	{}
};

$MethodInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass_MethodInfo_[] = {
	{"<init>", "(LTestGenericReturnTypeToString$FirstInnerClassGeneric;)V", nullptr, $PUBLIC, $method(static_cast<void(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass::*)($TestGenericReturnTypeToString$FirstInnerClassGeneric*)>(&TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass::init$))},
	{}
};

$InnerClassInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass_InnerClassesInfo_[] = {
	{"TestGenericReturnTypeToString$FirstInnerClassGeneric", "TestGenericReturnTypeToString", "FirstInnerClassGeneric", $PUBLIC},
	{"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass", "TestGenericReturnTypeToString$FirstInnerClassGeneric", "SecondInnerClass", $PUBLIC},
	{}
};

$ClassInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass",
	"java.lang.Object",
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass_FieldInfo_,
	_TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass_MethodInfo_,
	nullptr,
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestGenericReturnTypeToString"
};

$Object* allocate$TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass($Class* clazz) {
	return $of($alloc(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass));
}

void TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass::init$($TestGenericReturnTypeToString$FirstInnerClassGeneric* this$1) {
	$set(this, this$1, this$1);
}

TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass::TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass::load$($String* name, bool initialize) {
	$loadClass(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass, name, initialize, &_TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass_ClassInfo_, allocate$TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass);
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass::class$ = nullptr;