#include <TestReceiverTypeOwnerType$Inner.h>

#include <TestReceiverTypeOwnerType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestReceiverTypeOwnerType$Inner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestReceiverTypeOwnerType$Inner::*)()>(&TestReceiverTypeOwnerType$Inner::init$))},
	{"method", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestReceiverTypeOwnerType$Inner_InnerClassesInfo_[] = {
	{"TestReceiverTypeOwnerType$Inner", "TestReceiverTypeOwnerType", "Inner", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestReceiverTypeOwnerType$Inner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestReceiverTypeOwnerType$Inner",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestReceiverTypeOwnerType$Inner_MethodInfo_,
	nullptr,
	nullptr,
	_TestReceiverTypeOwnerType$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestReceiverTypeOwnerType"
};

$Object* allocate$TestReceiverTypeOwnerType$Inner($Class* clazz) {
	return $of($alloc(TestReceiverTypeOwnerType$Inner));
}

void TestReceiverTypeOwnerType$Inner::init$() {
}

void TestReceiverTypeOwnerType$Inner::method() {
}

TestReceiverTypeOwnerType$Inner::TestReceiverTypeOwnerType$Inner() {
}

$Class* TestReceiverTypeOwnerType$Inner::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeOwnerType$Inner, name, initialize, &_TestReceiverTypeOwnerType$Inner_ClassInfo_, allocate$TestReceiverTypeOwnerType$Inner);
	return class$;
}

$Class* TestReceiverTypeOwnerType$Inner::class$ = nullptr;