#include <java/lang/WeakPairMap$Pair$Weak.h>

#include <java/lang/WeakPairMap$Pair$Weak$1.h>
#include <java/lang/WeakPairMap$Pair.h>
#include <java/lang/WeakPairMap$WeakRefPeer.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakPairMap$Pair = ::java::lang::WeakPairMap$Pair;
using $WeakPairMap$Pair$Weak$1 = ::java::lang::WeakPairMap$Pair$Weak$1;
using $WeakPairMap$WeakRefPeer = ::java::lang::WeakPairMap$WeakRefPeer;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace java {
	namespace lang {

$FieldInfo _WeakPairMap$Pair$Weak_FieldInfo_[] = {
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(WeakPairMap$Pair$Weak, hash)},
	{"peer", "Ljava/lang/WeakPairMap$WeakRefPeer;", "Ljava/lang/WeakPairMap$WeakRefPeer<TK2;>;", $PRIVATE | $FINAL, $field(WeakPairMap$Pair$Weak, peer)},
	{}
};

$MethodInfo _WeakPairMap$Pair$Weak_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TK1;TK2;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;)V", 0, $method(WeakPairMap$Pair$Weak, init$, void, Object$*, Object$*, $ReferenceQueue*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(WeakPairMap$Pair$Weak, equals, bool, Object$*)},
	{"first", "()Ljava/lang/Object;", "()TK1;", $PUBLIC, $virtualMethod(WeakPairMap$Pair$Weak, first, $Object*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(WeakPairMap$Pair$Weak, hashCode, int32_t)},
	{"second", "()Ljava/lang/Object;", "()TK2;", $PUBLIC, $virtualMethod(WeakPairMap$Pair$Weak, second, $Object*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"weakPair", "()Ljava/lang/WeakPairMap$Pair$Weak;", "()Ljava/lang/WeakPairMap$Pair$Weak<**>;", 0, $virtualMethod(WeakPairMap$Pair$Weak, weakPair, WeakPairMap$Pair$Weak*)},
	{}
};

$InnerClassInfo _WeakPairMap$Pair$Weak_InnerClassesInfo_[] = {
	{"java.lang.WeakPairMap$Pair", "java.lang.WeakPairMap", "Pair", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.lang.WeakPairMap$Pair$Weak", "java.lang.WeakPairMap$Pair", "Weak", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.WeakPairMap$WeakRefPeer", "java.lang.WeakPairMap", "WeakRefPeer", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.lang.WeakPairMap$Pair$Weak$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WeakPairMap$Pair$Weak_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.WeakPairMap$Pair$Weak",
	"java.lang.WeakPairMap$WeakRefPeer",
	"java.lang.WeakPairMap$Pair",
	_WeakPairMap$Pair$Weak_FieldInfo_,
	_WeakPairMap$Pair$Weak_MethodInfo_,
	"<K1:Ljava/lang/Object;K2:Ljava/lang/Object;>Ljava/lang/WeakPairMap$WeakRefPeer<TK1;>;Ljava/lang/WeakPairMap$Pair<TK1;TK2;>;",
	nullptr,
	_WeakPairMap$Pair$Weak_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.WeakPairMap"
};

$Object* allocate$WeakPairMap$Pair$Weak($Class* clazz) {
	return $of($alloc(WeakPairMap$Pair$Weak));
}

$Object* WeakPairMap$Pair$Weak::clone() {
	 return this->$WeakPairMap$WeakRefPeer::clone();
}

$String* WeakPairMap$Pair$Weak::toString() {
	 return this->$WeakPairMap$WeakRefPeer::toString();
}

void WeakPairMap$Pair$Weak::finalize() {
	this->$WeakPairMap$WeakRefPeer::finalize();
}

void WeakPairMap$Pair$Weak::init$(Object$* k1, Object$* k2, $ReferenceQueue* queue) {
	$WeakPairMap$WeakRefPeer::init$(k1, queue);
	this->hash = $WeakPairMap$Pair::hashCode(k1, k2);
	$set(this, peer, $new($WeakPairMap$Pair$Weak$1, this, k2, queue));
}

WeakPairMap$Pair$Weak* WeakPairMap$Pair$Weak::weakPair() {
	return this;
}

$Object* WeakPairMap$Pair$Weak::first() {
	return $of(get());
}

$Object* WeakPairMap$Pair$Weak::second() {
	return $of($nc(this->peer)->get());
}

int32_t WeakPairMap$Pair$Weak::hashCode() {
	return this->hash;
}

bool WeakPairMap$Pair$Weak::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $equals(this, obj);
	if (!var$0) {
		bool var$1 = $instanceOf($WeakPairMap$Pair, obj);
		if (var$1) {
			$var($Object, var$2, first());
			var$1 = $WeakPairMap$Pair::equals(var$2, $(second()), $cast($WeakPairMap$Pair, obj));
		}
		var$0 = (var$1);
	}
	return var$0;
}

WeakPairMap$Pair$Weak::WeakPairMap$Pair$Weak() {
}

$Class* WeakPairMap$Pair$Weak::load$($String* name, bool initialize) {
	$loadClass(WeakPairMap$Pair$Weak, name, initialize, &_WeakPairMap$Pair$Weak_ClassInfo_, allocate$WeakPairMap$Pair$Weak);
	return class$;
}

$Class* WeakPairMap$Pair$Weak::class$ = nullptr;

	} // lang
} // java