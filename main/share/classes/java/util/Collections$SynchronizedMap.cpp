#include <java/util/Collections$SynchronizedMap.h>

#include <java/io/ObjectOutputStream.h>
#include <java/util/Collection.h>
#include <java/util/Collections$SynchronizedCollection.h>
#include <java/util/Collections$SynchronizedSet.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Collections$SynchronizedCollection = ::java::util::Collections$SynchronizedCollection;
using $Collections$SynchronizedSet = ::java::util::Collections$SynchronizedSet;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$FieldInfo _Collections$SynchronizedMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SynchronizedMap, serialVersionUID)},
	{"m", "Ljava/util/Map;", "Ljava/util/Map<TK;TV;>;", $PRIVATE | $FINAL, $field(Collections$SynchronizedMap, m)},
	{"mutex", "Ljava/lang/Object;", nullptr, $FINAL, $field(Collections$SynchronizedMap, mutex)},
	{"keySet", "Ljava/util/Set;", "Ljava/util/Set<TK;>;", $PRIVATE | $TRANSIENT, $field(Collections$SynchronizedMap, keySet$)},
	{"entrySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PRIVATE | $TRANSIENT, $field(Collections$SynchronizedMap, entrySet$)},
	{"values", "Ljava/util/Collection;", "Ljava/util/Collection<TV;>;", $PRIVATE | $TRANSIENT, $field(Collections$SynchronizedMap, values$)},
	{}
};

