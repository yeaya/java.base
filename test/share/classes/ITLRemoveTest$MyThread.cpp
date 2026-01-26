#include <ITLRemoveTest$MyThread.h>

#include <ITLRemoveTest.h>
#include <java/lang/InheritableThreadLocal.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ITLRemoveTest = ::ITLRemoveTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ITLRemoveTest$MyThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ITLRemoveTest$MyThread, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ITLRemoveTest$MyThread, run, void)},
	{}
};

$InnerClassInfo _ITLRemoveTest$MyThread_InnerClassesInfo_[] = {
	{"ITLRemoveTest$MyThread", "ITLRemoveTest", "MyThread", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ITLRemoveTest$MyThread_ClassInfo_ = {
	$ACC_SUPER,
	"ITLRemoveTest$MyThread",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_ITLRemoveTest$MyThread_MethodInfo_,
	nullptr,
	nullptr,
	_ITLRemoveTest$MyThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ITLRemoveTest"
};

$Object* allocate$ITLRemoveTest$MyThread($Class* clazz) {
	return $of($alloc(ITLRemoveTest$MyThread));
}

void ITLRemoveTest$MyThread::init$() {
	$Thread::init$();
}

void ITLRemoveTest$MyThread::run() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, child, nullptr);
	int32_t threadId = 0;
	try {
		$init($ITLRemoveTest);
		threadId = $nc(($cast($Integer, $($nc($ITLRemoveTest::n)->get()))))->intValue();
		if (threadId < ($ITLRemoveTest::threadCount - 1 + (int32_t)0x80000000)) {
			$assign(child, $new(ITLRemoveTest$MyThread));
			child->start();
		}
		for (int32_t j = 0; j < threadId; ++j) {
			$($Thread::currentThread())->yield();
		}
		{
			$var($ints, arr$, $ITLRemoveTest::removeNode);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if ((threadId - (int32_t)0x80000000) == removeId) {
					$nc($ITLRemoveTest::n)->remove();
					break;
				}
			}
		}
		{
			$var($ints, arr$, $ITLRemoveTest::removeAndSet);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t removeId = arr$->get(i$);
				if ((threadId - (int32_t)0x80000000) == removeId) {
					$nc($ITLRemoveTest::n)->remove();
					$nc($ITLRemoveTest::n)->set($($Integer::valueOf(0x7FFFFFFF)));
					break;
				}
			}
		}
		$nc($ITLRemoveTest::x)->set(threadId - (int32_t)0x80000000, $nc(($cast($Integer, $($nc($ITLRemoveTest::n)->get()))))->intValue());
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
	$loadClass(ITLRemoveTest$MyThread, name, initialize, &_ITLRemoveTest$MyThread_ClassInfo_, allocate$ITLRemoveTest$MyThread);
	return class$;
}

$Class* ITLRemoveTest$MyThread::class$ = nullptr;