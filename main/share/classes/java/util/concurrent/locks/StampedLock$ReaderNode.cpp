#include <java/util/concurrent/locks/StampedLock$ReaderNode.h>

#include <java/util/concurrent/locks/StampedLock$Node.h>
#include <java/util/concurrent/locks/StampedLock.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef COWAITERS
#undef U

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StampedLock = ::java::util::concurrent::locks::StampedLock;
using $StampedLock$Node = ::java::util::concurrent::locks::StampedLock$Node;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _StampedLock$ReaderNode_FieldInfo_[] = {
	{"cowaiters", "Ljava/util/concurrent/locks/StampedLock$ReaderNode;", nullptr, $VOLATILE, $field(StampedLock$ReaderNode, cowaiters)},
	{"COWAITERS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StampedLock$ReaderNode, COWAITERS)},
	{}
};

$MethodInfo _StampedLock$ReaderNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(StampedLock$ReaderNode, init$, void)},
	{"casCowaiters", "(Ljava/util/concurrent/locks/StampedLock$ReaderNode;Ljava/util/concurrent/locks/StampedLock$ReaderNode;)Z", nullptr, $FINAL, $method(StampedLock$ReaderNode, casCowaiters, bool, StampedLock$ReaderNode*, StampedLock$ReaderNode*)},
	{"setCowaitersRelaxed", "(Ljava/util/concurrent/locks/StampedLock$ReaderNode;)V", nullptr, $FINAL, $method(StampedLock$ReaderNode, setCowaitersRelaxed, void, StampedLock$ReaderNode*)},
	{}
};

$InnerClassInfo _StampedLock$ReaderNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.StampedLock$ReaderNode", "java.util.concurrent.locks.StampedLock", "ReaderNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.StampedLock$Node", "java.util.concurrent.locks.StampedLock", "Node", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StampedLock$ReaderNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.StampedLock$ReaderNode",
	"java.util.concurrent.locks.StampedLock$Node",
	nullptr,
	_StampedLock$ReaderNode_FieldInfo_,
	_StampedLock$ReaderNode_MethodInfo_,
	nullptr,
	nullptr,
	_StampedLock$ReaderNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.StampedLock"
};

$Object* allocate$StampedLock$ReaderNode($Class* clazz) {
	return $of($alloc(StampedLock$ReaderNode));
}

int64_t StampedLock$ReaderNode::COWAITERS = 0;

void StampedLock$ReaderNode::init$() {
	$StampedLock$Node::init$();
}

bool StampedLock$ReaderNode::casCowaiters(StampedLock$ReaderNode* c, StampedLock$ReaderNode* v) {
	$init($StampedLock);
	return $nc($StampedLock::U)->weakCompareAndSetReference(this, StampedLock$ReaderNode::COWAITERS, c, v);
}

void StampedLock$ReaderNode::setCowaitersRelaxed(StampedLock$ReaderNode* p) {
	$init($StampedLock);
	$nc($StampedLock::U)->putReference(this, StampedLock$ReaderNode::COWAITERS, p);
}

void clinit$StampedLock$ReaderNode($Class* class$) {
	$init($StampedLock);
	StampedLock$ReaderNode::COWAITERS = $nc($StampedLock::U)->objectFieldOffset(StampedLock$ReaderNode::class$, "cowaiters"_s);
}

StampedLock$ReaderNode::StampedLock$ReaderNode() {
}

$Class* StampedLock$ReaderNode::load$($String* name, bool initialize) {
	$loadClass(StampedLock$ReaderNode, name, initialize, &_StampedLock$ReaderNode_ClassInfo_, clinit$StampedLock$ReaderNode, allocate$StampedLock$ReaderNode);
	return class$;
}

$Class* StampedLock$ReaderNode::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java