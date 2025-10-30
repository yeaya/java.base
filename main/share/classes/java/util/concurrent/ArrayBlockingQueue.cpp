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
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $ArrayBlockingQueue$Itr = ::java::util::concurrent::ArrayBlockingQueue$Itr;
using $ArrayBlockingQueue$Itrs = ::java::util::concurrent::ArrayBlockingQueue$Itrs;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $Helpers = ::java::util::concurrent::Helpers;
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

class ArrayBlockingQueue$$Lambda$lambda$removeAll$0 : public $Predicate {
	$class(ArrayBlockingQueue$$Lambda$lambda$removeAll$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return ArrayBlockingQueue::lambda$removeAll$0(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArrayBlockingQueue$$Lambda$lambda$removeAll$0>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArrayBlockingQueue$$Lambda$lambda$removeAll$0::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(ArrayBlockingQueue$$Lambda$lambda$removeAll$0, c)},
	{}
};
$MethodInfo ArrayBlockingQueue$$Lambda$lambda$removeAll$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayBlockingQueue$$Lambda$lambda$removeAll$0::*)($Collection*)>(&ArrayBlockingQueue$$Lambda$lambda$removeAll$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArrayBlockingQueue$$Lambda$lambda$removeAll$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.ArrayBlockingQueue$$Lambda$lambda$removeAll$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ArrayBlockingQueue$$Lambda$lambda$removeAll$0::load$($String* name, bool initialize) {
	$loadClass(ArrayBlockingQueue$$Lambda$lambda$removeAll$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1, c)},
	{}
};
$MethodInfo ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::*)($Collection*)>(&ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::load$($String* name, bool initialize) {
	$loadClass(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::class$ = nullptr;

$FieldInfo _ArrayBlockingQueue_FieldInfo_[] = {
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

$MethodInfo _ArrayBlockingQueue_MethodInfo_[] = {
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*element", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayBlockingQueue::*)(int32_t)>(&ArrayBlockingQueue::init$))},
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(static_cast<void(ArrayBlockingQueue::*)(int32_t,bool)>(&ArrayBlockingQueue::init$))},
	{"<init>", "(IZLjava/util/Collection;)V", "(IZLjava/util/Collection<+TE;>;)V", $PUBLIC, $method(static_cast<void(ArrayBlockingQueue::*)(int32_t,bool,$Collection*)>(&ArrayBlockingQueue::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"bulkRemove", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PRIVATE, $method(static_cast<bool(ArrayBlockingQueue::*)($Predicate*)>(&ArrayBlockingQueue::bulkRemove))},
	{"bulkRemoveModified", "(Ljava/util/function/Predicate;I)Z", "(Ljava/util/function/Predicate<-TE;>;I)Z", $PRIVATE, $method(static_cast<bool(ArrayBlockingQueue::*)($Predicate*,int32_t)>(&ArrayBlockingQueue::bulkRemoveModified))},
	{"checkInvariants", "()V", nullptr, 0},
	{"circularClear", "([Ljava/lang/Object;II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t)>(&ArrayBlockingQueue::circularClear))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"dec", "(II)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&ArrayBlockingQueue::dec))},
	{"dequeue", "()Ljava/lang/Object;", "()TE;", $PRIVATE, $method(static_cast<$Object*(ArrayBlockingQueue::*)()>(&ArrayBlockingQueue::dequeue))},
	{"distanceNonEmpty", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ArrayBlockingQueue::*)(int32_t,int32_t)>(&ArrayBlockingQueue::distanceNonEmpty))},
	{"drainTo", "(Ljava/util/Collection;)I", "(Ljava/util/Collection<-TE;>;)I", $PUBLIC},
	{"drainTo", "(Ljava/util/Collection;I)I", "(Ljava/util/Collection<-TE;>;I)I", $PUBLIC},
	{"enqueue", "(Ljava/lang/Object;)V", "(TE;)V", $PRIVATE, $method(static_cast<void(ArrayBlockingQueue::*)(Object$*)>(&ArrayBlockingQueue::enqueue))},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"inc", "(II)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&ArrayBlockingQueue::inc))},
	{"invariantsSatisfied", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ArrayBlockingQueue::*)()>(&ArrayBlockingQueue::invariantsSatisfied))},
	{"isClear", "([JI)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($longs*,int32_t)>(&ArrayBlockingQueue::isClear))},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"itemAt", "(I)Ljava/lang/Object;", "(I)TE;", $FINAL, $method(static_cast<$Object*(ArrayBlockingQueue::*)(int32_t)>(&ArrayBlockingQueue::itemAt))},
	{"itemAt", "([Ljava/lang/Object;I)Ljava/lang/Object;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;I)TE;", $STATIC, $method(static_cast<$Object*(*)($ObjectArray*,int32_t)>(&ArrayBlockingQueue::itemAt))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"lambda$removeAll$0", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&ArrayBlockingQueue::lambda$removeAll$0))},
	{"lambda$retainAll$1", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&ArrayBlockingQueue::lambda$retainAll$1))},
	{"nBits", "(I)[J", nullptr, $PRIVATE | $STATIC, $method(static_cast<$longs*(*)(int32_t)>(&ArrayBlockingQueue::nBits))},
	{"offer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"poll", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"put", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayBlockingQueue::*)($ObjectInputStream*)>(&ArrayBlockingQueue::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remainingCapacity", "()I", nullptr, $PUBLIC},
	{"*remove", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeAt", "(I)V", nullptr, 0},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"setBit", "([JI)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($longs*,int32_t)>(&ArrayBlockingQueue::setBit))},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"take", "()Ljava/lang/Object;", "()TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ArrayBlockingQueue_InnerClassesInfo_[] = {
	{"java.util.concurrent.ArrayBlockingQueue$Itr", "java.util.concurrent.ArrayBlockingQueue", "Itr", $PRIVATE},
	{"java.util.concurrent.ArrayBlockingQueue$Itrs", "java.util.concurrent.ArrayBlockingQueue", "Itrs", 0},
	{}
};

