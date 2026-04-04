#include <java/util/concurrent/SynchronousQueue$TransferQueue$QNode.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/concurrent/SynchronousQueue$TransferQueue.h>
#include <java/util/concurrent/SynchronousQueue.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

#undef QITEM
#undef QNEXT
#undef QWAITER

using $ClassInfo = ::java::lang::ClassInfo;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {

$VarHandle* SynchronousQueue$TransferQueue$QNode::QITEM = nullptr;
$VarHandle* SynchronousQueue$TransferQueue$QNode::QNEXT = nullptr;
$VarHandle* SynchronousQueue$TransferQueue$QNode::QWAITER = nullptr;

void SynchronousQueue$TransferQueue$QNode::init$(Object$* item, bool isData) {
	$set(this, item, item);
	this->isData = isData;
}

bool SynchronousQueue$TransferQueue$QNode::casNext(SynchronousQueue$TransferQueue$QNode* cmp, SynchronousQueue$TransferQueue$QNode* val) {
	return this->next == cmp && $nc(SynchronousQueue$TransferQueue$QNode::QNEXT)->compareAndSet($$new($ObjectArray, {this, cmp, val}));
}

bool SynchronousQueue$TransferQueue$QNode::casItem(Object$* cmp, Object$* val) {
	return $equals(this->item, cmp) && $nc(SynchronousQueue$TransferQueue$QNode::QITEM)->compareAndSet($$new($ObjectArray, {this, cmp, val}));
}

bool SynchronousQueue$TransferQueue$QNode::tryCancel(Object$* cmp) {
	return $nc(SynchronousQueue$TransferQueue$QNode::QITEM)->compareAndSet($$new($ObjectArray, {this, cmp, this}));
}

bool SynchronousQueue$TransferQueue$QNode::isCancelled() {
	return $equals(this->item, this);
}

bool SynchronousQueue$TransferQueue$QNode::isOffList() {
	return this->next == this;
}

void SynchronousQueue$TransferQueue$QNode::forgetWaiter() {
	$nc(SynchronousQueue$TransferQueue$QNode::QWAITER)->setOpaque($$new($ObjectArray, {this, nullptr}));
}

bool SynchronousQueue$TransferQueue$QNode::isFulfilled() {
	$var($Object, x, nullptr);
	bool var$0 = this->isData == (($assign(x, this->item)) == nullptr);
	return var$0 || $equals(x, this);
}

bool SynchronousQueue$TransferQueue$QNode::isReleasable() {
	$useLocalObjectStack();
	$var($Object, x, nullptr);
	bool var$0 = this->isData == (($assign(x, this->item)) == nullptr);
	return var$0 || $equals(x, this) || $($Thread::currentThread())->isInterrupted();
}

bool SynchronousQueue$TransferQueue$QNode::block() {
	while (!isReleasable()) {
		$LockSupport::park();
	}
	return true;
}

void SynchronousQueue$TransferQueue$QNode::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$assignStatic(SynchronousQueue$TransferQueue$QNode::QITEM, $nc(l)->findVarHandle(SynchronousQueue$TransferQueue$QNode::class$, "item"_s, $Object::class$));
			$assignStatic(SynchronousQueue$TransferQueue$QNode::QNEXT, l->findVarHandle(SynchronousQueue$TransferQueue$QNode::class$, "next"_s, SynchronousQueue$TransferQueue$QNode::class$));
			$assignStatic(SynchronousQueue$TransferQueue$QNode::QWAITER, l->findVarHandle(SynchronousQueue$TransferQueue$QNode::class$, "waiter"_s, $Thread::class$));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($ExceptionInInitializerError, e);
		}
	}
}

SynchronousQueue$TransferQueue$QNode::SynchronousQueue$TransferQueue$QNode() {
}

$Class* SynchronousQueue$TransferQueue$QNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"next", "Ljava/util/concurrent/SynchronousQueue$TransferQueue$QNode;", nullptr, $VOLATILE, $field(SynchronousQueue$TransferQueue$QNode, next)},
		{"item", "Ljava/lang/Object;", nullptr, $VOLATILE, $field(SynchronousQueue$TransferQueue$QNode, item)},
		{"waiter", "Ljava/lang/Thread;", nullptr, $VOLATILE, $field(SynchronousQueue$TransferQueue$QNode, waiter)},
		{"isData", "Z", nullptr, $FINAL, $field(SynchronousQueue$TransferQueue$QNode, isData)},
		{"QITEM", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynchronousQueue$TransferQueue$QNode, QITEM)},
		{"QNEXT", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynchronousQueue$TransferQueue$QNode, QNEXT)},
		{"QWAITER", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynchronousQueue$TransferQueue$QNode, QWAITER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Z)V", nullptr, 0, $method(SynchronousQueue$TransferQueue$QNode, init$, void, Object$*, bool)},
		{"block", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SynchronousQueue$TransferQueue$QNode, block, bool)},
		{"casItem", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, 0, $method(SynchronousQueue$TransferQueue$QNode, casItem, bool, Object$*, Object$*)},
		{"casNext", "(Ljava/util/concurrent/SynchronousQueue$TransferQueue$QNode;Ljava/util/concurrent/SynchronousQueue$TransferQueue$QNode;)Z", nullptr, 0, $method(SynchronousQueue$TransferQueue$QNode, casNext, bool, SynchronousQueue$TransferQueue$QNode*, SynchronousQueue$TransferQueue$QNode*)},
		{"forgetWaiter", "()V", nullptr, 0, $method(SynchronousQueue$TransferQueue$QNode, forgetWaiter, void)},
		{"isCancelled", "()Z", nullptr, 0, $method(SynchronousQueue$TransferQueue$QNode, isCancelled, bool)},
		{"isFulfilled", "()Z", nullptr, 0, $method(SynchronousQueue$TransferQueue$QNode, isFulfilled, bool)},
		{"isOffList", "()Z", nullptr, 0, $method(SynchronousQueue$TransferQueue$QNode, isOffList, bool)},
		{"isReleasable", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SynchronousQueue$TransferQueue$QNode, isReleasable, bool)},
		{"tryCancel", "(Ljava/lang/Object;)Z", nullptr, 0, $method(SynchronousQueue$TransferQueue$QNode, tryCancel, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.SynchronousQueue$TransferQueue", "java.util.concurrent.SynchronousQueue", "TransferQueue", $STATIC | $FINAL},
		{"java.util.concurrent.SynchronousQueue$TransferQueue$QNode", "java.util.concurrent.SynchronousQueue$TransferQueue", "QNode", $STATIC | $FINAL},
		{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.SynchronousQueue$TransferQueue$QNode",
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
		"java.util.concurrent.SynchronousQueue"
	};
	$loadClass(SynchronousQueue$TransferQueue$QNode, name, initialize, &classInfo$$, SynchronousQueue$TransferQueue$QNode::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SynchronousQueue$TransferQueue$QNode);
	});
	return class$;
}

$Class* SynchronousQueue$TransferQueue$QNode::class$ = nullptr;

		} // concurrent
	} // util
} // java