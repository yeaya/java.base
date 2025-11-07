#include <MainThreadTest.h>

#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;

$MethodInfo _MainThreadTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MainThreadTest::*)()>(&MainThreadTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MainThreadTest::main))},
	{}
};

$ClassInfo _MainThreadTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MainThreadTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MainThreadTest_MethodInfo_
};

$Object* allocate$MainThreadTest($Class* clazz) {
	return $of($alloc(MainThreadTest));
}

void MainThreadTest::init$() {
}

void MainThreadTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, tg, $($Thread::currentThread())->getThreadGroup());
	int32_t n = $nc(tg)->activeCount();
	$var($ThreadArray, ts, $new($ThreadArray, n));
	int32_t m = tg->enumerate(ts);
	for (int32_t i = 0; i < ts->length; ++i) {
		if ($Thread::currentThread() == ts->get(i)) {
			return;
		}
	}
	$throwNew($RuntimeException, "Current thread is not in its own thread group!"_s);
}

MainThreadTest::MainThreadTest() {
}

$Class* MainThreadTest::load$($String* name, bool initialize) {
	$loadClass(MainThreadTest, name, initialize, &_MainThreadTest_ClassInfo_, allocate$MainThreadTest);
	return class$;
}

$Class* MainThreadTest::class$ = nullptr;