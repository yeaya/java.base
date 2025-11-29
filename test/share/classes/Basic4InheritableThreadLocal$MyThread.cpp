#include <Basic4InheritableThreadLocal$MyThread.h>

#include <Basic4InheritableThreadLocal.h>
#include <java/lang/InheritableThreadLocal.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $Basic4InheritableThreadLocal = ::Basic4InheritableThreadLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _Basic4InheritableThreadLocal$MyThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Basic4InheritableThreadLocal$MyThread::*)()>(&Basic4InheritableThreadLocal$MyThread::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Basic4InheritableThreadLocal$MyThread_InnerClassesInfo_[] = {
	{"Basic4InheritableThreadLocal$MyThread", "Basic4InheritableThreadLocal", "MyThread", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Basic4InheritableThreadLocal$MyThread_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4InheritableThreadLocal$MyThread",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_Basic4InheritableThreadLocal$MyThread_MethodInfo_,
	nullptr,
	nullptr,
	_Basic4InheritableThreadLocal$MyThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4InheritableThreadLocal"
};

$Object* allocate$Basic4InheritableThreadLocal$MyThread($Class* clazz) {
	return $of($alloc(Basic4InheritableThreadLocal$MyThread));
}

void Basic4InheritableThreadLocal$MyThread::init$() {
	$Thread::init$();
}

void Basic4InheritableThreadLocal$MyThread::run() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, child, nullptr);
	$init($Basic4InheritableThreadLocal);
	if ($nc((($cast($Integer, $($nc($Basic4InheritableThreadLocal::n)->get())))))->intValue() < $Basic4InheritableThreadLocal::threadCount - 1) {
		$assign(child, $new(Basic4InheritableThreadLocal$MyThread));
		child->start();
	}
	$($Thread::currentThread())->yield();
	int32_t threadId = $nc((($cast($Integer, $($nc($Basic4InheritableThreadLocal::n)->get())))))->intValue();
	for (int32_t j = 0; j < threadId; ++j) {
		++(*$nc($Basic4InheritableThreadLocal::x))[threadId];
		$($Thread::currentThread())->yield();
	}
	if (child != nullptr) {
		try {
			child->join();
		} catch ($InterruptedException& e) {
			$throw($$new($RuntimeException, "Interrupted"_s));
		}
	}
}

Basic4InheritableThreadLocal$MyThread::Basic4InheritableThreadLocal$MyThread() {
}

$Class* Basic4InheritableThreadLocal$MyThread::load$($String* name, bool initialize) {
	$loadClass(Basic4InheritableThreadLocal$MyThread, name, initialize, &_Basic4InheritableThreadLocal$MyThread_ClassInfo_, allocate$Basic4InheritableThreadLocal$MyThread);
	return class$;
}

$Class* Basic4InheritableThreadLocal$MyThread::class$ = nullptr;