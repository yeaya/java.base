#include <TestPrivateMemberPackageSibling.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestPrivateMemberPackageSibling_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TestPrivateMemberPackageSibling, init$, void)},
	{"checkInitted", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestPrivateMemberPackageSibling, checkInitted, void)},
	{}
};

$ClassInfo _TestPrivateMemberPackageSibling_ClassInfo_ = {
	$ACC_SUPER,
	"TestPrivateMemberPackageSibling",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestPrivateMemberPackageSibling_MethodInfo_
};

$Object* allocate$TestPrivateMemberPackageSibling($Class* clazz) {
	return $of($alloc(TestPrivateMemberPackageSibling));
}

void TestPrivateMemberPackageSibling::init$() {
}

void TestPrivateMemberPackageSibling::checkInitted() {
}

TestPrivateMemberPackageSibling::TestPrivateMemberPackageSibling() {
}

$Class* TestPrivateMemberPackageSibling::load$($String* name, bool initialize) {
	$loadClass(TestPrivateMemberPackageSibling, name, initialize, &_TestPrivateMemberPackageSibling_ClassInfo_, allocate$TestPrivateMemberPackageSibling);
	return class$;
}

$Class* TestPrivateMemberPackageSibling::class$ = nullptr;