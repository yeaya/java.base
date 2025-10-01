#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionNode.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ForkJoinPool$ManagedBlocker = ::java::util::concurrent::ForkJoinPool$ManagedBlocker;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;
using $AbstractQueuedSynchronizer$Node = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _AbstractQueuedSynchronizer$ConditionNode_FieldInfo_[] = {
	{"nextWaiter", "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionNode;", nullptr, 0, $field(AbstractQueuedSynchronizer$ConditionNode, nextWaiter)},
	{}
};

$MethodInfo _AbstractQueuedSynchronizer$ConditionNode_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AbstractQueuedSynchronizer$ConditionNode::*)()>(&AbstractQueuedSynchronizer$ConditionNode::init$))},
	{"block", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isReleasable", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractQueuedSynchronizer$ConditionNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionNode", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "ConditionNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "Node", $STATIC | $ABSTRACT},
	{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AbstractQueuedSynchronizer$ConditionNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionNode",
	"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node",
	"java.util.concurrent.ForkJoinPool$ManagedBlocker",
	_AbstractQueuedSynchronizer$ConditionNode_FieldInfo_,
	_AbstractQueuedSynchronizer$ConditionNode_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractQueuedSynchronizer$ConditionNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.AbstractQueuedSynchronizer"
};

$Object* allocate$AbstractQueuedSynchronizer$ConditionNode($Class* clazz) {
	return $of($alloc(AbstractQueuedSynchronizer$ConditionNode));
}

int32_t AbstractQueuedSynchronizer$ConditionNode::hashCode() {
	 return this->$AbstractQueuedSynchronizer$Node::hashCode();
}

bool AbstractQueuedSynchronizer$ConditionNode::equals(Object$* obj) {
	 return this->$AbstractQueuedSynchronizer$Node::equals(obj);
}

$Object* AbstractQueuedSynchronizer$ConditionNode::clone() {
	 return this->$AbstractQueuedSynchronizer$Node::clone();
}

$String* AbstractQueuedSynchronizer$ConditionNode::toString() {
	 return this->$AbstractQueuedSynchronizer$Node::toString();
}

void AbstractQueuedSynchronizer$ConditionNode::finalize() {
	this->$AbstractQueuedSynchronizer$Node::finalize();
}

void AbstractQueuedSynchronizer$ConditionNode::init$() {
	$AbstractQueuedSynchronizer$Node::init$();
}

bool AbstractQueuedSynchronizer$ConditionNode::isReleasable() {
	return this->status <= 1 || $($Thread::currentThread())->isInterrupted();
}

bool AbstractQueuedSynchronizer$ConditionNode::block() {
	while (!isReleasable()) {
		$LockSupport::park();
	}
	return true;
}

AbstractQueuedSynchronizer$ConditionNode::AbstractQueuedSynchronizer$ConditionNode() {
}

$Class* AbstractQueuedSynchronizer$ConditionNode::load$($String* name, bool initialize) {
	$loadClass(AbstractQueuedSynchronizer$ConditionNode, name, initialize, &_AbstractQueuedSynchronizer$ConditionNode_ClassInfo_, allocate$AbstractQueuedSynchronizer$ConditionNode);
	return class$;
}

$Class* AbstractQueuedSynchronizer$ConditionNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java