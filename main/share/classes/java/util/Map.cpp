#include <java/util/Map.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/ImmutableCollections$AbstractImmutableMap.h>
#include <java/util/ImmutableCollections$Map1.h>
#include <java/util/ImmutableCollections$MapN.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/Iterator.h>
#include <java/util/KeyValueHolder.h>
#include <java/util/Map$Entry.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef EMPTY_MAP

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$AbstractImmutableMap = ::java::util::ImmutableCollections$AbstractImmutableMap;
using $ImmutableCollections$Map1 = ::java::util::ImmutableCollections$Map1;
using $ImmutableCollections$MapN = ::java::util::ImmutableCollections$MapN;
using $Iterator = ::java::util::Iterator;
using $KeyValueHolder = ::java::util::KeyValueHolder;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

$CompoundAttribute _Map_MethodAnnotations_ofEntries26[] = {
	{"Ljava/lang/SafeVarargs;", nullptr},
	{}
};

$MethodInfo _Map_MethodInfo_[] = {
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", "(TK;Ljava/util/function/Function<-TK;+TV;>;)TV;", $PUBLIC},
	{"computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"copyOf", "(Ljava/util/Map;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/Map<+TK;+TV;>;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)(Map*)>(&Map::copyOf))},
	{"entry", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map$Entry;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(TK;TV;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<$Map$Entry*(*)(Object$*,Object$*)>(&Map::entry))},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"forEach", "(Ljava/util/function/BiConsumer;)V", "(Ljava/util/function/BiConsumer<-TK;-TV;>;)V", $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC | $ABSTRACT},
	{"getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;TV;)TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<TK;>;", $PUBLIC | $ABSTRACT},
	{"merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;TV;Ljava/util/function/BiFunction<-TV;-TV;+TV;>;)TV;", $PUBLIC},
	{"of", "()Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)()>(&Map::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(TK;TV;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)(Object$*,Object$*)>(&Map::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(TK;TV;TK;TV;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)(Object$*,Object$*,Object$*,Object$*)>(&Map::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(TK;TV;TK;TV;TK;TV;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)(Object$*,Object$*,Object$*,Object$*,Object$*,Object$*)>(&Map::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(TK;TV;TK;TV;TK;TV;TK;TV;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)(Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*)>(&Map::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)(Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*)>(&Map::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)(Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*)>(&Map::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)(Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*)>(&Map::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)(Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*)>(&Map::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)(Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*)>(&Map::of))},
	{"of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;TK;TV;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map*(*)(Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*,Object$*)>(&Map::of))},
	{"ofEntries", "([Ljava/util/Map$Entry;)Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>([Ljava/util/Map$Entry<+TK;+TV;>;)Ljava/util/Map<TK;TV;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<Map*(*)($Map$EntryArray*)>(&Map::ofEntries)), nullptr, nullptr, _Map_MethodAnnotations_ofEntries26},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC | $ABSTRACT},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<+TK;+TV;>;)V", $PUBLIC | $ABSTRACT},
	{"putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;)TV;", $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TK;TV;TV;)Z", $PUBLIC},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"replaceAll", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)V", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<TV;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Map_InnerClassesInfo_[] = {
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Map_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Map",
	nullptr,
	nullptr,
	nullptr,
	_Map_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Map_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.Map$Entry"
};

$Object* allocate$Map($Class* clazz) {
	return $of($alloc(Map));
}

bool Map::equals(Object$* o) {
	 return this->$Object::equals(o);
}

int32_t Map::hashCode() {
	 return this->$Object::hashCode();
}

$Object* Map::getOrDefault(Object$* key, Object$* defaultValue) {
	$var($Object, v, nullptr);
	bool var$0 = (($assign(v, get(key))) != nullptr);
	return $of((var$0 || containsKey(key)) ? v : $of(defaultValue));
}

void Map::forEach($BiConsumer* action) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(action);
	{
		$var($Iterator, i$, $nc($(entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($Object, k, nullptr);
				$var($Object, v, nullptr);
				try {
					$assign(k, $nc(entry)->getKey());
					$assign(v, entry->getValue());
				} catch ($IllegalStateException&) {
					$var($IllegalStateException, ise, $catch());
					$throwNew($ConcurrentModificationException, static_cast<$Throwable*>(ise));
				}
				action->accept(k, v);
			}
		}
	}
}

void Map::replaceAll($BiFunction* function) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(function);
	{
		$var($Iterator, i$, $nc($(entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($Object, k, nullptr);
				$var($Object, v, nullptr);
				try {
					$assign(k, $nc(entry)->getKey());
					$assign(v, entry->getValue());
				} catch ($IllegalStateException&) {
					$var($IllegalStateException, ise, $catch());
					$throwNew($ConcurrentModificationException, static_cast<$Throwable*>(ise));
				}
				$assign(v, function->apply(k, v));
				try {
					$nc(entry)->setValue(v);
				} catch ($IllegalStateException&) {
					$var($IllegalStateException, ise, $catch());
					$throwNew($ConcurrentModificationException, static_cast<$Throwable*>(ise));
				}
			}
		}
	}
}

$Object* Map::putIfAbsent(Object$* key, Object$* value) {
	$var($Object, v, get(key));
	if (v == nullptr) {
		$assign(v, put(key, value));
	}
	return $of(v);
}

bool Map::remove(Object$* key, Object$* value) {
	$var($Object, curValue, get(key));
	bool var$0 = !$Objects::equals(curValue, value);
	if (var$0 || (curValue == nullptr && !containsKey(key))) {
		return false;
	}
	remove(key);
	return true;
}

bool Map::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	$var($Object, curValue, get(key));
	bool var$0 = !$Objects::equals(curValue, oldValue);
	if (var$0 || (curValue == nullptr && !containsKey(key))) {
		return false;
	}
	put(key, newValue);
	return true;
}

$Object* Map::replace(Object$* key, Object$* value) {
	$var($Object, curValue, nullptr);
	bool var$0 = (($assign(curValue, get(key))) != nullptr);
	if (var$0 || containsKey(key)) {
		$assign(curValue, put(key, value));
	}
	return $of(curValue);
}

$Object* Map::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(mappingFunction);
	$var($Object, v, nullptr);
	if (($assign(v, get(key))) == nullptr) {
		$var($Object, newValue, nullptr);
		if (($assign(newValue, mappingFunction->apply(key))) != nullptr) {
			put(key, newValue);
			return $of(newValue);
		}
	}
	return $of(v);
}

