#include <ReferenceEnqueuePending.h>
#include <ReferenceEnqueuePending$NumberedWeakReference.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runtime.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

#undef MAX_PRIORITY

using $ReferenceEnqueuePending$NumberedWeakReference = ::ReferenceEnqueuePending$NumberedWeakReference;
using $ReferenceEnqueuePending$NumberedWeakReferenceArray = $Array<ReferenceEnqueuePending$NumberedWeakReference>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

bool ReferenceEnqueuePending::debug = false;
$ints* ReferenceEnqueuePending::a = nullptr;
$ReferenceEnqueuePending$NumberedWeakReferenceArray* ReferenceEnqueuePending::b = nullptr;

void ReferenceEnqueuePending::init$() {
}

void ReferenceEnqueuePending::main($StringArray* argv) {
	$init(ReferenceEnqueuePending);
	$useLocalObjectStack();
	if (ReferenceEnqueuePending::debug) {
		$nc($System::out)->println("Starting the test."_s);
	}
	raisePriority();
	$var($ReferenceQueue, refQueue, $new($ReferenceQueue));
	$var($Integer, obj, $new($Integer, 0));
	$var($ReferenceEnqueuePending$NumberedWeakReference, weaky, $new($ReferenceEnqueuePending$NumberedWeakReference, obj, refQueue, 0));
	for (int32_t i = 1; i < ReferenceEnqueuePending::iterations; ++i) {
		$assign(obj, $new($Integer, i));
		if (($mod(i, ReferenceEnqueuePending::gc_trigger)) == 0) {
			forceGc(0);
		}
		if ((i % 2) == 0) {
			weaky->enqueue();
		}
		$nc(ReferenceEnqueuePending::b)->set(i - 1, weaky);
		$assign(weaky, $new($ReferenceEnqueuePending$NumberedWeakReference, obj, refQueue, i));
	}
	forceGc(100);
	forceGc(100);
	checkResult(refQueue, ReferenceEnqueuePending::iterations - 1);
	$Reference::reachabilityFence(weaky);
	$Reference::reachabilityFence(obj);
	$nc($System::out)->println("Test passed."_s);
}

