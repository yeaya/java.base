#include <NullThreadName$GoodThread.h>

#include <NullThreadName.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $NullThreadName = ::NullThreadName;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$MethodInfo _NullThreadName$GoodThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(NullThreadName$GoodThread, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NullThreadName$GoodThread, run, void)},
	{}
};

$InnerClassInfo _NullThreadName$GoodThread_InnerClassesInfo_[] = {
	{"NullThreadName$GoodThread", "NullThreadName", "GoodThread", $STATIC},
	{}
};

$ClassInfo _NullThreadName$GoodThread_ClassInfo_ = {
	$ACC_SUPER,
	"NullThreadName$GoodThread",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NullThreadName$GoodThread_MethodInfo_,
	nullptr,
	nullptr,
	_NullThreadName$GoodThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NullThreadName"
};

$Object* allocate$NullThreadName$GoodThread($Class* clazz) {
	return $of($alloc(NullThreadName$GoodThread));
}

void NullThreadName$GoodThread::init$() {
}

void NullThreadName$GoodThread::run() {
	$nc($System::out)->println("Good Thread started..."_s);
	$nc($System::out)->println("Good Thread finishing"_s);
	$init($NullThreadName);
	$nc($NullThreadName::done)->countDown();
}

NullThreadName$GoodThread::NullThreadName$GoodThread() {
}

$Class* NullThreadName$GoodThread::load$($String* name, bool initialize) {
	$loadClass(NullThreadName$GoodThread, name, initialize, &_NullThreadName$GoodThread_ClassInfo_, allocate$NullThreadName$GoodThread);
	return class$;
}

$Class* NullThreadName$GoodThread::class$ = nullptr;