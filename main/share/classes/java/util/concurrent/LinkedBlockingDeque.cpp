#include <java/util/concurrent/LinkedBlockingDeque.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/Helpers.h>
#include <java/util/concurrent/LinkedBlockingDeque$AbstractItr.h>
#include <java/util/concurrent/LinkedBlockingDeque$DescendingItr.h>
#include <java/util/concurrent/LinkedBlockingDeque$Itr.h>
#include <java/util/concurrent/LinkedBlockingDeque$LBDSpliterator.h>
#include <java/util/concurrent/LinkedBlockingDeque$Node.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef MAX_VALUE

using $LinkedBlockingDeque$NodeArray = $Array<::java::util::concurrent::LinkedBlockingDeque$Node>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $1Array = ::java::lang::reflect::Array;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $BlockingDeque = ::java::util::concurrent::BlockingDeque;
using $Helpers = ::java::util::concurrent::Helpers;
using $LinkedBlockingDeque$AbstractItr = ::java::util::concurrent::LinkedBlockingDeque$AbstractItr;
using $LinkedBlockingDeque$DescendingItr = ::java::util::concurrent::LinkedBlockingDeque$DescendingItr;
using $LinkedBlockingDeque$Itr = ::java::util::concurrent::LinkedBlockingDeque$Itr;
using $LinkedBlockingDeque$LBDSpliterator = ::java::util::concurrent::LinkedBlockingDeque$LBDSpliterator;
using $LinkedBlockingDeque$Node = ::java::util::concurrent::LinkedBlockingDeque$Node;
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

