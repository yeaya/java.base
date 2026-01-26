#include <java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue.h>

#include <java/lang/Runnable.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/Delayed.h>
#include <java/util/concurrent/RunnableScheduledFuture.h>
#include <java/util/concurrent/ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr.h>
#include <java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask.h>
#include <java/util/concurrent/ScheduledThreadPoolExecutor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef INITIAL_CAPACITY
#undef MAX_VALUE
#undef NANOSECONDS

using $RunnableScheduledFutureArray = $Array<::java::util::concurrent::RunnableScheduledFuture>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $RunnableScheduledFuture = ::java::util::concurrent::RunnableScheduledFuture;
using $ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr = ::java::util::concurrent::ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr;
using $ScheduledThreadPoolExecutor$ScheduledFutureTask = ::java::util::concurrent::ScheduledThreadPoolExecutor$ScheduledFutureTask;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Condition = ::java::util::concurrent::locks::Condition;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ScheduledThreadPoolExecutor$DelayedWorkQueue_FieldInfo_[] = {
	{"INITIAL_CAPACITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScheduledThreadPoolExecutor$DelayedWorkQueue, INITIAL_CAPACITY)},
	{"queue", "[Ljava/util/concurrent/RunnableScheduledFuture;", "[Ljava/util/concurrent/RunnableScheduledFuture<*>;", $PRIVATE, $field(ScheduledThreadPoolExecutor$DelayedWorkQueue, queue)},
	{"lock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(ScheduledThreadPoolExecutor$DelayedWorkQueue, lock)},
	{"size", "I", nullptr, $PRIVATE, $field(ScheduledThreadPoolExecutor$DelayedWorkQueue, size$)},
	{"leader", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(ScheduledThreadPoolExecutor$DelayedWorkQueue, leader)},
	{"available", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(ScheduledThreadPoolExecutor$DelayedWorkQueue, available)},
	{}
};

$MethodInfo _ScheduledThreadPoolExecutor$DelayedWorkQueue_MethodInfo_[] = {
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*element", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, 0, $method(ScheduledThreadPoolExecutor$DelayedWorkQueue, init$, void)},
	{"add", "(Ljava/lang/Runnable;)Z", nullptr, $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, add, bool, $Runnable*)},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, add, bool, Object$*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, clear, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, contains, bool, Object$*)},
	{"drainTo", "(Ljava/util/Collection;)I", "(Ljava/util/Collection<-Ljava/lang/Runnable;>;)I", $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, drainTo, int32_t, $Collection*)},
	{"drainTo", "(Ljava/util/Collection;I)I", "(Ljava/util/Collection<-Ljava/lang/Runnable;>;I)I", $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, drainTo, int32_t, $Collection*, int32_t)},
	{"finishPoll", "(Ljava/util/concurrent/RunnableScheduledFuture;)Ljava/util/concurrent/RunnableScheduledFuture;", "(Ljava/util/concurrent/RunnableScheduledFuture<*>;)Ljava/util/concurrent/RunnableScheduledFuture<*>;", $PRIVATE, $method(ScheduledThreadPoolExecutor$DelayedWorkQueue, finishPoll, $RunnableScheduledFuture*, $RunnableScheduledFuture*)},
	{"grow", "()V", nullptr, $PRIVATE, $method(ScheduledThreadPoolExecutor$DelayedWorkQueue, grow, void)},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PRIVATE, $method(ScheduledThreadPoolExecutor$DelayedWorkQueue, indexOf, int32_t, Object$*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/Runnable;>;", $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, iterator, $Iterator*)},
	{"offer", "(Ljava/lang/Runnable;)Z", nullptr, $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, offer, bool, $Runnable*)},
	{"offer", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, offer, bool, $Runnable*, int64_t, $TimeUnit*)},
	{"offer", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, offer, bool, Object$*)},
	{"offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, offer, bool, Object$*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"peek", "()Ljava/util/concurrent/RunnableScheduledFuture;", "()Ljava/util/concurrent/RunnableScheduledFuture<*>;", $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, peek, $Object*)},
	{"poll", "()Ljava/util/concurrent/RunnableScheduledFuture;", "()Ljava/util/concurrent/RunnableScheduledFuture<*>;", $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, poll, $Object*)},
	{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/RunnableScheduledFuture;", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/RunnableScheduledFuture<*>;", $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, poll, $Object*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"put", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, put, void, $Runnable*)},
	{"put", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, put, void, Object$*), "java.lang.InterruptedException"},
	{"remainingCapacity", "()I", nullptr, $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, remainingCapacity, int32_t)},
	{"*remove", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, remove, bool, Object$*)},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"setIndex", "(Ljava/util/concurrent/RunnableScheduledFuture;I)V", "(Ljava/util/concurrent/RunnableScheduledFuture<*>;I)V", $PRIVATE | $STATIC, $staticMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, setIndex, void, $RunnableScheduledFuture*, int32_t)},
	{"siftDown", "(ILjava/util/concurrent/RunnableScheduledFuture;)V", "(ILjava/util/concurrent/RunnableScheduledFuture<*>;)V", $PRIVATE, $method(ScheduledThreadPoolExecutor$DelayedWorkQueue, siftDown, void, int32_t, $RunnableScheduledFuture*)},
	{"siftUp", "(ILjava/util/concurrent/RunnableScheduledFuture;)V", "(ILjava/util/concurrent/RunnableScheduledFuture<*>;)V", $PRIVATE, $method(ScheduledThreadPoolExecutor$DelayedWorkQueue, siftUp, void, int32_t, $RunnableScheduledFuture*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, size, int32_t)},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"take", "()Ljava/util/concurrent/RunnableScheduledFuture;", "()Ljava/util/concurrent/RunnableScheduledFuture<*>;", $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, take, $Object*), "java.lang.InterruptedException"},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(ScheduledThreadPoolExecutor$DelayedWorkQueue, toArray, $ObjectArray*, $ObjectArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ScheduledThreadPoolExecutor$DelayedWorkQueue_InnerClassesInfo_[] = {
	{"java.util.concurrent.ScheduledThreadPoolExecutor$DelayedWorkQueue", "java.util.concurrent.ScheduledThreadPoolExecutor", "DelayedWorkQueue", $STATIC},
	{"java.util.concurrent.ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr", "java.util.concurrent.ScheduledThreadPoolExecutor$DelayedWorkQueue", "Itr", $PRIVATE},
	{}
};

$ClassInfo _ScheduledThreadPoolExecutor$DelayedWorkQueue_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ScheduledThreadPoolExecutor$DelayedWorkQueue",
	"java.util.AbstractQueue",
	"java.util.concurrent.BlockingQueue",
	_ScheduledThreadPoolExecutor$DelayedWorkQueue_FieldInfo_,
	_ScheduledThreadPoolExecutor$DelayedWorkQueue_MethodInfo_,
	"Ljava/util/AbstractQueue<Ljava/lang/Runnable;>;Ljava/util/concurrent/BlockingQueue<Ljava/lang/Runnable;>;",
	nullptr,
	_ScheduledThreadPoolExecutor$DelayedWorkQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ScheduledThreadPoolExecutor"
};

