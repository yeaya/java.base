#include <java/lang/WeakPairMap$Pair.h>

#include <java/lang/WeakPairMap$Pair$Lookup.h>
#include <java/lang/WeakPairMap$Pair$Weak.h>
#include <java/lang/WeakPairMap.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakPairMap$Pair$Lookup = ::java::lang::WeakPairMap$Pair$Lookup;
using $WeakPairMap$Pair$Weak = ::java::lang::WeakPairMap$Pair$Weak;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {

$MethodInfo _WeakPairMap$Pair_MethodInfo_[] = {
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/WeakPairMap$Pair;)Z", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/WeakPairMap$Pair<**>;)Z", $PUBLIC | $STATIC, $staticMethod(WeakPairMap$Pair, equals, bool, Object$*, Object$*, WeakPairMap$Pair*)},
	{"first", "()Ljava/lang/Object;", "()TK1;", $PUBLIC | $ABSTRACT, $virtualMethod(WeakPairMap$Pair, first, $Object*)},
	{"hashCode", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(WeakPairMap$Pair, hashCode, int32_t, Object$*, Object$*)},
	{"lookup", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/WeakPairMap$Pair;", "<K1:Ljava/lang/Object;K2:Ljava/lang/Object;>(TK1;TK2;)Ljava/lang/WeakPairMap$Pair<TK1;TK2;>;", $PUBLIC | $STATIC, $staticMethod(WeakPairMap$Pair, lookup, WeakPairMap$Pair*, Object$*, Object$*)},
	{"second", "()Ljava/lang/Object;", "()TK2;", $PUBLIC | $ABSTRACT, $virtualMethod(WeakPairMap$Pair, second, $Object*)},
	{"weak", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)Ljava/lang/WeakPairMap$Pair;", "<K1:Ljava/lang/Object;K2:Ljava/lang/Object;>(TK1;TK2;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;)Ljava/lang/WeakPairMap$Pair<TK1;TK2;>;", $PUBLIC | $STATIC, $staticMethod(WeakPairMap$Pair, weak, WeakPairMap$Pair*, Object$*, Object$*, $ReferenceQueue*)},
	{}
};

$InnerClassInfo _WeakPairMap$Pair_InnerClassesInfo_[] = {
	{"java.lang.WeakPairMap$Pair", "java.lang.WeakPairMap", "Pair", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.lang.WeakPairMap$Pair$Lookup", "java.lang.WeakPairMap$Pair", "Lookup", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.WeakPairMap$Pair$Weak", "java.lang.WeakPairMap$Pair", "Weak", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _WeakPairMap$Pair_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.lang.WeakPairMap$Pair",
	nullptr,
	nullptr,
	nullptr,
	_WeakPairMap$Pair_MethodInfo_,
	"<K1:Ljava/lang/Object;K2:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_WeakPairMap$Pair_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.WeakPairMap"
};

$Object* allocate$WeakPairMap$Pair($Class* clazz) {
	return $of($alloc(WeakPairMap$Pair));
}

WeakPairMap$Pair* WeakPairMap$Pair::weak(Object$* k1, Object$* k2, $ReferenceQueue* queue) {
	return $new($WeakPairMap$Pair$Weak, k1, k2, queue);
}

WeakPairMap$Pair* WeakPairMap$Pair::lookup(Object$* k1, Object$* k2) {
	return $new($WeakPairMap$Pair$Lookup, k1, k2);
}

int32_t WeakPairMap$Pair::hashCode(Object$* first, Object$* second) {
	int32_t var$0 = $System::identityHashCode(first);
	return var$0 ^ $System::identityHashCode(second);
}

bool WeakPairMap$Pair::equals(Object$* first, Object$* second, WeakPairMap$Pair* p) {
	bool var$0 = first != nullptr && second != nullptr && $equals(first, $nc(p)->first());
	return var$0 && $equals(second, p->second());
}

$Class* WeakPairMap$Pair::load$($String* name, bool initialize) {
	$loadClass(WeakPairMap$Pair, name, initialize, &_WeakPairMap$Pair_ClassInfo_, allocate$WeakPairMap$Pair);
	return class$;
}

$Class* WeakPairMap$Pair::class$ = nullptr;

	} // lang
} // java