$ReferenceEnqueuePending$NumberedWeakReference* ReferenceEnqueuePending::waitForReference($ReferenceQueue* queue) {
	$init(ReferenceEnqueuePending);
	try {
		return $cast($ReferenceEnqueuePending$NumberedWeakReference, $nc(queue)->remove(30000));
	} catch ($InterruptedException& ie) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void ReferenceEnqueuePending::checkResult($ReferenceQueue* queue, int32_t expected) {
	$init(ReferenceEnqueuePending);
	$useLocalObjectStack();
	if (ReferenceEnqueuePending::debug) {
		$nc($System::out)->println("Reading the queue"_s);
	}
	$var($ReferenceEnqueuePending$NumberedWeakReference, weakRead, waitForReference(queue));
	int32_t length = 0;
	while (weakRead != nullptr) {
		$nc(ReferenceEnqueuePending::a)->set(length++, weakRead->number);
		if (length < expected) {
			$assign(weakRead, waitForReference(queue));
		} else {
			$assign(weakRead, $cast($ReferenceEnqueuePending$NumberedWeakReference, $nc(queue)->poll()));
		}
	}
	if (ReferenceEnqueuePending::debug) {
		$nc($System::out)->println($$str({"Reference Queue had "_s, $$str(length), " elements"_s}));
	}
	if (ReferenceEnqueuePending::debug) {
		$nc($System::out)->println("Start of final check"_s);
	}
	sort(length);
	bool fail = (length != expected);
	for (int32_t i = 0; i < length; ++i) {
		if ($nc(ReferenceEnqueuePending::a)->get(i) != i) {
			if (ReferenceEnqueuePending::debug) {
				$nc($System::out)->println($$str({"a["_s, $$str(i), "] is not "_s, $$str(i), " but "_s, $$str(ReferenceEnqueuePending::a->get(i))}));
			}
			fail = true;
		}
	}
	if (fail) {
		printMissingElements(length, expected);
		$throwNew($RuntimeException, $$str({"TEST FAILED: only "_s, $$str(length), " reference objects have been queued out of "_s, $$str(expected)}));
	}
}

void ReferenceEnqueuePending::printMissingElements(int32_t length, int32_t expected) {
	$init(ReferenceEnqueuePending);
	$useLocalObjectStack();
	$nc($System::out)->println("The following numbers were not found in the reference queue: "_s);
	int32_t missing = 0;
	int32_t element = 0;
	for (int32_t i = 0; i < length; ++i) {
		while (($nc(ReferenceEnqueuePending::a)->get(i) != element) & (element < expected)) {
			$System::out->print($$str({$$str(element), " "_s}));
			if (missing % 20 == 19) {
				$System::out->println(" "_s);
			}
			++missing;
			++element;
		}
		++element;
	}
	$System::out->print("\n"_s);
}

void ReferenceEnqueuePending::forceGc(int64_t millis) {
	$init(ReferenceEnqueuePending);
	$$nc($Runtime::getRuntime())->gc();
	$Thread::sleep(millis);
}

void ReferenceEnqueuePending::sort(int32_t length) {
	$init(ReferenceEnqueuePending);
	$useLocalObjectStack();
	int32_t hold = 0;
	if (ReferenceEnqueuePending::debug) {
		$nc($System::out)->println($$str({"Sorting. Length="_s, $$str(length)}));
	}
	for (int32_t pass = 1; pass < length; ++pass) {
		for (int32_t i = 0; i < length - pass; ++i) {
			if ($nc(ReferenceEnqueuePending::a)->get(i) > $nc(ReferenceEnqueuePending::a)->get(i + 1)) {
				hold = ReferenceEnqueuePending::a->get(i);
				ReferenceEnqueuePending::a->set(i, ReferenceEnqueuePending::a->get(i + 1));
				ReferenceEnqueuePending::a->set(i + 1, hold);
			}
		}
	}
}

void ReferenceEnqueuePending::raisePriority() {
	$init(ReferenceEnqueuePending);
	$var($Thread, tr, $Thread::currentThread());
	tr->setPriority($Thread::MAX_PRIORITY);
}

void ReferenceEnqueuePending::clinit$($Class* clazz) {
	ReferenceEnqueuePending::debug = $System::getProperty("test.debug"_s) != nullptr;
	$assignStatic(ReferenceEnqueuePending::a, $new($ints, 2 * ReferenceEnqueuePending::iterations));
	$assignStatic(ReferenceEnqueuePending::b, $new($ReferenceEnqueuePending$NumberedWeakReferenceArray, ReferenceEnqueuePending::iterations));
}

ReferenceEnqueuePending::ReferenceEnqueuePending() {
}

$Class* ReferenceEnqueuePending::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Z", nullptr, $STATIC | $FINAL, $staticField(ReferenceEnqueuePending, debug)},
		{"iterations", "I", nullptr, $STATIC | $FINAL, $constField(ReferenceEnqueuePending, iterations)},
		{"gc_trigger", "I", nullptr, $STATIC | $FINAL, $constField(ReferenceEnqueuePending, gc_trigger)},
		{"a", "[I", nullptr, $STATIC, $staticField(ReferenceEnqueuePending, a)},
		{"b", "[LReferenceEnqueuePending$NumberedWeakReference;", nullptr, $STATIC, $staticField(ReferenceEnqueuePending, b)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReferenceEnqueuePending, init$, void)},
		{"checkResult", "(Ljava/lang/ref/ReferenceQueue;I)V", "(Ljava/lang/ref/ReferenceQueue<Ljava/lang/Integer;>;I)V", $PRIVATE | $STATIC, $staticMethod(ReferenceEnqueuePending, checkResult, void, $ReferenceQueue*, int32_t)},
		{"forceGc", "(J)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReferenceEnqueuePending, forceGc, void, int64_t), "java.lang.InterruptedException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReferenceEnqueuePending, main, void, $StringArray*), "java.lang.Exception"},
		{"printMissingElements", "(II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReferenceEnqueuePending, printMissingElements, void, int32_t, int32_t)},
		{"raisePriority", "()V", nullptr, $STATIC, $staticMethod(ReferenceEnqueuePending, raisePriority, void)},
		{"sort", "(I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReferenceEnqueuePending, sort, void, int32_t)},
		{"waitForReference", "(Ljava/lang/ref/ReferenceQueue;)LReferenceEnqueuePending$NumberedWeakReference;", "(Ljava/lang/ref/ReferenceQueue<Ljava/lang/Integer;>;)LReferenceEnqueuePending$NumberedWeakReference;", $PRIVATE | $STATIC, $staticMethod(ReferenceEnqueuePending, waitForReference, $ReferenceEnqueuePending$NumberedWeakReference*, $ReferenceQueue*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReferenceEnqueuePending$NumberedWeakReference", "ReferenceEnqueuePending", "NumberedWeakReference", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReferenceEnqueuePending",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ReferenceEnqueuePending$NumberedWeakReference"
	};
	$loadClass(ReferenceEnqueuePending, name, initialize, &classInfo$$, ReferenceEnqueuePending::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceEnqueuePending);
	});
	return class$;
}

$Class* ReferenceEnqueuePending::class$ = nullptr;