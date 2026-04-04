#include <TestSynchronization$MyTestClass.h>
#include <TestSynchronization.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TestSynchronization$MyTestClass, init$, void, $String*)},
		{"should_fail", "()V", nullptr, $PUBLIC, $virtualMethod(TestSynchronization$MyTestClass, should_fail, void)},
		{"should_pass", "()V", nullptr, $PUBLIC, $virtualMethod(TestSynchronization$MyTestClass, should_pass, void)},
		{"sync_shouldnt_be_tested", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(TestSynchronization$MyTestClass, sync_shouldnt_be_tested, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestSynchronization$MyTestClass", "TestSynchronization", "MyTestClass", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestSynchronization$MyTestClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestSynchronization"
	};
	$loadClass(TestSynchronization$MyTestClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSynchronization$MyTestClass);
	});
	return class$;
}

$Class* TestSynchronization$MyTestClass::class$ = nullptr;