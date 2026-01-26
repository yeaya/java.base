#include <TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric.h>

#include <TestGenericReturnTypeToString$FirstInnerClass.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString$FirstInnerClass = ::TestGenericReturnTypeToString$FirstInnerClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric_FieldInfo_[] = {
	{"this$0", "LTestGenericReturnTypeToString$FirstInnerClass;", nullptr, $FINAL | $SYNTHETIC, $field(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric, this$0)},
	{}
};

$MethodInfo _TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric_MethodInfo_[] = {
	{"<init>", "(LTestGenericReturnTypeToString$FirstInnerClass;)V", nullptr, $PUBLIC, $method(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric, init$, void, $TestGenericReturnTypeToString$FirstInnerClass*)},
	{}
};

$InnerClassInfo _TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric_InnerClassesInfo_[] = {
	{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
	{"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric", "TestGenericReturnTypeToString$FirstInnerClass", "SecondInnerClassGeneric", $PUBLIC},
	{}
};

$ClassInfo _TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric",
	"java.lang.Object",
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric_FieldInfo_,
	_TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestGenericReturnTypeToString"
};

$Object* allocate$TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric($Class* clazz) {
	return $of($alloc(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric));
}

void TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric::init$($TestGenericReturnTypeToString$FirstInnerClass* this$0) {
	$set(this, this$0, this$0);
}

TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric::TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric::load$($String* name, bool initialize) {
	$loadClass(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric, name, initialize, &_TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric_ClassInfo_, allocate$TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric);
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric::class$ = nullptr;