$ClassInfo _ArrayBlockingQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ArrayBlockingQueue",
	"java.util.AbstractQueue",
	"java.util.concurrent.BlockingQueue,java.io.Serializable",
	_ArrayBlockingQueue_FieldInfo_,
	_ArrayBlockingQueue_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractQueue<TE;>;Ljava/util/concurrent/BlockingQueue<TE;>;Ljava/io/Serializable;",
	nullptr,
	_ArrayBlockingQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.ArrayBlockingQueue$Itr,java.util.concurrent.ArrayBlockingQueue$Itrs,java.util.concurrent.ArrayBlockingQueue$Itrs$Node"
};

$Object* allocate$ArrayBlockingQueue($Class* clazz) {
	return $of($alloc(ArrayBlockingQueue));
}

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
	return $of($nc(this->items)->get(i));
}

$Object* ArrayBlockingQueue::itemAt($ObjectArray* items, int32_t i) {
	$init(ArrayBlockingQueue);
	return $of($nc(items)->get(i));
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
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, items, this->items);
	$var($Object, e, $nc(items)->get(this->takeIndex));
	items->set(this->takeIndex, nullptr);
	if (++this->takeIndex == items->length) {
		this->takeIndex = 0;
	}
	--this->count;
	if (this->itrs != nullptr) {
		$nc(this->itrs)->elementDequeued();
	}
	$nc(this->notFull)->signal();
	return $of(e);
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
			$nc(this->itrs)->elementDequeued();
		}
	} else {
		{
			int32_t i = removeIndex;
			int32_t putIndex = this->putIndex;
			for (;;) {
				int32_t pred = i;
				if (++i == $nc(items)->length) {
					i = 0;
				}
				if (i == putIndex) {
					$nc(items)->set(pred, nullptr);
					this->putIndex = pred;
					break;
				}
				$nc(items)->set(pred, items->get(i));
			}
		}
		--this->count;
		if (this->itrs != nullptr) {
			$nc(this->itrs)->removedAt(removeIndex);
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
	$set(this, notEmpty, $nc(this->lock)->newCondition());
	$set(this, notFull, $nc(this->lock)->newCondition());
}

void ArrayBlockingQueue::init$(int32_t capacity, bool fair, $Collection* c) {
	$useLocalCurrentObjectStackCache();
	ArrayBlockingQueue::init$(capacity, fair);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ObjectArray, items, this->items);
			int32_t i = 0;
			try {
				{
					$var($Iterator, i$, $nc(c)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Object, e, i$->next());
						$nc(items)->set(i++, $Objects::requireNonNull(e));
					}
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
}

bool ArrayBlockingQueue::add(Object$* e) {
	return $AbstractQueue::add(e);
}

bool ArrayBlockingQueue::offer(Object$* e) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(e);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
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
	}
	$shouldNotReachHere();
}

