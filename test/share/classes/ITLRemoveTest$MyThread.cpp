#include <ITLRemoveTest$MyThread.h>
#include <ITLRemoveTest.h>
#include <java/lang/InheritableThreadLocal.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ITLRemoveTest = ::ITLRemoveTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void ITLRemoveTest$MyThread::init$() {
	$Thread::init$();
}

void ITLRemoveTest$MyThread::run() {
	$useLocalObjectStack();
	$var($Thread, child, nullptr);
	int32_t threadId = 0;
	try {
		$init($ITLRemoveTest);
		threadId = $$sure($Integer, $nc($ITLRemoveTest::n)->get())->intValue();
		if (threadId < ($ITLRemoveTest::threadCount - 1 + (int32_t)0x80000000)) {
			$assign(child, $new(ITLRemoveTest$MyThread));
			child->start();
		}
		for (int32_t j = 0; j < threadId; ++j) {
			$($Thread::currentThread())->yield();
		}
		{
			$var($ints, arr$, $ITLRemoveTest::removeNode);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if ((threadId - (int32_t)0x80000000) == removeId) {
					$ITLRemoveTest::n->remove();
					break;
				}
			}
		}
		{
			$var($ints, arr$, $ITLRemoveTest::removeAndSet);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if ((threadId - (int32_t)0x80000000) == removeId) {
					$ITLRemoveTest::n->remove();
					$ITLRemoveTest::n->set($($Integer::valueOf(0x7fffffff)));
					break;
				}
			}
		}
		$nc($ITLRemoveTest::x)->set(threadId - (int32_t)0x80000000, $$sure($Integer, $ITLRemoveTest::n->get())->intValue());
	} catch ($Throwable& ex) {
		$init($ITLRemoveTest);
		$nc($ITLRemoveTest::exceptions)->set(threadId - (int32_t)0x80000000, ex);
	}
	if (child != nullptr) {
		try {
			child->join();
		} catch ($InterruptedException& e) {
			$throw($$new($RuntimeException, "Interrupted"_s));
		}
	}
}

ITLRemoveTest$MyThread::ITLRemoveTest$MyThread() {
}

$Class* ITLRemoveTest$MyThread::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ITLRemoveTest$MyThread, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ITLRemoveTest$MyThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ITLRemoveTest$MyThread", "ITLRemoveTest", "MyThread", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ITLRemoveTest$MyThread",
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
		"ITLRemoveTest"
	};
	$loadClass(ITLRemoveTest$MyThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ITLRemoveTest$MyThread);
	});
	return class$;
}

$Class* ITLRemoveTest$MyThread::class$ = nullptr;