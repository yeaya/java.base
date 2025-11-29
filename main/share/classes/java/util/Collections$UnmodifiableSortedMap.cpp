#include <java/util/Collections$UnmodifiableSortedMap.h>

#include <java/util/Collection.h>
#include <java/util/Collections$UnmodifiableMap.h>
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
using $Collections$UnmodifiableMap = ::java::util::Collections$UnmodifiableMap;
using $Comparator = ::java::util::Comparator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableSortedMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableSortedMap, serialVersionUID)},
	{"sm", "Ljava/util/SortedMap;", "Ljava/util/SortedMap<TK;+TV;>;", $PRIVATE | $FINAL, $field(Collections$UnmodifiableSortedMap, sm)},
	{}
};

$MethodInfo _Collections$UnmodifiableSortedMap_MethodInfo_[] = {
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
	{"<init>", "(Ljava/util/SortedMap;)V", "(Ljava/util/SortedMap<TK;+TV;>;)V", 0, $method(static_cast<void(Collections$UnmodifiableSortedMap::*)($SortedMap*)>(&Collections$UnmodifiableSortedMap::init$))},
	{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TK;>;", $PUBLIC},
	{"firstKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*keySet", "()Ljava/util/Set;", nullptr, $PUBLIC},
	{"lastKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
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
	{"subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC},
	{"tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC},
	{"*values", "()Ljava/util/Collection;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$UnmodifiableSortedMap_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableSortedMap", "java.util.Collections", "UnmodifiableSortedMap", $STATIC},
	{"java.util.Collections$UnmodifiableMap", "java.util.Collections", "UnmodifiableMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$UnmodifiableSortedMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableSortedMap",
	"java.util.Collections$UnmodifiableMap",
	"java.util.SortedMap",
	_Collections$UnmodifiableSortedMap_FieldInfo_,
	_Collections$UnmodifiableSortedMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableMap<TK;TV;>;Ljava/util/SortedMap<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$UnmodifiableSortedMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableSortedMap($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableSortedMap));
}

int32_t Collections$UnmodifiableSortedMap::size() {
	 return this->$Collections$UnmodifiableMap::size();
}

bool Collections$UnmodifiableSortedMap::isEmpty() {
	 return this->$Collections$UnmodifiableMap::isEmpty();
}

bool Collections$UnmodifiableSortedMap::containsKey(Object$* key) {
	 return this->$Collections$UnmodifiableMap::containsKey(key);
}

bool Collections$UnmodifiableSortedMap::containsValue(Object$* val) {
	 return this->$Collections$UnmodifiableMap::containsValue(val);
}

$Object* Collections$UnmodifiableSortedMap::get(Object$* key) {
	 return this->$Collections$UnmodifiableMap::get(key);
}

$Object* Collections$UnmodifiableSortedMap::put(Object$* key, Object$* value) {
	 return this->$Collections$UnmodifiableMap::put(key, value);
}

$Object* Collections$UnmodifiableSortedMap::remove(Object$* key) {
	 return this->$Collections$UnmodifiableMap::remove(key);
}

void Collections$UnmodifiableSortedMap::putAll($Map* m) {
	this->$Collections$UnmodifiableMap::putAll(m);
}

void Collections$UnmodifiableSortedMap::clear() {
	this->$Collections$UnmodifiableMap::clear();
}

$Set* Collections$UnmodifiableSortedMap::keySet() {
	 return this->$Collections$UnmodifiableMap::keySet();
}

$Set* Collections$UnmodifiableSortedMap::entrySet() {
	 return this->$Collections$UnmodifiableMap::entrySet();
}

$Collection* Collections$UnmodifiableSortedMap::values() {
	 return this->$Collections$UnmodifiableMap::values();
}

bool Collections$UnmodifiableSortedMap::equals(Object$* o) {
	 return this->$Collections$UnmodifiableMap::equals(o);
}

int32_t Collections$UnmodifiableSortedMap::hashCode() {
	 return this->$Collections$UnmodifiableMap::hashCode();
}

$String* Collections$UnmodifiableSortedMap::toString() {
	 return this->$Collections$UnmodifiableMap::toString();
}

$Object* Collections$UnmodifiableSortedMap::getOrDefault(Object$* k, Object$* defaultValue) {
	 return this->$Collections$UnmodifiableMap::getOrDefault(k, defaultValue);
}

void Collections$UnmodifiableSortedMap::forEach($BiConsumer* action) {
	this->$Collections$UnmodifiableMap::forEach(action);
}

void Collections$UnmodifiableSortedMap::replaceAll($BiFunction* function) {
	this->$Collections$UnmodifiableMap::replaceAll(function);
}

$Object* Collections$UnmodifiableSortedMap::putIfAbsent(Object$* key, Object$* value) {
	 return this->$Collections$UnmodifiableMap::putIfAbsent(key, value);
}

bool Collections$UnmodifiableSortedMap::remove(Object$* key, Object$* value) {
	 return this->$Collections$UnmodifiableMap::remove(key, value);
}

bool Collections$UnmodifiableSortedMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	 return this->$Collections$UnmodifiableMap::replace(key, oldValue, newValue);
}

$Object* Collections$UnmodifiableSortedMap::replace(Object$* key, Object$* value) {
	 return this->$Collections$UnmodifiableMap::replace(key, value);
}

$Object* Collections$UnmodifiableSortedMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	 return this->$Collections$UnmodifiableMap::computeIfAbsent(key, mappingFunction);
}

$Object* Collections$UnmodifiableSortedMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	 return this->$Collections$UnmodifiableMap::computeIfPresent(key, remappingFunction);
}

$Object* Collections$UnmodifiableSortedMap::compute(Object$* key, $BiFunction* remappingFunction) {
	 return this->$Collections$UnmodifiableMap::compute(key, remappingFunction);
}

$Object* Collections$UnmodifiableSortedMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	 return this->$Collections$UnmodifiableMap::merge(key, value, remappingFunction);
}

