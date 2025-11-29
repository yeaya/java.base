#include <java/util/Collections$SynchronizedNavigableSet.h>

#include <java/util/Collection.h>
#include <java/util/Collections$SynchronizedCollection.h>
#include <java/util/Collections$SynchronizedSortedSet.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/NavigableSet.h>
#include <java/util/SortedSet.h>
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
using $Collections$SynchronizedSortedSet = ::java::util::Collections$SynchronizedSortedSet;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $NavigableSet = ::java::util::NavigableSet;
using $SortedSet = ::java::util::SortedSet;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$SynchronizedNavigableSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SynchronizedNavigableSet, serialVersionUID)},
	{"ns", "Ljava/util/NavigableSet;", "Ljava/util/NavigableSet<TE;>;", $PRIVATE | $FINAL, $field(Collections$SynchronizedNavigableSet, ns)},
	{}
};

$MethodInfo _Collections$SynchronizedNavigableSet_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*comparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*first", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/NavigableSet;)V", "(Ljava/util/NavigableSet<TE;>;)V", 0, $method(static_cast<void(Collections$SynchronizedNavigableSet::*)($NavigableSet*)>(&Collections$SynchronizedNavigableSet::init$))},
	{"<init>", "(Ljava/util/NavigableSet;Ljava/lang/Object;)V", "(Ljava/util/NavigableSet<TE;>;Ljava/lang/Object;)V", 0, $method(static_cast<void(Collections$SynchronizedNavigableSet::*)($NavigableSet*,Object$*)>(&Collections$SynchronizedNavigableSet::init$))},
	{"ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"descendingSet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"floor", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"headSet", "(Ljava/lang/Object;)Ljava/util/NavigableSet;", "(TE;)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"higher", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"*last", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"lower", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"pollFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"pollLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/NavigableSet;", "(TE;TE;)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;ZTE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"tailSet", "(Ljava/lang/Object;)Ljava/util/NavigableSet;", "(TE;)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$SynchronizedNavigableSet_InnerClassesInfo_[] = {
	{"java.util.Collections$SynchronizedNavigableSet", "java.util.Collections", "SynchronizedNavigableSet", $STATIC},
	{"java.util.Collections$SynchronizedSortedSet", "java.util.Collections", "SynchronizedSortedSet", $STATIC},
	{}
};

$ClassInfo _Collections$SynchronizedNavigableSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SynchronizedNavigableSet",
	"java.util.Collections$SynchronizedSortedSet",
	"java.util.NavigableSet",
	_Collections$SynchronizedNavigableSet_FieldInfo_,
	_Collections$SynchronizedNavigableSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$SynchronizedSortedSet<TE;>;Ljava/util/NavigableSet<TE;>;",
	nullptr,
	_Collections$SynchronizedNavigableSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SynchronizedNavigableSet($Class* clazz) {
	return $of($alloc(Collections$SynchronizedNavigableSet));
}

$Comparator* Collections$SynchronizedNavigableSet::comparator() {
	 return this->$Collections$SynchronizedSortedSet::comparator();
}

$Object* Collections$SynchronizedNavigableSet::first() {
	 return this->$Collections$SynchronizedSortedSet::first();
}

$Object* Collections$SynchronizedNavigableSet::last() {
	 return this->$Collections$SynchronizedSortedSet::last();
}

bool Collections$SynchronizedNavigableSet::equals(Object$* o) {
	 return this->$Collections$SynchronizedSortedSet::equals(o);
}

int32_t Collections$SynchronizedNavigableSet::hashCode() {
	 return this->$Collections$SynchronizedSortedSet::hashCode();
}

int32_t Collections$SynchronizedNavigableSet::size() {
	 return this->$Collections$SynchronizedSortedSet::size();
}

bool Collections$SynchronizedNavigableSet::isEmpty() {
	 return this->$Collections$SynchronizedSortedSet::isEmpty();
}

bool Collections$SynchronizedNavigableSet::contains(Object$* o) {
	 return this->$Collections$SynchronizedSortedSet::contains(o);
}

$ObjectArray* Collections$SynchronizedNavigableSet::toArray() {
	 return this->$Collections$SynchronizedSortedSet::toArray();
}

$ObjectArray* Collections$SynchronizedNavigableSet::toArray($ObjectArray* a) {
	 return this->$Collections$SynchronizedSortedSet::toArray(a);
}

$ObjectArray* Collections$SynchronizedNavigableSet::toArray($IntFunction* f) {
	 return this->$Collections$SynchronizedSortedSet::toArray(f);
}

$Iterator* Collections$SynchronizedNavigableSet::iterator() {
	 return this->$Collections$SynchronizedSortedSet::iterator();
}

bool Collections$SynchronizedNavigableSet::add(Object$* e) {
	 return this->$Collections$SynchronizedSortedSet::add(e);
}

bool Collections$SynchronizedNavigableSet::remove(Object$* o) {
	 return this->$Collections$SynchronizedSortedSet::remove(o);
}

bool Collections$SynchronizedNavigableSet::containsAll($Collection* coll) {
	 return this->$Collections$SynchronizedSortedSet::containsAll(coll);
}

bool Collections$SynchronizedNavigableSet::addAll($Collection* coll) {
	 return this->$Collections$SynchronizedSortedSet::addAll(coll);
}

bool Collections$SynchronizedNavigableSet::removeAll($Collection* coll) {
	 return this->$Collections$SynchronizedSortedSet::removeAll(coll);
}

bool Collections$SynchronizedNavigableSet::retainAll($Collection* coll) {
	 return this->$Collections$SynchronizedSortedSet::retainAll(coll);
}

void Collections$SynchronizedNavigableSet::clear() {
	this->$Collections$SynchronizedSortedSet::clear();
}

$String* Collections$SynchronizedNavigableSet::toString() {
	 return this->$Collections$SynchronizedSortedSet::toString();
}

void Collections$SynchronizedNavigableSet::forEach($Consumer* consumer) {
	this->$Collections$SynchronizedSortedSet::forEach(consumer);
}

bool Collections$SynchronizedNavigableSet::removeIf($Predicate* filter) {
	 return this->$Collections$SynchronizedSortedSet::removeIf(filter);
}

$Spliterator* Collections$SynchronizedNavigableSet::spliterator() {
	 return this->$Collections$SynchronizedSortedSet::spliterator();
}

$Stream* Collections$SynchronizedNavigableSet::stream() {
	 return this->$Collections$SynchronizedSortedSet::stream();
}

$Stream* Collections$SynchronizedNavigableSet::parallelStream() {
	 return this->$Collections$SynchronizedSortedSet::parallelStream();
}

$Object* Collections$SynchronizedNavigableSet::clone() {
	 return this->$Collections$SynchronizedSortedSet::clone();
}

void Collections$SynchronizedNavigableSet::finalize() {
	this->$Collections$SynchronizedSortedSet::finalize();
}

void Collections$SynchronizedNavigableSet::init$($NavigableSet* s) {
	$Collections$SynchronizedSortedSet::init$(s);
	$set(this, ns, s);
}

void Collections$SynchronizedNavigableSet::init$($NavigableSet* s, Object$* mutex) {
	$Collections$SynchronizedSortedSet::init$(s, mutex);
	$set(this, ns, s);
}

$Object* Collections$SynchronizedNavigableSet::lower(Object$* e) {
	$synchronized(this->mutex) {
		return $of($nc(this->ns)->lower(e));
	}
}

$Object* Collections$SynchronizedNavigableSet::floor(Object$* e) {
	$synchronized(this->mutex) {
		return $of($nc(this->ns)->floor(e));
	}
}

$Object* Collections$SynchronizedNavigableSet::ceiling(Object$* e) {
	$synchronized(this->mutex) {
		return $of($nc(this->ns)->ceiling(e));
	}
}

$Object* Collections$SynchronizedNavigableSet::higher(Object$* e) {
	$synchronized(this->mutex) {
		return $of($nc(this->ns)->higher(e));
	}
}

$Object* Collections$SynchronizedNavigableSet::pollFirst() {
	$synchronized(this->mutex) {
		return $of($nc(this->ns)->pollFirst());
	}
}

$Object* Collections$SynchronizedNavigableSet::pollLast() {
	$synchronized(this->mutex) {
		return $of($nc(this->ns)->pollLast());
	}
}

$NavigableSet* Collections$SynchronizedNavigableSet::descendingSet() {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedNavigableSet, $($nc(this->ns)->descendingSet()), this->mutex);
	}
}

