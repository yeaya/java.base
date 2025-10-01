#include <TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric.h>

#include <TestGenericReturnTypeToString$FirstInnerClassGeneric.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString$FirstInnerClassGeneric = ::TestGenericReturnTypeToString$FirstInnerClassGeneric;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric_FieldInfo_[] = {
	{"this$1", "LTestGenericReturnTypeToString$FirstInnerClassGeneric;", nullptr, $FINAL | $SYNTHETIC, $field(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric, this$1)},
	{}
};

$MethodInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric_MethodInfo_[] = {
	{"<init>", "(LTestGenericReturnTypeToString$FirstInnerClassGeneric;)V", nullptr, $PUBLIC, $method(static_cast<void(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric::*)($TestGenericReturnTypeToString$FirstInnerClassGeneric*)>(&TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric::init$))},
	{}
};

$InnerClassInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric_InnerClassesInfo_[] = {
	{"TestGenericReturnTypeToString$FirstInnerClassGeneric", "TestGenericReturnTypeToString", "FirstInnerClassGeneric", $PUBLIC},
	{"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric", "TestGenericReturnTypeToString$FirstInnerClassGeneric", "SecondInnerClassGeneric", $PUBLIC},
	{}
};

$ClassInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric",
	"java.lang.Object",
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric_FieldInfo_,
	_TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestGenericReturnTypeToString"
};

$Object* allocate$TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric($Class* clazz) {
	return $of($alloc(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric));
}

void TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric::init$($TestGenericReturnTypeToString$FirstInnerClassGeneric* this$1) {
	$set(this, this$1, this$1);
}

TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric::TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric::load$($String* name, bool initialize) {
	$loadClass(TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric, name, initialize, &_TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric_ClassInfo_, allocate$TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric);
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric::class$ = nullptr;