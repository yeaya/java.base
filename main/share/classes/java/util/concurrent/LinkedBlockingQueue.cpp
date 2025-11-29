#include <java/util/concurrent/LinkedBlockingQueue.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Array.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/Helpers.h>
#include <java/util/concurrent/LinkedBlockingQueue$Itr.h>
#include <java/util/concurrent/LinkedBlockingQueue$LBQSpliterator.h>
#include <java/util/concurrent/LinkedBlockingQueue$Node.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef MAX_VALUE

using $LinkedBlockingQueue$NodeArray = $Array<::java::util::concurrent::LinkedBlockingQueue$Node>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $1Array = ::java::lang::reflect::Array;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Helpers = ::java::util::concurrent::Helpers;
using $LinkedBlockingQueue$Itr = ::java::util::concurrent::LinkedBlockingQueue$Itr;
using $LinkedBlockingQueue$LBQSpliterator = ::java::util::concurrent::LinkedBlockingQueue$LBQSpliterator;
using $LinkedBlockingQueue$Node = ::java::util::concurrent::LinkedBlockingQueue$Node;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Condition = ::java::util::concurrent::locks::Condition;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace concurrent {

class LinkedBlockingQueue$$Lambda$lambda$removeAll$0 : public $Predicate {
	$class(LinkedBlockingQueue$$Lambda$lambda$removeAll$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return LinkedBlockingQueue::lambda$removeAll$0(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LinkedBlockingQueue$$Lambda$lambda$removeAll$0>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LinkedBlockingQueue$$Lambda$lambda$removeAll$0::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(LinkedBlockingQueue$$Lambda$lambda$removeAll$0, c)},
	{}
};
$MethodInfo LinkedBlockingQueue$$Lambda$lambda$removeAll$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(LinkedBlockingQueue$$Lambda$lambda$removeAll$0::*)($Collection*)>(&LinkedBlockingQueue$$Lambda$lambda$removeAll$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo LinkedBlockingQueue$$Lambda$lambda$removeAll$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.LinkedBlockingQueue$$Lambda$lambda$removeAll$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* LinkedBlockingQueue$$Lambda$lambda$removeAll$0::load$($String* name, bool initialize) {
	$loadClass(LinkedBlockingQueue$$Lambda$lambda$removeAll$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LinkedBlockingQueue$$Lambda$lambda$removeAll$0::class$ = nullptr;

class LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1 : public $Predicate {
	$class(LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return LinkedBlockingQueue::lambda$retainAll$1(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1, c)},
	{}
};
$MethodInfo LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1::*)($Collection*)>(&LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1::load$($String* name, bool initialize) {
	$loadClass(LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1::class$ = nullptr;

$FieldInfo _LinkedBlockingQueue_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinkedBlockingQueue, serialVersionUID)},
	{"capacity", "I", nullptr, $PRIVATE | $FINAL, $field(LinkedBlockingQueue, capacity)},
	{"count", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $FINAL, $field(LinkedBlockingQueue, count)},
	{"head", "Ljava/util/concurrent/LinkedBlockingQueue$Node;", "Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;", $TRANSIENT, $field(LinkedBlockingQueue, head)},
	{"last", "Ljava/util/concurrent/LinkedBlockingQueue$Node;", "Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;", $PRIVATE | $TRANSIENT, $field(LinkedBlockingQueue, last)},
	{"takeLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(LinkedBlockingQueue, takeLock)},
	{"notEmpty", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(LinkedBlockingQueue, notEmpty)},
	{"putLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(LinkedBlockingQueue, putLock)},
	{"notFull", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(LinkedBlockingQueue, notFull)},
	{}
};

$MethodInfo _LinkedBlockingQueue_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*element", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LinkedBlockingQueue::*)()>(&LinkedBlockingQueue::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(LinkedBlockingQueue::*)(int32_t)>(&LinkedBlockingQueue::init$))},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC, $method(static_cast<void(LinkedBlockingQueue::*)($Collection*)>(&LinkedBlockingQueue::init$))},
	{"bulkRemove", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PRIVATE, $method(static_cast<bool(LinkedBlockingQueue::*)($Predicate*)>(&LinkedBlockingQueue::bulkRemove))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"dequeue", "()Ljava/lang/Object;", "()TE;", $PRIVATE, $method(static_cast<$Object*(LinkedBlockingQueue::*)()>(&LinkedBlockingQueue::dequeue))},
	{"drainTo", "(Ljava/util/Collection;)I", "(Ljava/util/Collection<-TE;>;)I", $PUBLIC},
	{"drainTo", "(Ljava/util/Collection;I)I", "(Ljava/util/Collection<-TE;>;I)I", $PUBLIC},
	{"enqueue", "(Ljava/util/concurrent/LinkedBlockingQueue$Node;)V", "(Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;)V", $PRIVATE, $method(static_cast<void(LinkedBlockingQueue::*)($LinkedBlockingQueue$Node*)>(&LinkedBlockingQueue::enqueue))},
	{"findPred", "(Ljava/util/concurrent/LinkedBlockingQueue$Node;Ljava/util/concurrent/LinkedBlockingQueue$Node;)Ljava/util/concurrent/LinkedBlockingQueue$Node;", "(Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;)Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;", 0},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"forEachFrom", "(Ljava/util/function/Consumer;Ljava/util/concurrent/LinkedBlockingQueue$Node;)V", "(Ljava/util/function/Consumer<-TE;>;Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;)V", 0},
	{"fullyLock", "()V", nullptr, 0},
	{"fullyUnlock", "()V", nullptr, 0},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"lambda$removeAll$0", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&LinkedBlockingQueue::lambda$removeAll$0))},
	{"lambda$retainAll$1", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&LinkedBlockingQueue::lambda$retainAll$1))},
	{"offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"offer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"poll", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"put", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LinkedBlockingQueue::*)($ObjectInputStream*)>(&LinkedBlockingQueue::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remainingCapacity", "()I", nullptr, $PUBLIC},
	{"*remove", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"signalNotEmpty", "()V", nullptr, $PRIVATE, $method(static_cast<void(LinkedBlockingQueue::*)()>(&LinkedBlockingQueue::signalNotEmpty))},
	{"signalNotFull", "()V", nullptr, $PRIVATE, $method(static_cast<void(LinkedBlockingQueue::*)()>(&LinkedBlockingQueue::signalNotFull))},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"succ", "(Ljava/util/concurrent/LinkedBlockingQueue$Node;)Ljava/util/concurrent/LinkedBlockingQueue$Node;", "(Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;)Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;", 0},
	{"take", "()Ljava/lang/Object;", "()TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unlink", "(Ljava/util/concurrent/LinkedBlockingQueue$Node;Ljava/util/concurrent/LinkedBlockingQueue$Node;)V", "(Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;Ljava/util/concurrent/LinkedBlockingQueue$Node<TE;>;)V", 0},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LinkedBlockingQueue::*)($ObjectOutputStream*)>(&LinkedBlockingQueue::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _LinkedBlockingQueue_InnerClassesInfo_[] = {
	{"java.util.concurrent.LinkedBlockingQueue$LBQSpliterator", "java.util.concurrent.LinkedBlockingQueue", "LBQSpliterator", $PRIVATE | $FINAL},
	{"java.util.concurrent.LinkedBlockingQueue$Itr", "java.util.concurrent.LinkedBlockingQueue", "Itr", $PRIVATE},
	{"java.util.concurrent.LinkedBlockingQueue$Node", "java.util.concurrent.LinkedBlockingQueue", "Node", $STATIC},
	{}
};

$ClassInfo _LinkedBlockingQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.LinkedBlockingQueue",
	"java.util.AbstractQueue",
	"java.util.concurrent.BlockingQueue,java.io.Serializable",
	_LinkedBlockingQueue_FieldInfo_,
	_LinkedBlockingQueue_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractQueue<TE;>;Ljava/util/concurrent/BlockingQueue<TE;>;Ljava/io/Serializable;",
	nullptr,
	_LinkedBlockingQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.LinkedBlockingQueue$LBQSpliterator,java.util.concurrent.LinkedBlockingQueue$Itr,java.util.concurrent.LinkedBlockingQueue$Node"
};

