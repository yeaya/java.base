#include <java/util/concurrent/LinkedTransferQueue$Node.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/concurrent/LinkedTransferQueue.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

#undef ITEM
#undef NEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedTransferQueue = ::java::util::concurrent::LinkedTransferQueue;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {

void LinkedTransferQueue$Node::init$(Object$* item) {
	$init($LinkedTransferQueue);
	$nc($LinkedTransferQueue::ITEM)->set($$new($ObjectArray, {this, item}));
	this->isData = (item != nullptr);
}

void LinkedTransferQueue$Node::init$() {
	this->isData = true;
}

bool LinkedTransferQueue$Node::casNext(LinkedTransferQueue$Node* cmp, LinkedTransferQueue$Node* val) {
	$init($LinkedTransferQueue);
	return $nc($LinkedTransferQueue::NEXT)->compareAndSet($$new($ObjectArray, {this, cmp, val}));
}

bool LinkedTransferQueue$Node::casItem(Object$* cmp, Object$* val) {
	$init($LinkedTransferQueue);
	return $nc($LinkedTransferQueue::ITEM)->compareAndSet($$new($ObjectArray, {this, cmp, val}));
}

void LinkedTransferQueue$Node::selfLink() {
	$init($LinkedTransferQueue);
	$nc($LinkedTransferQueue::NEXT)->setRelease($$new($ObjectArray, {this, this}));
}

void LinkedTransferQueue$Node::appendRelaxed(LinkedTransferQueue$Node* next) {
	$init($LinkedTransferQueue);
	$nc($LinkedTransferQueue::NEXT)->setOpaque($$new($ObjectArray, {this, next}));
}

bool LinkedTransferQueue$Node::isMatched() {
	return this->isData == (this->item == nullptr);
}

bool LinkedTransferQueue$Node::tryMatch(Object$* cmp, Object$* val) {
	if (casItem(cmp, val)) {
		$LockSupport::unpark(this->waiter);
		return true;
	}
	return false;
}

bool LinkedTransferQueue$Node::cannotPrecede(bool haveData) {
	bool d = this->isData;
	return d != haveData && d != (this->item == nullptr);
}

bool LinkedTransferQueue$Node::isReleasable() {
	return (this->isData == (this->item == nullptr)) || $($Thread::currentThread())->isInterrupted();
}

bool LinkedTransferQueue$Node::block() {
	while (!isReleasable()) {
		$LockSupport::park();
	}
	return true;
}

LinkedTransferQueue$Node::LinkedTransferQueue$Node() {
}

$Class* LinkedTransferQueue$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isData", "Z", nullptr, $FINAL, $field(LinkedTransferQueue$Node, isData)},
		{"item", "Ljava/lang/Object;", nullptr, $VOLATILE, $field(LinkedTransferQueue$Node, item)},
		{"next", "Ljava/util/concurrent/LinkedTransferQueue$Node;", nullptr, $VOLATILE, $field(LinkedTransferQueue$Node, next)},
		{"waiter", "Ljava/lang/Thread;", nullptr, $VOLATILE, $field(LinkedTransferQueue$Node, waiter)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinkedTransferQueue$Node, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, 0, $method(LinkedTransferQueue$Node, init$, void, Object$*)},
		{"<init>", "()V", nullptr, 0, $method(LinkedTransferQueue$Node, init$, void)},
		{"appendRelaxed", "(Ljava/util/concurrent/LinkedTransferQueue$Node;)V", nullptr, $FINAL, $method(LinkedTransferQueue$Node, appendRelaxed, void, LinkedTransferQueue$Node*)},
		{"block", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(LinkedTransferQueue$Node, block, bool)},
		{"cannotPrecede", "(Z)Z", nullptr, $FINAL, $method(LinkedTransferQueue$Node, cannotPrecede, bool, bool)},
		{"casItem", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $FINAL, $method(LinkedTransferQueue$Node, casItem, bool, Object$*, Object$*)},
		{"casNext", "(Ljava/util/concurrent/LinkedTransferQueue$Node;Ljava/util/concurrent/LinkedTransferQueue$Node;)Z", nullptr, $FINAL, $method(LinkedTransferQueue$Node, casNext, bool, LinkedTransferQueue$Node*, LinkedTransferQueue$Node*)},
		{"isMatched", "()Z", nullptr, $FINAL, $method(LinkedTransferQueue$Node, isMatched, bool)},
		{"isReleasable", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(LinkedTransferQueue$Node, isReleasable, bool)},
		{"selfLink", "()V", nullptr, $FINAL, $method(LinkedTransferQueue$Node, selfLink, void)},
		{"tryMatch", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $FINAL, $method(LinkedTransferQueue$Node, tryMatch, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.LinkedTransferQueue$Node", "java.util.concurrent.LinkedTransferQueue", "Node", $STATIC | $FINAL},
		{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.LinkedTransferQueue$Node",
		"java.lang.Object",
		"java.util.concurrent.ForkJoinPool$ManagedBlocker",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.LinkedTransferQueue"
	};
	$loadClass(LinkedTransferQueue$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinkedTransferQueue$Node);
	});
	return class$;
}

$Class* LinkedTransferQueue$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java