#include <TestHelpers.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestHelpers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TestHelpers, init$, void)},
	{}
};

$InnerClassInfo _TestHelpers_InnerClassesInfo_[] = {
	{"TestHelpers$TestClass", "TestHelpers", "TestClass", $STATIC},
	{"TestHelpers$TestSuperclass", "TestHelpers", "TestSuperclass", $STATIC},
	{"TestHelpers$TestInterface", "TestHelpers", "TestInterface", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestHelpers_ClassInfo_ = {
	$ACC_SUPER,
	"TestHelpers",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestHelpers_MethodInfo_,
	nullptr,
	nullptr,
	_TestHelpers_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestHelpers$TestClass,TestHelpers$TestSuperclass,TestHelpers$TestInterface"
};

$Object* allocate$TestHelpers($Class* clazz) {
	return $of($alloc(TestHelpers));
}

void TestHelpers::init$() {
}

TestHelpers::TestHelpers() {
}

$Class* TestHelpers::load$($String* name, bool initialize) {
	$loadClass(TestHelpers, name, initialize, &_TestHelpers_ClassInfo_, allocate$TestHelpers);
	return class$;
}

$Class* TestHelpers::class$ = nullptr;