class LinkedBlockingDeque$$Lambda$lambda$removeAll$0 : public $Predicate {
	$class(LinkedBlockingDeque$$Lambda$lambda$removeAll$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return LinkedBlockingDeque::lambda$removeAll$0(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LinkedBlockingDeque$$Lambda$lambda$removeAll$0>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LinkedBlockingDeque$$Lambda$lambda$removeAll$0::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(LinkedBlockingDeque$$Lambda$lambda$removeAll$0, c)},
	{}
};
$MethodInfo LinkedBlockingDeque$$Lambda$lambda$removeAll$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(LinkedBlockingDeque$$Lambda$lambda$removeAll$0::*)($Collection*)>(&LinkedBlockingDeque$$Lambda$lambda$removeAll$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo LinkedBlockingDeque$$Lambda$lambda$removeAll$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.LinkedBlockingDeque$$Lambda$lambda$removeAll$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* LinkedBlockingDeque$$Lambda$lambda$removeAll$0::load$($String* name, bool initialize) {
	$loadClass(LinkedBlockingDeque$$Lambda$lambda$removeAll$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LinkedBlockingDeque$$Lambda$lambda$removeAll$0::class$ = nullptr;

class LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1 : public $Predicate {
	$class(LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Collection* c) {
		$set(this, c, c);
	}
	virtual bool test(Object$* e) override {
		 return LinkedBlockingDeque::lambda$retainAll$1(c, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1>());
	}
	$Collection* c = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1::fieldInfos[2] = {
	{"c", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1, c)},
	{}
};
$MethodInfo LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1::*)($Collection*)>(&LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1::load$($String* name, bool initialize) {
	$loadClass(LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1::class$ = nullptr;

$FieldInfo _LinkedBlockingDeque_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinkedBlockingDeque, serialVersionUID)},
	{"first", "Ljava/util/concurrent/LinkedBlockingDeque$Node;", "Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", $TRANSIENT, $field(LinkedBlockingDeque, first)},
	{"last", "Ljava/util/concurrent/LinkedBlockingDeque$Node;", "Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", $TRANSIENT, $field(LinkedBlockingDeque, last)},
	{"count", "I", nullptr, $PRIVATE | $TRANSIENT, $field(LinkedBlockingDeque, count)},
	{"capacity", "I", nullptr, $PRIVATE | $FINAL, $field(LinkedBlockingDeque, capacity)},
	{"lock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $FINAL, $field(LinkedBlockingDeque, lock)},
	{"notEmpty", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(LinkedBlockingDeque, notEmpty)},
	{"notFull", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(LinkedBlockingDeque, notFull)},
	{}
};

$MethodInfo _LinkedBlockingDeque_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LinkedBlockingDeque::*)()>(&LinkedBlockingDeque::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(LinkedBlockingDeque::*)(int32_t)>(&LinkedBlockingDeque::init$))},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC, $method(static_cast<void(LinkedBlockingDeque::*)($Collection*)>(&LinkedBlockingDeque::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"addFirst", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"addLast", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"bulkRemove", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PRIVATE, $method(static_cast<bool(LinkedBlockingDeque::*)($Predicate*)>(&LinkedBlockingDeque::bulkRemove))},
	{"checkInvariants", "()V", nullptr, 0},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"drainTo", "(Ljava/util/Collection;)I", "(Ljava/util/Collection<-TE;>;)I", $PUBLIC},
	{"drainTo", "(Ljava/util/Collection;I)I", "(Ljava/util/Collection<-TE;>;I)I", $PUBLIC},
	{"element", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"forEachFrom", "(Ljava/util/function/Consumer;Ljava/util/concurrent/LinkedBlockingDeque$Node;)V", "(Ljava/util/function/Consumer<-TE;>;Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;)V", 0},
	{"getFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"getLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"lambda$removeAll$0", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&LinkedBlockingDeque::lambda$removeAll$0))},
	{"lambda$retainAll$1", "(Ljava/util/Collection;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Collection*,Object$*)>(&LinkedBlockingDeque::lambda$retainAll$1))},
	{"linkFirst", "(Ljava/util/concurrent/LinkedBlockingDeque$Node;)Z", "(Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;)Z", $PRIVATE, $method(static_cast<bool(LinkedBlockingDeque::*)($LinkedBlockingDeque$Node*)>(&LinkedBlockingDeque::linkFirst))},
	{"linkLast", "(Ljava/util/concurrent/LinkedBlockingDeque$Node;)Z", "(Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;)Z", $PRIVATE, $method(static_cast<bool(LinkedBlockingDeque::*)($LinkedBlockingDeque$Node*)>(&LinkedBlockingDeque::linkLast))},
	{"offer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"offerFirst", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"offerFirst", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"offerLast", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"offerLast", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"peekFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"peekLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"poll", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"pollFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"pollFirst", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"pollLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"pollLast", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"pop", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"push", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"put", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"putFirst", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"putLast", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LinkedBlockingDeque::*)($ObjectInputStream*)>(&LinkedBlockingDeque::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remainingCapacity", "()I", nullptr, $PUBLIC},
	{"remove", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"removeFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"removeFirstOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC},
	{"removeLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"removeLastOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"succ", "(Ljava/util/concurrent/LinkedBlockingDeque$Node;)Ljava/util/concurrent/LinkedBlockingDeque$Node;", "(Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;)Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;", 0},
	{"take", "()Ljava/lang/Object;", "()TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"takeFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"takeLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unlink", "(Ljava/util/concurrent/LinkedBlockingDeque$Node;)V", "(Ljava/util/concurrent/LinkedBlockingDeque$Node<TE;>;)V", 0},
	{"unlinkFirst", "()Ljava/lang/Object;", "()TE;", $PRIVATE, $method(static_cast<$Object*(LinkedBlockingDeque::*)()>(&LinkedBlockingDeque::unlinkFirst))},
	{"unlinkLast", "()Ljava/lang/Object;", "()TE;", $PRIVATE, $method(static_cast<$Object*(LinkedBlockingDeque::*)()>(&LinkedBlockingDeque::unlinkLast))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LinkedBlockingDeque::*)($ObjectOutputStream*)>(&LinkedBlockingDeque::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _LinkedBlockingDeque_InnerClassesInfo_[] = {
	{"java.util.concurrent.LinkedBlockingDeque$LBDSpliterator", "java.util.concurrent.LinkedBlockingDeque", "LBDSpliterator", $PRIVATE | $FINAL},
	{"java.util.concurrent.LinkedBlockingDeque$DescendingItr", "java.util.concurrent.LinkedBlockingDeque", "DescendingItr", $PRIVATE},
	{"java.util.concurrent.LinkedBlockingDeque$Itr", "java.util.concurrent.LinkedBlockingDeque", "Itr", $PRIVATE},
	{"java.util.concurrent.LinkedBlockingDeque$AbstractItr", "java.util.concurrent.LinkedBlockingDeque", "AbstractItr", $PRIVATE | $ABSTRACT},
	{"java.util.concurrent.LinkedBlockingDeque$Node", "java.util.concurrent.LinkedBlockingDeque", "Node", $STATIC | $FINAL},
	{}
};

$ClassInfo _LinkedBlockingDeque_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.LinkedBlockingDeque",
	"java.util.AbstractQueue",
	"java.util.concurrent.BlockingDeque,java.io.Serializable",
	_LinkedBlockingDeque_FieldInfo_,
	_LinkedBlockingDeque_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractQueue<TE;>;Ljava/util/concurrent/BlockingDeque<TE;>;Ljava/io/Serializable;",
	nullptr,
	_LinkedBlockingDeque_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.LinkedBlockingDeque$LBDSpliterator,java.util.concurrent.LinkedBlockingDeque$DescendingItr,java.util.concurrent.LinkedBlockingDeque$Itr,java.util.concurrent.LinkedBlockingDeque$AbstractItr,java.util.concurrent.LinkedBlockingDeque$Node"
};

$Object* allocate$LinkedBlockingDeque($Class* clazz) {
	return $of($alloc(LinkedBlockingDeque));
}

bool LinkedBlockingDeque::isEmpty() {
	 return this->$AbstractQueue::isEmpty();
}

bool LinkedBlockingDeque::containsAll($Collection* c) {
	 return this->$AbstractQueue::containsAll(c);
}

$ObjectArray* LinkedBlockingDeque::toArray($IntFunction* generator) {
	 return this->$AbstractQueue::toArray(generator);
}

bool LinkedBlockingDeque::equals(Object$* o) {
	 return this->$AbstractQueue::equals(o);
}

int32_t LinkedBlockingDeque::hashCode() {
	 return this->$AbstractQueue::hashCode();
}

$Stream* LinkedBlockingDeque::stream() {
	 return this->$AbstractQueue::stream();
}

$Stream* LinkedBlockingDeque::parallelStream() {
	 return this->$AbstractQueue::parallelStream();
}

$Object* LinkedBlockingDeque::clone() {
	 return this->$AbstractQueue::clone();
}

void LinkedBlockingDeque::finalize() {
	this->$AbstractQueue::finalize();
}

void LinkedBlockingDeque::init$() {
	LinkedBlockingDeque::init$($Integer::MAX_VALUE);
}

void LinkedBlockingDeque::init$(int32_t capacity) {
	$AbstractQueue::init$();
	$set(this, lock, $new($ReentrantLock));
	$set(this, notEmpty, $nc(this->lock)->newCondition());
	$set(this, notFull, $nc(this->lock)->newCondition());
	if (capacity <= 0) {
		$throwNew($IllegalArgumentException);
	}
	this->capacity = capacity;
}

void LinkedBlockingDeque::init$($Collection* c) {
	LinkedBlockingDeque::init$($Integer::MAX_VALUE);
	addAll(c);
}

bool LinkedBlockingDeque::linkFirst($LinkedBlockingDeque$Node* node) {
	if (this->count >= this->capacity) {
		return false;
	}
	$var($LinkedBlockingDeque$Node, f, this->first);
	$set($nc(node), next, f);
	$set(this, first, node);
	if (this->last == nullptr) {
		$set(this, last, node);
	} else {
		$set($nc(f), prev, node);
	}
	++this->count;
	$nc(this->notEmpty)->signal();
	return true;
}

bool LinkedBlockingDeque::linkLast($LinkedBlockingDeque$Node* node) {
	if (this->count >= this->capacity) {
		return false;
	}
	$var($LinkedBlockingDeque$Node, l, this->last);
	$set($nc(node), prev, l);
	$set(this, last, node);
	if (this->first == nullptr) {
		$set(this, first, node);
	} else {
		$set($nc(l), next, node);
	}
	++this->count;
	$nc(this->notEmpty)->signal();
	return true;
}

$Object* LinkedBlockingDeque::unlinkFirst() {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingDeque$Node, f, this->first);
	if (f == nullptr) {
		return $of(nullptr);
	}
	$var($LinkedBlockingDeque$Node, n, $nc(f)->next);
	$var($Object, item, f->item);
	$set(f, item, nullptr);
	$set(f, next, f);
	$set(this, first, n);
	if (n == nullptr) {
		$set(this, last, nullptr);
	} else {
		$set($nc(n), prev, nullptr);
	}
	--this->count;
	$nc(this->notFull)->signal();
	return $of(item);
}

