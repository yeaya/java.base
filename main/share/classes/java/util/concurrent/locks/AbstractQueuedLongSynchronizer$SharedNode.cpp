#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$SharedNode.h>

#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueuedLongSynchronizer = ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer;
using $AbstractQueuedLongSynchronizer$Node = ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$MethodInfo _AbstractQueuedLongSynchronizer$SharedNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AbstractQueuedLongSynchronizer$SharedNode::*)()>(&AbstractQueuedLongSynchronizer$SharedNode::init$))},
	{}
};

$InnerClassInfo _AbstractQueuedLongSynchronizer$SharedNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$SharedNode", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "SharedNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "Node", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractQueuedLongSynchronizer$SharedNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$SharedNode",
	"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node",
	nullptr,
	nullptr,
	_AbstractQueuedLongSynchronizer$SharedNode_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractQueuedLongSynchronizer$SharedNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.AbstractQueuedLongSynchronizer"
};

$Object* allocate$AbstractQueuedLongSynchronizer$SharedNode($Class* clazz) {
	return $of($alloc(AbstractQueuedLongSynchronizer$SharedNode));
}

void AbstractQueuedLongSynchronizer$SharedNode::init$() {
	$AbstractQueuedLongSynchronizer$Node::init$();
}

AbstractQueuedLongSynchronizer$SharedNode::AbstractQueuedLongSynchronizer$SharedNode() {
}

$Class* AbstractQueuedLongSynchronizer$SharedNode::load$($String* name, bool initialize) {
	$loadClass(AbstractQueuedLongSynchronizer$SharedNode, name, initialize, &_AbstractQueuedLongSynchronizer$SharedNode_ClassInfo_, allocate$AbstractQueuedLongSynchronizer$SharedNode);
	return class$;
}

$Class* AbstractQueuedLongSynchronizer$SharedNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java