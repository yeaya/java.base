#include <TestReceiverTypeOwnerType$Nested.h>

#include <TestReceiverTypeOwnerType.h>
#include <jcpp.h>

using $TestReceiverTypeOwnerType = ::TestReceiverTypeOwnerType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestReceiverTypeOwnerType$Nested_FieldInfo_[] = {
	{"this$0", "LTestReceiverTypeOwnerType;", nullptr, $FINAL | $SYNTHETIC, $field(TestReceiverTypeOwnerType$Nested, this$0)},
	{}
};

$MethodInfo _TestReceiverTypeOwnerType$Nested_MethodInfo_[] = {
	{"<init>", "(LTestReceiverTypeOwnerType;)V", nullptr, $PUBLIC, $method(TestReceiverTypeOwnerType$Nested, init$, void, $TestReceiverTypeOwnerType*)},
	{"method", "()V", nullptr, $PUBLIC, $virtualMethod(TestReceiverTypeOwnerType$Nested, method, void)},
	{}
};

$InnerClassInfo _TestReceiverTypeOwnerType$Nested_InnerClassesInfo_[] = {
	{"TestReceiverTypeOwnerType$Nested", "TestReceiverTypeOwnerType", "Nested", $PUBLIC},
	{}
};

$ClassInfo _TestReceiverTypeOwnerType$Nested_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestReceiverTypeOwnerType$Nested",
	"java.lang.Object",
	nullptr,
	_TestReceiverTypeOwnerType$Nested_FieldInfo_,
	_TestReceiverTypeOwnerType$Nested_MethodInfo_,
	nullptr,
	nullptr,
	_TestReceiverTypeOwnerType$Nested_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestReceiverTypeOwnerType"
};

$Object* allocate$TestReceiverTypeOwnerType$Nested($Class* clazz) {
	return $of($alloc(TestReceiverTypeOwnerType$Nested));
}

void TestReceiverTypeOwnerType$Nested::init$($TestReceiverTypeOwnerType* this$0) {
	$set(this, this$0, this$0);
}

void TestReceiverTypeOwnerType$Nested::method() {
}

TestReceiverTypeOwnerType$Nested::TestReceiverTypeOwnerType$Nested() {
}

$Class* TestReceiverTypeOwnerType$Nested::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeOwnerType$Nested, name, initialize, &_TestReceiverTypeOwnerType$Nested_ClassInfo_, allocate$TestReceiverTypeOwnerType$Nested);
	return class$;
}

$Class* TestReceiverTypeOwnerType$Nested::class$ = nullptr;