#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionNode.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueuedSynchronizer$Node = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

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
	$FieldInfo fieldInfos$$[] = {
		{"nextWaiter", "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionNode;", nullptr, 0, $field(AbstractQueuedSynchronizer$ConditionNode, nextWaiter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(AbstractQueuedSynchronizer$ConditionNode, init$, void)},
		{"block", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractQueuedSynchronizer$ConditionNode, block, bool)},
		{"isReleasable", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractQueuedSynchronizer$ConditionNode, isReleasable, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionNode", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "ConditionNode", $STATIC | $FINAL},
		{"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "Node", $STATIC | $ABSTRACT},
		{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionNode",
		"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node",
		"java.util.concurrent.ForkJoinPool$ManagedBlocker",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.locks.AbstractQueuedSynchronizer"
	};
	$loadClass(AbstractQueuedSynchronizer$ConditionNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractQueuedSynchronizer$ConditionNode));
	});
	return class$;
}

$Class* AbstractQueuedSynchronizer$ConditionNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java