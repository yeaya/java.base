#include <java/util/Collections$UnmodifiableNavigableMap.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collection.h>
#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry.h>
#include <java/util/Collections$UnmodifiableNavigableMap$EmptyNavigableMap.h>
#include <java/util/Collections$UnmodifiableSortedMap.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/NavigableMap.h>
#include <java/util/NavigableSet.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef EMPTY_NAVIGABLE_MAP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry = ::java::util::Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry;
using $Collections$UnmodifiableNavigableMap$EmptyNavigableMap = ::java::util::Collections$UnmodifiableNavigableMap$EmptyNavigableMap;
using $Collections$UnmodifiableSortedMap = ::java::util::Collections$UnmodifiableSortedMap;
using $Comparator = ::java::util::Comparator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $NavigableMap = ::java::util::NavigableMap;
using $NavigableSet = ::java::util::NavigableSet;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableNavigableMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableNavigableMap, serialVersionUID)},
	{"EMPTY_NAVIGABLE_MAP", "Ljava/util/Collections$UnmodifiableNavigableMap$EmptyNavigableMap;", "Ljava/util/Collections$UnmodifiableNavigableMap$EmptyNavigableMap<**>;", $PRIVATE | $STATIC | $FINAL, $staticField(Collections$UnmodifiableNavigableMap, EMPTY_NAVIGABLE_MAP)},
	{"nm", "Ljava/util/NavigableMap;", "Ljava/util/NavigableMap<TK;+TV;>;", $PRIVATE | $FINAL, $field(Collections$UnmodifiableNavigableMap, nm)},
	{}
};

