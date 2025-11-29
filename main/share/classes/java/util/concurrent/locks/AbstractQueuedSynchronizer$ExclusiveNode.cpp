#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ExclusiveNode.h>

#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueuedSynchronizer$Node = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$MethodInfo _AbstractQueuedSynchronizer$ExclusiveNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AbstractQueuedSynchronizer$ExclusiveNode::*)()>(&AbstractQueuedSynchronizer$ExclusiveNode::init$))},
	{}
};

$InnerClassInfo _AbstractQueuedSynchronizer$ExclusiveNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$ExclusiveNode", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "ExclusiveNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "Node", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractQueuedSynchronizer$ExclusiveNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.AbstractQueuedSynchronizer$ExclusiveNode",
	"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node",
	nullptr,
	nullptr,
	_AbstractQueuedSynchronizer$ExclusiveNode_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractQueuedSynchronizer$ExclusiveNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.AbstractQueuedSynchronizer"
};

$Object* allocate$AbstractQueuedSynchronizer$ExclusiveNode($Class* clazz) {
	return $of($alloc(AbstractQueuedSynchronizer$ExclusiveNode));
}

void AbstractQueuedSynchronizer$ExclusiveNode::init$() {
	$AbstractQueuedSynchronizer$Node::init$();
}

AbstractQueuedSynchronizer$ExclusiveNode::AbstractQueuedSynchronizer$ExclusiveNode() {
}

$Class* AbstractQueuedSynchronizer$ExclusiveNode::load$($String* name, bool initialize) {
	$loadClass(AbstractQueuedSynchronizer$ExclusiveNode, name, initialize, &_AbstractQueuedSynchronizer$ExclusiveNode_ClassInfo_, allocate$AbstractQueuedSynchronizer$ExclusiveNode);
	return class$;
}

$Class* AbstractQueuedSynchronizer$ExclusiveNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java