$Object* Map::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(remappingFunction);
	$var($Object, oldValue, nullptr);
	if (($assign(oldValue, get(key))) != nullptr) {
		$var($Object, newValue, remappingFunction->apply(key, oldValue));
		if (newValue != nullptr) {
			put(key, newValue);
			return $of(newValue);
		} else {
			remove(key);
			return $of(nullptr);
		}
	} else {
		return $of(nullptr);
	}
}

$Object* Map::compute(Object$* key, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(remappingFunction);
	$var($Object, oldValue, get(key));
	$var($Object, newValue, remappingFunction->apply(key, oldValue));
	if (newValue == nullptr) {
		if (oldValue != nullptr || containsKey(key)) {
			remove(key);
			return $of(nullptr);
		} else {
			return $of(nullptr);
		}
	} else {
		put(key, newValue);
		return $of(newValue);
	}
}

$Object* Map::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(remappingFunction);
	$Objects::requireNonNull(value);
	$var($Object, oldValue, get(key));
	$var($Object, newValue, (oldValue == nullptr) ? $of(value) : remappingFunction->apply(oldValue, value));
	if (newValue == nullptr) {
		remove(key);
	} else {
		put(key, newValue);
	}
	return $of(newValue);
}

Map* Map::of() {
	$init($ImmutableCollections);
	return static_cast<Map*>($ImmutableCollections::EMPTY_MAP);
}

Map* Map::of(Object$* k1, Object$* v1) {
	return $new($ImmutableCollections$Map1, k1, v1);
}

Map* Map::of(Object$* k1, Object$* v1, Object$* k2, Object$* v2) {
	return $new($ImmutableCollections$MapN, $$new($ObjectArray, {
		k1,
		v1,
		k2,
		v2
	}));
}

Map* Map::of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3) {
	return $new($ImmutableCollections$MapN, $$new($ObjectArray, {
		k1,
		v1,
		k2,
		v2,
		k3,
		v3
	}));
}

