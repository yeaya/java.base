#include <java/util/concurrent/ConcurrentHashMap$ReservationNode.h>

#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ConcurrentHashMap$ReservationNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ConcurrentHashMap$ReservationNode, init$, void)},
	{"find", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node;", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", 0, $virtualMethod(ConcurrentHashMap$ReservationNode, find, $ConcurrentHashMap$Node*, int32_t, Object$*)},
	{}
};

$InnerClassInfo _ConcurrentHashMap$ReservationNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$ReservationNode", "java.util.concurrent.ConcurrentHashMap", "ReservationNode", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$Node", "java.util.concurrent.ConcurrentHashMap", "Node", $STATIC},
	{}
};

$ClassInfo _ConcurrentHashMap$ReservationNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$ReservationNode",
	"java.util.concurrent.ConcurrentHashMap$Node",
	nullptr,
	nullptr,
	_ConcurrentHashMap$ReservationNode_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;",
	nullptr,
	_ConcurrentHashMap$ReservationNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$ReservationNode($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$ReservationNode));
}

void ConcurrentHashMap$ReservationNode::init$() {
	$ConcurrentHashMap$Node::init$(-3, nullptr, nullptr);
}

$ConcurrentHashMap$Node* ConcurrentHashMap$ReservationNode::find(int32_t h, Object$* k) {
	return nullptr;
}

ConcurrentHashMap$ReservationNode::ConcurrentHashMap$ReservationNode() {
}

$Class* ConcurrentHashMap$ReservationNode::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$ReservationNode, name, initialize, &_ConcurrentHashMap$ReservationNode_ClassInfo_, allocate$ConcurrentHashMap$ReservationNode);
	return class$;
}

$Class* ConcurrentHashMap$ReservationNode::class$ = nullptr;

		} // concurrent
	} // util
} // java