#include <java/util/Collections$UnmodifiableMap.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collection.h>
#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet.h>
#include <java/util/Collections$UnmodifiableSet.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Collections$UnmodifiableMap$UnmodifiableEntrySet = ::java::util::Collections$UnmodifiableMap$UnmodifiableEntrySet;
using $Collections$UnmodifiableSet = ::java::util::Collections$UnmodifiableSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableMap, serialVersionUID)},
	{"m", "Ljava/util/Map;", "Ljava/util/Map<+TK;+TV;>;", $PRIVATE | $FINAL, $field(Collections$UnmodifiableMap, m)},
	{"keySet", "Ljava/util/Set;", "Ljava/util/Set<TK;>;", $PRIVATE | $TRANSIENT, $field(Collections$UnmodifiableMap, keySet$)},
	{"entrySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PRIVATE | $TRANSIENT, $field(Collections$UnmodifiableMap, entrySet$)},
	{"values", "Ljava/util/Collection;", "Ljava/util/Collection<TV;>;", $PRIVATE | $TRANSIENT, $field(Collections$UnmodifiableMap, values$)},
	{}
};

$MethodInfo _Collections$UnmodifiableMap_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<+TK;+TV;>;)V", 0, $method(static_cast<void(Collections$UnmodifiableMap::*)($Map*)>(&Collections$UnmodifiableMap::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", "(TK;Ljava/util/function/Function<-TK;+TV;>;)TV;", $PUBLIC},
	{"computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/BiConsumer;)V", "(Ljava/util/function/BiConsumer<-TK;-TV;>;)V", $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;TV;)TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<TK;>;", $PUBLIC},
	{"merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;TV;Ljava/util/function/BiFunction<-TV;-TV;+TV;>;)TV;", $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<+TK;+TV;>;)V", $PUBLIC},
	{"putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TK;TV;TV;)Z", $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"replaceAll", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)V", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _Collections$UnmodifiableMap_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableMap", "java.util.Collections", "UnmodifiableMap", $PRIVATE | $STATIC},
	{"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet", "java.util.Collections$UnmodifiableMap", "UnmodifiableEntrySet", $STATIC},
	{}
};

$ClassInfo _Collections$UnmodifiableMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableMap",
	"java.lang.Object",
	"java.util.Map,java.io.Serializable",
	_Collections$UnmodifiableMap_FieldInfo_,
	_Collections$UnmodifiableMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$UnmodifiableMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableMap($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableMap));
}

$Object* Collections$UnmodifiableMap::clone() {
	 return this->$Map::clone();
}

void Collections$UnmodifiableMap::finalize() {
	this->$Map::finalize();
}

void Collections$UnmodifiableMap::init$($Map* m) {
	if (m == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, m, m);
}

int32_t Collections$UnmodifiableMap::size() {
	return $nc(this->m)->size();
}

bool Collections$UnmodifiableMap::isEmpty() {
	return $nc(this->m)->isEmpty();
}

bool Collections$UnmodifiableMap::containsKey(Object$* key) {
	return $nc(this->m)->containsKey(key);
}

bool Collections$UnmodifiableMap::containsValue(Object$* val) {
	return $nc(this->m)->containsValue(val);
}

$Object* Collections$UnmodifiableMap::get(Object$* key) {
	return $of($nc(this->m)->get(key));
}

$Object* Collections$UnmodifiableMap::put(Object$* key, Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$UnmodifiableMap::remove(Object$* key) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void Collections$UnmodifiableMap::putAll($Map* m) {
	$throwNew($UnsupportedOperationException);
}

void Collections$UnmodifiableMap::clear() {
	$throwNew($UnsupportedOperationException);
}

$Set* Collections$UnmodifiableMap::keySet() {
	if (this->keySet$ == nullptr) {
		$set(this, keySet$, $Collections::unmodifiableSet($($nc(this->m)->keySet())));
	}
	return this->keySet$;
}

$Set* Collections$UnmodifiableMap::entrySet() {
	if (this->entrySet$ == nullptr) {
		$set(this, entrySet$, $new($Collections$UnmodifiableMap$UnmodifiableEntrySet, $($nc(this->m)->entrySet())));
	}
	return this->entrySet$;
}

$Collection* Collections$UnmodifiableMap::values() {
	if (this->values$ == nullptr) {
		$set(this, values$, $Collections::unmodifiableCollection($($nc(this->m)->values())));
	}
	return this->values$;
}

bool Collections$UnmodifiableMap::equals(Object$* o) {
	return $equals(o, this) || $nc(this->m)->equals(o);
}

int32_t Collections$UnmodifiableMap::hashCode() {
	return $nc(this->m)->hashCode();
}

$String* Collections$UnmodifiableMap::toString() {
	return $nc($of(this->m))->toString();
}

$Object* Collections$UnmodifiableMap::getOrDefault(Object$* k, Object$* defaultValue) {
	return $of($nc((this->m))->getOrDefault(k, defaultValue));
}

void Collections$UnmodifiableMap::forEach($BiConsumer* action) {
	$nc(this->m)->forEach(action);
}

void Collections$UnmodifiableMap::replaceAll($BiFunction* function) {
	$throwNew($UnsupportedOperationException);
}

$Object* Collections$UnmodifiableMap::putIfAbsent(Object$* key, Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Collections$UnmodifiableMap::remove(Object$* key, Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Collections$UnmodifiableMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$UnmodifiableMap::replace(Object$* key, Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$UnmodifiableMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$UnmodifiableMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$UnmodifiableMap::compute(Object$* key, $BiFunction* remappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$UnmodifiableMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

Collections$UnmodifiableMap::Collections$UnmodifiableMap() {
}

$Class* Collections$UnmodifiableMap::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableMap, name, initialize, &_Collections$UnmodifiableMap_ClassInfo_, allocate$Collections$UnmodifiableMap);
	return class$;
}

$Class* Collections$UnmodifiableMap::class$ = nullptr;

	} // util
} // java