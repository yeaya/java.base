#include <DirectBufferAllocTest.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Runtime.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CAPACITY
#undef MAX_THREADS
#undef MIN_THREADS
#undef RUN_TIME_SECONDS

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Collectors = ::java::util::stream::Collectors;
using $IntStream = ::java::util::stream::IntStream;

class DirectBufferAllocTest$$Lambda$lambda$main$1 : public $IntFunction {
	$class(DirectBufferAllocTest$$Lambda$lambda$main$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$(int32_t pbs, int32_t cap) {
		this->pbs = pbs;
		this->cap = cap;
	}
	virtual $Object* apply(int32_t i) override {
		 return DirectBufferAllocTest::lambda$main$1(pbs, cap, i);
	}
	int32_t pbs = 0;
	int32_t cap = 0;
};
$Class* DirectBufferAllocTest$$Lambda$lambda$main$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pbs", "I", nullptr, $PUBLIC, $field(DirectBufferAllocTest$$Lambda$lambda$main$1, pbs)},
		{"cap", "I", nullptr, $PUBLIC, $field(DirectBufferAllocTest$$Lambda$lambda$main$1, cap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(DirectBufferAllocTest$$Lambda$lambda$main$1, init$, void, int32_t, int32_t)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DirectBufferAllocTest$$Lambda$lambda$main$1, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DirectBufferAllocTest$$Lambda$lambda$main$1",
		"java.lang.Object",
		"java.util.function.IntFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DirectBufferAllocTest$$Lambda$lambda$main$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectBufferAllocTest$$Lambda$lambda$main$1);
	});
	return class$;
}
$Class* DirectBufferAllocTest$$Lambda$lambda$main$1::class$ = nullptr;

class DirectBufferAllocTest$$Lambda$submit$1 : public $Function {
	$class(DirectBufferAllocTest$$Lambda$submit$1, $NO_CLASS_INIT, $Function)
public:
	void init$($ExecutorService* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $nc(inst$)->submit($cast($Callable, arg0));
	}
	$ExecutorService* inst$ = nullptr;
};
$Class* DirectBufferAllocTest$$Lambda$submit$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DirectBufferAllocTest$$Lambda$submit$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ExecutorService;)V", nullptr, $PUBLIC, $method(DirectBufferAllocTest$$Lambda$submit$1, init$, void, $ExecutorService*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DirectBufferAllocTest$$Lambda$submit$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DirectBufferAllocTest$$Lambda$submit$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DirectBufferAllocTest$$Lambda$submit$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectBufferAllocTest$$Lambda$submit$1);
	});
	return class$;
}
$Class* DirectBufferAllocTest$$Lambda$submit$1::class$ = nullptr;

class DirectBufferAllocTest$$Lambda$isDone$2 : public $Predicate {
	$class(DirectBufferAllocTest$$Lambda$isDone$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($Future, inst$)->isDone();
	}
};
$Class* DirectBufferAllocTest$$Lambda$isDone$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DirectBufferAllocTest$$Lambda$isDone$2, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DirectBufferAllocTest$$Lambda$isDone$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DirectBufferAllocTest$$Lambda$isDone$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(DirectBufferAllocTest$$Lambda$isDone$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectBufferAllocTest$$Lambda$isDone$2);
	});
	return class$;
}
$Class* DirectBufferAllocTest$$Lambda$isDone$2::class$ = nullptr;

