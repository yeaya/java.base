#include <java/util/Collections$EmptyMap.h>

#include <java/lang/UnsupportedOperationException.h>
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

#undef EMPTY_MAP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$FieldInfo _Collections$EmptyMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$EmptyMap, serialVersionUID)},
	{}
};

$MethodInfo _Collections$EmptyMap_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Collections$EmptyMap::*)()>(&Collections$EmptyMap::init$))},
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
	{"putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Collections$EmptyMap::*)()>(&Collections$EmptyMap::readResolve))},
	{"remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TK;TV;TV;)Z", $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"replaceAll", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)V", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _Collections$EmptyMap_InnerClassesInfo_[] = {
	{"java.util.Collections$EmptyMap", "java.util.Collections", "EmptyMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$EmptyMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$EmptyMap",
	"java.util.AbstractMap",
	"java.io.Serializable",
	_Collections$EmptyMap_FieldInfo_,
	_Collections$EmptyMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/AbstractMap<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$EmptyMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$EmptyMap($Class* clazz) {
	return $of($alloc(Collections$EmptyMap));
}

$String* Collections$EmptyMap::toString() {
	 return this->$AbstractMap::toString();
}

$Object* Collections$EmptyMap::clone() {
	 return this->$AbstractMap::clone();
}

void Collections$EmptyMap::finalize() {
	this->$AbstractMap::finalize();
}

void Collections$EmptyMap::init$() {
	$AbstractMap::init$();
}

int32_t Collections$EmptyMap::size() {
	return 0;
}

bool Collections$EmptyMap::isEmpty() {
	return true;
}

void Collections$EmptyMap::clear() {
}

bool Collections$EmptyMap::containsKey(Object$* key) {
	return false;
}

bool Collections$EmptyMap::containsValue(Object$* value) {
	return false;
}

$Object* Collections$EmptyMap::get(Object$* key) {
	return $of(nullptr);
}

$Set* Collections$EmptyMap::keySet() {
	return $Collections::emptySet();
}

$Collection* Collections$EmptyMap::values() {
	return $Collections::emptySet();
}

$Set* Collections$EmptyMap::entrySet() {
	return $Collections::emptySet();
}

bool Collections$EmptyMap::equals(Object$* o) {
	return ($instanceOf($Map, o)) && $nc(($cast($Map, o)))->isEmpty();
}

int32_t Collections$EmptyMap::hashCode() {
	return 0;
}

$Object* Collections$EmptyMap::getOrDefault(Object$* k, Object$* defaultValue) {
	return $of(defaultValue);
}

void Collections$EmptyMap::forEach($BiConsumer* action) {
	$Objects::requireNonNull(action);
}

void Collections$EmptyMap::replaceAll($BiFunction* function) {
	$Objects::requireNonNull(function);
}

$Object* Collections$EmptyMap::putIfAbsent(Object$* key, Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Collections$EmptyMap::remove(Object$* key, Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool Collections$EmptyMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$EmptyMap::replace(Object$* key, Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$EmptyMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$EmptyMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$EmptyMap::compute(Object$* key, $BiFunction* remappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$EmptyMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Object* Collections$EmptyMap::readResolve() {
	$init($Collections);
	return $of($Collections::EMPTY_MAP);
}

Collections$EmptyMap::Collections$EmptyMap() {
}

$Class* Collections$EmptyMap::load$($String* name, bool initialize) {
	$loadClass(Collections$EmptyMap, name, initialize, &_Collections$EmptyMap_ClassInfo_, allocate$Collections$EmptyMap);
	return class$;
}

$Class* Collections$EmptyMap::class$ = nullptr;

	} // util
} // java