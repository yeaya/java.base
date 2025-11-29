#include <java/util/Collections$SingletonMap.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$FieldInfo _Collections$SingletonMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SingletonMap, serialVersionUID)},
	{"k", "Ljava/lang/Object;", "TK;", $PRIVATE | $FINAL, $field(Collections$SingletonMap, k)},
	{"v", "Ljava/lang/Object;", "TV;", $PRIVATE | $FINAL, $field(Collections$SingletonMap, v)},
	{"keySet", "Ljava/util/Set;", "Ljava/util/Set<TK;>;", $PRIVATE | $TRANSIENT, $field(Collections$SingletonMap, keySet$)},
	{"entrySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PRIVATE | $TRANSIENT, $field(Collections$SingletonMap, entrySet$)},
	{"values", "Ljava/util/Collection;", "Ljava/util/Collection<TV;>;", $PRIVATE | $TRANSIENT, $field(Collections$SingletonMap, values$)},
	{}
};

$MethodInfo _Collections$SingletonMap_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", 0, $method(static_cast<void(Collections$SingletonMap::*)(Object$*,Object$*)>(&Collections$SingletonMap::init$))},
	{"compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", "(TK;Ljava/util/function/Function<-TK;+TV;>;)TV;", $PUBLIC},
	{"computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"forEach", "(Ljava/util/function/BiConsumer;)V", "(Ljava/util/function/BiConsumer<-TK;-TV;>;)V", $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC},
	{"getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;TV;)TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<TK;>;", $PUBLIC},
	{"merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;TV;Ljava/util/function/BiFunction<-TV;-TV;+TV;>;)TV;", $PUBLIC},
	{"putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TK;TV;TV;)Z", $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"replaceAll", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)V", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _Collections$SingletonMap_InnerClassesInfo_[] = {
	{"java.util.Collections$SingletonMap", "java.util.Collections", "SingletonMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$SingletonMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SingletonMap",
	"java.util.AbstractMap",
	"java.io.Serializable",
	_Collections$SingletonMap_FieldInfo_,
	_Collections$SingletonMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/AbstractMap<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$SingletonMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SingletonMap($Class* clazz) {
	return $of($alloc(Collections$SingletonMap));
}

bool Collections$SingletonMap::equals(Object$* o) {
	 return this->$AbstractMap::equals(o);
}

$String* Collections$SingletonMap::toString() {
	 return this->$AbstractMap::toString();
}

$Object* Collections$SingletonMap::clone() {
	 return this->$AbstractMap::clone();
}

void Collections$SingletonMap::finalize() {
	this->$AbstractMap::finalize();
}

void Collections$SingletonMap::init$(Object$* key, Object$* value) {
	$AbstractMap::init$();
	$set(this, k, key);
	$set(this, v, value);
}

int32_t Collections$SingletonMap::size() {
	return 1;
}

bool Collections$SingletonMap::isEmpty() {
	return false;
}

bool Collections$SingletonMap::containsKey(Object$* key) {
	return $Collections::eq(key, this->k);
}

bool Collections$SingletonMap::containsValue(Object$* value) {
	return $Collections::eq(value, this->v);
}

$Object* Collections$SingletonMap::get(Object$* key) {
	return $of(($Collections::eq(key, this->k) ? this->v : ($Object*)nullptr));
}

$Set* Collections$SingletonMap::keySet() {
	if (this->keySet$ == nullptr) {
		$set(this, keySet$, $Collections::singleton(this->k));
	}
	return this->keySet$;
}

$Set* Collections$SingletonMap::entrySet() {
	if (this->entrySet$ == nullptr) {
		$set(this, entrySet$, $Collections::singleton($$new($AbstractMap$SimpleImmutableEntry, this->k, this->v)));
	}
	return this->entrySet$;
}

$Collection* Collections$SingletonMap::values() {
	if (this->values$ == nullptr) {
		$set(this, values$, $Collections::singleton(this->v));
	}
	return this->values$;
}

$Object* Collections$SingletonMap::getOrDefault(Object$* key, Object$* defaultValue) {
	return $of($Collections::eq(key, this->k) ? this->v : $of(defaultValue));
}

void Collections$SingletonMap::forEach($BiConsumer* action) {
	$nc(action)->accept(this->k, this->v);
}

void Collections$SingletonMap::replaceAll($BiFunction* function) {
	$throwNew($UnsupportedOperationException);
}

$Object* Collections$SingletonMap::putIfAbsent(Object$* key, Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Collections$SingletonMap::remove(Object$* key, Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Collections$SingletonMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$SingletonMap::replace(Object$* key, Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$SingletonMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$SingletonMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$SingletonMap::compute(Object$* key, $BiFunction* remappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$SingletonMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t Collections$SingletonMap::hashCode() {
	int32_t var$0 = $Objects::hashCode(this->k);
	return var$0 ^ $Objects::hashCode(this->v);
}

Collections$SingletonMap::Collections$SingletonMap() {
}

$Class* Collections$SingletonMap::load$($String* name, bool initialize) {
	$loadClass(Collections$SingletonMap, name, initialize, &_Collections$SingletonMap_ClassInfo_, allocate$Collections$SingletonMap);
	return class$;
}

$Class* Collections$SingletonMap::class$ = nullptr;

	} // util
} // java