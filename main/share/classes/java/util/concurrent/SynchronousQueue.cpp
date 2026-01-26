#include <java/util/concurrent/SynchronousQueue.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/InterruptedException.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/concurrent/SynchronousQueue$FifoWaitQueue.h>
#include <java/util/concurrent/SynchronousQueue$LifoWaitQueue.h>
#include <java/util/concurrent/SynchronousQueue$TransferQueue.h>
#include <java/util/concurrent/SynchronousQueue$TransferStack.h>
#include <java/util/concurrent/SynchronousQueue$Transferer.h>
#include <java/util/concurrent/SynchronousQueue$WaitQueue.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef SPIN_FOR_TIMEOUT_THRESHOLD

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $SynchronousQueue$FifoWaitQueue = ::java::util::concurrent::SynchronousQueue$FifoWaitQueue;
using $SynchronousQueue$LifoWaitQueue = ::java::util::concurrent::SynchronousQueue$LifoWaitQueue;
using $SynchronousQueue$TransferQueue = ::java::util::concurrent::SynchronousQueue$TransferQueue;
using $SynchronousQueue$TransferStack = ::java::util::concurrent::SynchronousQueue$TransferStack;
using $SynchronousQueue$Transferer = ::java::util::concurrent::SynchronousQueue$Transferer;
using $SynchronousQueue$WaitQueue = ::java::util::concurrent::SynchronousQueue$WaitQueue;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _SynchronousQueue_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SynchronousQueue, serialVersionUID)},
	{"SPIN_FOR_TIMEOUT_THRESHOLD", "J", nullptr, $STATIC | $FINAL, $constField(SynchronousQueue, SPIN_FOR_TIMEOUT_THRESHOLD)},
	{"transferer", "Ljava/util/concurrent/SynchronousQueue$Transferer;", "Ljava/util/concurrent/SynchronousQueue$Transferer<TE;>;", $PRIVATE | $VOLATILE | $TRANSIENT, $field(SynchronousQueue, transferer)},
	{"qlock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE, $field(SynchronousQueue, qlock)},
	{"waitingProducers", "Ljava/util/concurrent/SynchronousQueue$WaitQueue;", nullptr, $PRIVATE, $field(SynchronousQueue, waitingProducers)},
	{"waitingConsumers", "Ljava/util/concurrent/SynchronousQueue$WaitQueue;", nullptr, $PRIVATE, $field(SynchronousQueue, waitingConsumers)},
	{}
};

