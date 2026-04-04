#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$SharedNode.h>
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

void AbstractQueuedLongSynchronizer$SharedNode::init$() {
	$AbstractQueuedLongSynchronizer$Node::init$();
}

AbstractQueuedLongSynchronizer$SharedNode::AbstractQueuedLongSynchronizer$SharedNode() {
}

$Class* AbstractQueuedLongSynchronizer$SharedNode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AbstractQueuedLongSynchronizer$SharedNode, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$SharedNode", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "SharedNode", $STATIC | $FINAL},
		{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "Node", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$SharedNode",
		"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.locks.AbstractQueuedLongSynchronizer"
	};
	$loadClass(AbstractQueuedLongSynchronizer$SharedNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractQueuedLongSynchronizer$SharedNode);
	});
	return class$;
}

$Class* AbstractQueuedLongSynchronizer$SharedNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java