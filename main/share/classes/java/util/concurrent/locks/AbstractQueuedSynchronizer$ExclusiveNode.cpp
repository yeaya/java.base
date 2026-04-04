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

void AbstractQueuedSynchronizer$ExclusiveNode::init$() {
	$AbstractQueuedSynchronizer$Node::init$();
}

AbstractQueuedSynchronizer$ExclusiveNode::AbstractQueuedSynchronizer$ExclusiveNode() {
}

$Class* AbstractQueuedSynchronizer$ExclusiveNode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AbstractQueuedSynchronizer$ExclusiveNode, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.AbstractQueuedSynchronizer$ExclusiveNode", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "ExclusiveNode", $STATIC | $FINAL},
		{"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "Node", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.locks.AbstractQueuedSynchronizer$ExclusiveNode",
		"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.locks.AbstractQueuedSynchronizer"
	};
	$loadClass(AbstractQueuedSynchronizer$ExclusiveNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractQueuedSynchronizer$ExclusiveNode);
	});
	return class$;
}

$Class* AbstractQueuedSynchronizer$ExclusiveNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java