$MethodInfo _SynchronousQueue_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*element", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SynchronousQueue, init$, void)},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(SynchronousQueue, init$, void, bool)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(SynchronousQueue, clear, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SynchronousQueue, contains, bool, Object$*)},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(SynchronousQueue, containsAll, bool, $Collection*)},
	{"drainTo", "(Ljava/util/Collection;)I", "(Ljava/util/Collection<-TE;>;)I", $PUBLIC, $virtualMethod(SynchronousQueue, drainTo, int32_t, $Collection*)},
	{"drainTo", "(Ljava/util/Collection;I)I", "(Ljava/util/Collection<-TE;>;I)I", $PUBLIC, $virtualMethod(SynchronousQueue, drainTo, int32_t, $Collection*, int32_t)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(SynchronousQueue, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(SynchronousQueue, iterator, $Iterator*)},
	{"offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC, $virtualMethod(SynchronousQueue, offer, bool, Object$*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"offer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(SynchronousQueue, offer, bool, Object$*)},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(SynchronousQueue, peek, $Object*)},
	{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TE;", $PUBLIC, $virtualMethod(SynchronousQueue, poll, $Object*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"poll", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(SynchronousQueue, poll, $Object*)},
	{"put", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $virtualMethod(SynchronousQueue, put, void, Object$*), "java.lang.InterruptedException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(SynchronousQueue, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remainingCapacity", "()I", nullptr, $PUBLIC, $virtualMethod(SynchronousQueue, remainingCapacity, int32_t)},
	{"*remove", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SynchronousQueue, remove, bool, Object$*)},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(SynchronousQueue, removeAll, bool, $Collection*)},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(SynchronousQueue, retainAll, bool, $Collection*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(SynchronousQueue, size, int32_t)},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(SynchronousQueue, spliterator, $Spliterator*)},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"take", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(SynchronousQueue, take, $Object*), "java.lang.InterruptedException"},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SynchronousQueue, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(SynchronousQueue, toArray, $ObjectArray*, $ObjectArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SynchronousQueue, toString, $String*)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(SynchronousQueue, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$InnerClassInfo _SynchronousQueue_InnerClassesInfo_[] = {
	{"java.util.concurrent.SynchronousQueue$FifoWaitQueue", "java.util.concurrent.SynchronousQueue", "FifoWaitQueue", $STATIC},
	{"java.util.concurrent.SynchronousQueue$LifoWaitQueue", "java.util.concurrent.SynchronousQueue", "LifoWaitQueue", $STATIC},
	{"java.util.concurrent.SynchronousQueue$WaitQueue", "java.util.concurrent.SynchronousQueue", "WaitQueue", $STATIC},
	{"java.util.concurrent.SynchronousQueue$TransferQueue", "java.util.concurrent.SynchronousQueue", "TransferQueue", $STATIC | $FINAL},
	{"java.util.concurrent.SynchronousQueue$TransferStack", "java.util.concurrent.SynchronousQueue", "TransferStack", $STATIC | $FINAL},
	{"java.util.concurrent.SynchronousQueue$Transferer", "java.util.concurrent.SynchronousQueue", "Transferer", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SynchronousQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.SynchronousQueue",
	"java.util.AbstractQueue",
	"java.util.concurrent.BlockingQueue,java.io.Serializable",
	_SynchronousQueue_FieldInfo_,
	_SynchronousQueue_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractQueue<TE;>;Ljava/util/concurrent/BlockingQueue<TE;>;Ljava/io/Serializable;",
	nullptr,
	_SynchronousQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.SynchronousQueue$FifoWaitQueue,java.util.concurrent.SynchronousQueue$LifoWaitQueue,java.util.concurrent.SynchronousQueue$WaitQueue,java.util.concurrent.SynchronousQueue$TransferQueue,java.util.concurrent.SynchronousQueue$TransferQueue$QNode,java.util.concurrent.SynchronousQueue$TransferStack,java.util.concurrent.SynchronousQueue$TransferStack$SNode,java.util.concurrent.SynchronousQueue$Transferer"
};

$Object* allocate$SynchronousQueue($Class* clazz) {
	return $of($alloc(SynchronousQueue));
}

bool SynchronousQueue::add(Object$* e) {
	 return this->$AbstractQueue::add(e);
}

$Object* SynchronousQueue::remove() {
	 return this->$AbstractQueue::remove();
}

$Object* SynchronousQueue::element() {
	 return this->$AbstractQueue::element();
}

bool SynchronousQueue::addAll($Collection* c) {
	 return this->$AbstractQueue::addAll(c);
}

$ObjectArray* SynchronousQueue::toArray($IntFunction* generator) {
	 return this->$AbstractQueue::toArray(generator);
}

bool SynchronousQueue::removeIf($Predicate* filter) {
	 return this->$AbstractQueue::removeIf(filter);
}

bool SynchronousQueue::equals(Object$* o) {
	 return this->$AbstractQueue::equals(o);
}

int32_t SynchronousQueue::hashCode() {
	 return this->$AbstractQueue::hashCode();
}

$Stream* SynchronousQueue::stream() {
	 return this->$AbstractQueue::stream();
}

$Stream* SynchronousQueue::parallelStream() {
	 return this->$AbstractQueue::parallelStream();
}

void SynchronousQueue::forEach($Consumer* action) {
	this->$AbstractQueue::forEach(action);
}

$Object* SynchronousQueue::clone() {
	 return this->$AbstractQueue::clone();
}

void SynchronousQueue::finalize() {
	this->$AbstractQueue::finalize();
}

void SynchronousQueue::init$() {
	SynchronousQueue::init$(false);
}

void SynchronousQueue::init$(bool fair) {
	$AbstractQueue::init$();
	$set(this, transferer, fair ? static_cast<$SynchronousQueue$Transferer*>($new($SynchronousQueue$TransferQueue)) : static_cast<$SynchronousQueue$Transferer*>($new($SynchronousQueue$TransferStack)));
}

void SynchronousQueue::put(Object$* e) {
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc(this->transferer)->transfer(e, false, 0) == nullptr) {
		$Thread::interrupted();
		$throwNew($InterruptedException);
	}
}

bool SynchronousQueue::offer(Object$* e, int64_t timeout, $TimeUnit* unit) {
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc(this->transferer)->transfer(e, true, $nc(unit)->toNanos(timeout)) != nullptr) {
		return true;
	}
	if (!$Thread::interrupted()) {
		return false;
	}
	$throwNew($InterruptedException);
}

