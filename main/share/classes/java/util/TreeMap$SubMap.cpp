#include <java/util/TreeMap$SubMap.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/TreeMap$AscendingSubMap.h>
#include <java/util/TreeMap.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $TreeMap = ::java::util::TreeMap;
using $TreeMap$AscendingSubMap = ::java::util::TreeMap$AscendingSubMap;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$FieldInfo _TreeMap$SubMap_FieldInfo_[] = {
	{"this$0", "Ljava/util/TreeMap;", nullptr, $FINAL | $SYNTHETIC, $field(TreeMap$SubMap, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TreeMap$SubMap, serialVersionUID)},
	{"fromStart", "Z", nullptr, $PRIVATE, $field(TreeMap$SubMap, fromStart)},
	{"toEnd", "Z", nullptr, $PRIVATE, $field(TreeMap$SubMap, toEnd)},
	{"fromKey", "Ljava/lang/Object;", "TK;", $PRIVATE, $field(TreeMap$SubMap, fromKey)},
	{"toKey", "Ljava/lang/Object;", "TK;", $PRIVATE, $field(TreeMap$SubMap, toKey)},
	{}
};

$MethodInfo _TreeMap$SubMap_MethodInfo_[] = {
	{"*clear", "()V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/TreeMap;)V", nullptr, $PRIVATE, $method(static_cast<void(TreeMap$SubMap::*)($TreeMap*)>(&TreeMap$SubMap::init$))},
	{"comparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TK;>;", $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"firstKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*keySet", "()Ljava/util/Set;", nullptr, $PUBLIC},
	{"lastKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"*merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*putAll", "(Ljava/util/Map;)V", nullptr, $PUBLIC},
	{"*putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(TreeMap$SubMap::*)()>(&TreeMap$SubMap::readResolve))},
	{"*remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*replaceAll", "(Ljava/util/function/BiFunction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*size", "()I", nullptr, $PUBLIC},
	{"subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC},
	{"tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", "(TK;)Ljava/util/SortedMap<TK;TV;>;", $PUBLIC},
	{"*values", "()Ljava/util/Collection;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TreeMap$SubMap_InnerClassesInfo_[] = {
	{"java.util.TreeMap$SubMap", "java.util.TreeMap", "SubMap", $PRIVATE},
	{}
};

$ClassInfo _TreeMap$SubMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.TreeMap$SubMap",
	"java.util.AbstractMap",
	"java.util.SortedMap,java.io.Serializable",
	_TreeMap$SubMap_FieldInfo_,
	_TreeMap$SubMap_MethodInfo_,
	"Ljava/util/AbstractMap<TK;TV;>;Ljava/util/SortedMap<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_TreeMap$SubMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$SubMap($Class* clazz) {
	return $of($alloc(TreeMap$SubMap));
}

int32_t TreeMap$SubMap::size() {
	 return this->$AbstractMap::size();
}

bool TreeMap$SubMap::isEmpty() {
	 return this->$AbstractMap::isEmpty();
}

bool TreeMap$SubMap::containsValue(Object$* value) {
	 return this->$AbstractMap::containsValue(value);
}

bool TreeMap$SubMap::containsKey(Object$* key) {
	 return this->$AbstractMap::containsKey(key);
}

$Object* TreeMap$SubMap::get(Object$* key) {
	 return this->$AbstractMap::get(key);
}

$Object* TreeMap$SubMap::put(Object$* key, Object$* value) {
	 return this->$AbstractMap::put(key, value);
}

$Object* TreeMap$SubMap::remove(Object$* key) {
	 return this->$AbstractMap::remove(key);
}

void TreeMap$SubMap::putAll($Map* m) {
	this->$AbstractMap::putAll(m);
}

void TreeMap$SubMap::clear() {
	this->$AbstractMap::clear();
}

$Set* TreeMap$SubMap::keySet() {
	 return this->$AbstractMap::keySet();
}

$Collection* TreeMap$SubMap::values() {
	 return this->$AbstractMap::values();
}

bool TreeMap$SubMap::equals(Object$* o) {
	 return this->$AbstractMap::equals(o);
}

int32_t TreeMap$SubMap::hashCode() {
	 return this->$AbstractMap::hashCode();
}

$String* TreeMap$SubMap::toString() {
	 return this->$AbstractMap::toString();
}

$Object* TreeMap$SubMap::clone() {
	 return this->$AbstractMap::clone();
}

$Object* TreeMap$SubMap::getOrDefault(Object$* key, Object$* defaultValue) {
	 return this->$AbstractMap::getOrDefault(key, defaultValue);
}

void TreeMap$SubMap::forEach($BiConsumer* action) {
	this->$AbstractMap::forEach(action);
}

void TreeMap$SubMap::replaceAll($BiFunction* function) {
	this->$AbstractMap::replaceAll(function);
}

$Object* TreeMap$SubMap::putIfAbsent(Object$* key, Object$* value) {
	 return this->$AbstractMap::putIfAbsent(key, value);
}

bool TreeMap$SubMap::remove(Object$* key, Object$* value) {
	 return this->$AbstractMap::remove(key, value);
}

bool TreeMap$SubMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	 return this->$AbstractMap::replace(key, oldValue, newValue);
}

$Object* TreeMap$SubMap::replace(Object$* key, Object$* value) {
	 return this->$AbstractMap::replace(key, value);
}

$Object* TreeMap$SubMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	 return this->$AbstractMap::computeIfAbsent(key, mappingFunction);
}

$Object* TreeMap$SubMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	 return this->$AbstractMap::computeIfPresent(key, remappingFunction);
}

$Object* TreeMap$SubMap::compute(Object$* key, $BiFunction* remappingFunction) {
	 return this->$AbstractMap::compute(key, remappingFunction);
}

$Object* TreeMap$SubMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	 return this->$AbstractMap::merge(key, value, remappingFunction);
}

void TreeMap$SubMap::finalize() {
	this->$AbstractMap::finalize();
}

void TreeMap$SubMap::init$($TreeMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractMap::init$();
	this->fromStart = false;
	this->toEnd = false;
}

$Object* TreeMap$SubMap::readResolve() {
	return $of($new($TreeMap$AscendingSubMap, this->this$0, this->fromStart, this->fromKey, true, this->toEnd, this->toKey, false));
}

$Set* TreeMap$SubMap::entrySet() {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

$Object* TreeMap$SubMap::lastKey() {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

$Object* TreeMap$SubMap::firstKey() {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

$SortedMap* TreeMap$SubMap::subMap(Object$* fromKey, Object$* toKey) {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

$SortedMap* TreeMap$SubMap::headMap(Object$* toKey) {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

$SortedMap* TreeMap$SubMap::tailMap(Object$* fromKey) {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

$Comparator* TreeMap$SubMap::comparator() {
	$throwNew($InternalError);
	$shouldNotReachHere();
}

TreeMap$SubMap::TreeMap$SubMap() {
}

$Class* TreeMap$SubMap::load$($String* name, bool initialize) {
	$loadClass(TreeMap$SubMap, name, initialize, &_TreeMap$SubMap_ClassInfo_, allocate$TreeMap$SubMap);
	return class$;
}

$Class* TreeMap$SubMap::class$ = nullptr;

	} // util
} // java