$Object* LinkedBlockingDeque::unlinkLast() {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingDeque$Node, l, this->last);
	if (l == nullptr) {
		return $of(nullptr);
	}
	$var($LinkedBlockingDeque$Node, p, $nc(l)->prev);
	$var($Object, item, l->item);
	$set(l, item, nullptr);
	$set(l, prev, l);
	$set(this, last, p);
	if (p == nullptr) {
		$set(this, first, nullptr);
	} else {
		$set($nc(p), next, nullptr);
	}
	--this->count;
	$nc(this->notFull)->signal();
	return $of(item);
}

void LinkedBlockingDeque::unlink($LinkedBlockingDeque$Node* x) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingDeque$Node, p, $nc(x)->prev);
	$var($LinkedBlockingDeque$Node, n, x->next);
	if (p == nullptr) {
		unlinkFirst();
	} else if (n == nullptr) {
		unlinkLast();
	} else {
		$set($nc(p), next, n);
		$set($nc(n), prev, p);
		$set(x, item, nullptr);
		--this->count;
		$nc(this->notFull)->signal();
	}
}

void LinkedBlockingDeque::addFirst(Object$* e) {
	if (!offerFirst(e)) {
		$throwNew($IllegalStateException, "Deque full"_s);
	}
}

void LinkedBlockingDeque::addLast(Object$* e) {
	if (!offerLast(e)) {
		$throwNew($IllegalStateException, "Deque full"_s);
	}
}