bool SynchronousQueue::offer(Object$* e) {
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(this->transferer)->transfer(e, true, 0) != nullptr;
}

$Object* SynchronousQueue::take() {
	$var($Object, e, $nc(this->transferer)->transfer(nullptr, false, 0));
	if (e != nullptr) {
		return $of(e);
	}
	$Thread::interrupted();
	$throwNew($InterruptedException);
}

$Object* SynchronousQueue::poll(int64_t timeout, $TimeUnit* unit) {
	$var($Object, e, $nc(this->transferer)->transfer(nullptr, true, $nc(unit)->toNanos(timeout)));
	if (e != nullptr || !$Thread::interrupted()) {
		return $of(e);
	}
	$throwNew($InterruptedException);
}

$Object* SynchronousQueue::poll() {
	return $of($nc(this->transferer)->transfer(nullptr, true, 0));
}

bool SynchronousQueue::isEmpty() {
	return true;
}

int32_t SynchronousQueue::size() {
	return 0;
}

int32_t SynchronousQueue::remainingCapacity() {
	return 0;
}

void SynchronousQueue::clear() {
}

bool SynchronousQueue::contains(Object$* o) {
	return false;
}

bool SynchronousQueue::remove(Object$* o) {
	return false;
}

bool SynchronousQueue::containsAll($Collection* c) {
	return $nc(c)->isEmpty();
}

bool SynchronousQueue::removeAll($Collection* c) {
	return false;
}

bool SynchronousQueue::retainAll($Collection* c) {
	return false;
}

$Object* SynchronousQueue::peek() {
	return $of(nullptr);
}

$Iterator* SynchronousQueue::iterator() {
	return $Collections::emptyIterator();
}

$Spliterator* SynchronousQueue::spliterator() {
	return $Spliterators::emptySpliterator();
}

$ObjectArray* SynchronousQueue::toArray() {
	return $new($ObjectArray, 0);
}

$ObjectArray* SynchronousQueue::toArray($ObjectArray* a) {
	if ($nc(a)->length > 0) {
		a->set(0, nullptr);
	}
	return a;
}

$String* SynchronousQueue::toString() {
	return "[]"_s;
}

int32_t SynchronousQueue::drainTo($Collection* c) {
	$Objects::requireNonNull(c);
	if ($equals(c, this)) {
		$throwNew($IllegalArgumentException);
	}
	int32_t n = 0;
	{
		$var($Object, e, nullptr);
		for (; ($assign(e, poll())) != nullptr; ++n) {
			c->add(e);
		}
	}
	return n;
}

int32_t SynchronousQueue::drainTo($Collection* c, int32_t maxElements) {
	$Objects::requireNonNull(c);
	if ($equals(c, this)) {
		$throwNew($IllegalArgumentException);
	}
	int32_t n = 0;
	{
		$var($Object, e, nullptr);
		for (; n < maxElements && ($assign(e, poll())) != nullptr; ++n) {
			c->add(e);
		}
	}
	return n;
}

void SynchronousQueue::writeObject($ObjectOutputStream* s) {
	bool fair = $instanceOf($SynchronousQueue$TransferQueue, this->transferer);
	if (fair) {
		$set(this, qlock, $new($ReentrantLock, true));
		$set(this, waitingProducers, $new($SynchronousQueue$FifoWaitQueue));
		$set(this, waitingConsumers, $new($SynchronousQueue$FifoWaitQueue));
	} else {
		$set(this, qlock, $new($ReentrantLock));
		$set(this, waitingProducers, $new($SynchronousQueue$LifoWaitQueue));
		$set(this, waitingConsumers, $new($SynchronousQueue$LifoWaitQueue));
	}
	$nc(s)->defaultWriteObject();
}

void SynchronousQueue::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if ($instanceOf($SynchronousQueue$FifoWaitQueue, this->waitingProducers)) {
		$set(this, transferer, $new($SynchronousQueue$TransferQueue));
	} else {
		$set(this, transferer, $new($SynchronousQueue$TransferStack));
	}
}

void clinit$SynchronousQueue($Class* class$) {
	{
		$load($LockSupport);
		$Class* ensureLoaded = $LockSupport::class$;
	}
}

SynchronousQueue::SynchronousQueue() {
}

$Class* SynchronousQueue::load$($String* name, bool initialize) {
	$loadClass(SynchronousQueue, name, initialize, &_SynchronousQueue_ClassInfo_, clinit$SynchronousQueue, allocate$SynchronousQueue);
	return class$;
}

$Class* SynchronousQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java