#include <java/util/concurrent/CountedCompleter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ForkJoinPool$WorkQueue.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/ForkJoinWorkerThread.h>
#include <jcpp.h>

#undef PENDING
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$WorkQueue = ::java::util::concurrent::ForkJoinPool$WorkQueue;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $ForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CountedCompleter_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CountedCompleter, serialVersionUID)},
	{"completer", "Ljava/util/concurrent/CountedCompleter;", "Ljava/util/concurrent/CountedCompleter<*>;", $FINAL, $field(CountedCompleter, completer)},
	{"pending", "I", nullptr, $VOLATILE, $field(CountedCompleter, pending)},
	{"PENDING", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CountedCompleter, PENDING)},
	{}
};

$MethodInfo _CountedCompleter_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountedCompleter;I)V", "(Ljava/util/concurrent/CountedCompleter<*>;I)V", $PROTECTED, $method(static_cast<void(CountedCompleter::*)(CountedCompleter*,int32_t)>(&CountedCompleter::init$))},
	{"<init>", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PROTECTED, $method(static_cast<void(CountedCompleter::*)(CountedCompleter*)>(&CountedCompleter::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(CountedCompleter::*)()>(&CountedCompleter::init$))},
	{"addToPendingCount", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CountedCompleter::*)(int32_t)>(&CountedCompleter::addToPendingCount))},
	{"compareAndSetPendingCount", "(II)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(CountedCompleter::*)(int32_t,int32_t)>(&CountedCompleter::compareAndSetPendingCount))},
	{"complete", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"compute", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"decrementPendingCountUnlessZero", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(CountedCompleter::*)()>(&CountedCompleter::decrementPendingCountUnlessZero))},
	{"exec", "()Z", nullptr, $PROTECTED | $FINAL},
	{"firstComplete", "()Ljava/util/concurrent/CountedCompleter;", "()Ljava/util/concurrent/CountedCompleter<*>;", $PUBLIC | $FINAL, $method(static_cast<CountedCompleter*(CountedCompleter::*)()>(&CountedCompleter::firstComplete))},
	{"getCompleter", "()Ljava/util/concurrent/CountedCompleter;", "()Ljava/util/concurrent/CountedCompleter<*>;", $PUBLIC | $FINAL, $method(static_cast<CountedCompleter*(CountedCompleter::*)()>(&CountedCompleter::getCompleter))},
	{"getPendingCount", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(CountedCompleter::*)()>(&CountedCompleter::getPendingCount))},
	{"getRawResult", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"getRoot", "()Ljava/util/concurrent/CountedCompleter;", "()Ljava/util/concurrent/CountedCompleter<*>;", $PUBLIC | $FINAL, $method(static_cast<CountedCompleter*(CountedCompleter::*)()>(&CountedCompleter::getRoot))},
	{"helpComplete", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CountedCompleter::*)(int32_t)>(&CountedCompleter::helpComplete))},
	{"nextComplete", "()Ljava/util/concurrent/CountedCompleter;", "()Ljava/util/concurrent/CountedCompleter<*>;", $PUBLIC | $FINAL, $method(static_cast<CountedCompleter*(CountedCompleter::*)()>(&CountedCompleter::nextComplete))},
	{"onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PUBLIC},
	{"onExceptionalCompletion", "(Ljava/lang/Throwable;Ljava/util/concurrent/CountedCompleter;)Z", "(Ljava/lang/Throwable;Ljava/util/concurrent/CountedCompleter<*>;)Z", $PUBLIC},
	{"propagateCompletion", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CountedCompleter::*)()>(&CountedCompleter::propagateCompletion))},
	{"quietlyCompleteRoot", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CountedCompleter::*)()>(&CountedCompleter::quietlyCompleteRoot))},
	{"setPendingCount", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CountedCompleter::*)(int32_t)>(&CountedCompleter::setPendingCount))},
	{"setRawResult", "(Ljava/lang/Object;)V", "(TT;)V", $PROTECTED},
	{"tryComplete", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CountedCompleter::*)()>(&CountedCompleter::tryComplete))},
	{"trySetException", "(Ljava/lang/Throwable;)I", nullptr, $FINAL},
	{"weakCompareAndSetPendingCount", "(II)Z", nullptr, $FINAL, $method(static_cast<bool(CountedCompleter::*)(int32_t,int32_t)>(&CountedCompleter::weakCompareAndSetPendingCount))},
	{}
};

$ClassInfo _CountedCompleter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.CountedCompleter",
	"java.util.concurrent.ForkJoinTask",
	nullptr,
	_CountedCompleter_FieldInfo_,
	_CountedCompleter_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/ForkJoinTask<TT;>;"
};

$Object* allocate$CountedCompleter($Class* clazz) {
	return $of($alloc(CountedCompleter));
}

$VarHandle* CountedCompleter::PENDING = nullptr;

void CountedCompleter::init$(CountedCompleter* completer, int32_t initialPendingCount) {
	$ForkJoinTask::init$();
	$set(this, completer, completer);
	this->pending = initialPendingCount;
}

void CountedCompleter::init$(CountedCompleter* completer) {
	$ForkJoinTask::init$();
	$set(this, completer, completer);
}

void CountedCompleter::init$() {
	$ForkJoinTask::init$();
	$set(this, completer, nullptr);
}

void CountedCompleter::onCompletion(CountedCompleter* caller) {
}

bool CountedCompleter::onExceptionalCompletion($Throwable* ex, CountedCompleter* caller) {
	return true;
}

CountedCompleter* CountedCompleter::getCompleter() {
	return this->completer;
}

