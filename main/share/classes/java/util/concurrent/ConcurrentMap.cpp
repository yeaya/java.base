#include <java/util/concurrent/ConcurrentMap.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

class ConcurrentMap$$Lambda$lambda$replaceAll$0 : public $BiConsumer {
	$class(ConcurrentMap$$Lambda$lambda$replaceAll$0, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(ConcurrentMap* inst, $BiFunction* function) {
		$set(this, inst$, inst);
		$set(this, function, function);
	}
	virtual void accept(Object$* k, Object$* v) override {
		$nc(inst$)->lambda$replaceAll$0(function, k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ConcurrentMap$$Lambda$lambda$replaceAll$0>());
	}
	ConcurrentMap* inst$ = nullptr;
	$BiFunction* function = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ConcurrentMap$$Lambda$lambda$replaceAll$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ConcurrentMap$$Lambda$lambda$replaceAll$0, inst$)},
	{"function", "Ljava/util/function/BiFunction;", nullptr, $PUBLIC, $field(ConcurrentMap$$Lambda$lambda$replaceAll$0, function)},
	{}
};
$MethodInfo ConcurrentMap$$Lambda$lambda$replaceAll$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentMap;Ljava/util/function/BiFunction;)V", nullptr, $PUBLIC, $method(static_cast<void(ConcurrentMap$$Lambda$lambda$replaceAll$0::*)(ConcurrentMap*,$BiFunction*)>(&ConcurrentMap$$Lambda$lambda$replaceAll$0::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ConcurrentMap$$Lambda$lambda$replaceAll$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.concurrent.ConcurrentMap$$Lambda$lambda$replaceAll$0",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	fieldInfos,
	methodInfos
};
$Class* ConcurrentMap$$Lambda$lambda$replaceAll$0::load$($String* name, bool initialize) {
	$loadClass(ConcurrentMap$$Lambda$lambda$replaceAll$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ConcurrentMap$$Lambda$lambda$replaceAll$0::class$ = nullptr;

$MethodInfo _ConcurrentMap_MethodInfo_[] = {
	{"compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", "(TK;Ljava/util/function/Function<-TK;+TV;>;)TV;", $PUBLIC},
	{"computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)TV;", $PUBLIC},
	{"forEach", "(Ljava/util/function/BiConsumer;)V", "(Ljava/util/function/BiConsumer<-TK;-TV;>;)V", $PUBLIC},
	{"getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;TV;)TV;", $PUBLIC},
	{"lambda$replaceAll$0", "(Ljava/util/function/BiFunction;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ConcurrentMap::*)($BiFunction*,Object$*,Object$*)>(&ConcurrentMap::lambda$replaceAll$0))},
	{"merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK;TV;Ljava/util/function/BiFunction<-TV;-TV;+TV;>;)TV;", $PUBLIC},
	{"putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "(TK;TV;TV;)Z", $PUBLIC | $ABSTRACT},
	{"replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC | $ABSTRACT},
	{"replaceAll", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<-TK;-TV;+TV;>;)V", $PUBLIC},
	{}
};

$ClassInfo _ConcurrentMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.ConcurrentMap",
	nullptr,
	"java.util.Map",
	nullptr,
	_ConcurrentMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map<TK;TV;>;"
};

$Object* allocate$ConcurrentMap($Class* clazz) {
	return $of($alloc(ConcurrentMap));
}

$Object* ConcurrentMap::getOrDefault(Object$* key, Object$* defaultValue) {
	$var($Object, v, nullptr);
	return $of((($assign(v, get(key))) != nullptr) ? v : $of(defaultValue));
}

void ConcurrentMap::forEach($BiConsumer* action) {
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
					continue;
				}
				action->accept(k, v);
			}
		}
	}
}

void ConcurrentMap::replaceAll($BiFunction* function) {
	$Objects::requireNonNull(function);
	forEach(static_cast<$BiConsumer*>($$new(ConcurrentMap$$Lambda$lambda$replaceAll$0, this, function)));
}

$Object* ConcurrentMap::computeIfAbsent(Object$* key, $Function* mappingFunction) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(mappingFunction);
	$var($Object, oldValue, nullptr);
	$var($Object, newValue, nullptr);
	bool var$1 = ($assign(oldValue, get(key))) == nullptr;
	bool var$0 = var$1 && ($assign(newValue, mappingFunction->apply(key))) != nullptr;
	return $of((var$0 && ($assign(oldValue, putIfAbsent(key, newValue))) == nullptr) ? newValue : oldValue);
}

$Object* ConcurrentMap::computeIfPresent(Object$* key, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(remappingFunction);
	{
		$var($Object, oldValue, nullptr);
		for (; ($assign(oldValue, get(key))) != nullptr;) {
			$var($Object, newValue, remappingFunction->apply(key, oldValue));
			if ((newValue == nullptr) ? remove(key, oldValue) : replace(key, oldValue, newValue)) {
				return $of(newValue);
			}
		}
	}
	return $of(nullptr);
}

$Object* ConcurrentMap::compute(Object$* key, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	bool retry$continue = false;
	for (;;) {
		$var($Object, oldValue, get(key));
		bool haveOldValue$continue = false;
		for (;;) {
			$var($Object, newValue, $nc(remappingFunction)->apply(key, oldValue));
			if (newValue != nullptr) {
				if (oldValue != nullptr) {
					if (replace(key, oldValue, newValue)) {
						return $of(newValue);
					}
				} else if (($assign(oldValue, putIfAbsent(key, newValue))) == nullptr) {
					return $of(newValue);
				} else {
					continue;
				}
			} else if (oldValue == nullptr || remove(key, oldValue)) {
				return $of(nullptr);
			}
			retry$continue = true;
			break;
		}
		if (retry$continue) {
			retry$continue = false;
			continue;
		}
	}
}

$Object* ConcurrentMap::merge(Object$* key, Object$* value, $BiFunction* remappingFunction) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(remappingFunction);
	$Objects::requireNonNull(value);
	bool retry$continue = false;
	for (;;) {
		$var($Object, oldValue, get(key));
		bool haveOldValue$continue = false;
		for (;;) {
			if (oldValue != nullptr) {
				$var($Object, newValue, remappingFunction->apply(oldValue, value));
				if (newValue != nullptr) {
					if (replace(key, oldValue, newValue)) {
						return $of(newValue);
					}
				} else if (remove(key, oldValue)) {
					return $of(nullptr);
				}
				retry$continue = true;
				break;
			} else {
				if (($assign(oldValue, putIfAbsent(key, value))) == nullptr) {
					return $of(value);
				}
				continue;
			}
		}
		if (retry$continue) {
			retry$continue = false;
			continue;
		}
	}
}

void ConcurrentMap::lambda$replaceAll$0($BiFunction* function, Object$* k, Object$* v$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Object, v, v$renamed);
	while (!replace(k, v, $($nc(function)->apply(k, v)))) {
		if (($assign(v, get(k))) == nullptr) {
			break;
		}
	}
}

$Class* ConcurrentMap::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ConcurrentMap$$Lambda$lambda$replaceAll$0::classInfo$.name)) {
			return ConcurrentMap$$Lambda$lambda$replaceAll$0::load$(name, initialize);
		}
	}
	$loadClass(ConcurrentMap, name, initialize, &_ConcurrentMap_ClassInfo_, allocate$ConcurrentMap);
	return class$;
}

$Class* ConcurrentMap::class$ = nullptr;

		} // concurrent
	} // util
} // java