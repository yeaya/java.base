#include <java/util/TreeMap$KeySet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/NavigableMap.h>
#include <java/util/NavigableSet.h>
#include <java/util/SortedSet.h>
#include <java/util/Spliterator.h>
#include <java/util/TreeMap$NavigableSubMap.h>
#include <java/util/TreeMap.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $NavigableMap = ::java::util::NavigableMap;
using $NavigableSet = ::java::util::NavigableSet;
using $SortedMap = ::java::util::SortedMap;
using $SortedSet = ::java::util::SortedSet;
using $Spliterator = ::java::util::Spliterator;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$NavigableSubMap = ::java::util::TreeMap$NavigableSubMap;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

$FieldInfo _TreeMap$KeySet_FieldInfo_[] = {
	{"m", "Ljava/util/NavigableMap;", "Ljava/util/NavigableMap<TE;*>;", $PRIVATE | $FINAL, $field(TreeMap$KeySet, m)},
	{}
};

$MethodInfo _TreeMap$KeySet_MethodInfo_[] = {
	{"*add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*addAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/NavigableMap;)V", "(Ljava/util/NavigableMap<TE;*>;)V", 0, $method(static_cast<void(TreeMap$KeySet::*)($NavigableMap*)>(&TreeMap$KeySet::init$))},
	{"ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TE;>;", $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"descendingSet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"first", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"floor", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC},
	{"higher", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"last", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"lower", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE;)TE;", $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"pollFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"pollLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TE;>;", $PUBLIC},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;ZTE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC},
	{"tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", "(TE;Z)Ljava/util/NavigableSet<TE;>;", $PUBLIC},
	{"tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;", "(TE;)Ljava/util/SortedSet<TE;>;", $PUBLIC},
	{"*toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TreeMap$KeySet_InnerClassesInfo_[] = {
	{"java.util.TreeMap$KeySet", "java.util.TreeMap", "KeySet", $STATIC | $FINAL},
	{}
};

$ClassInfo _TreeMap$KeySet_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$KeySet",
	"java.util.AbstractSet",
	"java.util.NavigableSet",
	_TreeMap$KeySet_FieldInfo_,
	_TreeMap$KeySet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractSet<TE;>;Ljava/util/NavigableSet<TE;>;",
	nullptr,
	_TreeMap$KeySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$KeySet($Class* clazz) {
	return $of($alloc(TreeMap$KeySet));
}

bool TreeMap$KeySet::equals(Object$* o) {
	 return this->$AbstractSet::equals(o);
}

int32_t TreeMap$KeySet::hashCode() {
	 return this->$AbstractSet::hashCode();
}

bool TreeMap$KeySet::removeAll($Collection* c) {
	 return this->$AbstractSet::removeAll(c);
}

$ObjectArray* TreeMap$KeySet::toArray() {
	 return this->$AbstractSet::toArray();
}

$ObjectArray* TreeMap$KeySet::toArray($ObjectArray* a) {
	 return this->$AbstractSet::toArray(a);
}

bool TreeMap$KeySet::add(Object$* e) {
	 return this->$AbstractSet::add(e);
}

bool TreeMap$KeySet::containsAll($Collection* c) {
	 return this->$AbstractSet::containsAll(c);
}

bool TreeMap$KeySet::addAll($Collection* c) {
	 return this->$AbstractSet::addAll(c);
}

bool TreeMap$KeySet::retainAll($Collection* c) {
	 return this->$AbstractSet::retainAll(c);
}

$String* TreeMap$KeySet::toString() {
	 return this->$AbstractSet::toString();
}

$ObjectArray* TreeMap$KeySet::toArray($IntFunction* generator) {
	 return this->$AbstractSet::toArray(generator);
}

bool TreeMap$KeySet::removeIf($Predicate* filter) {
	 return this->$AbstractSet::removeIf(filter);
}

$Stream* TreeMap$KeySet::stream() {
	 return this->$AbstractSet::stream();
}

$Stream* TreeMap$KeySet::parallelStream() {
	 return this->$AbstractSet::parallelStream();
}

void TreeMap$KeySet::forEach($Consumer* action) {
	this->$AbstractSet::forEach(action);
}

$Object* TreeMap$KeySet::clone() {
	 return this->$AbstractSet::clone();
}

void TreeMap$KeySet::finalize() {
	this->$AbstractSet::finalize();
}

