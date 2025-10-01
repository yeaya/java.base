#include <java/util/TreeMap$DescendingSubMap.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/NavigableMap.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/TreeMap$AscendingSubMap.h>
#include <java/util/TreeMap$DescendingSubMap$DescendingEntrySetView.h>
#include <java/util/TreeMap$Entry.h>
#include <java/util/TreeMap$NavigableSubMap$DescendingSubMapKeyIterator.h>
#include <java/util/TreeMap$NavigableSubMap$EntrySetView.h>
#include <java/util/TreeMap$NavigableSubMap$SubMapIterator.h>
#include <java/util/TreeMap$NavigableSubMap$SubMapKeyIterator.h>
#include <java/util/TreeMap$NavigableSubMap.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $NavigableMap = ::java::util::NavigableMap;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$AscendingSubMap = ::java::util::TreeMap$AscendingSubMap;
using $TreeMap$DescendingSubMap$DescendingEntrySetView = ::java::util::TreeMap$DescendingSubMap$DescendingEntrySetView;
using $TreeMap$Entry = ::java::util::TreeMap$Entry;
using $TreeMap$NavigableSubMap = ::java::util::TreeMap$NavigableSubMap;
using $TreeMap$NavigableSubMap$DescendingSubMapKeyIterator = ::java::util::TreeMap$NavigableSubMap$DescendingSubMapKeyIterator;
using $TreeMap$NavigableSubMap$EntrySetView = ::java::util::TreeMap$NavigableSubMap$EntrySetView;
using $TreeMap$NavigableSubMap$SubMapIterator = ::java::util::TreeMap$NavigableSubMap$SubMapIterator;
using $TreeMap$NavigableSubMap$SubMapKeyIterator = ::java::util::TreeMap$NavigableSubMap$SubMapKeyIterator;

namespace java {
	namespace util {

$FieldInfo _TreeMap$DescendingSubMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TreeMap$DescendingSubMap, serialVersionUID)},
	{"reverseComparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<-TK;>;", $PRIVATE | $FINAL, $field(TreeMap$DescendingSubMap, reverseComparator)},
	{}
};