bool LinkedBlockingDeque::offerFirst(Object$* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($LinkedBlockingDeque$Node, node, $new($LinkedBlockingDeque$Node, e));
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = linkFirst(node);
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

bool LinkedBlockingDeque::offerLast(Object$* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($LinkedBlockingDeque$Node, node, $new($LinkedBlockingDeque$Node, e));
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = linkLast(node);
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

void LinkedBlockingDeque::putFirst(Object$* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($LinkedBlockingDeque$Node, node, $new($LinkedBlockingDeque$Node, e));
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			while (!linkFirst(node)) {
				$nc(this->notFull)->await();
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

void LinkedBlockingDeque::putLast(Object$* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($LinkedBlockingDeque$Node, node, $new($LinkedBlockingDeque$Node, e));
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			while (!linkLast(node)) {
				$nc(this->notFull)->await();
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

bool LinkedBlockingDeque::offerFirst(Object$* e, int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($LinkedBlockingDeque$Node, node, $new($LinkedBlockingDeque$Node, e));
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			while (!linkFirst(node)) {
				if (nanos <= (int64_t)0) {
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
				nanos = $nc(this->notFull)->awaitNanos(nanos);
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

bool LinkedBlockingDeque::offerLast(Object$* e, int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($LinkedBlockingDeque$Node, node, $new($LinkedBlockingDeque$Node, e));
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			while (!linkLast(node)) {
				if (nanos <= (int64_t)0) {
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
				nanos = $nc(this->notFull)->awaitNanos(nanos);
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

$Object* LinkedBlockingDeque::removeFirst() {
	$var($Object, x, pollFirst());
	if (x == nullptr) {
		$throwNew($NoSuchElementException);
	}
	return $of(x);
}

$Object* LinkedBlockingDeque::removeLast() {
	$var($Object, x, pollLast());
	if (x == nullptr) {
		$throwNew($NoSuchElementException);
	}
	return $of(x);
}

$Object* LinkedBlockingDeque::pollFirst() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, unlinkFirst());
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

$Object* LinkedBlockingDeque::pollLast() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, unlinkLast());
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

$Object* LinkedBlockingDeque::takeFirst() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Object, x, nullptr);
			while (($assign(x, unlinkFirst())) == nullptr) {
				$nc(this->notEmpty)->await();
			}
			$assign(var$2, x);
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

$Object* LinkedBlockingDeque::takeLast() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Object, x, nullptr);
			while (($assign(x, unlinkLast())) == nullptr) {
				$nc(this->notEmpty)->await();
			}
			$assign(var$2, x);
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

$Object* LinkedBlockingDeque::pollFirst(int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Object, x, nullptr);
			while (($assign(x, unlinkFirst())) == nullptr) {
				if (nanos <= (int64_t)0) {
					$assign(var$2, nullptr);
					return$1 = true;
					goto $finally;
				}
				nanos = $nc(this->notEmpty)->awaitNanos(nanos);
			}
			$assign(var$2, x);
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

$Object* LinkedBlockingDeque::pollLast(int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lockInterruptibly();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Object, x, nullptr);
			while (($assign(x, unlinkLast())) == nullptr) {
				if (nanos <= (int64_t)0) {
					$assign(var$2, nullptr);
					return$1 = true;
					goto $finally;
				}
				nanos = $nc(this->notEmpty)->awaitNanos(nanos);
			}
			$assign(var$2, x);
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

$Object* LinkedBlockingDeque::getFirst() {
	$var($Object, x, peekFirst());
	if (x == nullptr) {
		$throwNew($NoSuchElementException);
	}
	return $of(x);
}

$Object* LinkedBlockingDeque::getLast() {
	$var($Object, x, peekLast());
	if (x == nullptr) {
		$throwNew($NoSuchElementException);
	}
	return $of(x);
}

$Object* LinkedBlockingDeque::peekFirst() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, (this->first == nullptr) ? ($Object*)nullptr : $nc(this->first)->item);
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

$Object* LinkedBlockingDeque::peekLast() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, (this->last == nullptr) ? ($Object*)nullptr : $nc(this->last)->item);
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

bool LinkedBlockingDeque::removeFirstOccurrence(Object$* o) {
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
			{
				$var($LinkedBlockingDeque$Node, p, this->first);
				for (; p != nullptr; $assign(p, $nc(p)->next)) {
					if ($nc($of(o))->equals(p->item)) {
						unlink(p);
						var$2 = true;
						return$1 = true;
						goto $finally;
					}
				}
			}
			var$2 = false;
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

bool LinkedBlockingDeque::removeLastOccurrence(Object$* o) {
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
			{
				$var($LinkedBlockingDeque$Node, p, this->last);
				for (; p != nullptr; $assign(p, $nc(p)->prev)) {
					if ($nc($of(o))->equals(p->item)) {
						unlink(p);
						var$2 = true;
						return$1 = true;
						goto $finally;
					}
				}
			}
			var$2 = false;
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

bool LinkedBlockingDeque::add(Object$* e) {
	addLast(e);
	return true;
}

bool LinkedBlockingDeque::offer(Object$* e) {
	return offerLast(e);
}

void LinkedBlockingDeque::put(Object$* e) {
	putLast(e);
}

bool LinkedBlockingDeque::offer(Object$* e, int64_t timeout, $TimeUnit* unit) {
	return offerLast(e, timeout, unit);
}

$Object* LinkedBlockingDeque::remove() {
	return $of(removeFirst());
}

$Object* LinkedBlockingDeque::poll() {
	return $of(pollFirst());
}

$Object* LinkedBlockingDeque::take() {
	return $of(takeFirst());
}

$Object* LinkedBlockingDeque::poll(int64_t timeout, $TimeUnit* unit) {
	return $of(pollFirst(timeout, unit));
}

$Object* LinkedBlockingDeque::element() {
	return $of(getFirst());
}

$Object* LinkedBlockingDeque::peek() {
	return $of(peekFirst());
}

int32_t LinkedBlockingDeque::remainingCapacity() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = this->capacity - this->count;
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

int32_t LinkedBlockingDeque::drainTo($Collection* c) {
	return drainTo(c, $Integer::MAX_VALUE);
}

int32_t LinkedBlockingDeque::drainTo($Collection* c, int32_t maxElements) {
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
			int32_t n = $Math::min(maxElements, this->count);
			for (int32_t i = 0; i < n; ++i) {
				c->add($nc(this->first)->item);
				unlinkFirst();
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

void LinkedBlockingDeque::push(Object$* e) {
	addFirst(e);
}

$Object* LinkedBlockingDeque::pop() {
	return $of(removeFirst());
}

bool LinkedBlockingDeque::remove(Object$* o) {
	return removeFirstOccurrence(o);
}

int32_t LinkedBlockingDeque::size() {
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

bool LinkedBlockingDeque::contains(Object$* o) {
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
			{
				$var($LinkedBlockingDeque$Node, p, this->first);
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

bool LinkedBlockingDeque::addAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	if ($equals(c, this)) {
		$throwNew($IllegalArgumentException);
	}
	$var($LinkedBlockingDeque$Node, beg, nullptr);
	$var($LinkedBlockingDeque$Node, end, nullptr);
	int32_t n = 0;
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			{
				$Objects::requireNonNull(e);
				++n;
				$var($LinkedBlockingDeque$Node, newNode, $new($LinkedBlockingDeque$Node, e));
				if (beg == nullptr) {
					$assign(beg, ($assign(end, newNode)));
				} else {
					$set($nc(end), next, newNode);
					$set(newNode, prev, end);
					$assign(end, newNode);
				}
			}
		}
	}
	if (beg == nullptr) {
		return false;
	}
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (this->count + n <= this->capacity) {
				$set($nc(beg), prev, this->last);
				if (this->first == nullptr) {
					$set(this, first, beg);
				} else {
					$set($nc(this->last), next, beg);
				}
				$set(this, last, end);
				this->count += n;
				$nc(this->notEmpty)->signalAll();
				var$2 = true;
				return$1 = true;
				goto $finally;
			}
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
	return $AbstractQueue::addAll(c);
}

$ObjectArray* LinkedBlockingDeque::toArray() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($ObjectArray, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($ObjectArray, a, $new($ObjectArray, this->count));
			int32_t k = 0;
			{
				$var($LinkedBlockingDeque$Node, p, this->first);
				for (; p != nullptr; $assign(p, $nc(p)->next)) {
					a->set(k++, p->item);
				}
			}
			$assign(var$2, a);
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

$ObjectArray* LinkedBlockingDeque::toArray($ObjectArray* a$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, a, a$renamed);
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($ObjectArray, var$2, nullptr);
		bool return$1 = false;
		try {
			if ($nc(a)->length < this->count) {
				$assign(a, $cast($ObjectArray, $1Array::newInstance($of(a)->getClass()->getComponentType(), this->count)));
			}
			int32_t k = 0;
			{
				$var($LinkedBlockingDeque$Node, p, this->first);
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

$String* LinkedBlockingDeque::toString() {
	return $Helpers::collectionToString(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractQueue*>(this))));
}

void LinkedBlockingDeque::clear() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($LinkedBlockingDeque$Node, f, this->first);
				for (; f != nullptr;) {
					$set(f, item, nullptr);
					$var($LinkedBlockingDeque$Node, n, f->next);
					$set(f, prev, nullptr);
					$set(f, next, nullptr);
					$assign(f, n);
				}
			}
			$set(this, first, ($assignField(this, last, nullptr)));
			this->count = 0;
			$nc(this->notFull)->signalAll();
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

$LinkedBlockingDeque$Node* LinkedBlockingDeque::succ($LinkedBlockingDeque$Node* p$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingDeque$Node, p, p$renamed);
	$var($LinkedBlockingDeque$Node, var$0, p);
	if (var$0 == ($assign(p, $nc(p)->next))) {
		$assign(p, this->first);
	}
	return p;
}

$Iterator* LinkedBlockingDeque::iterator() {
	return $new($LinkedBlockingDeque$Itr, this);
}

$Iterator* LinkedBlockingDeque::descendingIterator() {
	return $new($LinkedBlockingDeque$DescendingItr, this);
}

$Spliterator* LinkedBlockingDeque::spliterator() {
	return $new($LinkedBlockingDeque$LBDSpliterator, this);
}

void LinkedBlockingDeque::forEach($Consumer* action) {
	$Objects::requireNonNull(action);
	forEachFrom(action, nullptr);
}

void LinkedBlockingDeque::forEachFrom($Consumer* action, $LinkedBlockingDeque$Node* p$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedBlockingDeque$Node, p, p$renamed);
	$var($ReentrantLock, lock, this->lock);
	int32_t batchSize = 64;
	$var($ObjectArray, es, nullptr);
	int32_t n = 0;
	int32_t len = 0;
	do {
		$nc(lock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (es == nullptr) {
					if (p == nullptr) {
						$assign(p, this->first);
					}
					{
						$var($LinkedBlockingDeque$Node, q, p);
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
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				lock->unlock();
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

bool LinkedBlockingDeque::removeIf($Predicate* filter) {
	$Objects::requireNonNull(filter);
	return bulkRemove(filter);
}

bool LinkedBlockingDeque::removeAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(LinkedBlockingDeque$$Lambda$lambda$removeAll$0, c)));
}

bool LinkedBlockingDeque::retainAll($Collection* c) {
	$Objects::requireNonNull(c);
	return bulkRemove(static_cast<$Predicate*>($$new(LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1, c)));
}

bool LinkedBlockingDeque::bulkRemove($Predicate* filter) {
	$useLocalCurrentObjectStackCache();
	bool removed = false;
	$var($ReentrantLock, lock, this->lock);
	$var($LinkedBlockingDeque$Node, p, nullptr);
	$var($LinkedBlockingDeque$NodeArray, nodes, nullptr);
	int32_t n = 0;
	int32_t len = 0;
	do {
		$nc(lock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (nodes == nullptr) {
					$assign(p, this->first);
					{
						$var($LinkedBlockingDeque$Node, q, p);
						for (; q != nullptr; $assign(q, succ(q))) {
							if (q->item != nullptr && ++len == 64) {
								break;
							}
						}
					}
					$assign(nodes, $new($LinkedBlockingDeque$NodeArray, len));
				}
				for (n = 0; p != nullptr && n < len; $assign(p, succ(p))) {
					$nc(nodes)->set(n++, p);
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
		int64_t deathRow = 0;
		for (int32_t i = 0; i < n; ++i) {
			$var($Object, e, nullptr);
			bool var$1 = ($assign(e, $nc($nc(nodes)->get(i))->item)) != nullptr;
			if (var$1 && $nc(filter)->test(e)) {
				deathRow |= $sl((int64_t)1, i);
			}
		}
		if (deathRow != 0) {
			lock->lock();
			{
				$var($Throwable, var$2, nullptr);
				try {
					for (int32_t i = 0; i < n; ++i) {
						$var($LinkedBlockingDeque$Node, q, nullptr);
						if (((int64_t)(deathRow & (uint64_t)($sl((int64_t)1, i)))) != (int64_t)0 && $nc(($assign(q, $nc(nodes)->get(i))))->item != nullptr) {
							unlink(q);
							removed = true;
						}
						$nc(nodes)->set(i, nullptr);
					}
				} catch ($Throwable&) {
					$assign(var$2, $catch());
				} /*finally*/ {
					lock->unlock();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		}
	} while (n > 0 && p != nullptr);
	return removed;
}

void LinkedBlockingDeque::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, lock, this->lock);
	$nc(lock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(s)->defaultWriteObject();
			{
				$var($LinkedBlockingDeque$Node, p, this->first);
				for (; p != nullptr; $assign(p, $nc(p)->next)) {
					s->writeObject(p->item);
				}
			}
			s->writeObject(nullptr);
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

void LinkedBlockingDeque::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	this->count = 0;
	$set(this, first, nullptr);
	$set(this, last, nullptr);
	for (;;) {
		$var($Object, item, s->readObject());
		if (item == nullptr) {
			break;
		}
		add(item);
	}
}

void LinkedBlockingDeque::checkInvariants() {
	{
		$var($LinkedBlockingDeque$Node, p, this->first);
		for (; p != nullptr; $assign(p, $nc(p)->next)) {
		}
	}
}

bool LinkedBlockingDeque::lambda$retainAll$1($Collection* c, Object$* e) {
	$init(LinkedBlockingDeque);
	return !$nc(c)->contains(e);
}

bool LinkedBlockingDeque::lambda$removeAll$0($Collection* c, Object$* e) {
	$init(LinkedBlockingDeque);
	return $nc(c)->contains(e);
}

LinkedBlockingDeque::LinkedBlockingDeque() {
}

$Class* LinkedBlockingDeque::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LinkedBlockingDeque$$Lambda$lambda$removeAll$0::classInfo$.name)) {
			return LinkedBlockingDeque$$Lambda$lambda$removeAll$0::load$(name, initialize);
		}
		if (name->equals(LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1::classInfo$.name)) {
			return LinkedBlockingDeque$$Lambda$lambda$retainAll$1$1::load$(name, initialize);
		}
	}
	$loadClass(LinkedBlockingDeque, name, initialize, &_LinkedBlockingDeque_ClassInfo_, allocate$LinkedBlockingDeque);
	return class$;
}

$Class* LinkedBlockingDeque::class$ = nullptr;

		} // concurrent
	} // util
} // java