void ArrayBlockingQueue::put(Object$* e) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(e);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
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
}

bool ArrayBlockingQueue::offer(Object$* e, int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(e);
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			while (this->count == $nc(this->items)->length) {
				if (nanos <= (int64_t)0) {
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
	}
	$shouldNotReachHere();
}

$Object* ArrayBlockingQueue::poll() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
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
	}
	$shouldNotReachHere();
}

$Object* ArrayBlockingQueue::take() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
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
	}
	$shouldNotReachHere();
}

$Object* ArrayBlockingQueue::poll(int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			while (this->count == 0) {
				if (nanos <= (int64_t)0) {
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
	}
	$shouldNotReachHere();
}

$Object* ArrayBlockingQueue::peek() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
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
	}
	$shouldNotReachHere();
}

int32_t ArrayBlockingQueue::size() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
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
	}
	$shouldNotReachHere();
}

int32_t ArrayBlockingQueue::remainingCapacity() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
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
	}
	$shouldNotReachHere();
}

bool ArrayBlockingQueue::remove(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (o == nullptr) {
		return false;
	}
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (this->count > 0) {
				$var($ObjectArray, items, this->items);
				{
					int32_t i = this->takeIndex;
					int32_t end = this->putIndex;
					int32_t to = (i < end) ? end : $nc(items)->length;
					for (;; i = 0, to = end) {
						for (; i < to; ++i) {
							if ($nc($of(o))->equals(items->get(i))) {
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
	}
	$shouldNotReachHere();
}

bool ArrayBlockingQueue::contains(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (o == nullptr) {
		return false;
	}
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (this->count > 0) {
				$var($ObjectArray, items, this->items);
				{
					int32_t i = this->takeIndex;
					int32_t end = this->putIndex;
					int32_t to = (i < end) ? end : $nc(items)->length;
					for (;; i = 0, to = end) {
						for (; i < to; ++i) {
							if ($nc($of(o))->equals(items->get(i))) {
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
	}
	$shouldNotReachHere();
}

$ObjectArray* ArrayBlockingQueue::toArray() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
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
	}
	$shouldNotReachHere();
}

$ObjectArray* ArrayBlockingQueue::toArray($ObjectArray* a$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, a, a$renamed);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
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
	}
	$shouldNotReachHere();
}

$String* ArrayBlockingQueue::toString() {
	return $Helpers::collectionToString(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(this))));
}

void ArrayBlockingQueue::clear() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t k = 0;
			if ((k = this->count) > 0) {
				circularClear(this->items, this->takeIndex, this->putIndex);
				this->takeIndex = this->putIndex;
				this->count = 0;
				if (this->itrs != nullptr) {
					$nc(this->itrs)->queueIsEmpty();
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
}

void ArrayBlockingQueue::circularClear($ObjectArray* items, int32_t i, int32_t end) {
	$init(ArrayBlockingQueue);
	for (int32_t to = (i < end) ? end : $nc(items)->length;; i = 0, to = end) {
		for (; i < to; ++i) {
			items->set(i, nullptr);
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
	$useLocalCurrentObjectStackCache();
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
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t n = $Math::min(maxElements, this->count);
			int32_t take = this->takeIndex;
			int32_t i = 0;
			{
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
								$nc(this->itrs)->queueIsEmpty();
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
	}
	$shouldNotReachHere();
}

$Iterator* ArrayBlockingQueue::iterator() {
	return $new($ArrayBlockingQueue$Itr, this);
}

$Spliterator* ArrayBlockingQueue::spliterator() {
	return $Spliterators::spliterator(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(this))), (($Spliterator::ORDERED | $Spliterator::NONNULL) | $Spliterator::CONCURRENT));
}

void ArrayBlockingQueue::forEach($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->count > 0) {
				$var($ObjectArray, items, this->items);
				{
					int32_t i = this->takeIndex;
					int32_t end = this->putIndex;
					int32_t to = (i < end) ? end : $nc(items)->length;
					for (;; i = 0, to = end) {
						for (; i < to; ++i) {
							action->accept($(itemAt(items, i)));
						}
						if (to == end) {
							break;
						}
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
}

bool ArrayBlockingQueue::removeIf($Predicate* filter) {
	$Objects::requireNonNull(filter);
	return bulkRemove(filter);
}

bool ArrayBlockingQueue::removeAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(ArrayBlockingQueue$$Lambda$lambda$removeAll$0, c)));
}

bool ArrayBlockingQueue::retainAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1, c)));
}

