#include <java/util/Collections$CheckedMap.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections$CheckedMap$CheckedEntrySet.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Collections$CheckedMap$CheckedEntrySet = ::java::util::Collections$CheckedMap$CheckedEntrySet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {

class Collections$CheckedMap$$Lambda$lambda$typeCheck$0 : public $BiFunction {
	$class(Collections$CheckedMap$$Lambda$lambda$typeCheck$0, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(Collections$CheckedMap* inst, $BiFunction* func) {
		$set(this, inst$, inst);
		$set(this, func, func);
	}
	virtual $Object* apply(Object$* k, Object$* v) override {
		 return $nc(inst$)->lambda$typeCheck$0(func, k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Collections$CheckedMap$$Lambda$lambda$typeCheck$0>());
	}
	Collections$CheckedMap* inst$ = nullptr;
	$BiFunction* func = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Collections$CheckedMap$$Lambda$lambda$typeCheck$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Collections$CheckedMap$$Lambda$lambda$typeCheck$0, inst$)},
	{"func", "Ljava/util/function/BiFunction;", nullptr, $PUBLIC, $field(Collections$CheckedMap$$Lambda$lambda$typeCheck$0, func)},
	{}
};
$MethodInfo Collections$CheckedMap$$Lambda$lambda$typeCheck$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collections$CheckedMap;Ljava/util/function/BiFunction;)V", nullptr, $PUBLIC, $method(static_cast<void(Collections$CheckedMap$$Lambda$lambda$typeCheck$0::*)(Collections$CheckedMap*,$BiFunction*)>(&Collections$CheckedMap$$Lambda$lambda$typeCheck$0::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Collections$CheckedMap$$Lambda$lambda$typeCheck$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Collections$CheckedMap$$Lambda$lambda$typeCheck$0",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* Collections$CheckedMap$$Lambda$lambda$typeCheck$0::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedMap$$Lambda$lambda$typeCheck$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Collections$CheckedMap$$Lambda$lambda$typeCheck$0::class$ = nullptr;

class Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1 : public $Function {
	$class(Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$(Collections$CheckedMap* inst, $Function* mappingFunction) {
		$set(this, inst$, inst);
		$set(this, mappingFunction, mappingFunction);
	}
	virtual $Object* apply(Object$* k) override {
		 return $nc(inst$)->lambda$computeIfAbsent$1(mappingFunction, k);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1>());
	}
	Collections$CheckedMap* inst$ = nullptr;
	$Function* mappingFunction = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1, inst$)},
	{"mappingFunction", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1, mappingFunction)},
	{}
};
$MethodInfo Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collections$CheckedMap;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(static_cast<void(Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1::*)(Collections$CheckedMap*,$Function*)>(&Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1::class$ = nullptr;

class Collections$CheckedMap$$Lambda$lambda$merge$2$2 : public $BiFunction {
	$class(Collections$CheckedMap$$Lambda$lambda$merge$2$2, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(Collections$CheckedMap* inst, $BiFunction* remappingFunction) {
		$set(this, inst$, inst);
		$set(this, remappingFunction, remappingFunction);
	}
	virtual $Object* apply(Object$* v1, Object$* v2) override {
		 return $nc(inst$)->lambda$merge$2(remappingFunction, v1, v2);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Collections$CheckedMap$$Lambda$lambda$merge$2$2>());
	}
	Collections$CheckedMap* inst$ = nullptr;
	$BiFunction* remappingFunction = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Collections$CheckedMap$$Lambda$lambda$merge$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Collections$CheckedMap$$Lambda$lambda$merge$2$2, inst$)},
	{"remappingFunction", "Ljava/util/function/BiFunction;", nullptr, $PUBLIC, $field(Collections$CheckedMap$$Lambda$lambda$merge$2$2, remappingFunction)},
	{}
};
$MethodInfo Collections$CheckedMap$$Lambda$lambda$merge$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collections$CheckedMap;Ljava/util/function/BiFunction;)V", nullptr, $PUBLIC, $method(static_cast<void(Collections$CheckedMap$$Lambda$lambda$merge$2$2::*)(Collections$CheckedMap*,$BiFunction*)>(&Collections$CheckedMap$$Lambda$lambda$merge$2$2::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Collections$CheckedMap$$Lambda$lambda$merge$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Collections$CheckedMap$$Lambda$lambda$merge$2$2",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* Collections$CheckedMap$$Lambda$lambda$merge$2$2::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedMap$$Lambda$lambda$merge$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Collections$CheckedMap$$Lambda$lambda$merge$2$2::class$ = nullptr;

