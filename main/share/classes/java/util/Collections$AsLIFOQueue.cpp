#include <java/util/Collections$AsLIFOQueue.h>

#include <java/util/AbstractQueue.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Deque.h>
#include <java/util/Iterator.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Collection = ::java::util::Collection;
using $Deque = ::java::util::Deque;
using $Iterator = ::java::util::Iterator;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$AsLIFOQueue_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$AsLIFOQueue, serialVersionUID)},
	{"q", "Ljava/util/Deque;", "Ljava/util/Deque<TE;>;", $PRIVATE | $FINAL, $field(Collections$AsLIFOQueue, q)},
	{}
};

$MethodInfo _Collections$AsLIFOQueue_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljava/util/Deque;)V", "(Ljava/util/Deque<TE;>;)V", 0, $method(Collections$AsLIFOQueue, init$, void, $Deque*)},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, add, bool, Object$*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, clear, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, contains, bool, Object$*)},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, containsAll, bool, $Collection*)},
	{"element", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, element, $Object*)},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, forEach, void, $Consumer*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, iterator, $Iterator*)},
	{"offer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, offer, bool, Object$*)},
	{"parallelStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, parallelStream, $Stream*)},
	{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, peek, $Object*)},
	{"poll", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, poll, $Object*)},
	{"remove", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, remove, $Object*)},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, remove, bool, Object$*)},
	{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, removeAll, bool, $Collection*)},
	{"removeIf", "(Ljava/util/function/Predicate;)Z", "(Ljava/util/function/Predicate<-TE;>;)Z", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, removeIf, bool, $Predicate*)},
	{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, retainAll, bool, $Collection*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, size, int32_t)},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, spliterator, $Spliterator*)},
	{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TE;>;", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, stream, $Stream*)},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, toArray, $ObjectArray*)},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, toArray, $ObjectArray*, $ObjectArray*)},
	{"toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/function/IntFunction<[TT;>;)[TT;", $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, toArray, $ObjectArray*, $IntFunction*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Collections$AsLIFOQueue, toString, $String*)},
	{}
};

$InnerClassInfo _Collections$AsLIFOQueue_InnerClassesInfo_[] = {
	{"java.util.Collections$AsLIFOQueue", "java.util.Collections", "AsLIFOQueue", $STATIC},
	{}
};

$ClassInfo _Collections$AsLIFOQueue_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$AsLIFOQueue",
	"java.util.AbstractQueue",
	"java.io.Serializable",
	_Collections$AsLIFOQueue_FieldInfo_,
	_Collections$AsLIFOQueue_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractQueue<TE;>;Ljava/util/Queue<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$AsLIFOQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$AsLIFOQueue($Class* clazz) {
	return $of($alloc(Collections$AsLIFOQueue));
}

bool Collections$AsLIFOQueue::equals(Object$* o) {
	 return this->$AbstractQueue::equals(o);
}

int32_t Collections$AsLIFOQueue::hashCode() {
	 return this->$AbstractQueue::hashCode();
}

$Object* Collections$AsLIFOQueue::clone() {
	 return this->$AbstractQueue::clone();
}

void Collections$AsLIFOQueue::finalize() {
	this->$AbstractQueue::finalize();
}

void Collections$AsLIFOQueue::init$($Deque* q) {
	$AbstractQueue::init$();
	$set(this, q, q);
}

bool Collections$AsLIFOQueue::add(Object$* e) {
	$nc(this->q)->addFirst(e);
	return true;
}

bool Collections$AsLIFOQueue::offer(Object$* e) {
	return $nc(this->q)->offerFirst(e);
}

$Object* Collections$AsLIFOQueue::poll() {
	return $of($nc(this->q)->pollFirst());
}

$Object* Collections$AsLIFOQueue::remove() {
	return $of($nc(this->q)->removeFirst());
}

$Object* Collections$AsLIFOQueue::peek() {
	return $of($nc(this->q)->peekFirst());
}

$Object* Collections$AsLIFOQueue::element() {
	return $of($nc(this->q)->getFirst());
}

void Collections$AsLIFOQueue::clear() {
	$nc(this->q)->clear();
}

int32_t Collections$AsLIFOQueue::size() {
	return $nc(this->q)->size();
}

bool Collections$AsLIFOQueue::isEmpty() {
	return $nc(this->q)->isEmpty();
}

bool Collections$AsLIFOQueue::contains(Object$* o) {
	return $nc(this->q)->contains(o);
}

bool Collections$AsLIFOQueue::remove(Object$* o) {
	return $nc(this->q)->remove(o);
}

$Iterator* Collections$AsLIFOQueue::iterator() {
	return $nc(this->q)->iterator();
}

$ObjectArray* Collections$AsLIFOQueue::toArray() {
	return $nc(this->q)->toArray();
}

$ObjectArray* Collections$AsLIFOQueue::toArray($ObjectArray* a) {
	return $nc(this->q)->toArray(a);
}

$ObjectArray* Collections$AsLIFOQueue::toArray($IntFunction* f) {
	return $nc(this->q)->toArray(f);
}

$String* Collections$AsLIFOQueue::toString() {
	return $nc($of(this->q))->toString();
}

bool Collections$AsLIFOQueue::containsAll($Collection* c) {
	return $nc(this->q)->containsAll(c);
}

bool Collections$AsLIFOQueue::removeAll($Collection* c) {
	return $nc(this->q)->removeAll(c);
}

bool Collections$AsLIFOQueue::retainAll($Collection* c) {
	return $nc(this->q)->retainAll(c);
}

void Collections$AsLIFOQueue::forEach($Consumer* action) {
	$nc(this->q)->forEach(action);
}

bool Collections$AsLIFOQueue::removeIf($Predicate* filter) {
	return $nc(this->q)->removeIf(filter);
}

$Spliterator* Collections$AsLIFOQueue::spliterator() {
	return $nc(this->q)->spliterator();
}

$Stream* Collections$AsLIFOQueue::stream() {
	return $nc(this->q)->stream();
}

$Stream* Collections$AsLIFOQueue::parallelStream() {
	return $nc(this->q)->parallelStream();
}

Collections$AsLIFOQueue::Collections$AsLIFOQueue() {
}

$Class* Collections$AsLIFOQueue::load$($String* name, bool initialize) {
	$loadClass(Collections$AsLIFOQueue, name, initialize, &_Collections$AsLIFOQueue_ClassInfo_, allocate$Collections$AsLIFOQueue);
	return class$;
}

$Class* Collections$AsLIFOQueue::class$ = nullptr;

	} // util
} // java