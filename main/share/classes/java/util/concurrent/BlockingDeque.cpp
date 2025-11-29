#include <java/util/concurrent/BlockingDeque.h>

#include <java/util/Spliterator.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _BlockingDeque_MethodInfo_[] = {
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"addFirst", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addLast", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*clear", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"element", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"offer", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"offerFirst", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"offerFirst", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"offerLast", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"offerLast", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"peek", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"poll", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"pollFirst", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TE;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"pollLast", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TE;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"push", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"putFirst", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"putLast", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"remove", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeFirstOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeLastOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"take", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"takeFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"takeLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BlockingDeque_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.BlockingDeque",
	nullptr,
	"java.util.concurrent.BlockingQueue,java.util.Deque",
	nullptr,
	_BlockingDeque_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/BlockingQueue<TE;>;Ljava/util/Deque<TE;>;"
};

$Object* allocate$BlockingDeque($Class* clazz) {
	return $of($alloc(BlockingDeque));
}

$ObjectArray* BlockingDeque::toArray($IntFunction* generator) {
	 return this->$BlockingQueue::toArray(generator);
}

bool BlockingDeque::removeIf($Predicate* filter) {
	 return this->$BlockingQueue::removeIf(filter);
}

bool BlockingDeque::equals(Object$* o) {
	 return this->$BlockingQueue::equals(o);
}

int32_t BlockingDeque::hashCode() {
	 return this->$BlockingQueue::hashCode();
}

$Spliterator* BlockingDeque::spliterator() {
	 return this->$BlockingQueue::spliterator();
}

$Stream* BlockingDeque::stream() {
	 return this->$BlockingQueue::stream();
}

$Stream* BlockingDeque::parallelStream() {
	 return this->$BlockingQueue::parallelStream();
}

void BlockingDeque::forEach($Consumer* action) {
	this->$BlockingQueue::forEach(action);
}

$Object* BlockingDeque::clone() {
	 return this->$BlockingQueue::clone();
}

$String* BlockingDeque::toString() {
	 return this->$BlockingQueue::toString();
}

void BlockingDeque::finalize() {
	this->$BlockingQueue::finalize();
}

$Class* BlockingDeque::load$($String* name, bool initialize) {
	$loadClass(BlockingDeque, name, initialize, &_BlockingDeque_ClassInfo_, allocate$BlockingDeque);
	return class$;
}

$Class* BlockingDeque::class$ = nullptr;

		} // concurrent
	} // util
} // java