$Object* allocate$ScheduledThreadPoolExecutor$DelayedWorkQueue($Class* clazz) {
	return $of($alloc(ScheduledThreadPoolExecutor$DelayedWorkQueue));
}

$Object* ScheduledThreadPoolExecutor$DelayedWorkQueue::remove() {
	 return this->$AbstractQueue::remove();
}

$Object* ScheduledThreadPoolExecutor$DelayedWorkQueue::element() {
	 return this->$AbstractQueue::element();
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::addAll($Collection* c) {
	 return this->$AbstractQueue::addAll(c);
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::containsAll($Collection* c) {
	 return this->$AbstractQueue::containsAll(c);
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::removeAll($Collection* c) {
	 return this->$AbstractQueue::removeAll(c);
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::retainAll($Collection* c) {
	 return this->$AbstractQueue::retainAll(c);
}

$String* ScheduledThreadPoolExecutor$DelayedWorkQueue::toString() {
	 return this->$AbstractQueue::toString();
}

$ObjectArray* ScheduledThreadPoolExecutor$DelayedWorkQueue::toArray($IntFunction* generator) {
	 return this->$AbstractQueue::toArray(generator);
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::removeIf($Predicate* filter) {
	 return this->$AbstractQueue::removeIf(filter);
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::equals(Object$* o) {
	 return this->$AbstractQueue::equals(o);
}

int32_t ScheduledThreadPoolExecutor$DelayedWorkQueue::hashCode() {
	 return this->$AbstractQueue::hashCode();
}

$Spliterator* ScheduledThreadPoolExecutor$DelayedWorkQueue::spliterator() {
	 return this->$AbstractQueue::spliterator();
}

$Stream* ScheduledThreadPoolExecutor$DelayedWorkQueue::stream() {
	 return this->$AbstractQueue::stream();
}

$Stream* ScheduledThreadPoolExecutor$DelayedWorkQueue::parallelStream() {
	 return this->$AbstractQueue::parallelStream();
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue::forEach($Consumer* action) {
	this->$AbstractQueue::forEach(action);
}

$Object* ScheduledThreadPoolExecutor$DelayedWorkQueue::clone() {
	 return this->$AbstractQueue::clone();
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue::finalize() {
	this->$AbstractQueue::finalize();
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue::init$() {
	$AbstractQueue::init$();
	$set(this, queue, $new($RunnableScheduledFutureArray, ScheduledThreadPoolExecutor$DelayedWorkQueue::INITIAL_CAPACITY));
	$set(this, lock, $new($ReentrantLock));
	$set(this, available, $nc(this->lock)->newCondition());
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue::setIndex($RunnableScheduledFuture* f, int32_t idx) {
	$init(ScheduledThreadPoolExecutor$DelayedWorkQueue);
	if ($instanceOf($ScheduledThreadPoolExecutor$ScheduledFutureTask, f)) {
		$nc(($cast($ScheduledThreadPoolExecutor$ScheduledFutureTask, f)))->heapIndex = idx;
	}
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue::siftUp(int32_t k, $RunnableScheduledFuture* key) {
	$useLocalCurrentObjectStackCache();
	while (k > 0) {
		int32_t parent = (int32_t)((uint32_t)(k - 1) >> 1);
		$var($RunnableScheduledFuture, e, $nc(this->queue)->get(parent));
		if ($nc(key)->compareTo(e) >= 0) {
			break;
		}
		$nc(this->queue)->set(k, e);
		setIndex(e, k);
		k = parent;
	}
	$nc(this->queue)->set(k, key);
	setIndex(key, k);
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue::siftDown(int32_t k, $RunnableScheduledFuture* key) {
	$useLocalCurrentObjectStackCache();
	int32_t half = (int32_t)((uint32_t)this->size$ >> 1);
	while (k < half) {
		int32_t child = (k << 1) + 1;
		$var($RunnableScheduledFuture, c, $nc(this->queue)->get(child));
		int32_t right = child + 1;
		if (right < this->size$ && $nc(c)->compareTo($nc(this->queue)->get(right)) > 0) {
			$assign(c, $nc(this->queue)->get(child = right));
		}
		if ($nc(key)->compareTo(c) <= 0) {
			break;
		}
		$nc(this->queue)->set(k, c);
		setIndex(c, k);
		k = child;
	}
	$nc(this->queue)->set(k, key);
	setIndex(key, k);
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue::grow() {
	int32_t oldCapacity = $nc(this->queue)->length;
	int32_t newCapacity = oldCapacity + (oldCapacity >> 1);
	if (newCapacity < 0) {
		newCapacity = $Integer::MAX_VALUE;
	}
	$set(this, queue, $fcast($RunnableScheduledFutureArray, $Arrays::copyOf(this->queue, newCapacity)));
}

int32_t ScheduledThreadPoolExecutor$DelayedWorkQueue::indexOf(Object$* x) {
	if (x != nullptr) {
		if ($instanceOf($ScheduledThreadPoolExecutor$ScheduledFutureTask, x)) {
			int32_t i = $nc(($cast($ScheduledThreadPoolExecutor$ScheduledFutureTask, x)))->heapIndex;
			if (i >= 0 && i < this->size$ && $equals($nc(this->queue)->get(i), x)) {
				return i;
			}
		} else {
			for (int32_t i = 0; i < this->size$; ++i) {
				if ($of(x)->equals($nc(this->queue)->get(i))) {
					return i;
				}
			}
		}
	}
	return -1;
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::contains(Object$* x) {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = indexOf(x) != -1;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::remove(Object$* x) {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			int32_t i = indexOf(x);
			if (i < 0) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			setIndex($nc(this->queue)->get(i), -1);
			int32_t s = --this->size$;
			$var($RunnableScheduledFuture, replacement, $nc(this->queue)->get(s));
			$nc(this->queue)->set(s, nullptr);
			if (s != i) {
				siftDown(i, replacement);
				if ($nc(this->queue)->get(i) == replacement) {
					siftUp(i, replacement);
				}
			}
			var$2 = true;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScheduledThreadPoolExecutor$DelayedWorkQueue::size() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = this->size$;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::isEmpty() {
	return size() == 0;
}

int32_t ScheduledThreadPoolExecutor$DelayedWorkQueue::remainingCapacity() {
	return $Integer::MAX_VALUE;
}

$Object* ScheduledThreadPoolExecutor$DelayedWorkQueue::peek() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->queue)->get(0));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::offer($Runnable* x) {
	$useLocalCurrentObjectStackCache();
	if (x == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($RunnableScheduledFuture, e, $cast($RunnableScheduledFuture, x));
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t i = this->size$;
			if (i >= $nc(this->queue)->length) {
				grow();
			}
			this->size$ = i + 1;
			if (i == 0) {
				$nc(this->queue)->set(0, e);
				setIndex(e, 0);
			} else {
				siftUp(i, e);
			}
			if ($nc(this->queue)->get(0) == e) {
				$set(this, leader, nullptr);
				$nc(this->available)->signal();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return true;
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue::put($Runnable* e) {
	offer(e);
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::add($Runnable* e) {
	return offer(e);
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::offer($Runnable* e, int64_t timeout, $TimeUnit* unit) {
	return offer(e);
}

$RunnableScheduledFuture* ScheduledThreadPoolExecutor$DelayedWorkQueue::finishPoll($RunnableScheduledFuture* f) {
	int32_t s = --this->size$;
	$var($RunnableScheduledFuture, x, $nc(this->queue)->get(s));
	$nc(this->queue)->set(s, nullptr);
	if (s != 0) {
		siftDown(0, x);
	}
	setIndex(f, -1);
	return f;
}

$Object* ScheduledThreadPoolExecutor$DelayedWorkQueue::poll() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($RunnableScheduledFuture, first, $nc(this->queue)->get(0));
			$init($TimeUnit);
			$assign(var$2, (first == nullptr || $nc(first)->getDelay($TimeUnit::NANOSECONDS) > 0) ? ($RunnableScheduledFuture*)nullptr : finishPoll(first));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Object* ScheduledThreadPoolExecutor$DelayedWorkQueue::take() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			for (;;) {
				$var($RunnableScheduledFuture, first, $nc(this->queue)->get(0));
				if (first == nullptr) {
					$nc(this->available)->await();
				} else {
					$init($TimeUnit);
					int64_t delay = $nc(first)->getDelay($TimeUnit::NANOSECONDS);
					if (delay <= (int64_t)0) {
						$assign(var$2, finishPoll(first));
						return$1 = true;
						goto $finally;
					}
					$assign(first, nullptr);
					if (this->leader != nullptr) {
						$nc(this->available)->await();
					} else {
						$var($Thread, thisThread, $Thread::currentThread());
						$set(this, leader, thisThread);
						{
							$var($Throwable, var$3, nullptr);
							try {
								$nc(this->available)->awaitNanos(delay);
							} catch ($Throwable& var$4) {
								$assign(var$3, var$4);
							} /*finally*/ {
								if (this->leader == thisThread) {
									$set(this, leader, nullptr);
								}
							}
							if (var$3 != nullptr) {
								$throw(var$3);
							}
						}
					}
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			if (this->leader == nullptr && $nc(this->queue)->get(0) != nullptr) {
				$nc(this->available)->signal();
			}
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Object* ScheduledThreadPoolExecutor$DelayedWorkQueue::poll(int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			for (;;) {
				$var($RunnableScheduledFuture, first, $nc(this->queue)->get(0));
				if (first == nullptr) {
					if (nanos <= (int64_t)0) {
						$assign(var$2, nullptr);
						return$1 = true;
						goto $finally;
					} else {
						nanos = $nc(this->available)->awaitNanos(nanos);
					}
				} else {
					int64_t delay = $nc(first)->getDelay($TimeUnit::NANOSECONDS);
					if (delay <= (int64_t)0) {
						$assign(var$2, finishPoll(first));
						return$1 = true;
						goto $finally;
					}
					if (nanos <= (int64_t)0) {
						$assign(var$2, nullptr);
						return$1 = true;
						goto $finally;
					}
					$assign(first, nullptr);
					if (nanos < delay || this->leader != nullptr) {
						nanos = $nc(this->available)->awaitNanos(nanos);
					} else {
						$var($Thread, thisThread, $Thread::currentThread());
						$set(this, leader, thisThread);
						{
							$var($Throwable, var$3, nullptr);
							try {
								int64_t timeLeft = $nc(this->available)->awaitNanos(delay);
								nanos -= delay - timeLeft;
							} catch ($Throwable& var$4) {
								$assign(var$3, var$4);
							} /*finally*/ {
								if (this->leader == thisThread) {
									$set(this, leader, nullptr);
								}
							}
							if (var$3 != nullptr) {
								$throw(var$3);
							}
						}
					}
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			if (this->leader == nullptr && $nc(this->queue)->get(0) != nullptr) {
				$nc(this->available)->signal();
			}
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue::clear() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			for (int32_t i = 0; i < this->size$; ++i) {
				$var($RunnableScheduledFuture, t, $nc(this->queue)->get(i));
				if (t != nullptr) {
					$nc(this->queue)->set(i, nullptr);
					setIndex(t, -1);
				}
			}
			this->size$ = 0;
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t ScheduledThreadPoolExecutor$DelayedWorkQueue::drainTo($Collection* c) {
	return drainTo(c, $Integer::MAX_VALUE);
}

int32_t ScheduledThreadPoolExecutor$DelayedWorkQueue::drainTo($Collection* c, int32_t maxElements) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(c);
	if ($equals(c, this)) {
		$throwNew($IllegalArgumentException);
	}
	if (maxElements <= 0) {
		return 0;
	}
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t n = 0;
			{
				$var($RunnableScheduledFuture, first, nullptr);
				for (;;) {
					bool var$3 = n < maxElements && ($assign(first, $nc(this->queue)->get(0))) != nullptr;
					$init($TimeUnit);
					if (!(var$3 && $nc(first)->getDelay($TimeUnit::NANOSECONDS) <= 0)) {
						break;
					}
					{
						c->add(first);
						finishPoll(first);
						++n;
					}
				}
			}
			var$2 = n;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ObjectArray* ScheduledThreadPoolExecutor$DelayedWorkQueue::toArray() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($ObjectArray, var$2, nullptr);
		bool return$1 = false;
		try {
			$load($ObjectArray);
			$assign(var$2, $Arrays::copyOf(this->queue, this->size$, $getClass($ObjectArray)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$ObjectArray* ScheduledThreadPoolExecutor$DelayedWorkQueue::toArray($ObjectArray* a) {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($ObjectArray, var$2, nullptr);
		bool return$1 = false;
		try {
			if ($nc(a)->length < this->size$) {
				$assign(var$2, $Arrays::copyOf(this->queue, this->size$, $of(a)->getClass()));
				return$1 = true;
				goto $finally;
			}
			$System::arraycopy(this->queue, 0, a, 0, this->size$);
			if ($nc(a)->length > this->size$) {
				a->set(this->size$, nullptr);
			}
			$assign(var$2, a);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Iterator* ScheduledThreadPoolExecutor$DelayedWorkQueue::iterator() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Iterator, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $new($ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr, this, $fcast($RunnableScheduledFutureArray, $($Arrays::copyOf(this->queue, this->size$)))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::add(Object$* e) {
	return this->add($cast($Runnable, e));
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::offer(Object$* x) {
	return this->offer($cast($Runnable, x));
}

bool ScheduledThreadPoolExecutor$DelayedWorkQueue::offer(Object$* e, int64_t timeout, $TimeUnit* unit) {
	return this->offer($cast($Runnable, e), timeout, unit);
}

void ScheduledThreadPoolExecutor$DelayedWorkQueue::put(Object$* e) {
	this->put($cast($Runnable, e));
}

ScheduledThreadPoolExecutor$DelayedWorkQueue::ScheduledThreadPoolExecutor$DelayedWorkQueue() {
}

$Class* ScheduledThreadPoolExecutor$DelayedWorkQueue::load$($String* name, bool initialize) {
	$loadClass(ScheduledThreadPoolExecutor$DelayedWorkQueue, name, initialize, &_ScheduledThreadPoolExecutor$DelayedWorkQueue_ClassInfo_, allocate$ScheduledThreadPoolExecutor$DelayedWorkQueue);
	return class$;
}

$Class* ScheduledThreadPoolExecutor$DelayedWorkQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java