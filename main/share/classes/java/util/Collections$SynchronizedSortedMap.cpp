#include <java/util/Collections$SynchronizedSortedMap.h>

#include <java/util/Collection.h>
#include <java/util/Collections$SynchronizedMap.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Collections$SynchronizedMap = ::java::util::Collections$SynchronizedMap;
using $Comparator = ::java::util::Comparator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$FieldInfo _Collections$SynchronizedSortedMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SynchronizedSortedMap, serialVersionUID)},
	{"sm", "Ljava/util/SortedMap;", "Ljava/util/SortedMap<TK;TV;>;", $PRIVATE | $FINAL, $field(Collections$SynchronizedSortedMap, sm)},
	{}
};

$MethodInfo _Collections$SynchronizedSortedMap_MethodInfo_[] = {
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*entrySet", "()Ljava/util/Set;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC},
	{"*get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/SortedMap;)V", "(Ljava/util/SortedMap<TK;TV;>;)V", 0, $method(Collections$SynchronizedSortedMap, init$, void, $SortedMap*)},
	{"<init>", "(Ljava/util/SortedMap;Ljava/lang/Object;)V", "(Ljava/util/SortedMap<TK;TV;>;Ljava/lang/Object;)V", 0, $method(Collections$SynchronizedSortedMap, init$, void, $SortedMap*, Object$*)},
	{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TK;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedMap, comparator, $Comparator*)},
	{"firstKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedMap, firstKey, $Object*)},
	{"headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedMap, headMap, $SortedMap*, Object$*)},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*keySet", "()Ljava/util/Set;", nullptr, $PUBLIC},
	{"lastKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedMap, lastKey, $Object*)},
	{"*merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*putAll", "(Ljava/util/Map;)V", nullptr, $PUBLIC},
	{"*putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*replaceAll", "(Ljava/util/function/BiFunction;)V", nullptr, $PUBLIC},
	{"*size", "()I", nullptr, $PUBLIC},
	{"subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedMap, subMap, $SortedMap*, Object$*, Object$*)},
	{"tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedSortedMap, tailMap, $SortedMap*, Object$*)},
	{"*values", "()Ljava/util/Collection;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$SynchronizedSortedMap_InnerClassesInfo_[] = {
	{"java.util.Collections$SynchronizedSortedMap", "java.util.Collections", "SynchronizedSortedMap", $STATIC},
	{"java.util.Collections$SynchronizedMap", "java.util.Collections", "SynchronizedMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$SynchronizedSortedMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SynchronizedSortedMap",
	"java.util.Collections$SynchronizedMap",
	"java.util.SortedMap",
	_Collections$SynchronizedSortedMap_FieldInfo_,
	_Collections$SynchronizedSortedMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/Collections$SynchronizedMap<TK;TV;>;Ljava/util/SortedMap<TK;TV;>;",
	nullptr,
	_Collections$SynchronizedSortedMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SynchronizedSortedMap($Class* clazz) {
	return $of($alloc(Collections$SynchronizedSortedMap));
}

int32_t Collections$SynchronizedSortedMap::size() {
	 return this->$Collections$SynchronizedMap::size();
}

bool Collections$SynchronizedSortedMap::isEmpty() {
	 return this->$Collections$SynchronizedMap::isEmpty();
}

bool Collections$SynchronizedSortedMap::containsKey(Object$* key) {
	 return this->$Collections$SynchronizedMap::containsKey(key);
}

bool Collections$SynchronizedSortedMap::containsValue(Object$* value) {
	 return this->$Collections$SynchronizedMap::containsValue(value);
}

$Object* Collections$SynchronizedSortedMap::get(Object$* key) {
	 return this->$Collections$SynchronizedMap::get(key);
}

$Object* Collections$SynchronizedSortedMap::put(Object$* key, Object$* value) {
	 return this->$Collections$SynchronizedMap::put(key, value);
}

$Object* Collections$SynchronizedSortedMap::remove(Object$* key) {
	 return this->$Collections$SynchronizedMap::remove(key);
}

void Collections$SynchronizedSortedMap::putAll($Map* map) {
	this->$Collections$SynchronizedMap::putAll(map);
}

void Collections$SynchronizedSortedMap::clear() {
	this->$Collections$SynchronizedMap::clear();
}

$Set* Collections$SynchronizedSortedMap::keySet() {
	 return this->$Collections$SynchronizedMap::keySet();
}

$Set* Collections$SynchronizedSortedMap::entrySet() {
	 return this->$Collections$SynchronizedMap::entrySet();
}

$Collection* Collections$SynchronizedSortedMap::values() {
	 return this->$Collections$SynchronizedMap::values();
}

bool Collections$SynchronizedSortedMap::equals(Object$* o) {
	 return this->$Collections$SynchronizedMap::equals(o);
}

int32_t Collections$SynchronizedSortedMap::hashCode() {
	 return this->$Collections$SynchronizedMap::hashCode();
}

$String* Collections$SynchronizedSortedMap::toString() {
	 return this->$Collections$SynchronizedMap::toString();
}

$Object* Collections$SynchronizedSortedMap::getOrDefault(Object$* k, Object$* defaultValue) {
	 return this->$Collections$SynchronizedMap::getOrDefault(k, defaultValue);
}

void Collections$SynchronizedSortedMap::forEach($BiConsumer* action) {
	this->$Collections$SynchronizedMap::forEach(action);
}

void Collections$SynchronizedSortedMap::replaceAll($BiFunction* function) {
	this->$Collections$SynchronizedMap::replaceAll(function);
}

$Object* Collections$SynchronizedSortedMap::putIfAbsent(Object$* key, Object$* value) {
	 return this->$Collections$SynchronizedMap::putIfAbsent(key, value);
}

bool Collections$SynchronizedSortedMap::remove(Object$* key, Object$* value) {
	 return this->$Collections$SynchronizedMap::remove(key, value);
}

bool Collections$SynchronizedSortedMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	 return this->$Collections$SynchronizedMap::replace(key, oldValue, newValue);
}

$Object* Collections$SynchronizedSortedMap::replace(Object$* key, Object$* value) {
	 return this->$Collections$SynchronizedMap::replace(key, value);
}

$Object* Collections$SynchronizedSortedMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	 return this->$Collections$SynchronizedMap::computeIfAbsent(key, mappingFunction);
}

$Object* Collections$SynchronizedSortedMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	 return this->$Collections$SynchronizedMap::computeIfPresent(key, remappingFunction);
}

$Object* Collections$SynchronizedSortedMap::compute(Object$* key, $BiFunction* remappingFunction) {
	 return this->$Collections$SynchronizedMap::compute(key, remappingFunction);
}

$Object* Collections$SynchronizedSortedMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	 return this->$Collections$SynchronizedMap::merge(key, value, remappingFunction);
}

$Object* Collections$SynchronizedSortedMap::clone() {
	 return this->$Collections$SynchronizedMap::clone();
}

void Collections$SynchronizedSortedMap::finalize() {
	this->$Collections$SynchronizedMap::finalize();
}

void Collections$SynchronizedSortedMap::init$($SortedMap* m) {
	$Collections$SynchronizedMap::init$(m);
	$set(this, sm, m);
}

void Collections$SynchronizedSortedMap::init$($SortedMap* m, Object$* mutex) {
	$Collections$SynchronizedMap::init$(m, mutex);
	$set(this, sm, m);
}

$Comparator* Collections$SynchronizedSortedMap::comparator() {
	$synchronized(this->mutex) {
		return $nc(this->sm)->comparator();
	}
}

$SortedMap* Collections$SynchronizedSortedMap::subMap(Object$* fromKey, Object$* toKey) {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedSortedMap, $($nc(this->sm)->subMap(fromKey, toKey)), this->mutex);
	}
}

$SortedMap* Collections$SynchronizedSortedMap::headMap(Object$* toKey) {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedSortedMap, $($nc(this->sm)->headMap(toKey)), this->mutex);
	}
}

$SortedMap* Collections$SynchronizedSortedMap::tailMap(Object$* fromKey) {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedSortedMap, $($nc(this->sm)->tailMap(fromKey)), this->mutex);
	}
}

$Object* Collections$SynchronizedSortedMap::firstKey() {
	$synchronized(this->mutex) {
		return $of($nc(this->sm)->firstKey());
	}
}

$Object* Collections$SynchronizedSortedMap::lastKey() {
	$synchronized(this->mutex) {
		return $of($nc(this->sm)->lastKey());
	}
}

Collections$SynchronizedSortedMap::Collections$SynchronizedSortedMap() {
}

$Class* Collections$SynchronizedSortedMap::load$($String* name, bool initialize) {
	$loadClass(Collections$SynchronizedSortedMap, name, initialize, &_Collections$SynchronizedSortedMap_ClassInfo_, allocate$Collections$SynchronizedSortedMap);
	return class$;
}

$Class* Collections$SynchronizedSortedMap::class$ = nullptr;

	} // util
} // java