bool ArrayBlockingQueue::bulkRemove($Predicate* filter) {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (this->itrs == nullptr) {
				if (this->count > 0) {
					$var($ObjectArray, items, this->items);
					{
						int32_t i = this->takeIndex;
						int32_t end = this->putIndex;
						int32_t to = (i < end) ? end : $nc(items)->length;
						for (;; i = 0, to = end) {
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
	return ((int64_t)($nc(bits)->get(i >> 6) & (uint64_t)($sl((int64_t)1, i)))) == 0;
}

int32_t ArrayBlockingQueue::distanceNonEmpty(int32_t i, int32_t j) {
	if ((j -= i) <= 0) {
		j += $nc(this->items)->length;
	}
	return j;
}

bool ArrayBlockingQueue::bulkRemoveModified($Predicate* filter, int32_t beg) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, es, this->items);
	int32_t capacity = $nc(this->items)->length;
	int32_t end = this->putIndex;
	$var($longs, deathRow, nBits(distanceNonEmpty(beg, this->putIndex)));
	$nc(deathRow)->set(0, 1);
	{
		int32_t i = beg + 1;
		int32_t to = (i <= end) ? end : $nc(es)->length;
		int32_t k = beg;
		for (;; i = 0, to = end, k -= capacity) {
			for (; i < to; ++i) {
				if ($nc(filter)->test($(itemAt(es, i)))) {
					setBit(deathRow, i - k);
				}
			}
			if (to == end) {
				break;
			}
		}
	}
	int32_t w = beg;
	{
		int32_t i = beg + 1;
		int32_t to = (i <= end) ? end : es->length;
		int32_t k = beg;
		for (;; w = 0) {
			for (; i < to; ++i) {
				if (isClear(deathRow, i - k)) {
					es->set(w++, es->get(i));
				}
			}
			if (to == end) {
				break;
			}
			for (i = 0, to = end, k -= capacity; i < to && w < capacity; ++i) {
				if (isClear(deathRow, i - k)) {
					es->set(w++, es->get(i));
				}
			}
			if (i >= to) {
				if (w == capacity) {
					w = 0;
				}
				break;
			}
		}
	}
	this->count -= distanceNonEmpty(w, end);
	circularClear(es, this->putIndex = w, end);
	return true;
}

void ArrayBlockingQueue::checkInvariants() {
	$useLocalCurrentObjectStackCache();
	if (!invariantsSatisfied()) {
		$var($String, detail, $String::format("takeIndex=%d putIndex=%d count=%d capacity=%d items=%s"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->takeIndex))),
			$($of($Integer::valueOf(this->putIndex))),
			$($of($Integer::valueOf(this->count))),
			$($of($Integer::valueOf($nc(this->items)->length))),
			$($of($Arrays::toString(this->items)))
		})));
		$nc($System::err)->println(detail);
		$throwNew($AssertionError, $of(detail));
	}
}

bool ArrayBlockingQueue::invariantsSatisfied() {
	int32_t capacity = $nc(this->items)->length;
	$load($ObjectArray);
	bool var$0 = capacity > 0 && $nc($of(this->items))->getClass() == $getClass($ObjectArray) && ((this->takeIndex | this->putIndex) | this->count) >= 0 && this->takeIndex < capacity && this->putIndex < capacity && this->count <= capacity && $mod((this->putIndex - this->takeIndex - this->count), capacity) == 0 && (this->count == 0 || $nc(this->items)->get(this->takeIndex) != nullptr) && (this->count == capacity || $nc(this->items)->get(this->putIndex) == nullptr);
	return var$0 && (this->count == 0 || $nc(this->items)->get(dec(this->putIndex, capacity)) != nullptr);
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
		if (name->equals(ArrayBlockingQueue$$Lambda$lambda$removeAll$0::classInfo$.name)) {
			return ArrayBlockingQueue$$Lambda$lambda$removeAll$0::load$(name, initialize);
		}
		if (name->equals(ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::classInfo$.name)) {
			return ArrayBlockingQueue$$Lambda$lambda$retainAll$1$1::load$(name, initialize);
		}
	}
	$loadClass(ArrayBlockingQueue, name, initialize, &_ArrayBlockingQueue_ClassInfo_, allocate$ArrayBlockingQueue);
	return class$;
}

$Class* ArrayBlockingQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java