$Iterator* Collections$SynchronizedNavigableSet::descendingIterator() {
	$synchronized(this->mutex) {
		return $nc($(descendingSet()))->iterator();
	}
}

$SortedSet* Collections$SynchronizedNavigableSet::subSet(Object$* fromElement, Object$* toElement) {
	$synchronized(this->mutex) {
		return static_cast<$SortedSet*>(static_cast<$Collections$SynchronizedSortedSet*>($new(Collections$SynchronizedNavigableSet, $($nc(this->ns)->subSet(fromElement, true, toElement, false)), this->mutex)));
	}
}

$SortedSet* Collections$SynchronizedNavigableSet::headSet(Object$* toElement) {
	$synchronized(this->mutex) {
		return static_cast<$SortedSet*>(static_cast<$Collections$SynchronizedSortedSet*>($new(Collections$SynchronizedNavigableSet, $($nc(this->ns)->headSet(toElement, false)), this->mutex)));
	}
}

$SortedSet* Collections$SynchronizedNavigableSet::tailSet(Object$* fromElement) {
	$synchronized(this->mutex) {
		return static_cast<$SortedSet*>(static_cast<$Collections$SynchronizedSortedSet*>($new(Collections$SynchronizedNavigableSet, $($nc(this->ns)->tailSet(fromElement, true)), this->mutex)));
	}
}

$NavigableSet* Collections$SynchronizedNavigableSet::subSet(Object$* fromElement, bool fromInclusive, Object$* toElement, bool toInclusive) {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedNavigableSet, $($nc(this->ns)->subSet(fromElement, fromInclusive, toElement, toInclusive)), this->mutex);
	}
}

$NavigableSet* Collections$SynchronizedNavigableSet::headSet(Object$* toElement, bool inclusive) {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedNavigableSet, $($nc(this->ns)->headSet(toElement, inclusive)), this->mutex);
	}
}

$NavigableSet* Collections$SynchronizedNavigableSet::tailSet(Object$* fromElement, bool inclusive) {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedNavigableSet, $($nc(this->ns)->tailSet(fromElement, inclusive)), this->mutex);
	}
}

Collections$SynchronizedNavigableSet::Collections$SynchronizedNavigableSet() {
}

$Class* Collections$SynchronizedNavigableSet::load$($String* name, bool initialize) {
	$loadClass(Collections$SynchronizedNavigableSet, name, initialize, &_Collections$SynchronizedNavigableSet_ClassInfo_, allocate$Collections$SynchronizedNavigableSet);
	return class$;
}

$Class* Collections$SynchronizedNavigableSet::class$ = nullptr;

	} // util
} // java