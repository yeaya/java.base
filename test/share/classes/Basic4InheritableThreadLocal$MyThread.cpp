#include <Basic4InheritableThreadLocal$MyThread.h>
#include <Basic4InheritableThreadLocal.h>
#include <java/lang/InheritableThreadLocal.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $Basic4InheritableThreadLocal = ::Basic4InheritableThreadLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void Basic4InheritableThreadLocal$MyThread::init$() {
	$Thread::init$();
}

void Basic4InheritableThreadLocal$MyThread::run() {
	$useLocalObjectStack();
	$var($Thread, child, nullptr);
	$init($Basic4InheritableThreadLocal);
	if ($$cast($Integer, $nc($Basic4InheritableThreadLocal::n)->get())->intValue() < $Basic4InheritableThreadLocal::threadCount - 1) {
		$assign(child, $new(Basic4InheritableThreadLocal$MyThread));
		child->start();
	}
	$($Thread::currentThread())->yield();
	int32_t threadId = $$cast($Integer, $Basic4InheritableThreadLocal::n->get())->intValue();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Basic4InheritableThreadLocal$MyThread, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4InheritableThreadLocal$MyThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4InheritableThreadLocal$MyThread", "Basic4InheritableThreadLocal", "MyThread", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic4InheritableThreadLocal$MyThread",
		"java.lang.Thread",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Basic4InheritableThreadLocal"
	};
	$loadClass(Basic4InheritableThreadLocal$MyThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4InheritableThreadLocal$MyThread);
	});
	return class$;
}

$Class* Basic4InheritableThreadLocal$MyThread::class$ = nullptr;