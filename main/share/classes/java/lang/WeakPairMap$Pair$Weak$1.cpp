#include <java/lang/WeakPairMap$Pair$Weak$1.h>
#include <java/lang/WeakPairMap$Pair$Weak.h>
#include <java/lang/WeakPairMap$WeakRefPeer.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakPairMap$Pair$Weak = ::java::lang::WeakPairMap$Pair$Weak;
using $WeakPairMap$WeakRefPeer = ::java::lang::WeakPairMap$WeakRefPeer;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {

void WeakPairMap$Pair$Weak$1::init$($WeakPairMap$Pair$Weak* this$0, Object$* k, $ReferenceQueue* queue) {
	$set(this, this$0, this$0);
	$WeakPairMap$WeakRefPeer::init$(k, queue);
}

$WeakPairMap$Pair$Weak* WeakPairMap$Pair$Weak$1::weakPair() {
	return this->this$0;
}

WeakPairMap$Pair$Weak$1::WeakPairMap$Pair$Weak$1() {
}

$Class* WeakPairMap$Pair$Weak$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/WeakPairMap$Pair$Weak;", nullptr, $FINAL | $SYNTHETIC, $field(WeakPairMap$Pair$Weak$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/WeakPairMap$Pair$Weak;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", nullptr, 0, $method(WeakPairMap$Pair$Weak$1, init$, void, $WeakPairMap$Pair$Weak*, Object$*, $ReferenceQueue*)},
		{"weakPair", "()Ljava/lang/WeakPairMap$Pair$Weak;", "()Ljava/lang/WeakPairMap$Pair$Weak<**>;", 0, $virtualMethod(WeakPairMap$Pair$Weak$1, weakPair, $WeakPairMap$Pair$Weak*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.WeakPairMap$Pair$Weak",
		"<init>",
		"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.WeakPairMap$Pair", "java.lang.WeakPairMap", "Pair", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.lang.WeakPairMap$Pair$Weak", "java.lang.WeakPairMap$Pair", "Weak", $PUBLIC | $STATIC | $FINAL},
		{"java.lang.WeakPairMap$Pair$Weak$1", nullptr, nullptr, 0},
		{"java.lang.WeakPairMap$WeakRefPeer", "java.lang.WeakPairMap", "WeakRefPeer", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.WeakPairMap$Pair$Weak$1",
		"java.lang.WeakPairMap$WeakRefPeer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/WeakPairMap$WeakRefPeer<TK2;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.WeakPairMap"
	};
	$loadClass(WeakPairMap$Pair$Weak$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakPairMap$Pair$Weak$1);
	});
	return class$;
}

$Class* WeakPairMap$Pair$Weak$1::class$ = nullptr;

	} // lang
} // java