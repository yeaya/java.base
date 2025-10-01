#include <java/lang/WeakPairMap$Pair$Weak$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/WeakPairMap$Pair$Weak.h>
#include <java/lang/WeakPairMap$WeakRefPeer.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _WeakPairMap$Pair$Weak$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/WeakPairMap$Pair$Weak;", nullptr, $FINAL | $SYNTHETIC, $field(WeakPairMap$Pair$Weak$1, this$0)},
	{}
};

$MethodInfo _WeakPairMap$Pair$Weak$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/WeakPairMap$Pair$Weak;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", nullptr, 0, $method(static_cast<void(WeakPairMap$Pair$Weak$1::*)($WeakPairMap$Pair$Weak*,Object$*,$ReferenceQueue*)>(&WeakPairMap$Pair$Weak$1::init$))},
	{"weakPair", "()Ljava/lang/WeakPairMap$Pair$Weak;", "()Ljava/lang/WeakPairMap$Pair$Weak<**>;", 0},
	{}
};

$EnclosingMethodInfo _WeakPairMap$Pair$Weak$1_EnclosingMethodInfo_ = {
	"java.lang.WeakPairMap$Pair$Weak",
	"<init>",
	"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V"
};

$InnerClassInfo _WeakPairMap$Pair$Weak$1_InnerClassesInfo_[] = {
	{"java.lang.WeakPairMap$Pair", "java.lang.WeakPairMap", "Pair", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.lang.WeakPairMap$Pair$Weak", "java.lang.WeakPairMap$Pair", "Weak", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.WeakPairMap$Pair$Weak$1", nullptr, nullptr, 0},
	{"java.lang.WeakPairMap$WeakRefPeer", "java.lang.WeakPairMap", "WeakRefPeer", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _WeakPairMap$Pair$Weak$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.WeakPairMap$Pair$Weak$1",
	"java.lang.WeakPairMap$WeakRefPeer",
	nullptr,
	_WeakPairMap$Pair$Weak$1_FieldInfo_,
	_WeakPairMap$Pair$Weak$1_MethodInfo_,
	"Ljava/lang/WeakPairMap$WeakRefPeer<TK2;>;",
	&_WeakPairMap$Pair$Weak$1_EnclosingMethodInfo_,
	_WeakPairMap$Pair$Weak$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.WeakPairMap"
};

$Object* allocate$WeakPairMap$Pair$Weak$1($Class* clazz) {
	return $of($alloc(WeakPairMap$Pair$Weak$1));
}

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
	$loadClass(WeakPairMap$Pair$Weak$1, name, initialize, &_WeakPairMap$Pair$Weak$1_ClassInfo_, allocate$WeakPairMap$Pair$Weak$1);
	return class$;
}

$Class* WeakPairMap$Pair$Weak$1::class$ = nullptr;

	} // lang
} // java