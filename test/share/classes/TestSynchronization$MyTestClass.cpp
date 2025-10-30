#include <TestSynchronization$MyTestClass.h>

#include <TestSynchronization.h>
#include <jcpp.h>

using $TestSynchronization = ::TestSynchronization;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestSynchronization$MyTestClass_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TestSynchronization$MyTestClass::*)($String*)>(&TestSynchronization$MyTestClass::init$))},
	{"should_fail", "()V", nullptr, $PUBLIC},
	{"should_pass", "()V", nullptr, $PUBLIC},
	{"sync_shouldnt_be_tested", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _TestSynchronization$MyTestClass_InnerClassesInfo_[] = {
	{"TestSynchronization$MyTestClass", "TestSynchronization", "MyTestClass", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TestSynchronization$MyTestClass_ClassInfo_ = {
	$ACC_SUPER,
	"TestSynchronization$MyTestClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestSynchronization$MyTestClass_MethodInfo_,
	nullptr,
	nullptr,
	_TestSynchronization$MyTestClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestSynchronization"
};

$Object* allocate$TestSynchronization$MyTestClass($Class* clazz) {
	return $of($alloc(TestSynchronization$MyTestClass));
}

void TestSynchronization$MyTestClass::init$($String* s) {
}

void TestSynchronization$MyTestClass::should_pass() {
	sync_shouldnt_be_tested();
}

void TestSynchronization$MyTestClass::should_fail() {
}

void TestSynchronization$MyTestClass::sync_shouldnt_be_tested() {
	$synchronized(this) {
	}
}

TestSynchronization$MyTestClass::TestSynchronization$MyTestClass() {
}

$Class* TestSynchronization$MyTestClass::load$($String* name, bool initialize) {
	$loadClass(TestSynchronization$MyTestClass, name, initialize, &_TestSynchronization$MyTestClass_ClassInfo_, allocate$TestSynchronization$MyTestClass);
	return class$;
}

$Class* TestSynchronization$MyTestClass::class$ = nullptr;