$MethodInfo _Collections$SynchronizedMap_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<TK;TV;>;)V", 0, $method(static_cast<void(Collections$SynchronizedMap::*)($Map*)>(&Collections$SynchronizedMap::init$))},
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;)V", "(Ljava/util/Map<TK;TV;>;Ljava/lang/Object;)V", 0, $method(static_cast<void(Collections$SynchronizedMap::*)($Map*,Object$*)>(&Collections$SynchronizedMap::init$))},
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
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Collections$SynchronizedMap::*)($ObjectOutputStream*)>(&Collections$SynchronizedMap::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Collections$SynchronizedMap_InnerClassesInfo_[] = {
	{"java.util.Collections$SynchronizedMap", "java.util.Collections", "SynchronizedMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$SynchronizedMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SynchronizedMap",
	"java.lang.Object",
	"java.util.Map,java.io.Serializable",
	_Collections$SynchronizedMap_FieldInfo_,
	_Collections$SynchronizedMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$SynchronizedMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SynchronizedMap($Class* clazz) {
	return $of($alloc(Collections$SynchronizedMap));
}

$Object* Collections$SynchronizedMap::clone() {
	 return this->$Map::clone();
}

void Collections$SynchronizedMap::finalize() {
	this->$Map::finalize();
}

void Collections$SynchronizedMap::init$($Map* m) {
	$set(this, m, $cast($Map, $Objects::requireNonNull(m)));
	$set(this, mutex, this);
}

void Collections$SynchronizedMap::init$($Map* m, Object$* mutex) {
	$set(this, m, m);
	$set(this, mutex, mutex);
}

int32_t Collections$SynchronizedMap::size() {
	$synchronized(this->mutex) {
		return $nc(this->m)->size();
	}
}

bool Collections$SynchronizedMap::isEmpty() {
	$synchronized(this->mutex) {
		return $nc(this->m)->isEmpty();
	}
}

bool Collections$SynchronizedMap::containsKey(Object$* key) {
	$synchronized(this->mutex) {
		return $nc(this->m)->containsKey(key);
	}
}

bool Collections$SynchronizedMap::containsValue(Object$* value) {
	$synchronized(this->mutex) {
		return $nc(this->m)->containsValue(value);
	}
}

$Object* Collections$SynchronizedMap::get(Object$* key) {
	$synchronized(this->mutex) {
		return $of($nc(this->m)->get(key));
	}
}

$Object* Collections$SynchronizedMap::put(Object$* key, Object$* value) {
	$synchronized(this->mutex) {
		return $of($nc(this->m)->put(key, value));
	}
}

$Object* Collections$SynchronizedMap::remove(Object$* key) {
	$synchronized(this->mutex) {
		return $of($nc(this->m)->remove(key));
	}
}

void Collections$SynchronizedMap::putAll($Map* map) {
	$synchronized(this->mutex) {
		$nc(this->m)->putAll(map);
	}
}

void Collections$SynchronizedMap::clear() {
	$synchronized(this->mutex) {
		$nc(this->m)->clear();
	}
}

$Set* Collections$SynchronizedMap::keySet() {
	$synchronized(this->mutex) {
		if (this->keySet$ == nullptr) {
			$set(this, keySet$, $new($Collections$SynchronizedSet, $($nc(this->m)->keySet()), this->mutex));
		}
		return this->keySet$;
	}
}

$Set* Collections$SynchronizedMap::entrySet() {
	$synchronized(this->mutex) {
		if (this->entrySet$ == nullptr) {
			$set(this, entrySet$, $new($Collections$SynchronizedSet, $($nc(this->m)->entrySet()), this->mutex));
		}
		return this->entrySet$;
	}
}

$Collection* Collections$SynchronizedMap::values() {
	$synchronized(this->mutex) {
		if (this->values$ == nullptr) {
			$set(this, values$, $new($Collections$SynchronizedCollection, $($nc(this->m)->values()), this->mutex));
		}
		return this->values$;
	}
}

bool Collections$SynchronizedMap::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	$synchronized(this->mutex) {
		return $nc(this->m)->equals(o);
	}
}

int32_t Collections$SynchronizedMap::hashCode() {
	$synchronized(this->mutex) {
		return $nc(this->m)->hashCode();
	}
}

$String* Collections$SynchronizedMap::toString() {
	$synchronized(this->mutex) {
		return $nc($of(this->m))->toString();
	}
}

$Object* Collections$SynchronizedMap::getOrDefault(Object$* k, Object$* defaultValue) {
	$synchronized(this->mutex) {
		return $of($nc(this->m)->getOrDefault(k, defaultValue));
	}
}

void Collections$SynchronizedMap::forEach($BiConsumer* action) {
	$synchronized(this->mutex) {
		$nc(this->m)->forEach(action);
	}
}

void Collections$SynchronizedMap::replaceAll($BiFunction* function) {
	$synchronized(this->mutex) {
		$nc(this->m)->replaceAll(function);
	}
}

$Object* Collections$SynchronizedMap::putIfAbsent(Object$* key, Object$* value) {
	$synchronized(this->mutex) {
		return $of($nc(this->m)->putIfAbsent(key, value));
	}
}

bool Collections$SynchronizedMap::remove(Object$* key, Object$* value) {
	$synchronized(this->mutex) {
		return $nc(this->m)->remove(key, value);
	}
}

bool Collections$SynchronizedMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	$synchronized(this->mutex) {
		return $nc(this->m)->replace(key, oldValue, newValue);
	}
}

$Object* Collections$SynchronizedMap::replace(Object$* key, Object$* value) {
	$synchronized(this->mutex) {
		return $of($nc(this->m)->replace(key, value));
	}
}

$Object* Collections$SynchronizedMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	$synchronized(this->mutex) {
		return $of($nc(this->m)->computeIfAbsent(key, mappingFunction));
	}
}

$Object* Collections$SynchronizedMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	$synchronized(this->mutex) {
		return $of($nc(this->m)->computeIfPresent(key, remappingFunction));
	}
}

$Object* Collections$SynchronizedMap::compute(Object$* key, $BiFunction* remappingFunction) {
	$synchronized(this->mutex) {
		return $of($nc(this->m)->compute(key, remappingFunction));
	}
}

$Object* Collections$SynchronizedMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	$synchronized(this->mutex) {
		return $of($nc(this->m)->merge(key, value, remappingFunction));
	}
}

void Collections$SynchronizedMap::writeObject($ObjectOutputStream* s) {
	$synchronized(this->mutex) {
		$nc(s)->defaultWriteObject();
	}
}

Collections$SynchronizedMap::Collections$SynchronizedMap() {
}

$Class* Collections$SynchronizedMap::load$($String* name, bool initialize) {
	$loadClass(Collections$SynchronizedMap, name, initialize, &_Collections$SynchronizedMap_ClassInfo_, allocate$Collections$SynchronizedMap);
	return class$;
}

$Class* Collections$SynchronizedMap::class$ = nullptr;

	} // util
} // java