$FieldInfo _Collections$CheckedMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$CheckedMap, serialVersionUID)},
	{"m", "Ljava/util/Map;", "Ljava/util/Map<TK;TV;>;", $PRIVATE | $FINAL, $field(Collections$CheckedMap, m)},
	{"keyType", "Ljava/lang/Class;", "Ljava/lang/Class<TK;>;", $FINAL, $field(Collections$CheckedMap, keyType)},
	{"valueType", "Ljava/lang/Class;", "Ljava/lang/Class<TV;>;", $FINAL, $field(Collections$CheckedMap, valueType)},
	{"entrySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;", $PRIVATE | $TRANSIENT, $field(Collections$CheckedMap, entrySet$)},
	{}
};

$MethodInfo _Collections$CheckedMap_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/Map;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/util/Map<TK;TV;>;Ljava/lang/Class<TK;>;Ljava/lang/Class<TV;>;)V", 0, $method(static_cast<void(Collections$CheckedMap::*)($Map*,$Class*,$Class*)>(&Collections$CheckedMap::init$))},
	{"badKeyMsg", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Collections$CheckedMap::*)(Object$*)>(&Collections$CheckedMap::badKeyMsg))},
	{"badValueMsg", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Collections$CheckedMap::*)(Object$*)>(&Collections$CheckedMap::badValueMsg))},
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
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<TK;>;", $PUBLIC},
	{"lambda$computeIfAbsent$1", "(Ljava/util/function/Function;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(Collections$CheckedMap::*)($Function*,Object$*)>(&Collections$CheckedMap::lambda$computeIfAbsent$1))},
	{"lambda$merge$2", "(Ljava/util/function/BiFunction;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(Collections$CheckedMap::*)($BiFunction*,Object$*,Object$*)>(&Collections$CheckedMap::lambda$merge$2))},
	{"lambda$typeCheck$0", "(Ljava/util/function/BiFunction;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Object*(Collections$CheckedMap::*)($BiFunction*,Object$*,Object$*)>(&Collections$CheckedMap::lambda$typeCheck$0))},
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
	{"typeCheck", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(Collections$CheckedMap::*)(Object$*,Object$*)>(&Collections$CheckedMap::typeCheck))},
	{"typeCheck", "(Ljava/util/function/BiFunction;)Ljava/util/function/BiFunction;", "(Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)Ljava/util/function/BiFunction<-TK;-TV;+TV;>;", $PRIVATE, $method(static_cast<$BiFunction*(Collections$CheckedMap::*)($BiFunction*)>(&Collections$CheckedMap::typeCheck))},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<TV;>;", $PUBLIC},
	{}
};

$InnerClassInfo _Collections$CheckedMap_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedMap", "java.util.Collections", "CheckedMap", $PRIVATE | $STATIC},
	{"java.util.Collections$CheckedMap$CheckedEntrySet", "java.util.Collections$CheckedMap", "CheckedEntrySet", $STATIC},
	{}
};

$ClassInfo _Collections$CheckedMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedMap",
	"java.lang.Object",
	"java.util.Map,java.io.Serializable",
	_Collections$CheckedMap_FieldInfo_,
	_Collections$CheckedMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$CheckedMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedMap($Class* clazz) {
	return $of($alloc(Collections$CheckedMap));
}

