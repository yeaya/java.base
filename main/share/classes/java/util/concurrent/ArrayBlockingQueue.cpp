#include <java/util/concurrent/ArrayBlockingQueue.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/concurrent/ArrayBlockingQueue$Itr.h>
#include <java/util/concurrent/ArrayBlockingQueue$Itrs.h>
#include <java/util/concurrent/Helpers.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CONCURRENT
#undef MAX_VALUE
#undef NONNULL
#undef ORDERED

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $ArrayBlockingQueue$Itr = ::java::util::concurrent::ArrayBlockingQueue$Itr;
using $Helpers = ::java::util::concurrent::Helpers;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace concurrent {

class ArrayBlockingQueue$$Lambda$lambda$removeAll$0 : public $Predicate {
	$class(ArrayBlockingQueue$$Lambda$lambda$removeAll$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return ArrayBlockingQueue::lambda$removeAll$0(c, e);
	}
	$Collection* c = nullptr;
};
$Class* ArrayBlockingQueue$$Lambda$lambda$removeAll$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(ArrayBlockingQueue$$Lambda$lambda$removeAll$0, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(ArrayBlockingQueue$$Lambda$lambda$removeAll$0, init$, void, $Collection*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ArrayBlockingQueue$$Lambda$lambda$removeAll$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.concurrent.ArrayBlockingQueue$$Lambda$lambda$removeAll$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ArrayBlockingQueue$$Lambda$lambda$removeAll$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayBlockingQueue$$Lambda$lambda$removeAll$0);
	});
	return class$;
}
$Class* ArrayBlockingQueue$$Lambda$lambda$removeAll$0::class$ = nullptr;

class ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1 : public $Predicate {
	$class(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return ArrayBlockingQueue::lambda$retainAll$1(c, e);
	}
	$Collection* c = nullptr;
};
$Class* ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1, init$, void, $Collection*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.concurrent.ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1);
	});
	return class$;
}
$Class* ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::class$ = nullptr;

$Object* ArrayBlockingQueue::remove() {
	 return this->$AbstractQueue::remove();
}

$Object* ArrayBlockingQueue::element() {
	 return this->$AbstractQueue::element();
}

bool ArrayBlockingQueue::addAll($Collection* c) {
	 return this->$AbstractQueue::addAll(c);
}

bool ArrayBlockingQueue::isEmpty() {
	 return this->$AbstractQueue::isEmpty();
}

bool ArrayBlockingQueue::containsAll($Collection* c) {
	 return this->$AbstractQueue::containsAll(c);
}

$ObjectArray* ArrayBlockingQueue::toArray($IntFunction* generator) {
	 return this->$AbstractQueue::toArray(generator);
}

bool ArrayBlockingQueue::equals(Object$* o) {
	 return this->$AbstractQueue::equals(o);
}

int32_t ArrayBlockingQueue::hashCode() {
	 return this->$AbstractQueue::hashCode();
}

$Stream* ArrayBlockingQueue::stream() {
	 return this->$AbstractQueue::stream();
}

$Stream* ArrayBlockingQueue::parallelStream() {
	 return this->$AbstractQueue::parallelStream();
}

$Object* ArrayBlockingQueue::clone() {
	 return this->$AbstractQueue::clone();
}

void ArrayBlockingQueue::finalize() {
	this->$AbstractQueue::finalize();
}

int32_t ArrayBlockingQueue::inc(int32_t i, int32_t modulus) {
	$init(ArrayBlockingQueue);
	if (++i >= modulus) {
		i = 0;
	}
	return i;
}

int32_t ArrayBlockingQueue::dec(int32_t i, int32_t modulus) {
	$init(ArrayBlockingQueue);
	if (--i < 0) {
		i = modulus - 1;
	}
	return i;
}

$Object* ArrayBlockingQueue::itemAt(int32_t i) {
	return $nc(this->items)->get(i);
}

$Object* ArrayBlockingQueue::itemAt($ObjectArray* items, int32_t i) {
	$init(ArrayBlockingQueue);
	return $nc(items)->get(i);
}

void ArrayBlockingQueue::enqueue(Object$* e) {
	$var($ObjectArray, items, this->items);
	$nc(items)->set(this->putIndex, e);
	if (++this->putIndex == items->length) {
		this->putIndex = 0;
	}
	++this->count;
	$nc(this->notEmpty)->signal();
}

