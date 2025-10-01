#include <TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass.h>

#include <TestGenericReturnTypeToString$FirstInnerClass.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestGenericReturnTypeToString$FirstInnerClass = ::TestGenericReturnTypeToString$FirstInnerClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass_FieldInfo_[] = {
	{"this$0", "LTestGenericReturnTypeToString$FirstInnerClass;", nullptr, $FINAL | $SYNTHETIC, $field(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass, this$0)},
	{}
};

$MethodInfo _TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass_MethodInfo_[] = {
	{"<init>", "(LTestGenericReturnTypeToString$FirstInnerClass;)V", nullptr, $PUBLIC, $method(static_cast<void(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass::*)($TestGenericReturnTypeToString$FirstInnerClass*)>(&TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass::init$))},
	{}
};

$InnerClassInfo _TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass_InnerClassesInfo_[] = {
	{"TestGenericReturnTypeToString$FirstInnerClass", "TestGenericReturnTypeToString", "FirstInnerClass", $PUBLIC | $STATIC},
	{"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass", "TestGenericReturnTypeToString$FirstInnerClass", "SecondInnerClass", $PUBLIC},
	{}
};

$ClassInfo _TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass",
	"java.lang.Object",
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass_FieldInfo_,
	_TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass_MethodInfo_,
	nullptr,
	nullptr,
	_TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestGenericReturnTypeToString"
};

$Object* allocate$TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass($Class* clazz) {
	return $of($alloc(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass));
}

void TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass::init$($TestGenericReturnTypeToString$FirstInnerClass* this$0) {
	$set(this, this$0, this$0);
}

TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass::TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass() {
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass::load$($String* name, bool initialize) {
	$loadClass(TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass, name, initialize, &_TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass_ClassInfo_, allocate$TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass);
	return class$;
}

$Class* TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass::class$ = nullptr;