$Object* allocate$LinkedBlockingQueue($Class* clazz) {
	return $of($alloc(LinkedBlockingQueue));
}

bool LinkedBlockingQueue::add(Object$* e) {
	 return this->$AbstractQueue::add(e);
}

$Object* LinkedBlockingQueue::remove() {
	 return this->$AbstractQueue::remove();
}

$Object* LinkedBlockingQueue::element() {
	 return this->$AbstractQueue::element();
}

bool LinkedBlockingQueue::addAll($Collection* c) {
	 return this->$AbstractQueue::addAll(c);
}

bool LinkedBlockingQueue::isEmpty() {
	 return this->$AbstractQueue::isEmpty();
}

bool LinkedBlockingQueue::containsAll($Collection* c) {
	 return this->$AbstractQueue::containsAll(c);
}

$ObjectArray* LinkedBlockingQueue::toArray($IntFunction* generator) {
	 return this->$AbstractQueue::toArray(generator);
}

bool LinkedBlockingQueue::equals(Object$* o) {
	 return this->$AbstractQueue::equals(o);
}

int32_t LinkedBlockingQueue::hashCode() {
	 return this->$AbstractQueue::hashCode();
}

$Stream* LinkedBlockingQueue::stream() {
	 return this->$AbstractQueue::stream();
}