Map* Map::of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4) {
	return $new($ImmutableCollections$MapN, $$new($ObjectArray, {
		k1,
		v1,
		k2,
		v2,
		k3,
		v3,
		k4,
		v4
	}));
}

Map* Map::of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5) {
	return $new($ImmutableCollections$MapN, $$new($ObjectArray, {
		k1,
		v1,
		k2,
		v2,
		k3,
		v3,
		k4,
		v4,
		k5,
		v5
	}));
}

Map* Map::of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5, Object$* k6, Object$* v6) {
	return $new($ImmutableCollections$MapN, $$new($ObjectArray, {
		k1,
		v1,
		k2,
		v2,
		k3,
		v3,
		k4,
		v4,
		k5,
		v5,
		k6,
		v6
	}));
}

Map* Map::of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5, Object$* k6, Object$* v6, Object$* k7, Object$* v7) {
	return $new($ImmutableCollections$MapN, $$new($ObjectArray, {
		k1,
		v1,
		k2,
		v2,
		k3,
		v3,
		k4,
		v4,
		k5,
		v5,
		k6,
		v6,
		k7,
		v7
	}));
}

Map* Map::of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5, Object$* k6, Object$* v6, Object$* k7, Object$* v7, Object$* k8, Object$* v8) {
	return $new($ImmutableCollections$MapN, $$new($ObjectArray, {
		k1,
		v1,
		k2,
		v2,
		k3,
		v3,
		k4,
		v4,
		k5,
		v5,
		k6,
		v6,
		k7,
		v7,
		k8,
		v8
	}));
}

Map* Map::of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5, Object$* k6, Object$* v6, Object$* k7, Object$* v7, Object$* k8, Object$* v8, Object$* k9, Object$* v9) {
	return $new($ImmutableCollections$MapN, $$new($ObjectArray, {
		k1,
		v1,
		k2,
		v2,
		k3,
		v3,
		k4,
		v4,
		k5,
		v5,
		k6,
		v6,
		k7,
		v7,
		k8,
		v8,
		k9,
		v9
	}));
}

Map* Map::of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5, Object$* k6, Object$* v6, Object$* k7, Object$* v7, Object$* k8, Object$* v8, Object$* k9, Object$* v9, Object$* k10, Object$* v10) {
	return $new($ImmutableCollections$MapN, $$new($ObjectArray, {
		k1,
		v1,
		k2,
		v2,
		k3,
		v3,
		k4,
		v4,
		k5,
		v5,
		k6,
		v6,
		k7,
		v7,
		k8,
		v8,
		k9,
		v9,
		k10,
		v10
	}));
}

Map* Map::ofEntries($Map$EntryArray* entries) {
	$useLocalCurrentObjectStackCache();
	if ($nc(entries)->length == 0) {
		$init($ImmutableCollections);
		$var(Map, map, static_cast<Map*>($ImmutableCollections::EMPTY_MAP));
		return map;
	} else if (entries->length == 1) {
		$var($Object, var$0, $nc(entries->get(0))->getKey());
		return $new($ImmutableCollections$Map1, var$0, $($nc(entries->get(0))->getValue()));
	} else {
		$var($ObjectArray, kva, $new($ObjectArray, entries->length << 1));
		int32_t a = 0;
		{
			$var($Map$EntryArray, arr$, entries);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Map$Entry, entry, arr$->get(i$));
				{
					kva->set(a++, $($nc(entry)->getKey()));
					kva->set(a++, $(entry->getValue()));
				}
			}
		}
		return $new($ImmutableCollections$MapN, kva);
	}
}

$Map$Entry* Map::entry(Object$* k, Object$* v) {
	return $new($KeyValueHolder, k, v);
}

Map* Map::copyOf(Map* map) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ImmutableCollections$AbstractImmutableMap, map)) {
		return map;
	} else {
		return Map::ofEntries($fcast($Map$EntryArray, $($nc($($nc(map)->entrySet()))->toArray($$new($Map$EntryArray, 0)))));
	}
}

$Class* Map::load$($String* name, bool initialize) {
	$loadClass(Map, name, initialize, &_Map_ClassInfo_, allocate$Map);
	return class$;
}

$Class* Map::class$ = nullptr;

	} // util
} // java