$MethodInfo _TreeMap$DescendingSubMap_MethodInfo_[] = {
	{"<init>", "(Ljava/util/TreeMap;ZLjava/lang/Object;ZZLjava/lang/Object;Z)V", "(Ljava/util/TreeMap<TK;TV;>;ZTK;ZZTK;Z)V", 0, $method(static_cast<void(TreeMap$DescendingSubMap::*)($TreeMap*,bool,Object$*,bool,bool,Object$*,bool)>(&TreeMap$DescendingSubMap::init$))},
	{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TK;>;", $PUBLIC},
	{"descendingKeyIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", 0},
	{"descendingMap", "()Ljava/util/NavigableMap;", "()Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC},
	{"keyIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", 0},
	{"keySpliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TK;>;", 0},
	{"subCeiling", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", "(TK;)Ljava/util/TreeMap$Entry<TK;TV;>;", 0},
	{"subFloor", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", "(TK;)Ljava/util/TreeMap$Entry<TK;TV;>;", 0},
	{"subHigher", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", "(TK;)Ljava/util/TreeMap$Entry<TK;TV;>;", 0},
	{"subHighest", "()Ljava/util/TreeMap$Entry;", "()Ljava/util/TreeMap$Entry<TK;TV;>;", 0},
	{"subLower", "(Ljava/lang/Object;)Ljava/util/TreeMap$Entry;", "(TK;)Ljava/util/TreeMap$Entry<TK;TV;>;", 0},
	{"subLowest", "()Ljava/util/TreeMap$Entry;", "()Ljava/util/TreeMap$Entry<TK;TV;>;", 0},
	{"subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;ZTK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC},
	{"tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _TreeMap$DescendingSubMap_InnerClassesInfo_[] = {
	{"java.util.TreeMap$DescendingSubMap", "java.util.TreeMap", "DescendingSubMap", $STATIC | $FINAL},
	{"java.util.TreeMap$NavigableSubMap", "java.util.TreeMap", "NavigableSubMap", $STATIC | $ABSTRACT},
	{"java.util.TreeMap$DescendingSubMap$DescendingEntrySetView", "java.util.TreeMap$DescendingSubMap", "DescendingEntrySetView", $FINAL},
	{}
};

$ClassInfo _TreeMap$DescendingSubMap_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$DescendingSubMap",
	"java.util.TreeMap$NavigableSubMap",
	nullptr,
	_TreeMap$DescendingSubMap_FieldInfo_,
	_TreeMap$DescendingSubMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/TreeMap$NavigableSubMap<TK;TV;>;",
	nullptr,
	_TreeMap$DescendingSubMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$DescendingSubMap($Class* clazz) {
	return $of($alloc(TreeMap$DescendingSubMap));
}

void TreeMap$DescendingSubMap::init$($TreeMap* m, bool fromStart, Object$* lo, bool loInclusive, bool toEnd, Object$* hi, bool hiInclusive) {
	$TreeMap$NavigableSubMap::init$(m, fromStart, lo, loInclusive, toEnd, hi, hiInclusive);
	$set(this, reverseComparator, $Collections::reverseOrder($nc(this->m)->comparator$));
}

$Comparator* TreeMap$DescendingSubMap::comparator() {
	return this->reverseComparator;
}

$NavigableMap* TreeMap$DescendingSubMap::subMap(Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive) {
	if (!inRange(fromKey, fromInclusive)) {
		$throwNew($IllegalArgumentException, "fromKey out of range"_s);
	}
	if (!inRange(toKey, toInclusive)) {
		$throwNew($IllegalArgumentException, "toKey out of range"_s);
	}
	return $new(TreeMap$DescendingSubMap, this->m, false, toKey, toInclusive, false, fromKey, fromInclusive);
}

$NavigableMap* TreeMap$DescendingSubMap::headMap(Object$* toKey, bool inclusive) {
	if (!inRange(toKey, inclusive)) {
		$throwNew($IllegalArgumentException, "toKey out of range"_s);
	}
	return $new(TreeMap$DescendingSubMap, this->m, false, toKey, inclusive, this->toEnd, this->hi, this->hiInclusive);
}

$NavigableMap* TreeMap$DescendingSubMap::tailMap(Object$* fromKey, bool inclusive) {
	if (!inRange(fromKey, inclusive)) {
		$throwNew($IllegalArgumentException, "fromKey out of range"_s);
	}
	return $new(TreeMap$DescendingSubMap, this->m, this->fromStart, this->lo, this->loInclusive, false, fromKey, inclusive);
}

$NavigableMap* TreeMap$DescendingSubMap::descendingMap() {
	$var($NavigableMap, mv, this->descendingMapView);
	return (mv != nullptr) ? mv : ($assignField(this, descendingMapView, $new($TreeMap$AscendingSubMap, this->m, this->fromStart, this->lo, this->loInclusive, this->toEnd, this->hi, this->hiInclusive)));
}

$Iterator* TreeMap$DescendingSubMap::keyIterator() {
	$var($TreeMap$Entry, var$0, absHighest());
	return $new($TreeMap$NavigableSubMap$DescendingSubMapKeyIterator, this, var$0, $(absLowFence()));
}

$Spliterator* TreeMap$DescendingSubMap::keySpliterator() {
	$var($TreeMap$Entry, var$0, absHighest());
	return $new($TreeMap$NavigableSubMap$DescendingSubMapKeyIterator, this, var$0, $(absLowFence()));
}

$Iterator* TreeMap$DescendingSubMap::descendingKeyIterator() {
	$var($TreeMap$Entry, var$0, absLowest());
	return $new($TreeMap$NavigableSubMap$SubMapKeyIterator, this, var$0, $(absHighFence()));
}

$Set* TreeMap$DescendingSubMap::entrySet() {
	$var($TreeMap$NavigableSubMap$EntrySetView, es, this->entrySetView);
	return (es != nullptr) ? static_cast<$Set*>(es) : (static_cast<$Set*>(($assignField(this, entrySetView, $new($TreeMap$DescendingSubMap$DescendingEntrySetView, this)))));
}

$TreeMap$Entry* TreeMap$DescendingSubMap::subLowest() {
	return absHighest();
}

$TreeMap$Entry* TreeMap$DescendingSubMap::subHighest() {
	return absLowest();
}

$TreeMap$Entry* TreeMap$DescendingSubMap::subCeiling(Object$* key) {
	return absFloor(key);
}

$TreeMap$Entry* TreeMap$DescendingSubMap::subHigher(Object$* key) {
	return absLower(key);
}

$TreeMap$Entry* TreeMap$DescendingSubMap::subFloor(Object$* key) {
	return absCeiling(key);
}

$TreeMap$Entry* TreeMap$DescendingSubMap::subLower(Object$* key) {
	return absHigher(key);
}

TreeMap$DescendingSubMap::TreeMap$DescendingSubMap() {
}

$Class* TreeMap$DescendingSubMap::load$($String* name, bool initialize) {
	$loadClass(TreeMap$DescendingSubMap, name, initialize, &_TreeMap$DescendingSubMap_ClassInfo_, allocate$TreeMap$DescendingSubMap);
	return class$;
}

$Class* TreeMap$DescendingSubMap::class$ = nullptr;

	} // util
} // java