$MethodInfo _Collections$UnmodifiableNavigableMap_MethodInfo_[] = {
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*comparator", "()Ljava/util/Comparator;", nullptr, $PUBLIC},
	{"*compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*entrySet", "()Ljava/util/Set;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*firstKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*forEach", "(Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC},
	{"*get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"*headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/NavigableMap;)V", "(Ljava/util/NavigableMap<TK;+TV;>;)V", 0, $method(Collections$UnmodifiableNavigableMap, init$, void, $NavigableMap*)},
	{"ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, ceilingEntry, $Map$Entry*, Object$*)},
	{"ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, ceilingKey, $Object*, Object$*)},
	{"descendingKeySet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TK;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, descendingKeySet, $NavigableSet*)},
	{"descendingMap", "()Ljava/util/NavigableMap;", "()Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, descendingMap, $NavigableMap*)},
	{"firstEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, firstEntry, $Map$Entry*)},
	{"floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, floorEntry, $Map$Entry*, Object$*)},
	{"floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, floorKey, $Object*, Object$*)},
	{"headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, headMap, $NavigableMap*, Object$*, bool)},
	{"higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, higherEntry, $Map$Entry*, Object$*)},
	{"higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, higherKey, $Object*, Object$*)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*keySet", "()Ljava/util/Set;", nullptr, $PUBLIC},
	{"lastEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, lastEntry, $Map$Entry*)},
	{"*lastKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;", "(TK;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, lowerEntry, $Map$Entry*, Object$*)},
	{"lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TK;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, lowerKey, $Object*, Object$*)},
	{"*merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"navigableKeySet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TK;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, navigableKeySet, $NavigableSet*)},
	{"pollFirstEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, pollFirstEntry, $Map$Entry*)},
	{"pollLastEntry", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, pollLastEntry, $Map$Entry*)},
	{"*put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*putAll", "(Ljava/util/Map;)V", nullptr, $PUBLIC},
	{"*putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*replaceAll", "(Ljava/util/function/BiFunction;)V", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"*subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", nullptr, $PUBLIC},
	{"subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;ZTK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, subMap, $NavigableMap*, Object$*, bool, Object$*, bool)},
	{"*tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", nullptr, $PUBLIC},
	{"tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", "(TK;Z)Ljava/util/NavigableMap<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableNavigableMap, tailMap, $NavigableMap*, Object$*, bool)},
	{"*values", "()Ljava/util/Collection;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$UnmodifiableNavigableMap_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableNavigableMap", "java.util.Collections", "UnmodifiableNavigableMap", $STATIC},
	{"java.util.Collections$UnmodifiableSortedMap", "java.util.Collections", "UnmodifiableSortedMap", $STATIC},
	{"java.util.Collections$UnmodifiableNavigableMap$EmptyNavigableMap", "java.util.Collections$UnmodifiableNavigableMap", "EmptyNavigableMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$UnmodifiableNavigableMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableNavigableMap",
	"java.util.Collections$UnmodifiableSortedMap",
	"java.util.NavigableMap",
	_Collections$UnmodifiableNavigableMap_FieldInfo_,
	_Collections$UnmodifiableNavigableMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableSortedMap<TK;TV;>;Ljava/util/NavigableMap<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$UnmodifiableNavigableMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableNavigableMap($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableNavigableMap));
}

$Comparator* Collections$UnmodifiableNavigableMap::comparator() {
	 return this->$Collections$UnmodifiableSortedMap::comparator();
}

$SortedMap* Collections$UnmodifiableNavigableMap::subMap(Object$* fromKey, Object$* toKey) {
	 return this->$Collections$UnmodifiableSortedMap::subMap(fromKey, toKey);
}

$SortedMap* Collections$UnmodifiableNavigableMap::headMap(Object$* toKey) {
	 return this->$Collections$UnmodifiableSortedMap::headMap(toKey);
}

$SortedMap* Collections$UnmodifiableNavigableMap::tailMap(Object$* fromKey) {
	 return this->$Collections$UnmodifiableSortedMap::tailMap(fromKey);
}

$Object* Collections$UnmodifiableNavigableMap::firstKey() {
	 return this->$Collections$UnmodifiableSortedMap::firstKey();
}

$Object* Collections$UnmodifiableNavigableMap::lastKey() {
	 return this->$Collections$UnmodifiableSortedMap::lastKey();
}

int32_t Collections$UnmodifiableNavigableMap::size() {
	 return this->$Collections$UnmodifiableSortedMap::size();
}

bool Collections$UnmodifiableNavigableMap::isEmpty() {
	 return this->$Collections$UnmodifiableSortedMap::isEmpty();
}

bool Collections$UnmodifiableNavigableMap::containsKey(Object$* key) {
	 return this->$Collections$UnmodifiableSortedMap::containsKey(key);
}

bool Collections$UnmodifiableNavigableMap::containsValue(Object$* val) {
	 return this->$Collections$UnmodifiableSortedMap::containsValue(val);
}

$Object* Collections$UnmodifiableNavigableMap::get(Object$* key) {
	 return this->$Collections$UnmodifiableSortedMap::get(key);
}

$Object* Collections$UnmodifiableNavigableMap::put(Object$* key, Object$* value) {
	 return this->$Collections$UnmodifiableSortedMap::put(key, value);
}

$Object* Collections$UnmodifiableNavigableMap::remove(Object$* key) {
	 return this->$Collections$UnmodifiableSortedMap::remove(key);
}

void Collections$UnmodifiableNavigableMap::putAll($Map* m) {
	this->$Collections$UnmodifiableSortedMap::putAll(m);
}

void Collections$UnmodifiableNavigableMap::clear() {
	this->$Collections$UnmodifiableSortedMap::clear();
}

$Set* Collections$UnmodifiableNavigableMap::keySet() {
	 return this->$Collections$UnmodifiableSortedMap::keySet();
}

$Set* Collections$UnmodifiableNavigableMap::entrySet() {
	 return this->$Collections$UnmodifiableSortedMap::entrySet();
}

$Collection* Collections$UnmodifiableNavigableMap::values() {
	 return this->$Collections$UnmodifiableSortedMap::values();
}

bool Collections$UnmodifiableNavigableMap::equals(Object$* o) {
	 return this->$Collections$UnmodifiableSortedMap::equals(o);
}

int32_t Collections$UnmodifiableNavigableMap::hashCode() {
	 return this->$Collections$UnmodifiableSortedMap::hashCode();
}

$String* Collections$UnmodifiableNavigableMap::toString() {
	 return this->$Collections$UnmodifiableSortedMap::toString();
}

$Object* Collections$UnmodifiableNavigableMap::getOrDefault(Object$* k, Object$* defaultValue) {
	 return this->$Collections$UnmodifiableSortedMap::getOrDefault(k, defaultValue);
}

void Collections$UnmodifiableNavigableMap::forEach($BiConsumer* action) {
	this->$Collections$UnmodifiableSortedMap::forEach(action);
}

void Collections$UnmodifiableNavigableMap::replaceAll($BiFunction* function) {
	this->$Collections$UnmodifiableSortedMap::replaceAll(function);
}

$Object* Collections$UnmodifiableNavigableMap::putIfAbsent(Object$* key, Object$* value) {
	 return this->$Collections$UnmodifiableSortedMap::putIfAbsent(key, value);
}

bool Collections$UnmodifiableNavigableMap::remove(Object$* key, Object$* value) {
	 return this->$Collections$UnmodifiableSortedMap::remove(key, value);
}

bool Collections$UnmodifiableNavigableMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	 return this->$Collections$UnmodifiableSortedMap::replace(key, oldValue, newValue);
}

$Object* Collections$UnmodifiableNavigableMap::replace(Object$* key, Object$* value) {
	 return this->$Collections$UnmodifiableSortedMap::replace(key, value);
}

$Object* Collections$UnmodifiableNavigableMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	 return this->$Collections$UnmodifiableSortedMap::computeIfAbsent(key, mappingFunction);
}

$Object* Collections$UnmodifiableNavigableMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	 return this->$Collections$UnmodifiableSortedMap::computeIfPresent(key, remappingFunction);
}

$Object* Collections$UnmodifiableNavigableMap::compute(Object$* key, $BiFunction* remappingFunction) {
	 return this->$Collections$UnmodifiableSortedMap::compute(key, remappingFunction);
}

$Object* Collections$UnmodifiableNavigableMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	 return this->$Collections$UnmodifiableSortedMap::merge(key, value, remappingFunction);
}

$Object* Collections$UnmodifiableNavigableMap::clone() {
	 return this->$Collections$UnmodifiableSortedMap::clone();
}

void Collections$UnmodifiableNavigableMap::finalize() {
	this->$Collections$UnmodifiableSortedMap::finalize();
}

$Collections$UnmodifiableNavigableMap$EmptyNavigableMap* Collections$UnmodifiableNavigableMap::EMPTY_NAVIGABLE_MAP = nullptr;

void Collections$UnmodifiableNavigableMap::init$($NavigableMap* m) {
	$Collections$UnmodifiableSortedMap::init$(m);
	$set(this, nm, m);
}

$Object* Collections$UnmodifiableNavigableMap::lowerKey(Object$* key) {
	return $of($nc(this->nm)->lowerKey(key));
}

$Object* Collections$UnmodifiableNavigableMap::floorKey(Object$* key) {
	return $of($nc(this->nm)->floorKey(key));
}

$Object* Collections$UnmodifiableNavigableMap::ceilingKey(Object$* key) {
	return $of($nc(this->nm)->ceilingKey(key));
}

$Object* Collections$UnmodifiableNavigableMap::higherKey(Object$* key) {
	return $of($nc(this->nm)->higherKey(key));
}

$Map$Entry* Collections$UnmodifiableNavigableMap::lowerEntry(Object$* key) {
	$var($Map$Entry, lower, $nc(this->nm)->lowerEntry(key));
	return (nullptr != lower) ? static_cast<$Map$Entry*>($new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, lower)) : ($Map$Entry*)nullptr;
}

$Map$Entry* Collections$UnmodifiableNavigableMap::floorEntry(Object$* key) {
	$var($Map$Entry, floor, $nc(this->nm)->floorEntry(key));
	return (nullptr != floor) ? static_cast<$Map$Entry*>($new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, floor)) : ($Map$Entry*)nullptr;
}

$Map$Entry* Collections$UnmodifiableNavigableMap::ceilingEntry(Object$* key) {
	$var($Map$Entry, ceiling, $nc(this->nm)->ceilingEntry(key));
	return (nullptr != ceiling) ? static_cast<$Map$Entry*>($new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, ceiling)) : ($Map$Entry*)nullptr;
}

$Map$Entry* Collections$UnmodifiableNavigableMap::higherEntry(Object$* key) {
	$var($Map$Entry, higher, $nc(this->nm)->higherEntry(key));
	return (nullptr != higher) ? static_cast<$Map$Entry*>($new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, higher)) : ($Map$Entry*)nullptr;
}

$Map$Entry* Collections$UnmodifiableNavigableMap::firstEntry() {
	$var($Map$Entry, first, $nc(this->nm)->firstEntry());
	return (nullptr != first) ? static_cast<$Map$Entry*>($new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, first)) : ($Map$Entry*)nullptr;
}

$Map$Entry* Collections$UnmodifiableNavigableMap::lastEntry() {
	$var($Map$Entry, last, $nc(this->nm)->lastEntry());
	return (nullptr != last) ? static_cast<$Map$Entry*>($new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, last)) : ($Map$Entry*)nullptr;
}

$Map$Entry* Collections$UnmodifiableNavigableMap::pollFirstEntry() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Map$Entry* Collections$UnmodifiableNavigableMap::pollLastEntry() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$NavigableMap* Collections$UnmodifiableNavigableMap::descendingMap() {
	return $Collections::unmodifiableNavigableMap($($nc(this->nm)->descendingMap()));
}

$NavigableSet* Collections$UnmodifiableNavigableMap::navigableKeySet() {
	return $Collections::unmodifiableNavigableSet($($nc(this->nm)->navigableKeySet()));
}

$NavigableSet* Collections$UnmodifiableNavigableMap::descendingKeySet() {
	return $Collections::unmodifiableNavigableSet($($nc(this->nm)->descendingKeySet()));
}

$NavigableMap* Collections$UnmodifiableNavigableMap::subMap(Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive) {
	return $Collections::unmodifiableNavigableMap($($nc(this->nm)->subMap(fromKey, fromInclusive, toKey, toInclusive)));
}

$NavigableMap* Collections$UnmodifiableNavigableMap::headMap(Object$* toKey, bool inclusive) {
	return $Collections::unmodifiableNavigableMap($($nc(this->nm)->headMap(toKey, inclusive)));
}

$NavigableMap* Collections$UnmodifiableNavigableMap::tailMap(Object$* fromKey, bool inclusive) {
	return $Collections::unmodifiableNavigableMap($($nc(this->nm)->tailMap(fromKey, inclusive)));
}

void clinit$Collections$UnmodifiableNavigableMap($Class* class$) {
	$assignStatic(Collections$UnmodifiableNavigableMap::EMPTY_NAVIGABLE_MAP, $new($Collections$UnmodifiableNavigableMap$EmptyNavigableMap));
}

Collections$UnmodifiableNavigableMap::Collections$UnmodifiableNavigableMap() {
}

$Class* Collections$UnmodifiableNavigableMap::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableNavigableMap, name, initialize, &_Collections$UnmodifiableNavigableMap_ClassInfo_, clinit$Collections$UnmodifiableNavigableMap, allocate$Collections$UnmodifiableNavigableMap);
	return class$;
}

$Class* Collections$UnmodifiableNavigableMap::class$ = nullptr;

	} // util
} // java