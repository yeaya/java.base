#include <TestHelpers$TestSuperclass.h>

#include <TestHelpers.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestHelpers = ::TestHelpers;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestHelpers$TestSuperclass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestHelpers$TestSuperclass::*)()>(&TestHelpers$TestSuperclass::init$))},
	{"m", "(I)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestHelpers$TestSuperclass_InnerClassesInfo_[] = {
	{"TestHelpers$TestSuperclass", "TestHelpers", "TestSuperclass", $STATIC},
	{}
};

$ClassInfo _TestHelpers$TestSuperclass_ClassInfo_ = {
	$ACC_SUPER,
	"TestHelpers$TestSuperclass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestHelpers$TestSuperclass_MethodInfo_,
	nullptr,
	nullptr,
	_TestHelpers$TestSuperclass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestHelpers"
};

$Object* allocate$TestHelpers$TestSuperclass($Class* clazz) {
	return $of($alloc(TestHelpers$TestSuperclass));
}

void TestHelpers$TestSuperclass::init$() {
}

int32_t TestHelpers$TestSuperclass::m(int32_t x) {
	return -1;
}

TestHelpers$TestSuperclass::TestHelpers$TestSuperclass() {
}

$Class* TestHelpers$TestSuperclass::load$($String* name, bool initialize) {
	$loadClass(TestHelpers$TestSuperclass, name, initialize, &_TestHelpers$TestSuperclass_ClassInfo_, allocate$TestHelpers$TestSuperclass);
	return class$;
}

$Class* TestHelpers$TestSuperclass::class$ = nullptr;