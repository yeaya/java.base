#include <java/util/Collections$CheckedQueue.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Collections$CheckedCollection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/Queue.h>
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
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Collections$CheckedCollection = ::java::util::Collections$CheckedCollection;
using $Iterator = ::java::util::Iterator;
using $Queue = ::java::util::Queue;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$CheckedQueue_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$CheckedQueue, serialVersionUID)},
	{"queue", "Ljava/util/Queue;", "Ljava/util/Queue<TE;>;", $FINAL, $field(Collections$CheckedQueue, queue)},
	{}
};

$MethodInfo _Collections$CheckedQueue_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/Queue;Ljava/lang/Class;)V", "(Ljava/util/Queue<TE;>;Ljava/lang/Class<TE;>;)V", 0, $method(static_cast<void(Collections$CheckedQueue::*)($Queue*,$Class*)>(&Collections$CheckedQueue::init$))},
	{"element", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"offer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"poll", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$CheckedQueue_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedQueue", "java.util.Collections", "CheckedQueue", $STATIC},
	{"java.util.Collections$CheckedCollection", "java.util.Collections", "CheckedCollection", $STATIC},
	{}
};

$ClassInfo _Collections$CheckedQueue_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedQueue",
	"java.util.Collections$CheckedCollection",
	"java.util.Queue",
	_Collections$CheckedQueue_FieldInfo_,
	_Collections$CheckedQueue_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$CheckedCollection<TE;>;Ljava/util/Queue<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$CheckedQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedQueue($Class* clazz) {
	return $of($alloc(Collections$CheckedQueue));
}

int32_t Collections$CheckedQueue::size() {
	 return this->$Collections$CheckedCollection::size();
}

bool Collections$CheckedQueue::isEmpty() {
	 return this->$Collections$CheckedCollection::isEmpty();
}

bool Collections$CheckedQueue::contains(Object$* o) {
	 return this->$Collections$CheckedCollection::contains(o);
}

$ObjectArray* Collections$CheckedQueue::toArray() {
	 return this->$Collections$CheckedCollection::toArray();
}

$ObjectArray* Collections$CheckedQueue::toArray($ObjectArray* a) {
	 return this->$Collections$CheckedCollection::toArray(a);
}

$ObjectArray* Collections$CheckedQueue::toArray($IntFunction* f) {
	 return this->$Collections$CheckedCollection::toArray(f);
}

$String* Collections$CheckedQueue::toString() {
	 return this->$Collections$CheckedCollection::toString();
}

bool Collections$CheckedQueue::remove(Object$* o) {
	 return this->$Collections$CheckedCollection::remove(o);
}

void Collections$CheckedQueue::clear() {
	this->$Collections$CheckedCollection::clear();
}

bool Collections$CheckedQueue::containsAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::containsAll(coll);
}

bool Collections$CheckedQueue::removeAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::removeAll(coll);
}

bool Collections$CheckedQueue::retainAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::retainAll(coll);
}

$Iterator* Collections$CheckedQueue::iterator() {
	 return this->$Collections$CheckedCollection::iterator();
}

bool Collections$CheckedQueue::add(Object$* e) {
	 return this->$Collections$CheckedCollection::add(e);
}

bool Collections$CheckedQueue::addAll($Collection* coll) {
	 return this->$Collections$CheckedCollection::addAll(coll);
}

void Collections$CheckedQueue::forEach($Consumer* action) {
	this->$Collections$CheckedCollection::forEach(action);
}

bool Collections$CheckedQueue::removeIf($Predicate* filter) {
	 return this->$Collections$CheckedCollection::removeIf(filter);
}

$Spliterator* Collections$CheckedQueue::spliterator() {
	 return this->$Collections$CheckedCollection::spliterator();
}

$Stream* Collections$CheckedQueue::stream() {
	 return this->$Collections$CheckedCollection::stream();
}

$Stream* Collections$CheckedQueue::parallelStream() {
	 return this->$Collections$CheckedCollection::parallelStream();
}

$Object* Collections$CheckedQueue::clone() {
	 return this->$Collections$CheckedCollection::clone();
}

void Collections$CheckedQueue::finalize() {
	this->$Collections$CheckedCollection::finalize();
}

void Collections$CheckedQueue::init$($Queue* queue, $Class* elementType) {
	$Collections$CheckedCollection::init$(queue, elementType);
	$set(this, queue, queue);
}

$Object* Collections$CheckedQueue::element() {
	return $of($nc(this->queue)->element());
}

bool Collections$CheckedQueue::equals(Object$* o) {
	return $equals(o, this) || $nc(this->c)->equals(o);
}

int32_t Collections$CheckedQueue::hashCode() {
	return $nc(this->c)->hashCode();
}

$Object* Collections$CheckedQueue::peek() {
	return $of($nc(this->queue)->peek());
}

$Object* Collections$CheckedQueue::poll() {
	return $of($nc(this->queue)->poll());
}

$Object* Collections$CheckedQueue::remove() {
	return $of($nc(this->queue)->remove());
}

bool Collections$CheckedQueue::offer(Object$* e) {
	return $nc(this->queue)->offer($(typeCheck(e)));
}

Collections$CheckedQueue::Collections$CheckedQueue() {
}

$Class* Collections$CheckedQueue::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedQueue, name, initialize, &_Collections$CheckedQueue_ClassInfo_, allocate$Collections$CheckedQueue);
	return class$;
}

$Class* Collections$CheckedQueue::class$ = nullptr;

	} // util
} // java