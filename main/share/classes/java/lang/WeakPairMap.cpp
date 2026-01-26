#include <java/lang/WeakPairMap.h>

#include <java/io/Serializable.h>
#include <java/lang/WeakPairMap$Pair$Weak.h>
#include <java/lang/WeakPairMap$Pair.h>
#include <java/lang/WeakPairMap$WeakRefPeer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Collection.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakPairMap$Pair = ::java::lang::WeakPairMap$Pair;
using $WeakPairMap$WeakRefPeer = ::java::lang::WeakPairMap$WeakRefPeer;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Collection = ::java::util::Collection;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {

class WeakPairMap$$Lambda$lambda$computeIfAbsent$0 : public $Function {
	$class(WeakPairMap$$Lambda$lambda$computeIfAbsent$0, $NO_CLASS_INIT, $Function)
public:
	void init$($BiFunction* mappingFunction) {
		$set(this, mappingFunction, mappingFunction);
	}
	virtual $Object* apply(Object$* pair) override {
		 return WeakPairMap::lambda$computeIfAbsent$0(mappingFunction, $cast($WeakPairMap$Pair, pair));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WeakPairMap$$Lambda$lambda$computeIfAbsent$0>());
	}
	$BiFunction* mappingFunction = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WeakPairMap$$Lambda$lambda$computeIfAbsent$0::fieldInfos[2] = {
	{"mappingFunction", "Ljava/util/function/BiFunction;", nullptr, $PUBLIC, $field(WeakPairMap$$Lambda$lambda$computeIfAbsent$0, mappingFunction)},
	{}
};
$MethodInfo WeakPairMap$$Lambda$lambda$computeIfAbsent$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/BiFunction;)V", nullptr, $PUBLIC, $method(WeakPairMap$$Lambda$lambda$computeIfAbsent$0, init$, void, $BiFunction*)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WeakPairMap$$Lambda$lambda$computeIfAbsent$0, apply, $Object*, Object$*)},
	{}
};
$ClassInfo WeakPairMap$$Lambda$lambda$computeIfAbsent$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.WeakPairMap$$Lambda$lambda$computeIfAbsent$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* WeakPairMap$$Lambda$lambda$computeIfAbsent$0::load$($String* name, bool initialize) {
	$loadClass(WeakPairMap$$Lambda$lambda$computeIfAbsent$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WeakPairMap$$Lambda$lambda$computeIfAbsent$0::class$ = nullptr;

$FieldInfo _WeakPairMap_FieldInfo_[] = {
	{"map", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/WeakPairMap$Pair<TK1;TK2;>;TV;>;", $PRIVATE | $FINAL, $field(WeakPairMap, map)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(WeakPairMap, queue)},
	{}
};

$MethodInfo _WeakPairMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(WeakPairMap, init$, void)},
	{"computeIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "(TK1;TK2;Ljava/util/function/BiFunction<-TK1;-TK2;+TV;>;)TV;", $PUBLIC, $method(WeakPairMap, computeIfAbsent, $Object*, Object$*, Object$*, $BiFunction*)},
	{"containsKeyPair", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TK1;TK2;)Z", $PUBLIC, $method(WeakPairMap, containsKeyPair, bool, Object$*, Object$*)},
	{"expungeStaleAssociations", "()V", nullptr, $PRIVATE, $method(WeakPairMap, expungeStaleAssociations, void)},
	{"get", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK1;TK2;)TV;", $PUBLIC, $method(WeakPairMap, get, $Object*, Object$*, Object$*)},
	{"lambda$computeIfAbsent$0", "(Ljava/util/function/BiFunction;Ljava/lang/WeakPairMap$Pair;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WeakPairMap, lambda$computeIfAbsent$0, $Object*, $BiFunction*, $WeakPairMap$Pair*)},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK1;TK2;TV;)TV;", $PUBLIC, $method(WeakPairMap, put, $Object*, Object$*, Object$*, Object$*)},
	{"putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK1;TK2;TV;)TV;", $PUBLIC, $method(WeakPairMap, putIfAbsent, $Object*, Object$*, Object$*, Object$*)},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<TV;>;", $PUBLIC, $method(WeakPairMap, values, $Collection*)},
	{}
};

$InnerClassInfo _WeakPairMap_InnerClassesInfo_[] = {
	{"java.lang.WeakPairMap$WeakRefPeer", "java.lang.WeakPairMap", "WeakRefPeer", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.lang.WeakPairMap$Pair", "java.lang.WeakPairMap", "Pair", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WeakPairMap_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.WeakPairMap",
	"java.lang.Object",
	nullptr,
	_WeakPairMap_FieldInfo_,
	_WeakPairMap_MethodInfo_,
	"<K1:Ljava/lang/Object;K2:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_WeakPairMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.WeakPairMap$WeakRefPeer,java.lang.WeakPairMap$Pair,java.lang.WeakPairMap$Pair$Lookup,java.lang.WeakPairMap$Pair$Weak,java.lang.WeakPairMap$Pair$Weak$1"
};

$Object* allocate$WeakPairMap($Class* clazz) {
	return $of($alloc(WeakPairMap));
}

void WeakPairMap::init$() {
	$set(this, map, $new($ConcurrentHashMap));
	$set(this, queue, $new($ReferenceQueue));
}

bool WeakPairMap::containsKeyPair(Object$* k1, Object$* k2) {
	expungeStaleAssociations();
	return $nc(this->map)->containsKey($($WeakPairMap$Pair::lookup(k1, k2)));
}

$Object* WeakPairMap::get(Object$* k1, Object$* k2) {
	expungeStaleAssociations();
	return $of($nc(this->map)->get($($WeakPairMap$Pair::lookup(k1, k2))));
}

$Object* WeakPairMap::put(Object$* k1, Object$* k2, Object$* v) {
	expungeStaleAssociations();
	return $of($nc(this->map)->put($($WeakPairMap$Pair::weak(k1, k2, this->queue)), v));
}

$Object* WeakPairMap::putIfAbsent(Object$* k1, Object$* k2, Object$* v) {
	expungeStaleAssociations();
	return $of($nc(this->map)->putIfAbsent($($WeakPairMap$Pair::weak(k1, k2, this->queue)), v));
}

$Object* WeakPairMap::computeIfAbsent(Object$* k1, Object$* k2, $BiFunction* mappingFunction) {
	$useLocalCurrentObjectStackCache();
	expungeStaleAssociations();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Object, var$3, $of($WeakPairMap$Pair::weak(k1, k2, this->queue)));
			$assign(var$2, $nc(this->map)->computeIfAbsent(var$3, static_cast<$Function*>($$new(WeakPairMap$$Lambda$lambda$computeIfAbsent$0, mappingFunction))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$Reference::reachabilityFence(k1);
			$Reference::reachabilityFence(k2);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Collection* WeakPairMap::values() {
	expungeStaleAssociations();
	return $nc(this->map)->values();
}

void WeakPairMap::expungeStaleAssociations() {
	$useLocalCurrentObjectStackCache();
	$var($WeakPairMap$WeakRefPeer, peer, nullptr);
	while (($assign(peer, $cast($WeakPairMap$WeakRefPeer, $nc(this->queue)->poll()))) != nullptr) {
		$nc(this->map)->remove($($nc(peer)->weakPair()));
	}
}

$Object* WeakPairMap::lambda$computeIfAbsent$0($BiFunction* mappingFunction, $WeakPairMap$Pair* pair) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $nc(pair)->first());
	return $of($nc(mappingFunction)->apply(var$0, $(pair->second())));
}

WeakPairMap::WeakPairMap() {
}

$Class* WeakPairMap::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WeakPairMap$$Lambda$lambda$computeIfAbsent$0::classInfo$.name)) {
			return WeakPairMap$$Lambda$lambda$computeIfAbsent$0::load$(name, initialize);
		}
	}
	$loadClass(WeakPairMap, name, initialize, &_WeakPairMap_ClassInfo_, allocate$WeakPairMap);
	return class$;
}

$Class* WeakPairMap::class$ = nullptr;

	} // lang
} // java