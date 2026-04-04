#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$SharedNode.h>
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

void AbstractQueuedSynchronizer$SharedNode::init$() {
	$AbstractQueuedSynchronizer$Node::init$();
}

AbstractQueuedSynchronizer$SharedNode::AbstractQueuedSynchronizer$SharedNode() {
}

$Class* AbstractQueuedSynchronizer$SharedNode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AbstractQueuedSynchronizer$SharedNode, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.AbstractQueuedSynchronizer$SharedNode", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "SharedNode", $STATIC | $FINAL},
		{"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "Node", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.locks.AbstractQueuedSynchronizer$SharedNode",
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
	$loadClass(AbstractQueuedSynchronizer$SharedNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractQueuedSynchronizer$SharedNode);
	});
	return class$;
}

$Class* AbstractQueuedSynchronizer$SharedNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java