$Object* Collections$CheckedMap::clone() {
	 return this->$Map::clone();
}

void Collections$CheckedMap::finalize() {
	this->$Map::finalize();
}

void Collections$CheckedMap::typeCheck(Object$* key, Object$* value) {
	if (key != nullptr && !$nc(this->keyType)->isInstance(key)) {
		$throwNew($ClassCastException, $(badKeyMsg(key)));
	}
	if (value != nullptr && !$nc(this->valueType)->isInstance(value)) {
		$throwNew($ClassCastException, $(badValueMsg(value)));
	}
}

$BiFunction* Collections$CheckedMap::typeCheck($BiFunction* func) {
	$Objects::requireNonNull(func);
	return static_cast<$BiFunction*>($new(Collections$CheckedMap$$Lambda$lambda$typeCheck$0, this, func));
}

$String* Collections$CheckedMap::badKeyMsg(Object$* key) {
	return $str({"Attempt to insert "_s, $nc($of(key))->getClass(), " key into map with key type "_s, this->keyType});
}

$String* Collections$CheckedMap::badValueMsg(Object$* value) {
	return $str({"Attempt to insert "_s, $nc($of(value))->getClass(), " value into map with value type "_s, this->valueType});
}

void Collections$CheckedMap::init$($Map* m, $Class* keyType, $Class* valueType) {
	$set(this, m, $cast($Map, $Objects::requireNonNull(m)));
	$set(this, keyType, $cast($Class, $Objects::requireNonNull(keyType)));
	$set(this, valueType, $cast($Class, $Objects::requireNonNull(valueType)));
}

int32_t Collections$CheckedMap::size() {
	return $nc(this->m)->size();
}

bool Collections$CheckedMap::isEmpty() {
	return $nc(this->m)->isEmpty();
}

bool Collections$CheckedMap::containsKey(Object$* key) {
	return $nc(this->m)->containsKey(key);
}

bool Collections$CheckedMap::containsValue(Object$* v) {
	return $nc(this->m)->containsValue(v);
}

$Object* Collections$CheckedMap::get(Object$* key) {
	return $of($nc(this->m)->get(key));
}

$Object* Collections$CheckedMap::remove(Object$* key) {
	return $of($nc(this->m)->remove(key));
}

void Collections$CheckedMap::clear() {
	$nc(this->m)->clear();
}

$Set* Collections$CheckedMap::keySet() {
	return $nc(this->m)->keySet();
}

$Collection* Collections$CheckedMap::values() {
	return $nc(this->m)->values();
}

bool Collections$CheckedMap::equals(Object$* o) {
	return $equals(o, this) || $nc(this->m)->equals(o);
}

int32_t Collections$CheckedMap::hashCode() {
	return $nc(this->m)->hashCode();
}

$String* Collections$CheckedMap::toString() {
	return $nc($of(this->m))->toString();
}

$Object* Collections$CheckedMap::put(Object$* key, Object$* value) {
	typeCheck(key, value);
	return $of($nc(this->m)->put(key, value));
}

void Collections$CheckedMap::putAll($Map* t) {
	$var($ObjectArray, entries, $nc($($nc(t)->entrySet()))->toArray());
	$var($List, checked, $new($ArrayList, $nc(entries)->length));
	{
		$var($ObjectArray, arr$, entries);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				$var($Map$Entry, e, $cast($Map$Entry, o));
				$var($Object, k, $nc(e)->getKey());
				$var($Object, v, e->getValue());
				typeCheck(k, v);
				checked->add($$new($AbstractMap$SimpleImmutableEntry, k, v));
			}
		}
	}
	{
		$var($Iterator, i$, checked->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			$var($Object, var$0, $nc(e)->getKey());
			$nc(this->m)->put(var$0, $(e->getValue()));
		}
	}
}

