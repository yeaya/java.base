#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
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
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

int64_t AbstractQueuedSynchronizer$Node::STATUS = 0;
int64_t AbstractQueuedSynchronizer$Node::NEXT = 0;
int64_t AbstractQueuedSynchronizer$Node::PREV = 0;

void AbstractQueuedSynchronizer$Node::init$() {
}

bool AbstractQueuedSynchronizer$Node::casPrev(AbstractQueuedSynchronizer$Node* c, AbstractQueuedSynchronizer$Node* v) {
	$init($AbstractQueuedSynchronizer);
	return $nc($AbstractQueuedSynchronizer::U)->weakCompareAndSetReference(this, AbstractQueuedSynchronizer$Node::PREV, c, v);
}

bool AbstractQueuedSynchronizer$Node::casNext(AbstractQueuedSynchronizer$Node* c, AbstractQueuedSynchronizer$Node* v) {
	$init($AbstractQueuedSynchronizer);
	return $nc($AbstractQueuedSynchronizer::U)->weakCompareAndSetReference(this, AbstractQueuedSynchronizer$Node::NEXT, c, v);
}

int32_t AbstractQueuedSynchronizer$Node::getAndUnsetStatus(int32_t v) {
	$init($AbstractQueuedSynchronizer);
	return $nc($AbstractQueuedSynchronizer::U)->getAndBitwiseAndInt(this, AbstractQueuedSynchronizer$Node::STATUS, ~v);
}

void AbstractQueuedSynchronizer$Node::setPrevRelaxed(AbstractQueuedSynchronizer$Node* p) {
	$init($AbstractQueuedSynchronizer);
	$nc($AbstractQueuedSynchronizer::U)->putReference(this, AbstractQueuedSynchronizer$Node::PREV, p);
}

void AbstractQueuedSynchronizer$Node::setStatusRelaxed(int32_t s) {
	$init($AbstractQueuedSynchronizer);
	$nc($AbstractQueuedSynchronizer::U)->putInt(this, AbstractQueuedSynchronizer$Node::STATUS, s);
}

void AbstractQueuedSynchronizer$Node::clearStatus() {
	$init($AbstractQueuedSynchronizer);
	$nc($AbstractQueuedSynchronizer::U)->putIntOpaque(this, AbstractQueuedSynchronizer$Node::STATUS, 0);
}

void AbstractQueuedSynchronizer$Node::clinit$($Class* clazz) {
	$init($AbstractQueuedSynchronizer);
	AbstractQueuedSynchronizer$Node::STATUS = $nc($AbstractQueuedSynchronizer::U)->objectFieldOffset(AbstractQueuedSynchronizer$Node::class$, "status"_s);
	AbstractQueuedSynchronizer$Node::NEXT = $AbstractQueuedSynchronizer::U->objectFieldOffset(AbstractQueuedSynchronizer$Node::class$, "next"_s);
	AbstractQueuedSynchronizer$Node::PREV = $AbstractQueuedSynchronizer::U->objectFieldOffset(AbstractQueuedSynchronizer$Node::class$, "prev"_s);
}

AbstractQueuedSynchronizer$Node::AbstractQueuedSynchronizer$Node() {
}

$Class* AbstractQueuedSynchronizer$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prev", "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", nullptr, $VOLATILE, $field(AbstractQueuedSynchronizer$Node, prev)},
		{"next", "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", nullptr, $VOLATILE, $field(AbstractQueuedSynchronizer$Node, next)},
		{"waiter", "Ljava/lang/Thread;", nullptr, 0, $field(AbstractQueuedSynchronizer$Node, waiter)},
		{"status", "I", nullptr, $VOLATILE, $field(AbstractQueuedSynchronizer$Node, status)},
		{"STATUS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedSynchronizer$Node, STATUS)},
		{"NEXT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedSynchronizer$Node, NEXT)},
		{"PREV", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedSynchronizer$Node, PREV)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AbstractQueuedSynchronizer$Node, init$, void)},
		{"casNext", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", nullptr, $FINAL, $method(AbstractQueuedSynchronizer$Node, casNext, bool, AbstractQueuedSynchronizer$Node*, AbstractQueuedSynchronizer$Node*)},
		{"casPrev", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", nullptr, $FINAL, $method(AbstractQueuedSynchronizer$Node, casPrev, bool, AbstractQueuedSynchronizer$Node*, AbstractQueuedSynchronizer$Node*)},
		{"clearStatus", "()V", nullptr, $FINAL, $method(AbstractQueuedSynchronizer$Node, clearStatus, void)},
		{"getAndUnsetStatus", "(I)I", nullptr, $FINAL, $method(AbstractQueuedSynchronizer$Node, getAndUnsetStatus, int32_t, int32_t)},
		{"setPrevRelaxed", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V", nullptr, $FINAL, $method(AbstractQueuedSynchronizer$Node, setPrevRelaxed, void, AbstractQueuedSynchronizer$Node*)},
		{"setStatusRelaxed", "(I)V", nullptr, $FINAL, $method(AbstractQueuedSynchronizer$Node, setStatusRelaxed, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "Node", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node",
		"java.lang.Object",
		nullptr,
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
	$loadClass(AbstractQueuedSynchronizer$Node, name, initialize, &classInfo$$, AbstractQueuedSynchronizer$Node::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractQueuedSynchronizer$Node);
	});
	return class$;
}

$Class* AbstractQueuedSynchronizer$Node::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java