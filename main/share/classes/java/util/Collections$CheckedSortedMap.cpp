#include <java/util/Collections$CheckedSortedMap.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Collections$CheckedMap.h>
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
using $Collections = ::java::util::Collections;
using $Collections$CheckedMap = ::java::util::Collections$CheckedMap;
using $Comparator = ::java::util::Comparator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$FieldInfo _Collections$CheckedSortedMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$CheckedSortedMap, serialVersionUID)},
	{"sm", "Ljava/util/SortedMap;", "Ljava/util/SortedMap<TK;TV;>;", $PRIVATE | $FINAL, $field(Collections$CheckedSortedMap, sm)},
	{}
};

$MethodInfo _Collections$CheckedSortedMap_MethodInfo_[] = {
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
	{"*getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/SortedMap;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/util/SortedMap<TK;TV;>;Ljava/lang/Class<TK;>;Ljava/lang/Class<TV;>;)V", 0, $method(static_cast<void(Collections$CheckedSortedMap::*)($SortedMap*,$Class*,$Class*)>(&Collections$CheckedSortedMap::init$))},
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

$InnerClassInfo _Collections$CheckedSortedMap_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedSortedMap", "java.util.Collections", "CheckedSortedMap", $STATIC},
	{"java.util.Collections$CheckedMap", "java.util.Collections", "CheckedMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$CheckedSortedMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedSortedMap",
	"java.util.Collections$CheckedMap",
	"java.util.SortedMap",
	_Collections$CheckedSortedMap_FieldInfo_,
	_Collections$CheckedSortedMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/Collections$CheckedMap<TK;TV;>;Ljava/util/SortedMap<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$CheckedSortedMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedSortedMap($Class* clazz) {
	return $of($alloc(Collections$CheckedSortedMap));
}

int32_t Collections$CheckedSortedMap::size() {
	 return this->$Collections$CheckedMap::size();
}

bool Collections$CheckedSortedMap::isEmpty() {
	 return this->$Collections$CheckedMap::isEmpty();
}

bool Collections$CheckedSortedMap::containsKey(Object$* key) {
	 return this->$Collections$CheckedMap::containsKey(key);
}

bool Collections$CheckedSortedMap::containsValue(Object$* v) {
	 return this->$Collections$CheckedMap::containsValue(v);
}

$Object* Collections$CheckedSortedMap::get(Object$* key) {
	 return this->$Collections$CheckedMap::get(key);
}

$Object* Collections$CheckedSortedMap::remove(Object$* key) {
	 return this->$Collections$CheckedMap::remove(key);
}

void Collections$CheckedSortedMap::clear() {
	this->$Collections$CheckedMap::clear();
}

$Set* Collections$CheckedSortedMap::keySet() {
	 return this->$Collections$CheckedMap::keySet();
}

$Collection* Collections$CheckedSortedMap::values() {
	 return this->$Collections$CheckedMap::values();
}

bool Collections$CheckedSortedMap::equals(Object$* o) {
	 return this->$Collections$CheckedMap::equals(o);
}

int32_t Collections$CheckedSortedMap::hashCode() {
	 return this->$Collections$CheckedMap::hashCode();
}

$String* Collections$CheckedSortedMap::toString() {
	 return this->$Collections$CheckedMap::toString();
}

$Object* Collections$CheckedSortedMap::put(Object$* key, Object$* value) {
	 return this->$Collections$CheckedMap::put(key, value);
}

void Collections$CheckedSortedMap::putAll($Map* t) {
	this->$Collections$CheckedMap::putAll(t);
}

$Set* Collections$CheckedSortedMap::entrySet() {
	 return this->$Collections$CheckedMap::entrySet();
}

void Collections$CheckedSortedMap::forEach($BiConsumer* action) {
	this->$Collections$CheckedMap::forEach(action);
}

void Collections$CheckedSortedMap::replaceAll($BiFunction* function) {
	this->$Collections$CheckedMap::replaceAll(function);
}

$Object* Collections$CheckedSortedMap::putIfAbsent(Object$* key, Object$* value) {
	 return this->$Collections$CheckedMap::putIfAbsent(key, value);
}

bool Collections$CheckedSortedMap::remove(Object$* key, Object$* value) {
	 return this->$Collections$CheckedMap::remove(key, value);
}

bool Collections$CheckedSortedMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	 return this->$Collections$CheckedMap::replace(key, oldValue, newValue);
}

$Object* Collections$CheckedSortedMap::replace(Object$* key, Object$* value) {
	 return this->$Collections$CheckedMap::replace(key, value);
}

$Object* Collections$CheckedSortedMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	 return this->$Collections$CheckedMap::computeIfAbsent(key, mappingFunction);
}

$Object* Collections$CheckedSortedMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	 return this->$Collections$CheckedMap::computeIfPresent(key, remappingFunction);
}

$Object* Collections$CheckedSortedMap::compute(Object$* key, $BiFunction* remappingFunction) {
	 return this->$Collections$CheckedMap::compute(key, remappingFunction);
}

$Object* Collections$CheckedSortedMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	 return this->$Collections$CheckedMap::merge(key, value, remappingFunction);
}

$Object* Collections$CheckedSortedMap::getOrDefault(Object$* key, Object$* defaultValue) {
	 return this->$Collections$CheckedMap::getOrDefault(key, defaultValue);
}

$Object* Collections$CheckedSortedMap::clone() {
	 return this->$Collections$CheckedMap::clone();
}

void Collections$CheckedSortedMap::finalize() {
	this->$Collections$CheckedMap::finalize();
}

void Collections$CheckedSortedMap::init$($SortedMap* m, $Class* keyType, $Class* valueType) {
	$Collections$CheckedMap::init$(m, keyType, valueType);
	$set(this, sm, m);
}

$Comparator* Collections$CheckedSortedMap::comparator() {
	return $nc(this->sm)->comparator();
}

$Object* Collections$CheckedSortedMap::firstKey() {
	return $of($nc(this->sm)->firstKey());
}

$Object* Collections$CheckedSortedMap::lastKey() {
	return $of($nc(this->sm)->lastKey());
}

$SortedMap* Collections$CheckedSortedMap::subMap(Object$* fromKey, Object$* toKey) {
	return $Collections::checkedSortedMap($($nc(this->sm)->subMap(fromKey, toKey)), this->keyType, this->valueType);
}

$SortedMap* Collections$CheckedSortedMap::headMap(Object$* toKey) {
	return $Collections::checkedSortedMap($($nc(this->sm)->headMap(toKey)), this->keyType, this->valueType);
}

$SortedMap* Collections$CheckedSortedMap::tailMap(Object$* fromKey) {
	return $Collections::checkedSortedMap($($nc(this->sm)->tailMap(fromKey)), this->keyType, this->valueType);
}

Collections$CheckedSortedMap::Collections$CheckedSortedMap() {
}

$Class* Collections$CheckedSortedMap::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedSortedMap, name, initialize, &_Collections$CheckedSortedMap_ClassInfo_, allocate$Collections$CheckedSortedMap);
	return class$;
}

$Class* Collections$CheckedSortedMap::class$ = nullptr;

	} // util
} // java