$Set* Collections$CheckedMap::entrySet() {
	if (this->entrySet$ == nullptr) {
		$set(this, entrySet$, $new($Collections$CheckedMap$CheckedEntrySet, $($nc(this->m)->entrySet()), this->valueType));
	}
	return this->entrySet$;
}

void Collections$CheckedMap::forEach($BiConsumer* action) {
	$nc(this->m)->forEach(action);
}

void Collections$CheckedMap::replaceAll($BiFunction* function) {
	$nc(this->m)->replaceAll($(typeCheck(function)));
}

$Object* Collections$CheckedMap::putIfAbsent(Object$* key, Object$* value) {
	typeCheck(key, value);
	return $of($nc(this->m)->putIfAbsent(key, value));
}

bool Collections$CheckedMap::remove(Object$* key, Object$* value) {
	return $nc(this->m)->remove(key, value);
}

bool Collections$CheckedMap::replace(Object$* key, Object$* oldValue, Object$* newValue) {
	typeCheck(key, newValue);
	return $nc(this->m)->replace(key, oldValue, newValue);
}

$Object* Collections$CheckedMap::replace(Object$* key, Object$* value) {
	typeCheck(key, value);
	return $of($nc(this->m)->replace(key, value));
}

$Object* Collections$CheckedMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	$Objects::requireNonNull(mappingFunction);
	return $of($nc(this->m)->computeIfAbsent(key, static_cast<$Function*>($$new(Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1, this, mappingFunction))));
}

$Object* Collections$CheckedMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	return $of($nc(this->m)->computeIfPresent(key, $(typeCheck(remappingFunction))));
}

$Object* Collections$CheckedMap::compute(Object$* key, $BiFunction* remappingFunction) {
	return $of($nc(this->m)->compute(key, $(typeCheck(remappingFunction))));
}

$Object* Collections$CheckedMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	$Objects::requireNonNull(remappingFunction);
	return $of($nc(this->m)->merge(key, value, static_cast<$BiFunction*>($$new(Collections$CheckedMap$$Lambda$lambda$merge$2$2, this, remappingFunction))));
}

$Object* Collections$CheckedMap::lambda$merge$2($BiFunction* remappingFunction, Object$* v1, Object$* v2) {
	$var($Object, newValue, $nc(remappingFunction)->apply(v1, v2));
	typeCheck(nullptr, newValue);
	return $of(newValue);
}

$Object* Collections$CheckedMap::lambda$computeIfAbsent$1($Function* mappingFunction, Object$* k) {
	$var($Object, value, $nc(mappingFunction)->apply(k));
	typeCheck(k, value);
	return $of(value);
}

$Object* Collections$CheckedMap::lambda$typeCheck$0($BiFunction* func, Object$* k, Object$* v) {
	$var($Object, newValue, $nc(func)->apply(k, v));
	typeCheck(k, newValue);
	return $of(newValue);
}

Collections$CheckedMap::Collections$CheckedMap() {
}

$Class* Collections$CheckedMap::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Collections$CheckedMap$$Lambda$lambda$typeCheck$0::classInfo$.name)) {
			return Collections$CheckedMap$$Lambda$lambda$typeCheck$0::load$(name, initialize);
		}
		if (name->equals(Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1::classInfo$.name)) {
			return Collections$CheckedMap$$Lambda$lambda$computeIfAbsent$1$1::load$(name, initialize);
		}
		if (name->equals(Collections$CheckedMap$$Lambda$lambda$merge$2$2::classInfo$.name)) {
			return Collections$CheckedMap$$Lambda$lambda$merge$2$2::load$(name, initialize);
		}
	}
	$loadClass(Collections$CheckedMap, name, initialize, &_Collections$CheckedMap_ClassInfo_, allocate$Collections$CheckedMap);
	return class$;
}

$Class* Collections$CheckedMap::class$ = nullptr;

	} // util
} // java