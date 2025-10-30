#include <java/util/concurrent/locks/StampedLock$Node.h>

#include <java/util/concurrent/locks/StampedLock.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef NEXT
#undef PREV
#undef STATUS
#undef U

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StampedLock = ::java::util::concurrent::locks::StampedLock;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _StampedLock$Node_FieldInfo_[] = {
	{"prev", "Ljava/util/concurrent/locks/StampedLock$Node;", nullptr, $VOLATILE, $field(StampedLock$Node, prev)},
	{"next", "Ljava/util/concurrent/locks/StampedLock$Node;", nullptr, $VOLATILE, $field(StampedLock$Node, next)},
	{"waiter", "Ljava/lang/Thread;", nullptr, 0, $field(StampedLock$Node, waiter)},
	{"status", "I", nullptr, $VOLATILE, $field(StampedLock$Node, status)},
	{"STATUS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StampedLock$Node, STATUS)},
	{"NEXT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StampedLock$Node, NEXT)},
	{"PREV", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StampedLock$Node, PREV)},
	{}
};

$MethodInfo _StampedLock$Node_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StampedLock$Node::*)()>(&StampedLock$Node::init$))},
	{"casNext", "(Ljava/util/concurrent/locks/StampedLock$Node;Ljava/util/concurrent/locks/StampedLock$Node;)Z", nullptr, $FINAL, $method(static_cast<bool(StampedLock$Node::*)(StampedLock$Node*,StampedLock$Node*)>(&StampedLock$Node::casNext))},
	{"casPrev", "(Ljava/util/concurrent/locks/StampedLock$Node;Ljava/util/concurrent/locks/StampedLock$Node;)Z", nullptr, $FINAL, $method(static_cast<bool(StampedLock$Node::*)(StampedLock$Node*,StampedLock$Node*)>(&StampedLock$Node::casPrev))},
	{"clearStatus", "()V", nullptr, $FINAL, $method(static_cast<void(StampedLock$Node::*)()>(&StampedLock$Node::clearStatus))},
	{"getAndUnsetStatus", "(I)I", nullptr, $FINAL, $method(static_cast<int32_t(StampedLock$Node::*)(int32_t)>(&StampedLock$Node::getAndUnsetStatus))},
	{"setPrevRelaxed", "(Ljava/util/concurrent/locks/StampedLock$Node;)V", nullptr, $FINAL, $method(static_cast<void(StampedLock$Node::*)(StampedLock$Node*)>(&StampedLock$Node::setPrevRelaxed))},
	{"setStatusRelaxed", "(I)V", nullptr, $FINAL, $method(static_cast<void(StampedLock$Node::*)(int32_t)>(&StampedLock$Node::setStatusRelaxed))},
	{}
};

$InnerClassInfo _StampedLock$Node_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.StampedLock$Node", "java.util.concurrent.locks.StampedLock", "Node", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StampedLock$Node_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.locks.StampedLock$Node",
	"java.lang.Object",
	nullptr,
	_StampedLock$Node_FieldInfo_,
	_StampedLock$Node_MethodInfo_,
	nullptr,
	nullptr,
	_StampedLock$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.StampedLock"
};

$Object* allocate$StampedLock$Node($Class* clazz) {
	return $of($alloc(StampedLock$Node));
}

int64_t StampedLock$Node::STATUS = 0;
int64_t StampedLock$Node::NEXT = 0;
int64_t StampedLock$Node::PREV = 0;

void StampedLock$Node::init$() {
}

bool StampedLock$Node::casPrev(StampedLock$Node* c, StampedLock$Node* v) {
	$init($StampedLock);
	return $nc($StampedLock::U)->weakCompareAndSetReference(this, StampedLock$Node::PREV, c, v);
}

bool StampedLock$Node::casNext(StampedLock$Node* c, StampedLock$Node* v) {
	$init($StampedLock);
	return $nc($StampedLock::U)->weakCompareAndSetReference(this, StampedLock$Node::NEXT, c, v);
}

int32_t StampedLock$Node::getAndUnsetStatus(int32_t v) {
	$init($StampedLock);
	return $nc($StampedLock::U)->getAndBitwiseAndInt(this, StampedLock$Node::STATUS, ~v);
}

void StampedLock$Node::setPrevRelaxed(StampedLock$Node* p) {
	$init($StampedLock);
	$nc($StampedLock::U)->putReference(this, StampedLock$Node::PREV, p);
}

void StampedLock$Node::setStatusRelaxed(int32_t s) {
	$init($StampedLock);
	$nc($StampedLock::U)->putInt(this, StampedLock$Node::STATUS, s);
}

void StampedLock$Node::clearStatus() {
	$init($StampedLock);
	$nc($StampedLock::U)->putIntOpaque(this, StampedLock$Node::STATUS, 0);
}

void clinit$StampedLock$Node($Class* class$) {
	$init($StampedLock);
	StampedLock$Node::STATUS = $nc($StampedLock::U)->objectFieldOffset(StampedLock$Node::class$, "status"_s);
	StampedLock$Node::NEXT = $nc($StampedLock::U)->objectFieldOffset(StampedLock$Node::class$, "next"_s);
	StampedLock$Node::PREV = $nc($StampedLock::U)->objectFieldOffset(StampedLock$Node::class$, "prev"_s);
}

StampedLock$Node::StampedLock$Node() {
}

$Class* StampedLock$Node::load$($String* name, bool initialize) {
	$loadClass(StampedLock$Node, name, initialize, &_StampedLock$Node_ClassInfo_, clinit$StampedLock$Node, allocate$StampedLock$Node);
	return class$;
}

$Class* StampedLock$Node::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java