class DirectBufferAllocTest$$Lambda$lambda$main$0$3 : public $Callable {
	$class(DirectBufferAllocTest$$Lambda$lambda$main$0$3, $NO_CLASS_INIT, $Callable)
public:
	void init$(int32_t pbs, int32_t cap, int32_t i) {
		this->pbs = pbs;
		this->cap = cap;
		this->i = i;
	}
	virtual $Object* call() override {
		 return DirectBufferAllocTest::lambda$main$0(pbs, cap, i);
	}
	int32_t pbs = 0;
	int32_t cap = 0;
	int32_t i = 0;
};
$Class* DirectBufferAllocTest$$Lambda$lambda$main$0$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pbs", "I", nullptr, $PUBLIC, $field(DirectBufferAllocTest$$Lambda$lambda$main$0$3, pbs)},
		{"cap", "I", nullptr, $PUBLIC, $field(DirectBufferAllocTest$$Lambda$lambda$main$0$3, cap)},
		{"i", "I", nullptr, $PUBLIC, $field(DirectBufferAllocTest$$Lambda$lambda$main$0$3, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(III)V", nullptr, $PUBLIC, $method(DirectBufferAllocTest$$Lambda$lambda$main$0$3, init$, void, int32_t, int32_t, int32_t)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DirectBufferAllocTest$$Lambda$lambda$main$0$3, call, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DirectBufferAllocTest$$Lambda$lambda$main$0$3",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DirectBufferAllocTest$$Lambda$lambda$main$0$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectBufferAllocTest$$Lambda$lambda$main$0$3);
	});
	return class$;
}
$Class* DirectBufferAllocTest$$Lambda$lambda$main$0$3::class$ = nullptr;

void DirectBufferAllocTest::init$() {
}

void DirectBufferAllocTest::main($StringArray* args) {
	$useLocalObjectStack();
	int32_t runTimeSeconds = DirectBufferAllocTest::RUN_TIME_SECONDS;
	int32_t threads = $Math::max($Math::min($$nc($Runtime::getRuntime())->availableProcessors() * 2, DirectBufferAllocTest::MAX_THREADS), DirectBufferAllocTest::MIN_THREADS);
	int32_t capacity = DirectBufferAllocTest::CAPACITY;
	int32_t printBatchSize = 0;
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		{
			$var($String, s3085$, args->get(i));
			int32_t tmp3085$ = -1;
			switch ($nc(s3085$)->hashCode()) {
			case 1509:
				if (s3085$->equals("-r"_s)) {
					tmp3085$ = 0;
				}
				break;
			case 1511:
				if (s3085$->equals("-t"_s)) {
					tmp3085$ = 1;
				}
				break;
			case 1494:
				if (s3085$->equals("-c"_s)) {
					tmp3085$ = 2;
				}
				break;
			case 1507:
				if (s3085$->equals("-p"_s)) {
					tmp3085$ = 3;
				}
				break;
			}
			switch (tmp3085$) {
			case 0:
				runTimeSeconds = $Integer::parseInt(args->get(++i));
				break;
			case 1:
				threads = $Integer::parseInt(args->get(++i));
				break;
			case 2:
				capacity = $Integer::parseInt(args->get(++i));
				break;
			case 3:
				printBatchSize = $Integer::parseInt(args->get(++i));
				break;
			default:
				$nc($System::err)->println("Usage: java [-XX:MaxDirectMemorySize=XXXm] DirectBufferAllocTest [-r run-time-seconds] [-t threads] [-c capacity-of-direct-buffers] [-p print-alloc-time-batch-size]"_s);
				$System::exit(-1);
			}
		}
	}
	$nc($System::out)->printf("Allocating direct ByteBuffers with capacity %d bytes, using %d threads for %d seconds...\n"_s, $$new($ObjectArray, {
		$($Integer::valueOf(capacity)),
		$($Integer::valueOf(threads)),
		$($Integer::valueOf(runTimeSeconds))
	}));
	$var($ExecutorService, executor, $Executors::newFixedThreadPool(threads));
	int32_t pbs = printBatchSize;
	int32_t cap = capacity;
	$var($List, futures, $cast($List, $$nc($$nc($$nc($IntStream::range(0, threads))->mapToObj($$new(DirectBufferAllocTest$$Lambda$lambda$main$1, pbs, cap)))->map($$new(DirectBufferAllocTest$$Lambda$submit$1, $nc(executor))))->collect($($Collectors::toList()))));
	for (int32_t i = 0; i < runTimeSeconds; ++i) {
		if ($$nc($nc(futures)->stream())->anyMatch($$new(DirectBufferAllocTest$$Lambda$isDone$2))) {
			break;
		}
		$Thread::sleep(1000);
	}
	$var($Exception, exception, nullptr);
	{
		$var($Iterator, i$, $nc(futures)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Future, future, $cast($Future, i$->next()));
			if ($nc(future)->isDone()) {
				try {
					future->get();
				} catch ($ExecutionException& e) {
					if (exception == nullptr) {
						$assign(exception, $new($RuntimeException, "Errors encountered!"_s));
					}
					$nc(exception)->addSuppressed($(e->getCause()));
				}
			} else {
				future->cancel(true);
			}
		}
	}
	executor->shutdown();
	if (exception != nullptr) {
		$throw(exception);
	} else {
		$System::out->printf("No errors after %d seconds.\n"_s, $$new($ObjectArray, {$($Integer::valueOf(runTimeSeconds))}));
	}
}