int32_t CountedCompleter::getPendingCount() {
	return this->pending;
}

void CountedCompleter::setPendingCount(int32_t count) {
	this->pending = count;
}

void CountedCompleter::addToPendingCount(int32_t delta) {
	$nc(CountedCompleter::PENDING)->getAndAdd($$new($ObjectArray, {$of(this), $$of(delta)}));
}

bool CountedCompleter::compareAndSetPendingCount(int32_t expected, int32_t count) {
	return $nc(CountedCompleter::PENDING)->compareAndSet($$new($ObjectArray, {$of(this), $$of(expected), $$of(count)}));
}

bool CountedCompleter::weakCompareAndSetPendingCount(int32_t expected, int32_t count) {
	return $nc(CountedCompleter::PENDING)->weakCompareAndSet($$new($ObjectArray, {$of(this), $$of(expected), $$of(count)}));
}

int32_t CountedCompleter::decrementPendingCountUnlessZero() {
	int32_t c = 0;
	bool var$0 = false;
	do {
		var$0 = (c = this->pending) != 0;
	} while (var$0 && !weakCompareAndSetPendingCount(c, c - 1));
	return c;
}

CountedCompleter* CountedCompleter::getRoot() {
	$var(CountedCompleter, a, this);
	$var(CountedCompleter, p, nullptr);
	while (($assign(p, $nc(a)->completer)) != nullptr) {
		$assign(a, p);
	}
	return a;
}

void CountedCompleter::tryComplete() {
	$var(CountedCompleter, a, this);
	$var(CountedCompleter, s, a);
	for (int32_t c = 0;;) {
		if ((c = a->pending) == 0) {
			a->onCompletion(s);
			if (($assign(a, $nc(($assign(s, a)))->completer)) == nullptr) {
				s->quietlyComplete();
				return;
			}
		} else if ($nc(a)->weakCompareAndSetPendingCount(c, c - 1)) {
			return;
		}
	}
}

void CountedCompleter::propagateCompletion() {
	$var(CountedCompleter, a, this);
	$var(CountedCompleter, s, nullptr);
	for (int32_t c = 0;;) {
		if ((c = a->pending) == 0) {
			if (($assign(a, $nc(($assign(s, a)))->completer)) == nullptr) {
				s->quietlyComplete();
				return;
			}
		} else if ($nc(a)->weakCompareAndSetPendingCount(c, c - 1)) {
			return;
		}
	}
}

void CountedCompleter::complete(Object$* rawResult) {
	$var(CountedCompleter, p, nullptr);
	setRawResult(rawResult);
	onCompletion(this);
	quietlyComplete();
	if (($assign(p, this->completer)) != nullptr) {
		$nc(p)->tryComplete();
	}
}

CountedCompleter* CountedCompleter::firstComplete() {
	for (int32_t c = 0;;) {
		if ((c = this->pending) == 0) {
			return this;
		} else if (weakCompareAndSetPendingCount(c, c - 1)) {
			return nullptr;
		}
	}
}

CountedCompleter* CountedCompleter::nextComplete() {
	$var(CountedCompleter, p, nullptr);
	if (($assign(p, this->completer)) != nullptr) {
		return $nc(p)->firstComplete();
	} else {
		quietlyComplete();
		return nullptr;
	}
}

void CountedCompleter::quietlyCompleteRoot() {
	{
		$var(CountedCompleter, a, this);
		$var(CountedCompleter, p, nullptr);
		for (;;) {
			if (($assign(p, a->completer)) == nullptr) {
				a->quietlyComplete();
				return;
			}
			$assign(a, p);
		}
	}
}

void CountedCompleter::helpComplete(int32_t maxTasks) {
	$var($ForkJoinPool$WorkQueue, q, nullptr);
	$var($Thread, t, nullptr);
	bool owned = false;
	if (owned = $instanceOf($ForkJoinWorkerThread, $assign(t, $Thread::currentThread()))) {
		$assign(q, $nc(($cast($ForkJoinWorkerThread, t)))->workQueue);
	} else {
		$assign(q, $ForkJoinPool::commonQueue());
	}
	if (q != nullptr && maxTasks > 0) {
		q->helpComplete(this, owned, maxTasks);
	}
}

int32_t CountedCompleter::trySetException($Throwable* ex) {
	$var(CountedCompleter, a, this);
	$var(CountedCompleter, p, a);
	bool var$0 = false;
	do {
		bool var$1 = isExceptionalStatus(a->trySetThrown(ex));
		var$0 = var$1 && a->onExceptionalCompletion(ex, p);
	} while (var$0 && ($assign(a, $nc(($assign(p, a)))->completer)) != nullptr && a->status >= 0);
	return this->status;
}

bool CountedCompleter::exec() {
	compute();
	return false;
}

$Object* CountedCompleter::getRawResult() {
	return $of(nullptr);
}

void CountedCompleter::setRawResult(Object$* t) {
}

void clinit$CountedCompleter($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$init($Integer);
			$assignStatic(CountedCompleter::PENDING, $nc(l)->findVarHandle(CountedCompleter::class$, "pending"_s, $Integer::TYPE));
		} catch ($ReflectiveOperationException&) {
			$var($ReflectiveOperationException, e, $catch());
			$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(e));
		}
	}
}

CountedCompleter::CountedCompleter() {
}

$Class* CountedCompleter::load$($String* name, bool initialize) {
	$loadClass(CountedCompleter, name, initialize, &_CountedCompleter_ClassInfo_, clinit$CountedCompleter, allocate$CountedCompleter);
	return class$;
}

$Class* CountedCompleter::class$ = nullptr;

		} // concurrent
	} // util
} // java