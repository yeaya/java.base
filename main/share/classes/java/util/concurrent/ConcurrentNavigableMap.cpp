#include <java/util/concurrent/ConcurrentNavigableMap.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NavigableMap = ::java::util::NavigableMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ConcurrentNavigableMap_MethodInfo_[] = {
	{"subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"descendingMap", "()Ljava/util/NavigableMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"navigableKeySet", "()Ljava/util/NavigableSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"keySet", "()Ljava/util/Set;", nullptr, $PUBLIC | $ABSTRACT},
	{"descendingKeySet", "()Ljava/util/NavigableSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*forEach", "(Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*replaceAll", "(Ljava/util/function/BiFunction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*putAll", "(Ljava/util/Map;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*clear", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*values", "()Ljava/util/Collection;", nullptr, $PUBLIC | $ABSTRACT},
	{"*entrySet", "()Ljava/util/Set;", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _ConcurrentNavigableMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.ConcurrentNavigableMap",
	nullptr,
	"java.util.concurrent.ConcurrentMap,java.util.NavigableMap",
	nullptr,
	_ConcurrentNavigableMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/ConcurrentMap<TK;TV;>;Ljava/util/NavigableMap<TK;TV;>;"
};

$Object* allocate$ConcurrentNavigableMap($Class* clazz) {
	return $of($alloc(ConcurrentNavigableMap));
}

$Object* ConcurrentNavigableMap::getOrDefault(Object$* key, Object$* defaultValue) {
	 return this->$ConcurrentMap::getOrDefault(key, defaultValue);
}

void ConcurrentNavigableMap::forEach($BiConsumer* action) {
	this->$ConcurrentMap::forEach(action);
}

$Object* ConcurrentNavigableMap::putIfAbsent(Object$* key, Object$* value) {
	 return this->$ConcurrentMap::putIfAbsent(key, value);
}

bool ConcurrentNavigableMap::remove(Object$* key, Object$* value) {
	 return this->$ConcurrentMap::remove(key, value);
}

bool ConcurrentNavigableMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	 return this->$ConcurrentMap::replace(key, oldValue, newValue);
}

$Object* ConcurrentNavigableMap::replace(Object$* key, Object$* value) {
	 return this->$ConcurrentMap::replace(key, value);
}

void ConcurrentNavigableMap::replaceAll($BiFunction* function) {
	this->$ConcurrentMap::replaceAll(function);
}

$Object* ConcurrentNavigableMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	 return this->$ConcurrentMap::computeIfAbsent(key, mappingFunction);
}

$Object* ConcurrentNavigableMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	 return this->$ConcurrentMap::computeIfPresent(key, remappingFunction);
}

$Object* ConcurrentNavigableMap::compute(Object$* key, $BiFunction* remappingFunction) {
	 return this->$ConcurrentMap::compute(key, remappingFunction);
}

$Object* ConcurrentNavigableMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	 return this->$ConcurrentMap::merge(key, value, remappingFunction);
}

bool ConcurrentNavigableMap::equals(Object$* o) {
	 return this->$ConcurrentMap::equals(o);
}

int32_t ConcurrentNavigableMap::hashCode() {
	 return this->$ConcurrentMap::hashCode();
}

$Object* ConcurrentNavigableMap::clone() {
	 return this->$ConcurrentMap::clone();
}

$String* ConcurrentNavigableMap::toString() {
	 return this->$ConcurrentMap::toString();
}

void ConcurrentNavigableMap::finalize() {
	this->$ConcurrentMap::finalize();
}

$Class* ConcurrentNavigableMap::load$($String* name, bool initialize) {
	$loadClass(ConcurrentNavigableMap, name, initialize, &_ConcurrentNavigableMap_ClassInfo_, allocate$ConcurrentNavigableMap);
	return class$;
}

$Class* ConcurrentNavigableMap::class$ = nullptr;

		} // concurrent
	} // util
} // java