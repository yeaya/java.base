#include <MainThreadTest.h>
#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;

void MainThreadTest::init$() {
}

void MainThreadTest::main($StringArray* args) {
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MainThreadTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MainThreadTest, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MainThreadTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MainThreadTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MainThreadTest);
	});
	return class$;
}

$Class* MainThreadTest::class$ = nullptr;