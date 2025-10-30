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
using $WeakPairMap = ::java::lang::WeakPairMap;
using $WeakPairMap$Pair$Weak = ::java::lang::WeakPairMap$Pair$Weak;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {

$MethodInfo _WeakPairMap$WeakRefPeer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TK;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;)V", 0, $method(static_cast<void(WeakPairMap$WeakRefPeer::*)(Object$*,$ReferenceQueue*)>(&WeakPairMap$WeakRefPeer::init$))},
	{"weakPair", "()Ljava/lang/WeakPairMap$Pair$Weak;", "()Ljava/lang/WeakPairMap$Pair$Weak<**>;", $ABSTRACT},
	{}
};

$InnerClassInfo _WeakPairMap$WeakRefPeer_InnerClassesInfo_[] = {
	{"java.lang.WeakPairMap$WeakRefPeer", "java.lang.WeakPairMap", "WeakRefPeer", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _WeakPairMap$WeakRefPeer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.WeakPairMap$WeakRefPeer",
	"java.lang.ref.WeakReference",
	nullptr,
	nullptr,
	_WeakPairMap$WeakRefPeer_MethodInfo_,
	"<K:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TK;>;",
	nullptr,
	_WeakPairMap$WeakRefPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.WeakPairMap"
};

$Object* allocate$WeakPairMap$WeakRefPeer($Class* clazz) {
	return $of($alloc(WeakPairMap$WeakRefPeer));
}

void WeakPairMap$WeakRefPeer::init$(Object$* k, $ReferenceQueue* queue) {
	$WeakReference::init$($Objects::requireNonNull(k), queue);
}

WeakPairMap$WeakRefPeer::WeakPairMap$WeakRefPeer() {
}

$Class* WeakPairMap$WeakRefPeer::load$($String* name, bool initialize) {
	$loadClass(WeakPairMap$WeakRefPeer, name, initialize, &_WeakPairMap$WeakRefPeer_ClassInfo_, allocate$WeakPairMap$WeakRefPeer);
	return class$;
}

$Class* WeakPairMap$WeakRefPeer::class$ = nullptr;

	} // lang
} // java