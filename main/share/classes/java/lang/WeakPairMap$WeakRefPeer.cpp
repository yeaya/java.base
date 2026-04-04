#include <java/lang/WeakPairMap$WeakRefPeer.h>
#include <java/lang/WeakPairMap$Pair$Weak.h>
#include <java/lang/WeakPairMap.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakPairMap$Pair$Weak = ::java::lang::WeakPairMap$Pair$Weak;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {

void WeakPairMap$WeakRefPeer::init$(Object$* k, $ReferenceQueue* queue) {
	$WeakReference::init$($Objects::requireNonNull(k), queue);
}

WeakPairMap$WeakRefPeer::WeakPairMap$WeakRefPeer() {
}

$Class* WeakPairMap$WeakRefPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TK;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;)V", 0, $method(WeakPairMap$WeakRefPeer, init$, void, Object$*, $ReferenceQueue*)},
		{"weakPair", "()Ljava/lang/WeakPairMap$Pair$Weak;", "()Ljava/lang/WeakPairMap$Pair$Weak<**>;", $ABSTRACT, $virtualMethod(WeakPairMap$WeakRefPeer, weakPair, $WeakPairMap$Pair$Weak*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.WeakPairMap$WeakRefPeer", "java.lang.WeakPairMap", "WeakRefPeer", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.lang.WeakPairMap$WeakRefPeer",
		"java.lang.ref.WeakReference",
		nullptr,
		nullptr,
		methodInfos$$,
		"<K:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TK;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.WeakPairMap"
	};
	$loadClass(WeakPairMap$WeakRefPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakPairMap$WeakRefPeer);
	});
	return class$;
}

$Class* WeakPairMap$WeakRefPeer::class$ = nullptr;

	} // lang
} // java