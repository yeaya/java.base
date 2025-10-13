#include <java/util/concurrent/DelayQueue.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/PriorityQueue.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/DelayQueue$Itr.h>
#include <java/util/concurrent/Delayed.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef NANOSECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $PriorityQueue = ::java::util::PriorityQueue;
using $Spliterator = ::java::util::Spliterator;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $DelayQueue$Itr = ::java::util::concurrent::DelayQueue$Itr;
using $Delayed = ::java::util::concurrent::Delayed;
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

$FieldInfo _DelayQueue_FieldInfo_[] = {
	{"lock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(DelayQueue, lock)},
	{"q", "Ljava/util/PriorityQueue;", "Ljava/util/PriorityQueue<TE;>;", $PRIVATE | $FINAL, $field(DelayQueue, q)},
	{"leader", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(DelayQueue, leader)},
	{"available", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(DelayQueue, available)},
	{}
};

$MethodInfo _DelayQueue_MethodInfo_[] = {
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*element", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DelayQueue::*)()>(&DelayQueue::init$))},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC, $method(static_cast<void(DelayQueue::*)($Collection*)>(&DelayQueue::init$))},
	{"add", "(Ljava/util/concurrent/Delayed;)Z", "(TE;)Z", $PUBLIC},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"drainTo", "(Ljava/util/Collection;)I", "(Ljava/util/Collection<-TE;>;)I", $PUBLIC},
	{"drainTo", "(Ljava/util/Collection;I)I", "(Ljava/util/Collection<-TE;>;I)I", $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"offer", "(Ljava/util/concurrent/Delayed;)Z", "(TE;)Z", $PUBLIC},
	{"offer", "(Ljava/util/concurrent/Delayed;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC},
	{"offer", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.InterruptedException"},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"peek", "()Ljava/util/concurrent/Delayed;", "()TE;", $PUBLIC},
	{"poll", "()Ljava/util/concurrent/Delayed;", "()TE;", $PUBLIC},
	{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Delayed;", "(JLjava/util/concurrent/TimeUnit;)TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"put", "(Ljava/util/concurrent/Delayed;)V", "(TE;)V", $PUBLIC},
	{"put", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.lang.InterruptedException"},
	{"remainingCapacity", "()I", nullptr, $PUBLIC},
	{"*remove", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"removeEQ", "(Ljava/lang/Object;)V", nullptr, 0},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"take", "()Ljava/util/concurrent/Delayed;", "()TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DelayQueue_InnerClassesInfo_[] = {
	{"java.util.concurrent.DelayQueue$Itr", "java.util.concurrent.DelayQueue", "Itr", $PRIVATE},
	{}
};

$ClassInfo _DelayQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.DelayQueue",
	"java.util.AbstractQueue",
	"java.util.concurrent.BlockingQueue",
	_DelayQueue_FieldInfo_,
	_DelayQueue_MethodInfo_,
	"<E::Ljava/util/concurrent/Delayed;>Ljava/util/AbstractQueue<TE;>;Ljava/util/concurrent/BlockingQueue<TE;>;",
	nullptr,
	_DelayQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.DelayQueue$Itr"
};

$Object* allocate$DelayQueue($Class* clazz) {
	return $of($alloc(DelayQueue));
}

$Object* DelayQueue::remove() {
	 return this->$AbstractQueue::remove();
}

$Object* DelayQueue::element() {
	 return this->$AbstractQueue::element();
}

bool DelayQueue::addAll($Collection* c) {
	 return this->$AbstractQueue::addAll(c);
}

bool DelayQueue::isEmpty() {
	 return this->$AbstractQueue::isEmpty();
}

bool DelayQueue::contains(Object$* o) {
	 return this->$AbstractQueue::contains(o);
}

bool DelayQueue::containsAll($Collection* c) {
	 return this->$AbstractQueue::containsAll(c);
}

bool DelayQueue::removeAll($Collection* c) {
	 return this->$AbstractQueue::removeAll(c);
}

bool DelayQueue::retainAll($Collection* c) {
	 return this->$AbstractQueue::retainAll(c);
}

$String* DelayQueue::toString() {
	 return this->$AbstractQueue::toString();
}

$ObjectArray* DelayQueue::toArray($IntFunction* generator) {
	 return this->$AbstractQueue::toArray(generator);
}

bool DelayQueue::removeIf($Predicate* filter) {
	 return this->$AbstractQueue::removeIf(filter);
}

bool DelayQueue::equals(Object$* o) {
	 return this->$AbstractQueue::equals(o);
}

int32_t DelayQueue::hashCode() {
	 return this->$AbstractQueue::hashCode();
}

$Spliterator* DelayQueue::spliterator() {
	 return this->$AbstractQueue::spliterator();
}

$Stream* DelayQueue::stream() {
	 return this->$AbstractQueue::stream();
}

$Stream* DelayQueue::parallelStream() {
	 return this->$AbstractQueue::parallelStream();
}

void DelayQueue::forEach($Consumer* action) {
	this->$AbstractQueue::forEach(action);
}

$Object* DelayQueue::clone() {
	 return this->$AbstractQueue::clone();
}

void DelayQueue::finalize() {
	this->$AbstractQueue::finalize();
}

void DelayQueue::init$() {
	$AbstractQueue::init$();
	$set(this, lock, $new($ReentrantLock));
	$set(this, q, $new($PriorityQueue));
	$set(this, available, $nc(this->lock)->newCondition());
}

void DelayQueue::init$($Collection* c) {
	$AbstractQueue::init$();
	$set(this, lock, $new($ReentrantLock));
	$set(this, q, $new($PriorityQueue));
	$set(this, available, $nc(this->lock)->newCondition());
	this->addAll(c);
}

bool DelayQueue::add($Delayed* e) {
	return offer(e);
}

bool DelayQueue::offer($Delayed* e) {
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$nc(this->q)->offer(e);
			if ($equals($nc(this->q)->peek(), e)) {
				$set(this, leader, nullptr);
				$nc(this->available)->signal();
			}
			var$2 = true;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

void DelayQueue::put($Delayed* e) {
	offer(e);
}

bool DelayQueue::offer($Delayed* e, int64_t timeout, $TimeUnit* unit) {
	return offer(e);
}

$Object* DelayQueue::poll() {
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Delayed, first, $cast($Delayed, $nc(this->q)->peek()));
			$init($TimeUnit);
			$assign(var$2, (first == nullptr || $nc(first)->getDelay($TimeUnit::NANOSECONDS) > 0) ? ($Delayed*)nullptr : $cast($Delayed, $nc(this->q)->poll()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

$Object* DelayQueue::take() {
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			for (;;) {
				$var($Delayed, first, $cast($Delayed, $nc(this->q)->peek()));
				if (first == nullptr) {
					$nc(this->available)->await();
				} else {
					$init($TimeUnit);
					int64_t delay = $nc(first)->getDelay($TimeUnit::NANOSECONDS);
					if (delay <= (int64_t)0) {
						$assign(var$2, $cast($Delayed, $nc(this->q)->poll()));
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
							} catch ($Throwable&) {
								$assign(var$3, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if (this->leader == nullptr && $nc(this->q)->peek() != nullptr) {
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

$Object* DelayQueue::poll(int64_t timeout, $TimeUnit* unit) {
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			for (;;) {
				$var($Delayed, first, $cast($Delayed, $nc(this->q)->peek()));
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
						$assign(var$2, $cast($Delayed, $nc(this->q)->poll()));
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
							} catch ($Throwable&) {
								$assign(var$3, $catch());
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if (this->leader == nullptr && $nc(this->q)->peek() != nullptr) {
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

$Object* DelayQueue::peek() {
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $cast($Delayed, $nc(this->q)->peek()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

int32_t DelayQueue::size() {
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $nc(this->q)->size();
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

int32_t DelayQueue::drainTo($Collection* c) {
	return drainTo(c, $Integer::MAX_VALUE);
}

int32_t DelayQueue::drainTo($Collection* c, int32_t maxElements) {
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
				$var($Delayed, first, nullptr);
				for (;;) {
					bool var$3 = n < maxElements && ($assign(first, $cast($Delayed, $nc(this->q)->peek()))) != nullptr;
					$init($TimeUnit);
					if (!(var$3 && $nc(first)->getDelay($TimeUnit::NANOSECONDS) <= 0)) {
						break;
					}
					{
						c->add(first);
						$nc(this->q)->poll();
						++n;
					}
				}
			}
			var$2 = n;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

void DelayQueue::clear() {
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->q)->clear();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t DelayQueue::remainingCapacity() {
	return $Integer::MAX_VALUE;
}

$ObjectArray* DelayQueue::toArray() {
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($ObjectArray, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->q)->toArray());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

$ObjectArray* DelayQueue::toArray($ObjectArray* a) {
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($ObjectArray, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->q)->toArray(a));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

bool DelayQueue::remove(Object$* o) {
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = $nc(this->q)->remove(o);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

void DelayQueue::removeEQ(Object$* o) {
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($Iterator, it, $nc(this->q)->iterator());
				for (; $nc(it)->hasNext();) {
					if ($equals(o, it->next())) {
						it->remove();
						break;
					}
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			lock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Iterator* DelayQueue::iterator() {
	return $new($DelayQueue$Itr, this, $(toArray()));
}

bool DelayQueue::add(Object$* e) {
	return this->add($cast($Delayed, e));
}

bool DelayQueue::offer(Object$* e) {
	return this->offer($cast($Delayed, e));
}

bool DelayQueue::offer(Object$* e, int64_t timeout, $TimeUnit* unit) {
	return this->offer($cast($Delayed, e), timeout, unit);
}

void DelayQueue::put(Object$* e) {
	this->put($cast($Delayed, e));
}

DelayQueue::DelayQueue() {
}

$Class* DelayQueue::load$($String* name, bool initialize) {
	$loadClass(DelayQueue, name, initialize, &_DelayQueue_ClassInfo_, allocate$DelayQueue);
	return class$;
}

$Class* DelayQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java