$Object* ArrayBlockingQueue::dequeue() {
	$useLocalObjectStack();
	$var($ObjectArray, items, this->items);
	$var($Object, e, $nc(items)->get(this->takeIndex));
	items->set(this->takeIndex, nullptr);
	if (++this->takeIndex == items->length) {
		this->takeIndex = 0;
	}
	--this->count;
	if (this->itrs != nullptr) {
		this->itrs->elementDequeued();
	}
	$nc(this->notFull)->signal();
	return e;
}

void ArrayBlockingQueue::removeAt(int32_t removeIndex) {
	$var($ObjectArray, items, this->items);
	if (removeIndex == this->takeIndex) {
		$nc(items)->set(this->takeIndex, nullptr);
		if (++this->takeIndex == items->length) {
			this->takeIndex = 0;
		}
		--this->count;
		if (this->itrs != nullptr) {
			this->itrs->elementDequeued();
		}
	} else {
		for (int32_t i = removeIndex, putIndex = this->putIndex;;) {
			int32_t pred = i;
			if (++i == $nc(items)->length) {
				i = 0;
			}
			if (i == putIndex) {
				items->set(pred, nullptr);
				this->putIndex = pred;
				break;
			}
			items->set(pred, items->get(i));
		}
		--this->count;
		if (this->itrs != nullptr) {
			this->itrs->removedAt(removeIndex);
		}
	}
	$nc(this->notFull)->signal();
}

void ArrayBlockingQueue::init$(int32_t capacity) {
	ArrayBlockingQueue::init$(capacity, false);
}

void ArrayBlockingQueue::init$(int32_t capacity, bool fair) {
	$AbstractQueue::init$();
	if (capacity <= 0) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, items, $new($ObjectArray, capacity));
	$set(this, lock, $new($ReentrantLock, fair));
	$set(this, notEmpty, this->lock->newCondition());
	$set(this, notFull, this->lock->newCondition());
}