$Stream* LinkedBlockingQueue::parallelStream() {
	 return this->$AbstractQueue::parallelStream();
}

$Object* LinkedBlockingQueue::clone() {
	 return this->$AbstractQueue::clone();
}

void LinkedBlockingQueue::finalize() {
	this->$AbstractQueue::finalize();
}

void LinkedBlockingQueue::signalNotEmpty() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, takeLock, this->takeLock);
	$nc(takeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->notEmpty)->signal();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			takeLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LinkedBlockingQueue::signalNotFull() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, putLock, this->putLock);
	$nc(putLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->notFull)->signal();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			putLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LinkedBlockingQueue::enqueue($LinkedBlockingQueue$Node* node) {
	$set(this, last, ($set($nc(this->last), next, node)));
}

$Object* LinkedBlockingQueue::dequeue() {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingQueue$Node, h, this->head);
	$var($LinkedBlockingQueue$Node, first, $nc(h)->next);
	$set(h, next, h);
	$set(this, head, first);
	$var($Object, x, $nc(first)->item);
	$set(first, item, nullptr);
	return $of(x);
}

void LinkedBlockingQueue::fullyLock() {
	$nc(this->putLock)->lock();
	$nc(this->takeLock)->lock();
}

void LinkedBlockingQueue::fullyUnlock() {
	$nc(this->takeLock)->unlock();
	$nc(this->putLock)->unlock();
}

void LinkedBlockingQueue::init$() {
	LinkedBlockingQueue::init$($Integer::MAX_VALUE);
}

void LinkedBlockingQueue::init$(int32_t capacity) {
	$AbstractQueue::init$();
	$set(this, count, $new($AtomicInteger));
	$set(this, takeLock, $new($ReentrantLock));
	$set(this, notEmpty, $nc(this->takeLock)->newCondition());
	$set(this, putLock, $new($ReentrantLock));
	$set(this, notFull, $nc(this->putLock)->newCondition());
	if (capacity <= 0) {
		$throwNew($IllegalArgumentException);
	}
	this->capacity = capacity;
	$set(this, last, ($set(this, head, $new($LinkedBlockingQueue$Node, nullptr))));
}

