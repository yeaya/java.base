#include <TestGenericReturnTypeToString$FirstInnerClassGeneric.h>

#include <TestGenericReturnTypeToString.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString = ::TestGenericReturnTypeToString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric_FieldInfo_[] = {
	{"this$0", "LTestGenericReturnTypeToString;", nullptr, $FINAL | $SYNTHETIC, $field(TestGenericReturnTypeToString$FirstInnerClassGeneric, this$0)},
	{}
};

$MethodInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric_MethodInfo_[] = {
	{"<init>", "(LTestGenericReturnTypeToString;)V", nullptr, $PUBLIC, $method(static_cast<void(TestGenericReturnTypeToString$FirstInnerClassGeneric::*)($TestGenericReturnTypeToString*)>(&TestGenericReturnTypeToString$FirstInnerClassGeneric::init$))},
	{}
};

$InnerClassInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric_InnerClassesInfo_[] = {
	{"TestGenericReturnTypeToString$FirstInnerClassGeneric", "TestGenericReturnTypeToString", "FirstInnerClassGeneric", $PUBLIC},
	{"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass", "TestGenericReturnTypeToString$FirstInnerClassGeneric", "SecondInnerClass", $PUBLIC},
	{"TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric", "TestGenericReturnTypeToString$FirstInnerClassGeneric", "SecondInnerClassGeneric", $PUBLIC},
	{}
};

$ClassInfo _TestGenericReturnTypeToString$FirstInnerClassGeneric_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestGenericReturnTypeToString$FirstInnerClassGeneric",
	"java.lang.Object",
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClassGeneric_FieldInfo_,
	_TestGenericReturnTypeToString$FirstInnerClassGeneric_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClassGeneric_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestGenericReturnTypeToString"
};

$Object* allocate$TestGenericReturnTypeToString$FirstInnerClassGeneric($Class* clazz) {
	return $of($alloc(TestGenericReturnTypeToString$FirstInnerClassGeneric));
}

void TestGenericReturnTypeToString$FirstInnerClassGeneric::init$($TestGenericReturnTypeToString* this$0) {
	$set(this, this$0, this$0);
}

TestGenericReturnTypeToString$FirstInnerClassGeneric::TestGenericReturnTypeToString$FirstInnerClassGeneric() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric::load$($String* name, bool initialize) {
	$loadClass(TestGenericReturnTypeToString$FirstInnerClassGeneric, name, initialize, &_TestGenericReturnTypeToString$FirstInnerClassGeneric_ClassInfo_, allocate$TestGenericReturnTypeToString$FirstInnerClassGeneric);
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClassGeneric::class$ = nullptr;