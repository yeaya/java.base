#include <NullThreadName.h>
#include <NullThreadName$1.h>
#include <NullThreadName$GoodThread.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $NullThreadName$1 = ::NullThreadName$1;
using $NullThreadName$GoodThread = ::NullThreadName$GoodThread;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$CountDownLatch* NullThreadName::done = nullptr;

void NullThreadName::init$() {
}

void NullThreadName::main($StringArray* args) {
	$init(NullThreadName);
	$useLocalObjectStack();
	$var($ThreadGroup, tg, $new($ThreadGroup, "chegar-threads"_s));
	$var($Thread, goodThread, $new($Thread, tg, $$new($NullThreadName$GoodThread), "goodThread"_s));
	try {
		$var($Thread, badThread, $new($Thread, tg, $$new($NullThreadName$1), nullptr));
	} catch ($NullPointerException& npe) {
		$nc($System::out)->println($$str({"OK, caught expected "_s, npe}));
	}
	tg->setDaemon(true);
	goodThread->start();
	$nc(NullThreadName::done)->await();
	int32_t count = 0;
	while (goodThread->isAlive()) {
		$nc($System::out)->println("GoodThread still alive, sleeping..."_s);
		try {
			$Thread::sleep(2000);
		} catch ($InterruptedException& unused) {
		}
		if (count++ > 60) {
			$throwNew($AssertionError, $of("GoodThread is still alive!"_s));
		}
	}
	if (!tg->isDestroyed()) {
		$throwNew($AssertionError, $of("Failed: Thread group is not destroyed."_s));
	}
}

void NullThreadName::clinit$($Class* clazz) {
	$assignStatic(NullThreadName::done, $new($CountDownLatch, 1));
}

NullThreadName::NullThreadName() {
}

$Class* NullThreadName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"done", "Ljava/util/concurrent/CountDownLatch;", nullptr, $STATIC, $staticField(NullThreadName, done)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NullThreadName, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NullThreadName, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NullThreadName$GoodThread", "NullThreadName", "GoodThread", $STATIC},
		{"NullThreadName$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NullThreadName",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"NullThreadName$GoodThread,NullThreadName$1"
	};
	$loadClass(NullThreadName, name, initialize, &classInfo$$, NullThreadName::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NullThreadName);
	});
	return class$;
}

$Class* NullThreadName::class$ = nullptr;