$Callable* DirectBufferAllocTest::lambda$main$1(int32_t pbs, int32_t cap, int32_t i) {
	return $cast($Callable, $new(DirectBufferAllocTest$$Lambda$lambda$main$0$3, pbs, cap, i));
}

$Void* DirectBufferAllocTest::lambda$main$0(int32_t pbs, int32_t cap, int32_t i) {
	$useLocalObjectStack();
	int64_t t0 = $System::nanoTime();
	bool loop$break = false;
	while (true) {
		for (int32_t n = 0; pbs == 0 || n < pbs; ++n) {
			if ($Thread::interrupted()) {
				loop$break = true;
				break;
			}
			$ByteBuffer::allocateDirect(cap);
		}
		if (loop$break) {
			break;
		}
		int64_t t1 = $System::nanoTime();
		if (pbs > 0) {
			$nc($System::out)->printf("Thread %2d: %5.2f ms/allocation\n"_s, $$new($ObjectArray, {
				$($Integer::valueOf(i)),
				$($Double::valueOf(((double)(t1 - t0) / (1000000.0 * pbs))))
			}));
		}
		t0 = t1;
	}
	return nullptr;
}

DirectBufferAllocTest::DirectBufferAllocTest() {
}

$Class* DirectBufferAllocTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DirectBufferAllocTest$$Lambda$lambda$main$1")) {
			return DirectBufferAllocTest$$Lambda$lambda$main$1::load$(name, initialize);
		}
		if (name->equals("DirectBufferAllocTest$$Lambda$submit$1")) {
			return DirectBufferAllocTest$$Lambda$submit$1::load$(name, initialize);
		}
		if (name->equals("DirectBufferAllocTest$$Lambda$isDone$2")) {
			return DirectBufferAllocTest$$Lambda$isDone$2::load$(name, initialize);
		}
		if (name->equals("DirectBufferAllocTest$$Lambda$lambda$main$0$3")) {
			return DirectBufferAllocTest$$Lambda$lambda$main$0$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"RUN_TIME_SECONDS", "I", nullptr, $STATIC | $FINAL, $constField(DirectBufferAllocTest, RUN_TIME_SECONDS)},
		{"MIN_THREADS", "I", nullptr, $STATIC | $FINAL, $constField(DirectBufferAllocTest, MIN_THREADS)},
		{"MAX_THREADS", "I", nullptr, $STATIC | $FINAL, $constField(DirectBufferAllocTest, MAX_THREADS)},
		{"CAPACITY", "I", nullptr, $STATIC | $FINAL, $constField(DirectBufferAllocTest, CAPACITY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DirectBufferAllocTest, init$, void)},
		{"lambda$main$0", "(III)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DirectBufferAllocTest, lambda$main$0, $Void*, int32_t, int32_t, int32_t), "java.lang.Exception"},
		{"lambda$main$1", "(III)Ljava/util/concurrent/Callable;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DirectBufferAllocTest, lambda$main$1, $Callable*, int32_t, int32_t, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DirectBufferAllocTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DirectBufferAllocTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DirectBufferAllocTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectBufferAllocTest);
	});
	return class$;
}

$Class* DirectBufferAllocTest::class$ = nullptr;