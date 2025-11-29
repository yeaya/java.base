#include <test/java/lang/invoke/TestCls$PrivateSIC.h>

#include <test/java/lang/invoke/TestCls.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$MethodInfo _TestCls$PrivateSIC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TestCls$PrivateSIC::*)()>(&TestCls$PrivateSIC::init$))},
	{}
};

$InnerClassInfo _TestCls$PrivateSIC_InnerClassesInfo_[] = {
	{"test.java.lang.invoke.TestCls$PrivateSIC", "test.java.lang.invoke.TestCls", "PrivateSIC", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TestCls$PrivateSIC_ClassInfo_ = {
	$ACC_SUPER,
	"test.java.lang.invoke.TestCls$PrivateSIC",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestCls$PrivateSIC_MethodInfo_,
	nullptr,
	nullptr,
	_TestCls$PrivateSIC_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"test.java.lang.invoke.TestCls"
};

$Object* allocate$TestCls$PrivateSIC($Class* clazz) {
	return $of($alloc(TestCls$PrivateSIC));
}

void TestCls$PrivateSIC::init$() {
}

TestCls$PrivateSIC::TestCls$PrivateSIC() {
}

$Class* TestCls$PrivateSIC::load$($String* name, bool initialize) {
	$loadClass(TestCls$PrivateSIC, name, initialize, &_TestCls$PrivateSIC_ClassInfo_, allocate$TestCls$PrivateSIC);
	return class$;
}

$Class* TestCls$PrivateSIC::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test