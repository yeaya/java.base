#include <java/util/concurrent/locks/StampedLock$WriterNode.h>
#include <java/util/concurrent/locks/StampedLock$Node.h>
#include <java/util/concurrent/locks/StampedLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StampedLock$Node = ::java::util::concurrent::locks::StampedLock$Node;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

void StampedLock$WriterNode::init$() {
	$StampedLock$Node::init$();
}

StampedLock$WriterNode::StampedLock$WriterNode() {
}

$Class* StampedLock$WriterNode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StampedLock$WriterNode, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.StampedLock$WriterNode", "java.util.concurrent.locks.StampedLock", "WriterNode", $STATIC | $FINAL},
		{"java.util.concurrent.locks.StampedLock$Node", "java.util.concurrent.locks.StampedLock", "Node", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.locks.StampedLock$WriterNode",
		"java.util.concurrent.locks.StampedLock$Node",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.locks.StampedLock"
	};
	$loadClass(StampedLock$WriterNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StampedLock$WriterNode);
	});
	return class$;
}

$Class* StampedLock$WriterNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java