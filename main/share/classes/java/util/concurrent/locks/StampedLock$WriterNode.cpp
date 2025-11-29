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

$MethodInfo _StampedLock$WriterNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StampedLock$WriterNode::*)()>(&StampedLock$WriterNode::init$))},
	{}
};

$InnerClassInfo _StampedLock$WriterNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.StampedLock$WriterNode", "java.util.concurrent.locks.StampedLock", "WriterNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.StampedLock$Node", "java.util.concurrent.locks.StampedLock", "Node", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StampedLock$WriterNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.StampedLock$WriterNode",
	"java.util.concurrent.locks.StampedLock$Node",
	nullptr,
	nullptr,
	_StampedLock$WriterNode_MethodInfo_,
	nullptr,
	nullptr,
	_StampedLock$WriterNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.StampedLock"
};

$Object* allocate$StampedLock$WriterNode($Class* clazz) {
	return $of($alloc(StampedLock$WriterNode));
}

void StampedLock$WriterNode::init$() {
	$StampedLock$Node::init$();
}

StampedLock$WriterNode::StampedLock$WriterNode() {
}

$Class* StampedLock$WriterNode::load$($String* name, bool initialize) {
	$loadClass(StampedLock$WriterNode, name, initialize, &_StampedLock$WriterNode_ClassInfo_, allocate$StampedLock$WriterNode);
	return class$;
}

$Class* StampedLock$WriterNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java