#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionNode.h>

#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueuedLongSynchronizer$Node = ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _AbstractQueuedLongSynchronizer$ConditionNode_FieldInfo_[] = {
	{"nextWaiter", "Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionNode;", nullptr, 0, $field(AbstractQueuedLongSynchronizer$ConditionNode, nextWaiter)},
	{}
};

$MethodInfo _AbstractQueuedLongSynchronizer$ConditionNode_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AbstractQueuedLongSynchronizer$ConditionNode::*)()>(&AbstractQueuedLongSynchronizer$ConditionNode::init$))},
	{"block", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isReleasable", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractQueuedLongSynchronizer$ConditionNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionNode", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "ConditionNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "Node", $STATIC | $ABSTRACT},
	{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AbstractQueuedLongSynchronizer$ConditionNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionNode",
	"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node",
	"java.util.concurrent.ForkJoinPool$ManagedBlocker",
	_AbstractQueuedLongSynchronizer$ConditionNode_FieldInfo_,
	_AbstractQueuedLongSynchronizer$ConditionNode_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractQueuedLongSynchronizer$ConditionNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.AbstractQueuedLongSynchronizer"
};

$Object* allocate$AbstractQueuedLongSynchronizer$ConditionNode($Class* clazz) {
	return $of($alloc(AbstractQueuedLongSynchronizer$ConditionNode));
}

int32_t AbstractQueuedLongSynchronizer$ConditionNode::hashCode() {
	 return this->$AbstractQueuedLongSynchronizer$Node::hashCode();
}

bool AbstractQueuedLongSynchronizer$ConditionNode::equals(Object$* obj) {
	 return this->$AbstractQueuedLongSynchronizer$Node::equals(obj);
}

$Object* AbstractQueuedLongSynchronizer$ConditionNode::clone() {
	 return this->$AbstractQueuedLongSynchronizer$Node::clone();
}

$String* AbstractQueuedLongSynchronizer$ConditionNode::toString() {
	 return this->$AbstractQueuedLongSynchronizer$Node::toString();
}

void AbstractQueuedLongSynchronizer$ConditionNode::finalize() {
	this->$AbstractQueuedLongSynchronizer$Node::finalize();
}

void AbstractQueuedLongSynchronizer$ConditionNode::init$() {
	$AbstractQueuedLongSynchronizer$Node::init$();
}

bool AbstractQueuedLongSynchronizer$ConditionNode::isReleasable() {
	return this->status <= 1 || $($Thread::currentThread())->isInterrupted();
}

bool AbstractQueuedLongSynchronizer$ConditionNode::block() {
	while (!isReleasable()) {
		$LockSupport::park();
	}
	return true;
}

AbstractQueuedLongSynchronizer$ConditionNode::AbstractQueuedLongSynchronizer$ConditionNode() {
}

$Class* AbstractQueuedLongSynchronizer$ConditionNode::load$($String* name, bool initialize) {
	$loadClass(AbstractQueuedLongSynchronizer$ConditionNode, name, initialize, &_AbstractQueuedLongSynchronizer$ConditionNode_ClassInfo_, allocate$AbstractQueuedLongSynchronizer$ConditionNode);
	return class$;
}

$Class* AbstractQueuedLongSynchronizer$ConditionNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java