void ArrayBlockingQueue::init$(int32_t capacity, bool fair, $Collection* c) {
	$useLocalObjectStack();
	ArrayBlockingQueue::init$(capacity, fair);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	try {
		$var($ObjectArray, items, this->items);
		int32_t i = 0;
		try {
			$var($Iterator, i$, $nc(c)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, e, i$->next());
				$nc(items)->set(i++, $Objects::requireNonNull(e));
			}
		} catch ($ArrayIndexOutOfBoundsException& ex) {
			$throwNew($IllegalArgumentException);
		}
		this->count = i;
		this->putIndex = (i == capacity) ? 0 : i;
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		lock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool ArrayBlockingQueue::add(Object$* e) {
	return $AbstractQueue::add(e);
}

bool ArrayBlockingQueue::offer(Object$* e) {
	$useLocalObjectStack();
	$Objects::requireNonNull(e);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (this->count == $nc(this->items)->length) {
			var$2 = false;
			return$1 = true;
			goto $finally;
		} else {
			enqueue(e);
			var$2 = true;
			return$1 = true;
			goto $finally;
		}
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
	$shouldNotReachHere();
}

void ArrayBlockingQueue::put(Object$* e) {
	$useLocalObjectStack();
	$Objects::requireNonNull(e);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	$var($Throwable, var$0, nullptr);
	try {
		while (this->count == $nc(this->items)->length) {
			$nc(this->notFull)->await();
		}
		enqueue(e);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		lock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool ArrayBlockingQueue::offer(Object$* e, int64_t timeout, $TimeUnit* unit) {
	$useLocalObjectStack();
	$Objects::requireNonNull(e);
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		while (this->count == $nc(this->items)->length) {
			if (nanos <= 0) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			nanos = $nc(this->notFull)->awaitNanos(nanos);
		}
		enqueue(e);
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
	$shouldNotReachHere();
}

$Object* ArrayBlockingQueue::poll() {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	$var($Object, var$2, nullptr);
	bool return$1 = false;
	try {
		$assign(var$2, (this->count == 0) ? ($Object*)nullptr : dequeue());
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
	$shouldNotReachHere();
}

$Object* ArrayBlockingQueue::take() {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	$var($Throwable, var$0, nullptr);
	$var($Object, var$2, nullptr);
	bool return$1 = false;
	try {
		while (this->count == 0) {
			$nc(this->notEmpty)->await();
		}
		$assign(var$2, dequeue());
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
	$shouldNotReachHere();
}

$Object* ArrayBlockingQueue::poll(int64_t timeout, $TimeUnit* unit) {
	$useLocalObjectStack();
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	$var($Throwable, var$0, nullptr);
	$var($Object, var$2, nullptr);
	bool return$1 = false;
	try {
		while (this->count == 0) {
			if (nanos <= 0) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			nanos = $nc(this->notEmpty)->awaitNanos(nanos);
		}
		$assign(var$2, dequeue());
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
	$shouldNotReachHere();
}

$Object* ArrayBlockingQueue::peek() {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	$var($Object, var$2, nullptr);
	bool return$1 = false;
	try {
		$assign(var$2, itemAt(this->takeIndex));
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
	$shouldNotReachHere();
}

int32_t ArrayBlockingQueue::size() {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = this->count;
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
	$shouldNotReachHere();
}

int32_t ArrayBlockingQueue::remainingCapacity() {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = $nc(this->items)->length - this->count;
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
	$shouldNotReachHere();
}

bool ArrayBlockingQueue::remove(Object$* o) {
	$useLocalObjectStack();
	if (o == nullptr) {
		return false;
	}
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (this->count > 0) {
			$var($ObjectArray, items, this->items);
			for (int32_t i = this->takeIndex, end = this->putIndex, to = (i < end) ? end : $nc(items)->length;; i = 0, to = end) {
				for (; i < to; ++i) {
					if ($nc($of(o))->equals($nc(items)->get(i))) {
						removeAt(i);
						var$2 = true;
						return$1 = true;
						goto $finally;
					}
				}
				if (to == end) {
					break;
				}
			}
		}
		var$2 = false;
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
	$shouldNotReachHere();
}

bool ArrayBlockingQueue::contains(Object$* o) {
	$useLocalObjectStack();
	if (o == nullptr) {
		return false;
	}
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (this->count > 0) {
			$var($ObjectArray, items, this->items);
			for (int32_t i = this->takeIndex, end = this->putIndex, to = (i < end) ? end : $nc(items)->length;; i = 0, to = end) {
				for (; i < to; ++i) {
					if ($nc($of(o))->equals($nc(items)->get(i))) {
						var$2 = true;
						return$1 = true;
						goto $finally;
					}
				}
				if (to == end) {
					break;
				}
			}
		}
		var$2 = false;
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
	$shouldNotReachHere();
}

$ObjectArray* ArrayBlockingQueue::toArray() {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	$var($ObjectArray, var$2, nullptr);
	bool return$1 = false;
	try {
		$var($ObjectArray, items, this->items);
		int32_t end = this->takeIndex + this->count;
		$var($ObjectArray, a, $Arrays::copyOfRange(items, this->takeIndex, end));
		if (end != this->putIndex) {
			$System::arraycopy(items, 0, a, $nc(items)->length - this->takeIndex, this->putIndex);
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
	$shouldNotReachHere();
}

$ObjectArray* ArrayBlockingQueue::toArray($ObjectArray* a$renamed) {
	$useLocalObjectStack();
	$var($ObjectArray, a, a$renamed);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	$var($ObjectArray, var$2, nullptr);
	bool return$1 = false;
	try {
		$var($ObjectArray, items, this->items);
		int32_t count = this->count;
		int32_t firstLeg = $Math::min($nc(items)->length - this->takeIndex, count);
		if ($nc(a)->length < count) {
			$assign(a, $Arrays::copyOfRange(items, this->takeIndex, this->takeIndex + count, $of(a)->getClass()));
		} else {
			$System::arraycopy(items, this->takeIndex, a, 0, firstLeg);
			if (a->length > count) {
				a->set(count, nullptr);
			}
		}
		if (firstLeg < count) {
			$System::arraycopy(items, 0, a, firstLeg, this->putIndex);
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
	$shouldNotReachHere();
}

$String* ArrayBlockingQueue::toString() {
	return $Helpers::collectionToString($cast($AbstractCollection, this));
}

void ArrayBlockingQueue::clear() {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	try {
		int32_t k = 0;
		if ((k = this->count) > 0) {
			circularClear(this->items, this->takeIndex, this->putIndex);
			this->takeIndex = this->putIndex;
			this->count = 0;
			if (this->itrs != nullptr) {
				this->itrs->queueIsEmpty();
			}
			for (; k > 0 && lock->hasWaiters(this->notFull); --k) {
				$nc(this->notFull)->signal();
			}
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

void ArrayBlockingQueue::circularClear($ObjectArray* items, int32_t i, int32_t end) {
	$init(ArrayBlockingQueue);
	for (int32_t to = (i < end) ? end : $nc(items)->length;; i = 0, to = end) {
		for (; i < to; ++i) {
			$nc(items)->set(i, nullptr);
		}
		if (to == end) {
			break;
		}
	}
}

int32_t ArrayBlockingQueue::drainTo($Collection* c) {
	return drainTo(c, $Integer::MAX_VALUE);
}

int32_t ArrayBlockingQueue::drainTo($Collection* c, int32_t maxElements) {
	$useLocalObjectStack();
	$Objects::requireNonNull(c);
	if ($equals(c, this)) {
		$throwNew($IllegalArgumentException);
	}
	if (maxElements <= 0) {
		return 0;
	}
	$var($ObjectArray, items, this->items);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		int32_t n = $Math::min(maxElements, this->count);
		int32_t take = this->takeIndex;
		int32_t i = 0;
		$var($Throwable, var$3, nullptr);
		int32_t var$5 = 0;
		bool return$4 = false;
		try {
			while (i < n) {
				$var($Object, e, $nc(items)->get(take));
				c->add(e);
				items->set(take, nullptr);
				if (++take == items->length) {
					take = 0;
				}
				++i;
			}
			var$5 = n;
			return$4 = true;
			goto $finally1;
		} catch ($Throwable& var$6) {
			$assign(var$3, var$6);
		} $finally1: {
			if (i > 0) {
				this->count -= i;
				this->takeIndex = take;
				if (this->itrs != nullptr) {
					if (this->count == 0) {
						this->itrs->queueIsEmpty();
					} else if (i > take) {
						$nc(this->itrs)->takeIndexWrapped();
					}
				}
				for (; i > 0 && lock->hasWaiters(this->notFull); --i) {
					$nc(this->notFull)->signal();
				}
			}
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
		if (return$4) {
			var$2 = var$5;
			return$1 = true;
			goto $finally;
		}
	} catch ($Throwable& var$7) {
		$assign(var$0, var$7);
	} $finally: {
		lock->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$Iterator* ArrayBlockingQueue::iterator() {
	return $new($ArrayBlockingQueue$Itr, this);
}

$Spliterator* ArrayBlockingQueue::spliterator() {
	return $Spliterators::spliterator($cast($AbstractCollection, this), (($Spliterator::ORDERED | $Spliterator::NONNULL) | $Spliterator::CONCURRENT));
}

void ArrayBlockingQueue::forEach($Consumer* action) {
	$useLocalObjectStack();
	$Objects::requireNonNull(action);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	try {
		if (this->count > 0) {
			$var($ObjectArray, items, this->items);
			for (int32_t i = this->takeIndex, end = this->putIndex, to = (i < end) ? end : $nc(items)->length;; i = 0, to = end) {
				for (; i < to; ++i) {
					action->accept($(itemAt(items, i)));
				}
				if (to == end) {
					break;
				}
			}
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

bool ArrayBlockingQueue::removeIf($Predicate* filter) {
	$Objects::requireNonNull(filter);
	return bulkRemove(filter);
}

bool ArrayBlockingQueue::removeAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove($$new(ArrayBlockingQueue$$Lambda$lambda$removeAll$0, c));
}

bool ArrayBlockingQueue::retainAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove($$new(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1, c));
}

bool ArrayBlockingQueue::bulkRemove($Predicate* filter) {
	$useLocalObjectStack();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		if (this->itrs == nullptr) {
			if (this->count > 0) {
				$var($ObjectArray, items, this->items);
				for (int32_t i = this->takeIndex, end = this->putIndex, to = (i < end) ? end : $nc(items)->length;; i = 0, to = end) {
					for (; i < to; ++i) {
						if ($nc(filter)->test($(itemAt(items, i)))) {
							var$2 = bulkRemoveModified(filter, i);
							return$1 = true;
							goto $finally;
						}
					}
					if (to == end) {
						break;
					}
				}
			}
			var$2 = false;
			return$1 = true;
			goto $finally;
		}
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
	return $AbstractQueue::removeIf(filter);
}

$longs* ArrayBlockingQueue::nBits(int32_t n) {
	$init(ArrayBlockingQueue);
	return $new($longs, ((n - 1) >> 6) + 1);
}

void ArrayBlockingQueue::setBit($longs* bits, int32_t i) {
	$init(ArrayBlockingQueue);
	(*$nc(bits))[i >> 6] |= $sl((int64_t)1, i);
}

bool ArrayBlockingQueue::isClear($longs* bits, int32_t i) {
	$init(ArrayBlockingQueue);
	return ($nc(bits)->get(i >> 6) & ($sl((int64_t)1, i))) == 0;
}

int32_t ArrayBlockingQueue::distanceNonEmpty(int32_t i, int32_t j) {
	if ((j -= i) <= 0) {
		j += $nc(this->items)->length;
	}
	return j;
}

bool ArrayBlockingQueue::bulkRemoveModified($Predicate* filter, int32_t beg) {
	$useLocalObjectStack();
	$var($ObjectArray, es, this->items);
	int32_t capacity = $nc(this->items)->length;
	int32_t end = this->putIndex;
	$var($longs, deathRow, nBits(distanceNonEmpty(beg, this->putIndex)));
	$nc(deathRow)->set(0, 1);
	for (int32_t i = beg + 1, to = (i <= end) ? end : $nc(es)->length, k = beg;; i = 0, to = end, k -= capacity) {
		for (; i < to; ++i) {
			if ($nc(filter)->test($(itemAt(es, i)))) {
				setBit(deathRow, i - k);
			}
		}
		if (to == end) {
			break;
		}
	}
	int32_t w = beg;
	for (int32_t i = beg + 1, to = (i <= end) ? end : $nc(es)->length, k = beg;; w = 0) {
		for (; i < to; ++i) {
			if (isClear(deathRow, i - k)) {
				$nc(es)->set(w++, $nc(es)->get(i));
			}
		}
		if (to == end) {
			break;
		}
		for (i = 0, to = end, k -= capacity; i < to && w < capacity; ++i) {
			if (isClear(deathRow, i - k)) {
				$nc(es)->set(w++, $nc(es)->get(i));
			}
		}
		if (i >= to) {
			if (w == capacity) {
				w = 0;
			}
			break;
		}
	}
	this->count -= distanceNonEmpty(w, end);
	circularClear(es, this->putIndex = w, end);
	return true;
}

void ArrayBlockingQueue::checkInvariants() {
	$useLocalObjectStack();
	if (!invariantsSatisfied()) {
		$var($String, detail, $String::format("takeIndex=%d putIndex=%d count=%d capacity=%d items=%s"_s, $$new($ObjectArray, {
			$($Integer::valueOf(this->takeIndex)),
			$($Integer::valueOf(this->putIndex)),
			$($Integer::valueOf(this->count)),
			$($Integer::valueOf($nc(this->items)->length)),
			$($Arrays::toString(this->items))
		})));
		$nc($System::err)->println(detail);
		$throwNew($AssertionError, $of(detail));
	}
}

bool ArrayBlockingQueue::invariantsSatisfied() {
	int32_t capacity = $nc(this->items)->length;
	bool var$0 = capacity > 0 && this->items->getClass() == $getClass($ObjectArray) && ((this->takeIndex | this->putIndex) | this->count) >= 0 && this->takeIndex < capacity && this->putIndex < capacity && this->count <= capacity && $mod((this->putIndex - this->takeIndex - this->count), capacity) == 0 && (this->count == 0 || this->items->get(this->takeIndex) != nullptr) && (this->count == capacity || this->items->get(this->putIndex) == nullptr);
	return var$0 && (this->count == 0 || this->items->get(dec(this->putIndex, capacity)) != nullptr);
}

void ArrayBlockingQueue::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (!invariantsSatisfied()) {
		$throwNew($InvalidObjectException, "invariants violated"_s);
	}
}

bool ArrayBlockingQueue::lambda$retainAll$1($Collection* c, Object$* e) {
	$init(ArrayBlockingQueue);
	return !$nc(c)->contains(e);
}

bool ArrayBlockingQueue::lambda$removeAll$0($Collection* c, Object$* e) {
	$init(ArrayBlockingQueue);
	return $nc(c)->contains(e);
}

ArrayBlockingQueue::ArrayBlockingQueue() {
}

$Class* ArrayBlockingQueue::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.concurrent.ArrayBlockingQueue$$Lambda$lambda$removeAll$0")) {
			return ArrayBlockingQueue$$Lambda$lambda$removeAll$0::load$(name, initialize);
		}
		if (name->equals("java.util.concurrent.ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1")) {
			return ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayBlockingQueue, serialVersionUID)},
		{"items", "[Ljava/lang/Object;", nullptr, $FINAL, $field(ArrayBlockingQueue, items)},
		{"takeIndex", "I", nullptr, 0, $field(ArrayBlockingQueue, takeIndex)},
		{"putIndex", "I", nullptr, 0, $field(ArrayBlockingQueue, putIndex)},
		{"count", "I", nullptr, 0, $field(ArrayBlockingQueue, count)},
		{"lock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $FINAL, $field(ArrayBlockingQueue, lock)},
		{"notEmpty", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(ArrayBlockingQueue, notEmpty)},
		{"notFull", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(ArrayBlockingQueue, notFull)},
		{"itrs", "Ljava/util/concurrent/ArrayBlockingQueue$Itrs;", "Ljava/util/concurrent/ArrayBlockingQueue<TE;>.Itrs;", $TRANSIENT, $field(ArrayBlockingQueue, itrs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
		{"*element", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(ArrayBlockingQueue, init$, void, int32_t)},
		{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(ArrayBlockingQueue, init$, void, int32_t, bool)},
		{"<init>", "(IZLjava/util/Collection;)V", "(IZLjava/util/Collection<+TE;>;)V", $PUBLIC, $method(ArrayBlockingQueue, init$, void, int32_t, bool, $Collection*)},
		{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(ArrayBlockingQueue, add, bool, Object$*)},
		{"bulkRemove", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PRIVATE, $method(ArrayBlockingQueue, bulkRemove, bool, $Predicate*)},
		{"bulkRemoveModified", "(Ljava/util/function/Predicate;I)Z", "(Ljava/util/function/Predicate<-TE;>;I)Z", $PRIVATE, $method(ArrayBlockingQueue, bulkRemoveModified, bool, $Predicate*, int32_t)},
		{"checkInvariants", "()V", nullptr, 0, $virtualMethod(ArrayBlockingQueue, checkInvariants, void)},
		{"circularClear", "([Ljava/lang/Object;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ArrayBlockingQueue, circularClear, void, $ObjectArray*, int32_t, int32_t)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(ArrayBlockingQueue, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ArrayBlockingQueue, contains, bool, Object$*)},
		{"dec", "(II)I", nullptr, $STATIC | $FINAL, $staticMethod(ArrayBlockingQueue, dec, int32_t, int32_t, int32_t)},
		{"dequeue", "()Ljava/lang/Object;", "()TE;", $PRIVATE, $method(ArrayBlockingQueue, dequeue, $Object*)},
		{"distanceNonEmpty", "(II)I", nullptr, $PRIVATE, $method(ArrayBlockingQueue, distanceNonEmpty, int32_t, int32_t, int32_t)},
		{"drainTo", "(Ljava/util/Collection;)I", "(Ljava/util/Collection<-TE;>;)I", $PUBLIC, $virtualMethod(ArrayBlockingQueue, drainTo, int32_t, $Collection*)},
		{"drainTo", "(Ljava/util/Collection;I)I", "(Ljava/util/Collection<-TE;>;I)I", $PUBLIC, $virtualMethod(ArrayBlockingQueue, drainTo, int32_t, $Collection*, int32_t)},
		{"enqueue", "(Ljava/lang/Object;)V", "(TE;)V", $PRIVATE, $method(ArrayBlockingQueue, enqueue, void, Object$*)},
		{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(ArrayBlockingQueue, forEach, void, $Consumer*)},
		{"inc", "(II)I", nullptr, $STATIC | $FINAL, $staticMethod(ArrayBlockingQueue, inc, int32_t, int32_t, int32_t)},
		{"invariantsSatisfied", "()Z", nullptr, $PRIVATE, $method(ArrayBlockingQueue, invariantsSatisfied, bool)},
		{"isClear", "([JI)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(ArrayBlockingQueue, isClear, bool, $longs*, int32_t)},
		{"*isEmpty", "()Z", nullptr, $PUBLIC},
		{"itemAt", "(I)Ljava/lang/Object;", "(I)TE;", $FINAL, $method(ArrayBlockingQueue, itemAt, $Object*, int32_t)},
		{"itemAt", "([Ljava/lang/Object;I)Ljava/lang/Object;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;I)TE;", $STATIC, $staticMethod(ArrayBlockingQueue, itemAt, $Object*, $ObjectArray*, int32_t)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(ArrayBlockingQueue, iterator, $Iterator*)},
		{"lambda$removeAll$0", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ArrayBlockingQueue, lambda$removeAll$0, bool, $Collection*, Object$*)},
		{"lambda$retainAll$1", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ArrayBlockingQueue, lambda$retainAll$1, bool, $Collection*, Object$*)},
		{"nBits", "(I)[J", nullptr, $PRIVATE | $STATIC, $staticMethod(ArrayBlockingQueue, nBits, $longs*, int32_t)},
		{"offer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(ArrayBlockingQueue, offer, bool, Object$*)},
		{"offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC, $virtualMethod(ArrayBlockingQueue, offer, bool, Object$*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
		{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
		{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(ArrayBlockingQueue, peek, $Object*)},
		{"poll", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(ArrayBlockingQueue, poll, $Object*)},
		{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TE;", $PUBLIC, $virtualMethod(ArrayBlockingQueue, poll, $Object*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
		{"put", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(ArrayBlockingQueue, put, void, Object$*), "java.lang.InterruptedException"},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(ArrayBlockingQueue, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"remainingCapacity", "()I", nullptr, $PUBLIC, $virtualMethod(ArrayBlockingQueue, remainingCapacity, int32_t)},
		{"*remove", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ArrayBlockingQueue, remove, bool, Object$*)},
		{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(ArrayBlockingQueue, removeAll, bool, $Collection*)},
		{"removeAt", "(I)V", nullptr, 0, $virtualMethod(ArrayBlockingQueue, removeAt, void, int32_t)},
		{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC, $virtualMethod(ArrayBlockingQueue, removeIf, bool, $Predicate*)},
		{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(ArrayBlockingQueue, retainAll, bool, $Collection*)},
		{"setBit", "([JI)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ArrayBlockingQueue, setBit, void, $longs*, int32_t)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ArrayBlockingQueue, size, int32_t)},
		{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(ArrayBlockingQueue, spliterator, $Spliterator*)},
		{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
		{"take", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(ArrayBlockingQueue, take, $Object*), "java.lang.InterruptedException"},
		{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ArrayBlockingQueue, toArray, $ObjectArray*)},
		{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(ArrayBlockingQueue, toArray, $ObjectArray*, $ObjectArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ArrayBlockingQueue, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ArrayBlockingQueue$Itr", "java.util.concurrent.ArrayBlockingQueue", "Itr", $PRIVATE},
		{"java.util.concurrent.ArrayBlockingQueue$Itrs", "java.util.concurrent.ArrayBlockingQueue", "Itrs", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.ArrayBlockingQueue",
		"java.util.AbstractQueue",
		"java.util.concurrent.BlockingQueue,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/util/AbstractQueue<TE;>;Ljava/util/concurrent/BlockingQueue<TE;>;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.concurrent.ArrayBlockingQueue$Itr,java.util.concurrent.ArrayBlockingQueue$Itrs,java.util.concurrent.ArrayBlockingQueue$Itrs$Node"
	};
	$loadClass(ArrayBlockingQueue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ArrayBlockingQueue));
	});
	return class$;
}

$Class* ArrayBlockingQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java