$Object* Collections$UnmodifiableSortedMap::clone() {
	 return this->$Collections$UnmodifiableMap::clone();
}

void Collections$UnmodifiableSortedMap::finalize() {
	this->$Collections$UnmodifiableMap::finalize();
}

void Collections$UnmodifiableSortedMap::init$($SortedMap* m) {
	$Collections$UnmodifiableMap::init$(m);
	$set(this, sm, m);
}

$Comparator* Collections$UnmodifiableSortedMap::comparator() {
	return $nc(this->sm)->comparator();
}

$SortedMap* Collections$UnmodifiableSortedMap::subMap(Object$* fromKey, Object$* toKey) {
	return $new(Collections$UnmodifiableSortedMap, $($nc(this->sm)->subMap(fromKey, toKey)));
}

$SortedMap* Collections$UnmodifiableSortedMap::headMap(Object$* toKey) {
	return $new(Collections$UnmodifiableSortedMap, $($nc(this->sm)->headMap(toKey)));
}

$SortedMap* Collections$UnmodifiableSortedMap::tailMap(Object$* fromKey) {
	return $new(Collections$UnmodifiableSortedMap, $($nc(this->sm)->tailMap(fromKey)));
}

$Object* Collections$UnmodifiableSortedMap::firstKey() {
	return $of($nc(this->sm)->firstKey());
}

$Object* Collections$UnmodifiableSortedMap::lastKey() {
	return $of($nc(this->sm)->lastKey());
}

Collections$UnmodifiableSortedMap::Collections$UnmodifiableSortedMap() {
}

$Class* Collections$UnmodifiableSortedMap::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableSortedMap, name, initialize, &_Collections$UnmodifiableSortedMap_ClassInfo_, allocate$Collections$UnmodifiableSortedMap);
	return class$;
}

$Class* Collections$UnmodifiableSortedMap::class$ = nullptr;

	} // util
} // java