#include <java/util/AbstractQueue.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$MethodInfo _AbstractQueue_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractQueue, init$, void)},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(AbstractQueue, add, bool, Object$*)},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(AbstractQueue, addAll, bool, $Collection*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractQueue, clear, void)},
	{"element", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(AbstractQueue, element, $Object*)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(AbstractQueue, remove, $Object*)},
	{"*size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.AbstractQueue",
	"java.util.AbstractCollection",
	"java.util.Queue",
	nullptr,
	_AbstractQueue_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractCollection<TE;>;Ljava/util/Queue<TE;>;"
};

$Object* allocate$AbstractQueue($Class* clazz) {
	return $of($alloc(AbstractQueue));
}

bool AbstractQueue::isEmpty() {
	 return this->$AbstractCollection::isEmpty();
}

bool AbstractQueue::contains(Object$* o) {
	 return this->$AbstractCollection::contains(o);
}

$ObjectArray* AbstractQueue::toArray() {
	 return this->$AbstractCollection::toArray();
}

$ObjectArray* AbstractQueue::toArray($ObjectArray* a) {
	 return this->$AbstractCollection::toArray(a);
}

bool AbstractQueue::remove(Object$* o) {
	 return this->$AbstractCollection::remove(o);
}

bool AbstractQueue::containsAll($Collection* c) {
	 return this->$AbstractCollection::containsAll(c);
}

bool AbstractQueue::removeAll($Collection* c) {
	 return this->$AbstractCollection::removeAll(c);
}

bool AbstractQueue::retainAll($Collection* c) {
	 return this->$AbstractCollection::retainAll(c);
}

$String* AbstractQueue::toString() {
	 return this->$AbstractCollection::toString();
}

$ObjectArray* AbstractQueue::toArray($IntFunction* generator) {
	 return this->$AbstractCollection::toArray(generator);
}

bool AbstractQueue::removeIf($Predicate* filter) {
	 return this->$AbstractCollection::removeIf(filter);
}

bool AbstractQueue::equals(Object$* o) {
	 return this->$AbstractCollection::equals(o);
}

int32_t AbstractQueue::hashCode() {
	 return this->$AbstractCollection::hashCode();
}

$Spliterator* AbstractQueue::spliterator() {
	 return this->$AbstractCollection::spliterator();
}

$Stream* AbstractQueue::stream() {
	 return this->$AbstractCollection::stream();
}

$Stream* AbstractQueue::parallelStream() {
	 return this->$AbstractCollection::parallelStream();
}

void AbstractQueue::forEach($Consumer* action) {
	this->$AbstractCollection::forEach(action);
}

$Object* AbstractQueue::clone() {
	 return this->$AbstractCollection::clone();
}

void AbstractQueue::finalize() {
	this->$AbstractCollection::finalize();
}

void AbstractQueue::init$() {
	$AbstractCollection::init$();
}

bool AbstractQueue::add(Object$* e) {
	if (offer(e)) {
		return true;
	} else {
		$throwNew($IllegalStateException, "Queue full"_s);
	}
}

$Object* AbstractQueue::remove() {
	$var($Object, x, poll());
	if (x != nullptr) {
		return $of(x);
	} else {
		$throwNew($NoSuchElementException);
	}
}

$Object* AbstractQueue::element() {
	$var($Object, x, peek());
	if (x != nullptr) {
		return $of(x);
	} else {
		$throwNew($NoSuchElementException);
	}
}

void AbstractQueue::clear() {
	while (poll() != nullptr) {
	}
}

bool AbstractQueue::addAll($Collection* c) {
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($equals(c, this)) {
		$throwNew($IllegalArgumentException);
	}
	bool modified = false;
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			if (add(e)) {
				modified = true;
			}
		}
	}
	return modified;
}

AbstractQueue::AbstractQueue() {
}

$Class* AbstractQueue::load$($String* name, bool initialize) {
	$loadClass(AbstractQueue, name, initialize, &_AbstractQueue_ClassInfo_, allocate$AbstractQueue);
	return class$;
}

$Class* AbstractQueue::class$ = nullptr;

	} // util
} // java