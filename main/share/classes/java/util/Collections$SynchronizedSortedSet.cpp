#include <java/util/Collections$SynchronizedSortedSet.h>

#include <java/util/Collection.h>
#include <java/util/Collections$SynchronizedCollection.h>
#include <java/util/Collections$SynchronizedSet.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
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
using $Collections$SynchronizedSet = ::java::util::Collections$SynchronizedSet;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $SortedSet = ::java::util::SortedSet;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _Collections$SynchronizedSortedSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SynchronizedSortedSet, serialVersionUID)},
	{"ss", "Ljava/util/SortedSet;", "Ljava/util/SortedSet<TE;>;", $PRIVATE | $FINAL, $field(Collections$SynchronizedSortedSet, ss)},
	{}
};

$MethodInfo _Collections$SynchronizedSortedSet_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/SortedSet;)V", "(Ljava/util/SortedSet<TE;>;)V", 0, $method(Collections$SynchronizedSortedSet, init$, void, $SortedSet*)},
	{"<init>", "(Ljava/util/SortedSet;Ljava/lang/Object;)V", "(Ljava/util/SortedSet<TE;>;Ljava/lang/Object;)V", 0, $method(Collections$SynchronizedSortedSet, init$, void, $SortedSet*, Object$*)},
	{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TE;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedSet, comparator, $Comparator*)},
	{"first", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedSet, first, $Object*)},
	{"headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedSet, headSet, $SortedSet*, Object$*)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"last", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedSet, last, $Object*)},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedSet, subSet, $SortedSet*, Object$*, Object$*)},
	{"tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedSet, tailSet, $SortedSet*, Object$*)},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$SynchronizedSortedSet_InnerClassesInfo_[] = {
	{"java.util.Collections$SynchronizedSortedSet", "java.util.Collections", "SynchronizedSortedSet", $STATIC},
	{"java.util.Collections$SynchronizedSet", "java.util.Collections", "SynchronizedSet", $STATIC},
	{}
};

$ClassInfo _Collections$SynchronizedSortedSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SynchronizedSortedSet",
	"java.util.Collections$SynchronizedSet",
	"java.util.SortedSet",
	_Collections$SynchronizedSortedSet_FieldInfo_,
	_Collections$SynchronizedSortedSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$SynchronizedSet<TE;>;Ljava/util/SortedSet<TE;>;",
	nullptr,
	_Collections$SynchronizedSortedSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SynchronizedSortedSet($Class* clazz) {
	return $of($alloc(Collections$SynchronizedSortedSet));
}

bool Collections$SynchronizedSortedSet::equals(Object$* o) {
	 return this->$Collections$SynchronizedSet::equals(o);
}

int32_t Collections$SynchronizedSortedSet::hashCode() {
	 return this->$Collections$SynchronizedSet::hashCode();
}

int32_t Collections$SynchronizedSortedSet::size() {
	 return this->$Collections$SynchronizedSet::size();
}

bool Collections$SynchronizedSortedSet::isEmpty() {
	 return this->$Collections$SynchronizedSet::isEmpty();
}

bool Collections$SynchronizedSortedSet::contains(Object$* o) {
	 return this->$Collections$SynchronizedSet::contains(o);
}

$ObjectArray* Collections$SynchronizedSortedSet::toArray() {
	 return this->$Collections$SynchronizedSet::toArray();
}

$ObjectArray* Collections$SynchronizedSortedSet::toArray($ObjectArray* a) {
	 return this->$Collections$SynchronizedSet::toArray(a);
}

$ObjectArray* Collections$SynchronizedSortedSet::toArray($IntFunction* f) {
	 return this->$Collections$SynchronizedSet::toArray(f);
}

$Iterator* Collections$SynchronizedSortedSet::iterator() {
	 return this->$Collections$SynchronizedSet::iterator();
}

bool Collections$SynchronizedSortedSet::add(Object$* e) {
	 return this->$Collections$SynchronizedSet::add(e);
}

bool Collections$SynchronizedSortedSet::remove(Object$* o) {
	 return this->$Collections$SynchronizedSet::remove(o);
}

bool Collections$SynchronizedSortedSet::containsAll($Collection* coll) {
	 return this->$Collections$SynchronizedSet::containsAll(coll);
}

bool Collections$SynchronizedSortedSet::addAll($Collection* coll) {
	 return this->$Collections$SynchronizedSet::addAll(coll);
}

bool Collections$SynchronizedSortedSet::removeAll($Collection* coll) {
	 return this->$Collections$SynchronizedSet::removeAll(coll);
}

bool Collections$SynchronizedSortedSet::retainAll($Collection* coll) {
	 return this->$Collections$SynchronizedSet::retainAll(coll);
}

void Collections$SynchronizedSortedSet::clear() {
	this->$Collections$SynchronizedSet::clear();
}

$String* Collections$SynchronizedSortedSet::toString() {
	 return this->$Collections$SynchronizedSet::toString();
}

void Collections$SynchronizedSortedSet::forEach($Consumer* consumer) {
	this->$Collections$SynchronizedSet::forEach(consumer);
}

bool Collections$SynchronizedSortedSet::removeIf($Predicate* filter) {
	 return this->$Collections$SynchronizedSet::removeIf(filter);
}

$Spliterator* Collections$SynchronizedSortedSet::spliterator() {
	 return this->$Collections$SynchronizedSet::spliterator();
}

$Stream* Collections$SynchronizedSortedSet::stream() {
	 return this->$Collections$SynchronizedSet::stream();
}

$Stream* Collections$SynchronizedSortedSet::parallelStream() {
	 return this->$Collections$SynchronizedSet::parallelStream();
}

$Object* Collections$SynchronizedSortedSet::clone() {
	 return this->$Collections$SynchronizedSet::clone();
}

void Collections$SynchronizedSortedSet::finalize() {
	this->$Collections$SynchronizedSet::finalize();
}

void Collections$SynchronizedSortedSet::init$($SortedSet* s) {
	$Collections$SynchronizedSet::init$(s);
	$set(this, ss, s);
}

void Collections$SynchronizedSortedSet::init$($SortedSet* s, Object$* mutex) {
	$Collections$SynchronizedSet::init$(s, mutex);
	$set(this, ss, s);
}

$Comparator* Collections$SynchronizedSortedSet::comparator() {
	$synchronized(this->mutex) {
		return $nc(this->ss)->comparator();
	}
}

$SortedSet* Collections$SynchronizedSortedSet::subSet(Object$* fromElement, Object$* toElement) {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedSortedSet, $($nc(this->ss)->subSet(fromElement, toElement)), this->mutex);
	}
}

$SortedSet* Collections$SynchronizedSortedSet::headSet(Object$* toElement) {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedSortedSet, $($nc(this->ss)->headSet(toElement)), this->mutex);
	}
}

$SortedSet* Collections$SynchronizedSortedSet::tailSet(Object$* fromElement) {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedSortedSet, $($nc(this->ss)->tailSet(fromElement)), this->mutex);
	}
}

$Object* Collections$SynchronizedSortedSet::first() {
	$synchronized(this->mutex) {
		return $of($nc(this->ss)->first());
	}
}

$Object* Collections$SynchronizedSortedSet::last() {
	$synchronized(this->mutex) {
		return $of($nc(this->ss)->last());
	}
}

Collections$SynchronizedSortedSet::Collections$SynchronizedSortedSet() {
}

$Class* Collections$SynchronizedSortedSet::load$($String* name, bool initialize) {
	$loadClass(Collections$SynchronizedSortedSet, name, initialize, &_Collections$SynchronizedSortedSet_ClassInfo_, allocate$Collections$SynchronizedSortedSet);
	return class$;
}

$Class* Collections$SynchronizedSortedSet::class$ = nullptr;

	} // util
} // java