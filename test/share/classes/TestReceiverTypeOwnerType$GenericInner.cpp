#include <TestReceiverTypeOwnerType$GenericInner.h>

#include <TestReceiverTypeOwnerType.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestReceiverTypeOwnerType = ::TestReceiverTypeOwnerType;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestReceiverTypeOwnerType$GenericInner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestReceiverTypeOwnerType$GenericInner::*)()>(&TestReceiverTypeOwnerType$GenericInner::init$))},
	{"method", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestReceiverTypeOwnerType$GenericInner_InnerClassesInfo_[] = {
	{"TestReceiverTypeOwnerType$GenericInner", "TestReceiverTypeOwnerType", "GenericInner", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestReceiverTypeOwnerType$GenericInner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestReceiverTypeOwnerType$GenericInner",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestReceiverTypeOwnerType$GenericInner_MethodInfo_,
	"<S:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestReceiverTypeOwnerType$GenericInner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestReceiverTypeOwnerType"
};

$Object* allocate$TestReceiverTypeOwnerType$GenericInner($Class* clazz) {
	return $of($alloc(TestReceiverTypeOwnerType$GenericInner));
}

void TestReceiverTypeOwnerType$GenericInner::init$() {
}

void TestReceiverTypeOwnerType$GenericInner::method() {
}

TestReceiverTypeOwnerType$GenericInner::TestReceiverTypeOwnerType$GenericInner() {
}

$Class* TestReceiverTypeOwnerType$GenericInner::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeOwnerType$GenericInner, name, initialize, &_TestReceiverTypeOwnerType$GenericInner_ClassInfo_, allocate$TestReceiverTypeOwnerType$GenericInner);
	return class$;
}

$Class* TestReceiverTypeOwnerType$GenericInner::class$ = nullptr;