#include <java/util/ImmutableCollections$AbstractImmutableMap.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractMap.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/Map.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $Map = ::java::util::Map;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$CompoundAttribute _ImmutableCollections$AbstractImmutableMap_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$MethodInfo _ImmutableCollections$AbstractImmutableMap_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(ImmutableCollections$AbstractImmutableMap, init$, void)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, clear, void)},
	{"compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, compute, $Object*, Object$*, $BiFunction*)},
	{"computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", "(TK;Ljava/util/function/Function<-TK;+TV;>;)TV;", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, computeIfAbsent, $Object*, Object$*, $Function*)},
	{"computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, computeIfPresent, $Object*, Object$*, $BiFunction*)},
	{"getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;TV;)TV;", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, getOrDefault, $Object*, Object$*, Object$*)},
	{"merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;TV;Ljava/util/function/BiFunction<-TV;-TV;+TV;>;)TV;", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, merge, $Object*, Object$*, Object$*, $BiFunction*)},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, put, $Object*, Object$*, Object$*)},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<+TK;+TV;>;)V", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, putAll, void, $Map*)},
	{"putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, putIfAbsent, $Object*, Object$*, Object$*)},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, remove, $Object*, Object$*)},
	{"remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, remove, bool, Object$*, Object$*)},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, replace, $Object*, Object$*, Object$*)},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TK;TV;TV;)Z", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, replace, bool, Object$*, Object$*, Object$*)},
	{"replaceAll", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)V", $PUBLIC, $virtualMethod(ImmutableCollections$AbstractImmutableMap, replaceAll, void, $BiFunction*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImmutableCollections$AbstractImmutableMap_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$AbstractImmutableMap", "java.util.ImmutableCollections", "AbstractImmutableMap", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableCollections$AbstractImmutableMap_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.ImmutableCollections$AbstractImmutableMap",
	"java.util.AbstractMap",
	"java.io.Serializable",
	nullptr,
	_ImmutableCollections$AbstractImmutableMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/AbstractMap<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_ImmutableCollections$AbstractImmutableMap_InnerClassesInfo_,
	_ImmutableCollections$AbstractImmutableMap_Annotations_,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$AbstractImmutableMap($Class* clazz) {
	return $of($alloc(ImmutableCollections$AbstractImmutableMap));
}

bool ImmutableCollections$AbstractImmutableMap::equals(Object$* o) {
	 return this->$AbstractMap::equals(o);
}

int32_t ImmutableCollections$AbstractImmutableMap::hashCode() {
	 return this->$AbstractMap::hashCode();
}

$String* ImmutableCollections$AbstractImmutableMap::toString() {
	 return this->$AbstractMap::toString();
}

$Object* ImmutableCollections$AbstractImmutableMap::clone() {
	 return this->$AbstractMap::clone();
}

void ImmutableCollections$AbstractImmutableMap::finalize() {
	this->$AbstractMap::finalize();
}

void ImmutableCollections$AbstractImmutableMap::init$() {
	$AbstractMap::init$();
}

void ImmutableCollections$AbstractImmutableMap::clear() {
	$throw($($ImmutableCollections::uoe()));
}

$Object* ImmutableCollections$AbstractImmutableMap::compute(Object$* key, $BiFunction* rf) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

$Object* ImmutableCollections$AbstractImmutableMap::computeIfAbsent(Object$* key, $Function* mf) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

$Object* ImmutableCollections$AbstractImmutableMap::computeIfPresent(Object$* key, $BiFunction* rf) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

$Object* ImmutableCollections$AbstractImmutableMap::merge(Object$* key, Object$* value, $BiFunction* rf) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

$Object* ImmutableCollections$AbstractImmutableMap::put(Object$* key, Object$* value) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

void ImmutableCollections$AbstractImmutableMap::putAll($Map* m) {
	$throw($($ImmutableCollections::uoe()));
}

$Object* ImmutableCollections$AbstractImmutableMap::putIfAbsent(Object$* key, Object$* value) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

$Object* ImmutableCollections$AbstractImmutableMap::remove(Object$* key) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

bool ImmutableCollections$AbstractImmutableMap::remove(Object$* key, Object$* value) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

$Object* ImmutableCollections$AbstractImmutableMap::replace(Object$* key, Object$* value) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

bool ImmutableCollections$AbstractImmutableMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	$throw($($ImmutableCollections::uoe()));
	$shouldNotReachHere();
}

void ImmutableCollections$AbstractImmutableMap::replaceAll($BiFunction* f) {
	$throw($($ImmutableCollections::uoe()));
}

$Object* ImmutableCollections$AbstractImmutableMap::getOrDefault(Object$* key, Object$* defaultValue) {
	$var($Object, v, nullptr);
	return $of((($assign(v, get(key))) != nullptr) ? v : $of(defaultValue));
}

ImmutableCollections$AbstractImmutableMap::ImmutableCollections$AbstractImmutableMap() {
}

$Class* ImmutableCollections$AbstractImmutableMap::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$AbstractImmutableMap, name, initialize, &_ImmutableCollections$AbstractImmutableMap_ClassInfo_, allocate$ImmutableCollections$AbstractImmutableMap);
	return class$;
}

$Class* ImmutableCollections$AbstractImmutableMap::class$ = nullptr;

	} // util
} // java