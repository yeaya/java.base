#include <EarlyTimeout.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef NANOSECONDS
#undef THREADS_COUNT
#undef TIMEOUT

using $EarlyTimeoutArray = $Array<EarlyTimeout>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$Object* EarlyTimeout::referent = nullptr;
$ReferenceQueue* EarlyTimeout::queue = nullptr;
$WeakReference* EarlyTimeout::weakReference = nullptr;
$CountDownLatch* EarlyTimeout::startedSignal = nullptr;

void EarlyTimeout::init$() {
	$Thread::init$();
}

void EarlyTimeout::main($StringArray* args) {
	$init(EarlyTimeout);
	$useLocalObjectStack();
	$var($EarlyTimeoutArray, threads, $new($EarlyTimeoutArray, EarlyTimeout::THREADS_COUNT));
	for (int32_t i = 0; i < EarlyTimeout::THREADS_COUNT; ++i) {
		threads->set(i, $$new(EarlyTimeout));
		$nc(threads->get(i))->start();
	}
	EarlyTimeout::startedSignal->await();
	$Thread::sleep(EarlyTimeout::TIMEOUT / 2);
	$assignStatic(EarlyTimeout::referent, nullptr);
	$System::gc();
	{
		$var($EarlyTimeoutArray, arr$, threads);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var(EarlyTimeout, thread, arr$->get(i$));
			{
				$nc(thread)->join();
			}
		}
	}
	if (EarlyTimeout::weakReference->get() != nullptr) {
		$throwNew($RuntimeException, "weakReference was not cleared"_s);
	}
	int32_t nonNullRefCount = 0;
	{
		$var($EarlyTimeoutArray, arr$, threads);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var(EarlyTimeout, thread, arr$->get(i$));
			{
				if ($nc(thread)->reference == nullptr && thread->actual < EarlyTimeout::TIMEOUT) {
					$throwNew($RuntimeException, $$str({"elapsed time "_s, $$str(thread->actual), " is less than timeout "_s, $$str(EarlyTimeout::TIMEOUT)}));
				}
				if (thread->reference != nullptr && $equals(thread->reference, EarlyTimeout::weakReference)) {
					++nonNullRefCount;
				}
			}
		}
	}
	if (nonNullRefCount > 1) {
		$throwNew($RuntimeException, "more than one references were removed from queue"_s);
	}
}

void EarlyTimeout::run() {
	try {
		EarlyTimeout::startedSignal->countDown();
		int64_t start = $System::nanoTime();
		$set(this, reference, EarlyTimeout::queue->remove(EarlyTimeout::TIMEOUT));
		$init($TimeUnit);
		this->actual = $TimeUnit::NANOSECONDS->toMillis($System::nanoTime() - start);
	} catch ($InterruptedException& ex) {
		$throwNew($RuntimeException, ex);
	}
}

void EarlyTimeout::clinit$($Class* clazz) {
	$assignStatic(EarlyTimeout::referent, $new($Object));
	$assignStatic(EarlyTimeout::queue, $new($ReferenceQueue));
	$assignStatic(EarlyTimeout::weakReference, $new($WeakReference, EarlyTimeout::referent, EarlyTimeout::queue));
	$assignStatic(EarlyTimeout::startedSignal, $new($CountDownLatch, EarlyTimeout::THREADS_COUNT));
}

EarlyTimeout::EarlyTimeout() {
}

$Class* EarlyTimeout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"THREADS_COUNT", "I", nullptr, $STATIC | $FINAL, $constField(EarlyTimeout, THREADS_COUNT)},
		{"TIMEOUT", "I", nullptr, $STATIC | $FINAL, $constField(EarlyTimeout, TIMEOUT)},
		{"referent", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(EarlyTimeout, referent)},
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(EarlyTimeout, queue)},
		{"weakReference", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(EarlyTimeout, weakReference)},
		{"startedSignal", "Ljava/util/concurrent/CountDownLatch;", nullptr, $STATIC | $FINAL, $staticField(EarlyTimeout, startedSignal)},
		{"actual", "J", nullptr, 0, $field(EarlyTimeout, actual)},
		{"reference", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<*>;", 0, $field(EarlyTimeout, reference)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EarlyTimeout, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EarlyTimeout, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(EarlyTimeout, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EarlyTimeout",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EarlyTimeout, name, initialize, &classInfo$$, EarlyTimeout::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(EarlyTimeout);
	});
	return class$;
}

$Class* EarlyTimeout::class$ = nullptr;