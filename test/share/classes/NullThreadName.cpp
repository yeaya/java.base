#include <NullThreadName.h>

#include <NullThreadName$1.h>
#include <NullThreadName$GoodThread.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $NullThreadName$1 = ::NullThreadName$1;
using $NullThreadName$GoodThread = ::NullThreadName$GoodThread;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _NullThreadName_FieldInfo_[] = {
	{"done", "Ljava/util/concurrent/CountDownLatch;", nullptr, $STATIC, $staticField(NullThreadName, done)},
	{}
};

$MethodInfo _NullThreadName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NullThreadName, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NullThreadName, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _NullThreadName_InnerClassesInfo_[] = {
	{"NullThreadName$GoodThread", "NullThreadName", "GoodThread", $STATIC},
	{"NullThreadName$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NullThreadName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullThreadName",
	"java.lang.Object",
	nullptr,
	_NullThreadName_FieldInfo_,
	_NullThreadName_MethodInfo_,
	nullptr,
	nullptr,
	_NullThreadName_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NullThreadName$GoodThread,NullThreadName$1"
};

$Object* allocate$NullThreadName($Class* clazz) {
	return $of($alloc(NullThreadName));
}

$CountDownLatch* NullThreadName::done = nullptr;

void NullThreadName::init$() {
}

void NullThreadName::main($StringArray* args) {
	$init(NullThreadName);
	$useLocalCurrentObjectStackCache();
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

void clinit$NullThreadName($Class* class$) {
	$assignStatic(NullThreadName::done, $new($CountDownLatch, 1));
}

NullThreadName::NullThreadName() {
}

$Class* NullThreadName::load$($String* name, bool initialize) {
	$loadClass(NullThreadName, name, initialize, &_NullThreadName_ClassInfo_, clinit$NullThreadName, allocate$NullThreadName);
	return class$;
}

$Class* NullThreadName::class$ = nullptr;