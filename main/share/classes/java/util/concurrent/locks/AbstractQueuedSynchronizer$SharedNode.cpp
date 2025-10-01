#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$SharedNode.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;
using $AbstractQueuedSynchronizer$Node = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$MethodInfo _AbstractQueuedSynchronizer$SharedNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AbstractQueuedSynchronizer$SharedNode::*)()>(&AbstractQueuedSynchronizer$SharedNode::init$))},
	{}
};

$InnerClassInfo _AbstractQueuedSynchronizer$SharedNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$SharedNode", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "SharedNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "Node", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractQueuedSynchronizer$SharedNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.AbstractQueuedSynchronizer$SharedNode",
	"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node",
	nullptr,
	nullptr,
	_AbstractQueuedSynchronizer$SharedNode_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractQueuedSynchronizer$SharedNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.AbstractQueuedSynchronizer"
};

$Object* allocate$AbstractQueuedSynchronizer$SharedNode($Class* clazz) {
	return $of($alloc(AbstractQueuedSynchronizer$SharedNode));
}

void AbstractQueuedSynchronizer$SharedNode::init$() {
	$AbstractQueuedSynchronizer$Node::init$();
}

AbstractQueuedSynchronizer$SharedNode::AbstractQueuedSynchronizer$SharedNode() {
}

$Class* AbstractQueuedSynchronizer$SharedNode::load$($String* name, bool initialize) {
	$loadClass(AbstractQueuedSynchronizer$SharedNode, name, initialize, &_AbstractQueuedSynchronizer$SharedNode_ClassInfo_, allocate$AbstractQueuedSynchronizer$SharedNode);
	return class$;
}

$Class* AbstractQueuedSynchronizer$SharedNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java