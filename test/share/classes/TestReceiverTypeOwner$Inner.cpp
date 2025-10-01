#include <TestReceiverTypeOwner$Inner.h>

#include <TestReceiverTypeOwner.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/TypeAnnotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestReceiverTypeOwner = ::TestReceiverTypeOwner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$TypeAnnotation _TestReceiverTypeOwner$Inner_MethodTypeAnnotations_m1[] = {
	{"LTestReceiverTypeOwner$TypeAnnotation;", nullptr, "METHOD_RECEIVER"},
	{}
};

$FieldInfo _TestReceiverTypeOwner$Inner_FieldInfo_[] = {
	{"this$0", "LTestReceiverTypeOwner;", nullptr, $FINAL | $SYNTHETIC, $field(TestReceiverTypeOwner$Inner, this$0)},
	{}
};

$MethodInfo _TestReceiverTypeOwner$Inner_MethodInfo_[] = {
	{"<init>", "(LTestReceiverTypeOwner;)V", nullptr, 0, $method(static_cast<void(TestReceiverTypeOwner$Inner::*)($TestReceiverTypeOwner*)>(&TestReceiverTypeOwner$Inner::init$))},
	{"m", "()V", nullptr, 0, nullptr, nullptr, nullptr, nullptr, _TestReceiverTypeOwner$Inner_MethodTypeAnnotations_m1},
	{}
};

$InnerClassInfo _TestReceiverTypeOwner$Inner_InnerClassesInfo_[] = {
	{"TestReceiverTypeOwner$Inner", "TestReceiverTypeOwner", "Inner", 0},
	{}
};

$ClassInfo _TestReceiverTypeOwner$Inner_ClassInfo_ = {
	$ACC_SUPER,
	"TestReceiverTypeOwner$Inner",
	"java.lang.Object",
	nullptr,
	_TestReceiverTypeOwner$Inner_FieldInfo_,
	_TestReceiverTypeOwner$Inner_MethodInfo_,
	nullptr,
	nullptr,
	_TestReceiverTypeOwner$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestReceiverTypeOwner"
};

$Object* allocate$TestReceiverTypeOwner$Inner($Class* clazz) {
	return $of($alloc(TestReceiverTypeOwner$Inner));
}

void TestReceiverTypeOwner$Inner::init$($TestReceiverTypeOwner* this$0) {
	$set(this, this$0, this$0);
}

void TestReceiverTypeOwner$Inner::m() {
}

TestReceiverTypeOwner$Inner::TestReceiverTypeOwner$Inner() {
}

$Class* TestReceiverTypeOwner$Inner::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeOwner$Inner, name, initialize, &_TestReceiverTypeOwner$Inner_ClassInfo_, allocate$TestReceiverTypeOwner$Inner);
	return class$;
}

$Class* TestReceiverTypeOwner$Inner::class$ = nullptr;