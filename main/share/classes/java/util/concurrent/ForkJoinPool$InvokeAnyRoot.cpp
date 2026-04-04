#include <java/util/concurrent/ForkJoinPool$InvokeAnyRoot.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/CancellationException.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $CancellationException = ::java::util::concurrent::CancellationException;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

namespace java {
	namespace util {
		namespace concurrent {

void ForkJoinPool$InvokeAnyRoot::init$(int32_t n, $ForkJoinPool* p) {
	$ForkJoinTask::init$();
	$set(this, pool, p);
	$set(this, count, $new($AtomicInteger, n));
}

void ForkJoinPool$InvokeAnyRoot::tryComplete($Callable* c) {
	$useLocalObjectStack();
	$var($Throwable, ex, nullptr);
	bool failed = false;
	if (c == nullptr || $Thread::interrupted() || (this->pool != nullptr && this->pool->mode < 0)) {
		failed = true;
	} else if (isDone()) {
		failed = false;
	} else {
		try {
			complete($(c->call()));
			failed = false;
		} catch ($Throwable& tx) {
			$assign(ex, tx);
			failed = true;
		}
	}
	if ((this->pool != nullptr && this->pool->mode < 0) || (failed && this->count->getAndDecrement() <= 1)) {
		trySetThrown(ex != nullptr ? ex : $$cast($Throwable, $new($CancellationException)));
	}
}

bool ForkJoinPool$InvokeAnyRoot::exec() {
	return false;
}

$Object* ForkJoinPool$InvokeAnyRoot::getRawResult() {
	return this->result;
}

void ForkJoinPool$InvokeAnyRoot::setRawResult(Object$* v) {
	$set(this, result, v);
}

ForkJoinPool$InvokeAnyRoot::ForkJoinPool$InvokeAnyRoot() {
}

$Class* ForkJoinPool$InvokeAnyRoot::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ForkJoinPool$InvokeAnyRoot, serialVersionUID)},
		{"result", "Ljava/lang/Object;", "TE;", $VOLATILE, $field(ForkJoinPool$InvokeAnyRoot, result)},
		{"count", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL, $field(ForkJoinPool$InvokeAnyRoot, count)},
		{"pool", "Ljava/util/concurrent/ForkJoinPool;", nullptr, $FINAL, $field(ForkJoinPool$InvokeAnyRoot, pool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/util/concurrent/ForkJoinPool;)V", nullptr, 0, $method(ForkJoinPool$InvokeAnyRoot, init$, void, int32_t, $ForkJoinPool*)},
		{"exec", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinPool$InvokeAnyRoot, exec, bool)},
		{"getRawResult", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $FINAL, $virtualMethod(ForkJoinPool$InvokeAnyRoot, getRawResult, $Object*)},
		{"setRawResult", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $FINAL, $virtualMethod(ForkJoinPool$InvokeAnyRoot, setRawResult, void, Object$*)},
		{"tryComplete", "(Ljava/util/concurrent/Callable;)V", "(Ljava/util/concurrent/Callable<TE;>;)V", $FINAL, $method(ForkJoinPool$InvokeAnyRoot, tryComplete, void, $Callable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ForkJoinPool$InvokeAnyRoot", "java.util.concurrent.ForkJoinPool", "InvokeAnyRoot", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ForkJoinPool$InvokeAnyRoot",
		"java.util.concurrent.ForkJoinTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/util/concurrent/ForkJoinTask<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ForkJoinPool"
	};
	$loadClass(ForkJoinPool$InvokeAnyRoot, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ForkJoinPool$InvokeAnyRoot));
	});
	return class$;
}

$Class* ForkJoinPool$InvokeAnyRoot::class$ = nullptr;

		} // concurrent
	} // util
} // java