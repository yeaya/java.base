#include <java/util/Collections$CheckedNavigableSet.h>

#include <java/util/Collection.h>
#include <java/util/Collections$CheckedCollection.h>
#include <java/util/Collections$CheckedSortedSet.h>
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
using $Collections = ::java::util::Collections;
using $Collections$CheckedSortedSet = ::java::util::Collections$CheckedSortedSet;
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

$FieldInfo _Collections$CheckedNavigableSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$CheckedNavigableSet, serialVersionUID)},
	{"ns", "Ljava/util/NavigableSet;", "Ljava/util/NavigableSet<TE;>;", $PRIVATE | $FINAL, $field(Collections$CheckedNavigableSet, ns)},
	{}
};

$MethodInfo _Collections$CheckedNavigableSet_MethodInfo_[] = {
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
	{"<init>", "(Ljava/util/NavigableSet;Ljava/lang/Class;)V", "(Ljava/util/NavigableSet<TE;>;Ljava/lang/Class<TE;>;)V", 0, $method(Collections$CheckedNavigableSet, init$, void, $NavigableSet*, $Class*)},
	{"ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, ceiling, $Object*, Object$*)},
	{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, descendingIterator, $Iterator*)},
	{"descendingSet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, descendingSet, $NavigableSet*)},
	{"floor", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, floor, $Object*, Object$*)},
	{"headSet", "(Ljava/lang/Object;)Ljava/util/NavigableSet;", "(TE;)Ljava/util/NavigableSet<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, headSet, $SortedSet*, Object$*)},
	{"headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, headSet, $NavigableSet*, Object$*, bool)},
	{"higher", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, higher, $Object*, Object$*)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"*last", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"lower", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, lower, $Object*, Object$*)},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"pollFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, pollFirst, $Object*)},
	{"pollLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, pollLast, $Object*)},
	{"*remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC},
	{"subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/NavigableSet;", "(TE;TE;)Ljava/util/NavigableSet<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, subSet, $SortedSet*, Object$*, Object$*)},
	{"subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;ZTE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, subSet, $NavigableSet*, Object$*, bool, Object$*, bool)},
	{"tailSet", "(Ljava/lang/Object;)Ljava/util/NavigableSet;", "(TE;)Ljava/util/NavigableSet<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, tailSet, $SortedSet*, Object$*)},
	{"tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedNavigableSet, tailSet, $NavigableSet*, Object$*, bool)},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$CheckedNavigableSet_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedNavigableSet", "java.util.Collections", "CheckedNavigableSet", $STATIC},
	{"java.util.Collections$CheckedSortedSet", "java.util.Collections", "CheckedSortedSet", $STATIC},
	{}
};

$ClassInfo _Collections$CheckedNavigableSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedNavigableSet",
	"java.util.Collections$CheckedSortedSet",
	"java.util.NavigableSet",
	_Collections$CheckedNavigableSet_FieldInfo_,
	_Collections$CheckedNavigableSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$CheckedSortedSet<TE;>;Ljava/util/NavigableSet<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$CheckedNavigableSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedNavigableSet($Class* clazz) {
	return $of($alloc(Collections$CheckedNavigableSet));
}

$Comparator* Collections$CheckedNavigableSet::comparator() {
	 return this->$Collections$CheckedSortedSet::comparator();
}

$Object* Collections$CheckedNavigableSet::first() {
	 return this->$Collections$CheckedSortedSet::first();
}

$Object* Collections$CheckedNavigableSet::last() {
	 return this->$Collections$CheckedSortedSet::last();
}

bool Collections$CheckedNavigableSet::equals(Object$* o) {
	 return this->$Collections$CheckedSortedSet::equals(o);
}

int32_t Collections$CheckedNavigableSet::hashCode() {
	 return this->$Collections$CheckedSortedSet::hashCode();
}

int32_t Collections$CheckedNavigableSet::size() {
	 return this->$Collections$CheckedSortedSet::size();
}

bool Collections$CheckedNavigableSet::isEmpty() {
	 return this->$Collections$CheckedSortedSet::isEmpty();
}

bool Collections$CheckedNavigableSet::contains(Object$* o) {
	 return this->$Collections$CheckedSortedSet::contains(o);
}

$ObjectArray* Collections$CheckedNavigableSet::toArray() {
	 return this->$Collections$CheckedSortedSet::toArray();
}

$ObjectArray* Collections$CheckedNavigableSet::toArray($ObjectArray* a) {
	 return this->$Collections$CheckedSortedSet::toArray(a);
}

$ObjectArray* Collections$CheckedNavigableSet::toArray($IntFunction* f) {
	 return this->$Collections$CheckedSortedSet::toArray(f);
}

$String* Collections$CheckedNavigableSet::toString() {
	 return this->$Collections$CheckedSortedSet::toString();
}

bool Collections$CheckedNavigableSet::remove(Object$* o) {
	 return this->$Collections$CheckedSortedSet::remove(o);
}

void Collections$CheckedNavigableSet::clear() {
	this->$Collections$CheckedSortedSet::clear();
}

bool Collections$CheckedNavigableSet::containsAll($Collection* coll) {
	 return this->$Collections$CheckedSortedSet::containsAll(coll);
}

bool Collections$CheckedNavigableSet::removeAll($Collection* coll) {
	 return this->$Collections$CheckedSortedSet::removeAll(coll);
}

bool Collections$CheckedNavigableSet::retainAll($Collection* coll) {
	 return this->$Collections$CheckedSortedSet::retainAll(coll);
}

$Iterator* Collections$CheckedNavigableSet::iterator() {
	 return this->$Collections$CheckedSortedSet::iterator();
}

bool Collections$CheckedNavigableSet::add(Object$* e) {
	 return this->$Collections$CheckedSortedSet::add(e);
}

bool Collections$CheckedNavigableSet::addAll($Collection* coll) {
	 return this->$Collections$CheckedSortedSet::addAll(coll);
}

void Collections$CheckedNavigableSet::forEach($Consumer* action) {
	this->$Collections$CheckedSortedSet::forEach(action);
}

bool Collections$CheckedNavigableSet::removeIf($Predicate* filter) {
	 return this->$Collections$CheckedSortedSet::removeIf(filter);
}

$Spliterator* Collections$CheckedNavigableSet::spliterator() {
	 return this->$Collections$CheckedSortedSet::spliterator();
}

$Stream* Collections$CheckedNavigableSet::stream() {
	 return this->$Collections$CheckedSortedSet::stream();
}

$Stream* Collections$CheckedNavigableSet::parallelStream() {
	 return this->$Collections$CheckedSortedSet::parallelStream();
}

$Object* Collections$CheckedNavigableSet::clone() {
	 return this->$Collections$CheckedSortedSet::clone();
}

void Collections$CheckedNavigableSet::finalize() {
	this->$Collections$CheckedSortedSet::finalize();
}

void Collections$CheckedNavigableSet::init$($NavigableSet* s, $Class* type) {
	$Collections$CheckedSortedSet::init$(s, type);
	$set(this, ns, s);
}

$Object* Collections$CheckedNavigableSet::lower(Object$* e) {
	return $of($nc(this->ns)->lower(e));
}

$Object* Collections$CheckedNavigableSet::floor(Object$* e) {
	return $of($nc(this->ns)->floor(e));
}

$Object* Collections$CheckedNavigableSet::ceiling(Object$* e) {
	return $of($nc(this->ns)->ceiling(e));
}

$Object* Collections$CheckedNavigableSet::higher(Object$* e) {
	return $of($nc(this->ns)->higher(e));
}

$Object* Collections$CheckedNavigableSet::pollFirst() {
	return $of($nc(this->ns)->pollFirst());
}

$Object* Collections$CheckedNavigableSet::pollLast() {
	return $of($nc(this->ns)->pollLast());
}

$NavigableSet* Collections$CheckedNavigableSet::descendingSet() {
	return $Collections::checkedNavigableSet($($nc(this->ns)->descendingSet()), this->type);
}

$Iterator* Collections$CheckedNavigableSet::descendingIterator() {
	$useLocalCurrentObjectStackCache();
	return $nc($($Collections::checkedNavigableSet($($nc(this->ns)->descendingSet()), this->type)))->iterator();
}

$SortedSet* Collections$CheckedNavigableSet::subSet(Object$* fromElement, Object$* toElement) {
	return $Collections::checkedNavigableSet($($nc(this->ns)->subSet(fromElement, true, toElement, false)), this->type);
}

$SortedSet* Collections$CheckedNavigableSet::headSet(Object$* toElement) {
	return $Collections::checkedNavigableSet($($nc(this->ns)->headSet(toElement, false)), this->type);
}

$SortedSet* Collections$CheckedNavigableSet::tailSet(Object$* fromElement) {
	return $Collections::checkedNavigableSet($($nc(this->ns)->tailSet(fromElement, true)), this->type);
}

$NavigableSet* Collections$CheckedNavigableSet::subSet(Object$* fromElement, bool fromInclusive, Object$* toElement, bool toInclusive) {
	return $Collections::checkedNavigableSet($($nc(this->ns)->subSet(fromElement, fromInclusive, toElement, toInclusive)), this->type);
}

$NavigableSet* Collections$CheckedNavigableSet::headSet(Object$* toElement, bool inclusive) {
	return $Collections::checkedNavigableSet($($nc(this->ns)->headSet(toElement, inclusive)), this->type);
}

$NavigableSet* Collections$CheckedNavigableSet::tailSet(Object$* fromElement, bool inclusive) {
	return $Collections::checkedNavigableSet($($nc(this->ns)->tailSet(fromElement, inclusive)), this->type);
}

Collections$CheckedNavigableSet::Collections$CheckedNavigableSet() {
}

$Class* Collections$CheckedNavigableSet::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedNavigableSet, name, initialize, &_Collections$CheckedNavigableSet_ClassInfo_, allocate$Collections$CheckedNavigableSet);
	return class$;
}

$Class* Collections$CheckedNavigableSet::class$ = nullptr;

	} // util
} // java