void LinkedBlockingQueue::init$($Collection* c) {
	$useLocalCurrentObjectStackCache();
	LinkedBlockingQueue::init$($Integer::MAX_VALUE);
	$var($ReentrantLock, putLock, this->putLock);
	$nc(putLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t n = 0;
			{
				$var($Iterator, i$, $nc(c)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Object, e, i$->next());
					{
						if (e == nullptr) {
							$throwNew($NullPointerException);
						}
						if (n == this->capacity) {
							$throwNew($IllegalStateException, "Queue full"_s);
						}
						enqueue($$new($LinkedBlockingQueue$Node, e));
						++n;
					}
				}
			}
			$nc(this->count)->set(n);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			putLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t LinkedBlockingQueue::size() {
	return $nc(this->count)->get();
}

int32_t LinkedBlockingQueue::remainingCapacity() {
	return this->capacity - $nc(this->count)->get();
}

void LinkedBlockingQueue::put(Object$* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t c = 0;
	$var($LinkedBlockingQueue$Node, node, $new($LinkedBlockingQueue$Node, e));
	$var($ReentrantLock, putLock, this->putLock);
	$var($AtomicInteger, count, this->count);
	$nc(putLock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		try {
			while ($nc(count)->get() == this->capacity) {
				$nc(this->notFull)->await();
			}
			enqueue(node);
			c = $nc(count)->getAndIncrement();
			if (c + 1 < this->capacity) {
				$nc(this->notFull)->signal();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			putLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (c == 0) {
		signalNotEmpty();
	}
}

bool LinkedBlockingQueue::offer(Object$* e, int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	int64_t nanos = $nc(unit)->toNanos(timeout);
	int32_t c = 0;
	$var($ReentrantLock, putLock, this->putLock);
	$var($AtomicInteger, count, this->count);
	$nc(putLock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			while ($nc(count)->get() == this->capacity) {
				if (nanos <= (int64_t)0) {
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
				nanos = $nc(this->notFull)->awaitNanos(nanos);
			}
			enqueue($$new($LinkedBlockingQueue$Node, e));
			c = $nc(count)->getAndIncrement();
			if (c + 1 < this->capacity) {
				$nc(this->notFull)->signal();
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			putLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	if (c == 0) {
		signalNotEmpty();
	}
	return true;
}

bool LinkedBlockingQueue::offer(Object$* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($AtomicInteger, count, this->count);
	if ($nc(count)->get() == this->capacity) {
		return false;
	}
	int32_t c = 0;
	$var($LinkedBlockingQueue$Node, node, $new($LinkedBlockingQueue$Node, e));
	$var($ReentrantLock, putLock, this->putLock);
	$nc(putLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if ($nc(count)->get() == this->capacity) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			enqueue(node);
			c = $nc(count)->getAndIncrement();
			if (c + 1 < this->capacity) {
				$nc(this->notFull)->signal();
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			putLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	if (c == 0) {
		signalNotEmpty();
	}
	return true;
}

$Object* LinkedBlockingQueue::take() {
	$useLocalCurrentObjectStackCache();
	$var($Object, x, nullptr);
	int32_t c = 0;
	$var($AtomicInteger, count, this->count);
	$var($ReentrantLock, takeLock, this->takeLock);
	$nc(takeLock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		try {
			while ($nc(count)->get() == 0) {
				$nc(this->notEmpty)->await();
			}
			$assign(x, dequeue());
			c = $nc(count)->getAndDecrement();
			if (c > 1) {
				$nc(this->notEmpty)->signal();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			takeLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (c == this->capacity) {
		signalNotFull();
	}
	return $of(x);
}

$Object* LinkedBlockingQueue::poll(int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	$var($Object, x, nullptr);
	int32_t c = 0;
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($AtomicInteger, count, this->count);
	$var($ReentrantLock, takeLock, this->takeLock);
	$nc(takeLock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			while ($nc(count)->get() == 0) {
				if (nanos <= (int64_t)0) {
					$assign(var$2, nullptr);
					return$1 = true;
					goto $finally;
				}
				nanos = $nc(this->notEmpty)->awaitNanos(nanos);
			}
			$assign(x, dequeue());
			c = $nc(count)->getAndDecrement();
			if (c > 1) {
				$nc(this->notEmpty)->signal();
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			takeLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	if (c == this->capacity) {
		signalNotFull();
	}
	return $of(x);
}

$Object* LinkedBlockingQueue::poll() {
	$useLocalCurrentObjectStackCache();
	$var($AtomicInteger, count, this->count);
	if ($nc(count)->get() == 0) {
		return $of(nullptr);
	}
	$var($Object, x, nullptr);
	int32_t c = 0;
	$var($ReentrantLock, takeLock, this->takeLock);
	$nc(takeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			if ($nc(count)->get() == 0) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			$assign(x, dequeue());
			c = $nc(count)->getAndDecrement();
			if (c > 1) {
				$nc(this->notEmpty)->signal();
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			takeLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	if (c == this->capacity) {
		signalNotFull();
	}
	return $of(x);
}

$Object* LinkedBlockingQueue::peek() {
	$useLocalCurrentObjectStackCache();
	$var($AtomicInteger, count, this->count);
	if ($nc(count)->get() == 0) {
		return $of(nullptr);
	}
	$var($ReentrantLock, takeLock, this->takeLock);
	$nc(takeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, ($nc(count)->get() > 0) ? $nc($nc(this->head)->next)->item : ($Object*)nullptr);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			takeLock->unlock();
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

void LinkedBlockingQueue::unlink($LinkedBlockingQueue$Node* p, $LinkedBlockingQueue$Node* pred) {
	$set($nc(p), item, nullptr);
	$set($nc(pred), next, p->next);
	if (this->last == p) {
		$set(this, last, pred);
	}
	if ($nc(this->count)->getAndDecrement() == this->capacity) {
		$nc(this->notFull)->signal();
	}
}

bool LinkedBlockingQueue::remove(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (o == nullptr) {
		return false;
	}
	fullyLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			{
				$var($LinkedBlockingQueue$Node, pred, this->head);
				$var($LinkedBlockingQueue$Node, p, $nc(pred)->next);
				for (; p != nullptr; $assign(pred, p), $assign(p, $nc(p)->next)) {
					if ($nc($of(o))->equals(p->item)) {
						unlink(p, pred);
						var$2 = true;
						return$1 = true;
						goto $finally;
					}
				}
			}
			var$2 = false;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			fullyUnlock();
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

bool LinkedBlockingQueue::contains(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (o == nullptr) {
		return false;
	}
	fullyLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			{
				$var($LinkedBlockingQueue$Node, p, $nc(this->head)->next);
				for (; p != nullptr; $assign(p, $nc(p)->next)) {
					if ($nc($of(o))->equals(p->item)) {
						var$2 = true;
						return$1 = true;
						goto $finally;
					}
				}
			}
			var$2 = false;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			fullyUnlock();
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

$ObjectArray* LinkedBlockingQueue::toArray() {
	$useLocalCurrentObjectStackCache();
	fullyLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($ObjectArray, var$2, nullptr);
		bool return$1 = false;
		try {
			int32_t size = $nc(this->count)->get();
			$var($ObjectArray, a, $new($ObjectArray, size));
			int32_t k = 0;
			{
				$var($LinkedBlockingQueue$Node, p, $nc(this->head)->next);
				for (; p != nullptr; $assign(p, $nc(p)->next)) {
					a->set(k++, p->item);
				}
			}
			$assign(var$2, a);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			fullyUnlock();
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

$ObjectArray* LinkedBlockingQueue::toArray($ObjectArray* a$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, a, a$renamed);
	fullyLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($ObjectArray, var$2, nullptr);
		bool return$1 = false;
		try {
			int32_t size = $nc(this->count)->get();
			if ($nc(a)->length < size) {
				$assign(a, $cast($ObjectArray, $1Array::newInstance($of(a)->getClass()->getComponentType(), size)));
			}
			int32_t k = 0;
			{
				$var($LinkedBlockingQueue$Node, p, $nc(this->head)->next);
				for (; p != nullptr; $assign(p, $nc(p)->next)) {
					$nc(a)->set(k++, p->item);
				}
			}
			if ($nc(a)->length > k) {
				a->set(k, nullptr);
			}
			$assign(var$2, a);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			fullyUnlock();
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

$String* LinkedBlockingQueue::toString() {
	return $Helpers::collectionToString(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(this))));
}

void LinkedBlockingQueue::clear() {
	$useLocalCurrentObjectStackCache();
	fullyLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($LinkedBlockingQueue$Node, p, nullptr);
				$var($LinkedBlockingQueue$Node, h, this->head);
				for (; ($assign(p, $nc(h)->next)) != nullptr; $assign(h, p)) {
					$set($nc(h), next, h);
					$set($nc(p), item, nullptr);
				}
			}
			$set(this, head, this->last);
			if ($nc(this->count)->getAndSet(0) == this->capacity) {
				$nc(this->notFull)->signal();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			fullyUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t LinkedBlockingQueue::drainTo($Collection* c) {
	return drainTo(c, $Integer::MAX_VALUE);
}

int32_t LinkedBlockingQueue::drainTo($Collection* c, int32_t maxElements) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(c);
	if ($equals(c, this)) {
		$throwNew($IllegalArgumentException);
	}
	if (maxElements <= 0) {
		return 0;
	}
	bool signalNotFull = false;
	$var($ReentrantLock, takeLock, this->takeLock);
	$nc(takeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t n = $Math::min(maxElements, $nc(this->count)->get());
			$var($LinkedBlockingQueue$Node, h, this->head);
			int32_t i = 0;
			{
				$var($Throwable, var$3, nullptr);
				int32_t var$5 = 0;
				bool return$4 = false;
				try {
					while (i < n) {
						$var($LinkedBlockingQueue$Node, p, $nc(h)->next);
						c->add($nc(p)->item);
						$set($nc(p), item, nullptr);
						$set(h, next, h);
						$assign(h, p);
						++i;
					}
					var$5 = n;
					return$4 = true;
					goto $finally1;
				} catch ($Throwable& var$6) {
					$assign(var$3, var$6);
				} $finally1: {
					if (i > 0) {
						$set(this, head, h);
						signalNotFull = ($nc(this->count)->getAndAdd(-i) == this->capacity);
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
			takeLock->unlock();
			if (signalNotFull) {
				this->signalNotFull();
			}
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

$LinkedBlockingQueue$Node* LinkedBlockingQueue::succ($LinkedBlockingQueue$Node* p$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingQueue$Node, p, p$renamed);
	$var($LinkedBlockingQueue$Node, var$0, p);
	if (var$0 == ($assign(p, $nc(p)->next))) {
		$assign(p, $nc(this->head)->next);
	}
	return p;
}

$Iterator* LinkedBlockingQueue::iterator() {
	return $new($LinkedBlockingQueue$Itr, this);
}

$Spliterator* LinkedBlockingQueue::spliterator() {
	return $new($LinkedBlockingQueue$LBQSpliterator, this);
}

void LinkedBlockingQueue::forEach($Consumer* action) {
	$Objects::requireNonNull(action);
	forEachFrom(action, nullptr);
}

void LinkedBlockingQueue::forEachFrom($Consumer* action, $LinkedBlockingQueue$Node* p$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingQueue$Node, p, p$renamed);
	int32_t batchSize = 64;
	$var($ObjectArray, es, nullptr);
	int32_t n = 0;
	int32_t len = 0;
	do {
		fullyLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (es == nullptr) {
					if (p == nullptr) {
						$assign(p, $nc(this->head)->next);
					}
					{
						$var($LinkedBlockingQueue$Node, q, p);
						for (; q != nullptr; $assign(q, succ(q))) {
							if (q->item != nullptr && ++len == batchSize) {
								break;
							}
						}
					}
					$assign(es, $new($ObjectArray, len));
				}
				for (n = 0; p != nullptr && n < len; $assign(p, succ(p))) {
					if (($nc(es)->set(n, p->item)) != nullptr) {
						++n;
					}
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				fullyUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		for (int32_t i = 0; i < n; ++i) {
			$var($Object, e, $nc(es)->get(i));
			$nc(action)->accept(e);
		}
	} while (n > 0 && p != nullptr);
}

bool LinkedBlockingQueue::removeIf($Predicate* filter) {
	$Objects::requireNonNull(filter);
	return bulkRemove(filter);
}

bool LinkedBlockingQueue::removeAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(LinkedBlockingQueue$$Lambda$lambda$removeAll$0, c)));
}

bool LinkedBlockingQueue::retainAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1, c)));
}

$LinkedBlockingQueue$Node* LinkedBlockingQueue::findPred($LinkedBlockingQueue$Node* p, $LinkedBlockingQueue$Node* ancestor$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingQueue$Node, ancestor, ancestor$renamed);
	if ($nc(ancestor)->item == nullptr) {
		$assign(ancestor, this->head);
	}
	{
		$var($LinkedBlockingQueue$Node, q, nullptr);
		for (; ($assign(q, $nc(ancestor)->next)) != p;) {
			$assign(ancestor, q);
		}
	}
	return ancestor;
}

bool LinkedBlockingQueue::bulkRemove($Predicate* filter) {
	$useLocalCurrentObjectStackCache();
	bool removed = false;
	$var($LinkedBlockingQueue$Node, p, nullptr);
	$var($LinkedBlockingQueue$Node, ancestor, this->head);
	$var($LinkedBlockingQueue$NodeArray, nodes, nullptr);
	int32_t n = 0;
	int32_t len = 0;
	do {
		fullyLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (nodes == nullptr) {
					$assign(p, $nc(this->head)->next);
					{
						$var($LinkedBlockingQueue$Node, q, p);
						for (; q != nullptr; $assign(q, succ(q))) {
							if (q->item != nullptr && ++len == 64) {
								break;
							}
						}
					}
					$assign(nodes, $new($LinkedBlockingQueue$NodeArray, len));
				}
				for (n = 0; p != nullptr && n < len; $assign(p, succ(p))) {
					$nc(nodes)->set(n++, p);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				fullyUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		int64_t deathRow = 0;
		for (int32_t i = 0; i < n; ++i) {
			$var($Object, e, nullptr);
			bool var$2 = ($assign(e, $nc($nc(nodes)->get(i))->item)) != nullptr;
			if (var$2 && $nc(filter)->test(e)) {
				deathRow |= $sl((int64_t)1, i);
			}
		}
		if (deathRow != 0) {
			fullyLock();
			{
				$var($Throwable, var$3, nullptr);
				try {
					for (int32_t i = 0; i < n; ++i) {
						$var($LinkedBlockingQueue$Node, q, nullptr);
						if (((int64_t)(deathRow & (uint64_t)($sl((int64_t)1, i)))) != (int64_t)0 && $nc(($assign(q, $nc(nodes)->get(i))))->item != nullptr) {
							$assign(ancestor, findPred(q, ancestor));
							unlink(q, ancestor);
							removed = true;
						}
						$nc(nodes)->set(i, nullptr);
					}
				} catch ($Throwable& var$4) {
					$assign(var$3, var$4);
				} /*finally*/ {
					fullyUnlock();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
			}
		}
	} while (n > 0 && p != nullptr);
	return removed;
}

void LinkedBlockingQueue::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	fullyLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(s)->defaultWriteObject();
			{
				$var($LinkedBlockingQueue$Node, p, $nc(this->head)->next);
				for (; p != nullptr; $assign(p, $nc(p)->next)) {
					s->writeObject(p->item);
				}
			}
			s->writeObject(nullptr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			fullyUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LinkedBlockingQueue::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	$nc(this->count)->set(0);
	$set(this, last, ($set(this, head, $new($LinkedBlockingQueue$Node, nullptr))));
	for (;;) {
		$var($Object, item, s->readObject());
		if (item == nullptr) {
			break;
		}
		add(item);
	}
}

bool LinkedBlockingQueue::lambda$retainAll$1($Collection* c, Object$* e) {
	$init(LinkedBlockingQueue);
	return !$nc(c)->contains(e);
}

bool LinkedBlockingQueue::lambda$removeAll$0($Collection* c, Object$* e) {
	$init(LinkedBlockingQueue);
	return $nc(c)->contains(e);
}

LinkedBlockingQueue::LinkedBlockingQueue() {
}

$Class* LinkedBlockingQueue::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LinkedBlockingQueue$$Lambda$lambda$removeAll$0::classInfo$.name)) {
			return LinkedBlockingQueue$$Lambda$lambda$removeAll$0::load$(name, initialize);
		}
		if (name->equals(LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1::classInfo$.name)) {
			return LinkedBlockingQueue$$Lambda$lambda$retainAll$1$1::load$(name, initialize);
		}
	}
	$loadClass(LinkedBlockingQueue, name, initialize, &_LinkedBlockingQueue_ClassInfo_, allocate$LinkedBlockingQueue);
	return class$;
}

$Class* LinkedBlockingQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java