#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ExclusiveNode.h>

#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueuedLongSynchronizer$Node = ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$MethodInfo _AbstractQueuedLongSynchronizer$ExclusiveNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AbstractQueuedLongSynchronizer$ExclusiveNode, init$, void)},
	{}
};

$InnerClassInfo _AbstractQueuedLongSynchronizer$ExclusiveNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ExclusiveNode", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "ExclusiveNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "Node", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractQueuedLongSynchronizer$ExclusiveNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ExclusiveNode",
	"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node",
	nullptr,
	nullptr,
	_AbstractQueuedLongSynchronizer$ExclusiveNode_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractQueuedLongSynchronizer$ExclusiveNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.AbstractQueuedLongSynchronizer"
};

$Object* allocate$AbstractQueuedLongSynchronizer$ExclusiveNode($Class* clazz) {
	return $of($alloc(AbstractQueuedLongSynchronizer$ExclusiveNode));
}

void AbstractQueuedLongSynchronizer$ExclusiveNode::init$() {
	$AbstractQueuedLongSynchronizer$Node::init$();
}

AbstractQueuedLongSynchronizer$ExclusiveNode::AbstractQueuedLongSynchronizer$ExclusiveNode() {
}

$Class* AbstractQueuedLongSynchronizer$ExclusiveNode::load$($String* name, bool initialize) {
	$loadClass(AbstractQueuedLongSynchronizer$ExclusiveNode, name, initialize, &_AbstractQueuedLongSynchronizer$ExclusiveNode_ClassInfo_, allocate$AbstractQueuedLongSynchronizer$ExclusiveNode);
	return class$;
}

$Class* AbstractQueuedLongSynchronizer$ExclusiveNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java