void TreeMap$KeySet::init$($NavigableMap* map) {
	$AbstractSet::init$();
	$set(this, m, map);
}

$Iterator* TreeMap$KeySet::iterator() {
	if ($instanceOf($TreeMap, this->m)) {
		return $nc(($cast($TreeMap, this->m)))->keyIterator();
	} else {
		return $nc(($cast($TreeMap$NavigableSubMap, this->m)))->keyIterator();
	}
}

$Iterator* TreeMap$KeySet::descendingIterator() {
	if ($instanceOf($TreeMap, this->m)) {
		return $nc(($cast($TreeMap, this->m)))->descendingKeyIterator();
	} else {
		return $nc(($cast($TreeMap$NavigableSubMap, this->m)))->descendingKeyIterator();
	}
}

int32_t TreeMap$KeySet::size() {
	return $nc(this->m)->size();
}

bool TreeMap$KeySet::isEmpty() {
	return $nc(this->m)->isEmpty();
}

bool TreeMap$KeySet::contains(Object$* o) {
	return $nc(this->m)->containsKey(o);
}

void TreeMap$KeySet::clear() {
	$nc(this->m)->clear();
}

$Object* TreeMap$KeySet::lower(Object$* e) {
	return $of($nc(this->m)->lowerKey(e));
}

$Object* TreeMap$KeySet::floor(Object$* e) {
	return $of($nc(this->m)->floorKey(e));
}

$Object* TreeMap$KeySet::ceiling(Object$* e) {
	return $of($nc(this->m)->ceilingKey(e));
}

$Object* TreeMap$KeySet::higher(Object$* e) {
	return $of($nc(this->m)->higherKey(e));
}

$Object* TreeMap$KeySet::first() {
	return $of($nc(this->m)->firstKey());
}

$Object* TreeMap$KeySet::last() {
	return $of($nc(this->m)->lastKey());
}

$Comparator* TreeMap$KeySet::comparator() {
	return $nc(this->m)->comparator();
}

$Object* TreeMap$KeySet::pollFirst() {
	$var($Map$Entry, e, $nc(this->m)->pollFirstEntry());
	return $of((e == nullptr) ? ($Object*)nullptr : $nc(e)->getKey());
}

$Object* TreeMap$KeySet::pollLast() {
	$var($Map$Entry, e, $nc(this->m)->pollLastEntry());
	return $of((e == nullptr) ? ($Object*)nullptr : $nc(e)->getKey());
}

bool TreeMap$KeySet::remove(Object$* o) {
	int32_t oldSize = size();
	$nc(this->m)->remove(o);
	return size() != oldSize;
}

$NavigableSet* TreeMap$KeySet::subSet(Object$* fromElement, bool fromInclusive, Object$* toElement, bool toInclusive) {
	return $new(TreeMap$KeySet, $($nc(this->m)->subMap(fromElement, fromInclusive, toElement, toInclusive)));
}

$NavigableSet* TreeMap$KeySet::headSet(Object$* toElement, bool inclusive) {
	return $new(TreeMap$KeySet, $($nc(this->m)->headMap(toElement, inclusive)));
}

$NavigableSet* TreeMap$KeySet::tailSet(Object$* fromElement, bool inclusive) {
	return $new(TreeMap$KeySet, $($nc(this->m)->tailMap(fromElement, inclusive)));
}

$SortedSet* TreeMap$KeySet::subSet(Object$* fromElement, Object$* toElement) {
	return subSet(fromElement, true, toElement, false);
}

$SortedSet* TreeMap$KeySet::headSet(Object$* toElement) {
	return headSet(toElement, false);
}

$SortedSet* TreeMap$KeySet::tailSet(Object$* fromElement) {
	return tailSet(fromElement, true);
}

$NavigableSet* TreeMap$KeySet::descendingSet() {
	return $new(TreeMap$KeySet, $($nc(this->m)->descendingMap()));
}

$Spliterator* TreeMap$KeySet::spliterator() {
	return $TreeMap::keySpliteratorFor(this->m);
}

TreeMap$KeySet::TreeMap$KeySet() {
}

$Class* TreeMap$KeySet::load$($String* name, bool initialize) {
	$loadClass(TreeMap$KeySet, name, initialize, &_TreeMap$KeySet_ClassInfo_, allocate$TreeMap$KeySet);
	return class$;
}

$Class* TreeMap$KeySet::class$ = nullptr;

	} // util
} // java