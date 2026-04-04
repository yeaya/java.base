#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer.h>
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
using $AbstractQueuedLongSynchronizer = ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

int64_t AbstractQueuedLongSynchronizer$Node::STATUS = 0;
int64_t AbstractQueuedLongSynchronizer$Node::NEXT = 0;
int64_t AbstractQueuedLongSynchronizer$Node::PREV = 0;

void AbstractQueuedLongSynchronizer$Node::init$() {
}

bool AbstractQueuedLongSynchronizer$Node::casPrev(AbstractQueuedLongSynchronizer$Node* c, AbstractQueuedLongSynchronizer$Node* v) {
	$init($AbstractQueuedLongSynchronizer);
	return $nc($AbstractQueuedLongSynchronizer::U)->weakCompareAndSetReference(this, AbstractQueuedLongSynchronizer$Node::PREV, c, v);
}

bool AbstractQueuedLongSynchronizer$Node::casNext(AbstractQueuedLongSynchronizer$Node* c, AbstractQueuedLongSynchronizer$Node* v) {
	$init($AbstractQueuedLongSynchronizer);
	return $nc($AbstractQueuedLongSynchronizer::U)->weakCompareAndSetReference(this, AbstractQueuedLongSynchronizer$Node::NEXT, c, v);
}

int32_t AbstractQueuedLongSynchronizer$Node::getAndUnsetStatus(int32_t v) {
	$init($AbstractQueuedLongSynchronizer);
	return $nc($AbstractQueuedLongSynchronizer::U)->getAndBitwiseAndInt(this, AbstractQueuedLongSynchronizer$Node::STATUS, ~v);
}

void AbstractQueuedLongSynchronizer$Node::setPrevRelaxed(AbstractQueuedLongSynchronizer$Node* p) {
	$init($AbstractQueuedLongSynchronizer);
	$nc($AbstractQueuedLongSynchronizer::U)->putReference(this, AbstractQueuedLongSynchronizer$Node::PREV, p);
}

void AbstractQueuedLongSynchronizer$Node::setStatusRelaxed(int32_t s) {
	$init($AbstractQueuedLongSynchronizer);
	$nc($AbstractQueuedLongSynchronizer::U)->putInt(this, AbstractQueuedLongSynchronizer$Node::STATUS, s);
}

void AbstractQueuedLongSynchronizer$Node::clearStatus() {
	$init($AbstractQueuedLongSynchronizer);
	$nc($AbstractQueuedLongSynchronizer::U)->putIntOpaque(this, AbstractQueuedLongSynchronizer$Node::STATUS, 0);
}

void AbstractQueuedLongSynchronizer$Node::clinit$($Class* clazz) {
	$init($AbstractQueuedLongSynchronizer);
	AbstractQueuedLongSynchronizer$Node::STATUS = $nc($AbstractQueuedLongSynchronizer::U)->objectFieldOffset(AbstractQueuedLongSynchronizer$Node::class$, "status"_s);
	AbstractQueuedLongSynchronizer$Node::NEXT = $AbstractQueuedLongSynchronizer::U->objectFieldOffset(AbstractQueuedLongSynchronizer$Node::class$, "next"_s);
	AbstractQueuedLongSynchronizer$Node::PREV = $AbstractQueuedLongSynchronizer::U->objectFieldOffset(AbstractQueuedLongSynchronizer$Node::class$, "prev"_s);
}

AbstractQueuedLongSynchronizer$Node::AbstractQueuedLongSynchronizer$Node() {
}

$Class* AbstractQueuedLongSynchronizer$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prev", "Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;", nullptr, $VOLATILE, $field(AbstractQueuedLongSynchronizer$Node, prev)},
		{"next", "Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;", nullptr, $VOLATILE, $field(AbstractQueuedLongSynchronizer$Node, next)},
		{"waiter", "Ljava/lang/Thread;", nullptr, 0, $field(AbstractQueuedLongSynchronizer$Node, waiter)},
		{"status", "I", nullptr, $VOLATILE, $field(AbstractQueuedLongSynchronizer$Node, status)},
		{"STATUS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedLongSynchronizer$Node, STATUS)},
		{"NEXT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedLongSynchronizer$Node, NEXT)},
		{"PREV", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedLongSynchronizer$Node, PREV)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AbstractQueuedLongSynchronizer$Node, init$, void)},
		{"casNext", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;)Z", nullptr, $FINAL, $method(AbstractQueuedLongSynchronizer$Node, casNext, bool, AbstractQueuedLongSynchronizer$Node*, AbstractQueuedLongSynchronizer$Node*)},
		{"casPrev", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;)Z", nullptr, $FINAL, $method(AbstractQueuedLongSynchronizer$Node, casPrev, bool, AbstractQueuedLongSynchronizer$Node*, AbstractQueuedLongSynchronizer$Node*)},
		{"clearStatus", "()V", nullptr, $FINAL, $method(AbstractQueuedLongSynchronizer$Node, clearStatus, void)},
		{"getAndUnsetStatus", "(I)I", nullptr, $FINAL, $method(AbstractQueuedLongSynchronizer$Node, getAndUnsetStatus, int32_t, int32_t)},
		{"setPrevRelaxed", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;)V", nullptr, $FINAL, $method(AbstractQueuedLongSynchronizer$Node, setPrevRelaxed, void, AbstractQueuedLongSynchronizer$Node*)},
		{"setStatusRelaxed", "(I)V", nullptr, $FINAL, $method(AbstractQueuedLongSynchronizer$Node, setStatusRelaxed, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "Node", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node",
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
		"java.util.concurrent.locks.AbstractQueuedLongSynchronizer"
	};
	$loadClass(AbstractQueuedLongSynchronizer$Node, name, initialize, &classInfo$$, AbstractQueuedLongSynchronizer$Node::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractQueuedLongSynchronizer$Node);
	});
	return class$;
}

$Class* AbstractQueuedLongSynchronizer$Node::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java