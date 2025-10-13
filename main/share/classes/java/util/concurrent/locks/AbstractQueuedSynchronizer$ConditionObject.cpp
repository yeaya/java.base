#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalMonitorStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Date.h>
#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/RejectedExecutionException.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionNode.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

#undef MIN_VALUE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalMonitorStateException = ::java::lang::IllegalMonitorStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Date = ::java::util::Date;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$ManagedBlocker = ::java::util::concurrent::ForkJoinPool$ManagedBlocker;
using $RejectedExecutionException = ::java::util::concurrent::RejectedExecutionException;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;
using $AbstractQueuedSynchronizer$ConditionNode = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionNode;
using $AbstractQueuedSynchronizer$Node = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node;
using $Condition = ::java::util::concurrent::locks::Condition;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _AbstractQueuedSynchronizer$ConditionObject_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractQueuedSynchronizer$ConditionObject, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractQueuedSynchronizer$ConditionObject, serialVersionUID)},
	{"firstWaiter", "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionNode;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractQueuedSynchronizer$ConditionObject, firstWaiter)},
	{"lastWaiter", "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionNode;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractQueuedSynchronizer$ConditionObject, lastWaiter)},
	{}
};

$MethodInfo _AbstractQueuedSynchronizer$ConditionObject_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractQueuedSynchronizer$ConditionObject::*)($AbstractQueuedSynchronizer*)>(&AbstractQueuedSynchronizer$ConditionObject::init$))},
	{"await", "()V", nullptr, $PUBLIC | $FINAL, nullptr, "java.lang.InterruptedException"},
	{"await", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC | $FINAL, nullptr, "java.lang.InterruptedException"},
	{"awaitNanos", "(J)J", nullptr, $PUBLIC | $FINAL, nullptr, "java.lang.InterruptedException"},
	{"awaitUninterruptibly", "()V", nullptr, $PUBLIC | $FINAL},
	{"awaitUntil", "(Ljava/util/Date;)Z", nullptr, $PUBLIC | $FINAL, nullptr, "java.lang.InterruptedException"},
	{"canReacquire", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionNode;)Z", nullptr, $PRIVATE, $method(static_cast<bool(AbstractQueuedSynchronizer$ConditionObject::*)($AbstractQueuedSynchronizer$ConditionNode*)>(&AbstractQueuedSynchronizer$ConditionObject::canReacquire))},
	{"doSignal", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionNode;Z)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractQueuedSynchronizer$ConditionObject::*)($AbstractQueuedSynchronizer$ConditionNode*,bool)>(&AbstractQueuedSynchronizer$ConditionObject::doSignal))},
	{"enableWait", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionNode;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AbstractQueuedSynchronizer$ConditionObject::*)($AbstractQueuedSynchronizer$ConditionNode*)>(&AbstractQueuedSynchronizer$ConditionObject::enableWait))},
	{"getWaitQueueLength", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(AbstractQueuedSynchronizer$ConditionObject::*)()>(&AbstractQueuedSynchronizer$ConditionObject::getWaitQueueLength))},
	{"getWaitingThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PROTECTED | $FINAL, $method(static_cast<$Collection*(AbstractQueuedSynchronizer$ConditionObject::*)()>(&AbstractQueuedSynchronizer$ConditionObject::getWaitingThreads))},
	{"hasWaiters", "()Z", nullptr, $PROTECTED | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer$ConditionObject::*)()>(&AbstractQueuedSynchronizer$ConditionObject::hasWaiters))},
	{"isOwnedBy", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;)Z", nullptr, $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer$ConditionObject::*)($AbstractQueuedSynchronizer*)>(&AbstractQueuedSynchronizer$ConditionObject::isOwnedBy))},
	{"signal", "()V", nullptr, $PUBLIC | $FINAL},
	{"signalAll", "()V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unlinkCancelledWaiters", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionNode;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractQueuedSynchronizer$ConditionObject::*)($AbstractQueuedSynchronizer$ConditionNode*)>(&AbstractQueuedSynchronizer$ConditionObject::unlinkCancelledWaiters))},
	{}
};

$InnerClassInfo _AbstractQueuedSynchronizer$ConditionObject_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionObject", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "ConditionObject", $PUBLIC},
	{}
};

$ClassInfo _AbstractQueuedSynchronizer$ConditionObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionObject",
	"java.lang.Object",
	"java.util.concurrent.locks.Condition,java.io.Serializable",
	_AbstractQueuedSynchronizer$ConditionObject_FieldInfo_,
	_AbstractQueuedSynchronizer$ConditionObject_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractQueuedSynchronizer$ConditionObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.AbstractQueuedSynchronizer"
};

$Object* allocate$AbstractQueuedSynchronizer$ConditionObject($Class* clazz) {
	return $of($alloc(AbstractQueuedSynchronizer$ConditionObject));
}

int32_t AbstractQueuedSynchronizer$ConditionObject::hashCode() {
	 return this->$Condition::hashCode();
}

bool AbstractQueuedSynchronizer$ConditionObject::equals(Object$* obj) {
	 return this->$Condition::equals(obj);
}

$Object* AbstractQueuedSynchronizer$ConditionObject::clone() {
	 return this->$Condition::clone();
}

$String* AbstractQueuedSynchronizer$ConditionObject::toString() {
	 return this->$Condition::toString();
}

void AbstractQueuedSynchronizer$ConditionObject::finalize() {
	this->$Condition::finalize();
}

void AbstractQueuedSynchronizer$ConditionObject::init$($AbstractQueuedSynchronizer* this$0) {
	$set(this, this$0, this$0);
}

void AbstractQueuedSynchronizer$ConditionObject::doSignal($AbstractQueuedSynchronizer$ConditionNode* first$renamed, bool all) {
	$var($AbstractQueuedSynchronizer$ConditionNode, first, first$renamed);
	while (first != nullptr) {
		$var($AbstractQueuedSynchronizer$ConditionNode, next, first->nextWaiter);
		if (($assignField(this, firstWaiter, next)) == nullptr) {
			$set(this, lastWaiter, nullptr);
		}
		if (((int32_t)(first->getAndUnsetStatus(2) & (uint32_t)2)) != 0) {
			this->this$0->enqueue(first);
			if (!all) {
				break;
			}
		}
		$assign(first, next);
	}
}

void AbstractQueuedSynchronizer$ConditionObject::signal() {
	$var($AbstractQueuedSynchronizer$ConditionNode, first, this->firstWaiter);
	if (!this->this$0->isHeldExclusively()) {
		$throwNew($IllegalMonitorStateException);
	}
	if (first != nullptr) {
		doSignal(first, false);
	}
}

void AbstractQueuedSynchronizer$ConditionObject::signalAll() {
	$var($AbstractQueuedSynchronizer$ConditionNode, first, this->firstWaiter);
	if (!this->this$0->isHeldExclusively()) {
		$throwNew($IllegalMonitorStateException);
	}
	if (first != nullptr) {
		doSignal(first, true);
	}
}

int32_t AbstractQueuedSynchronizer$ConditionObject::enableWait($AbstractQueuedSynchronizer$ConditionNode* node) {
	if (this->this$0->isHeldExclusively()) {
		$set($nc(node), waiter, $Thread::currentThread());
		node->setStatusRelaxed(2 | 1);
		$var($AbstractQueuedSynchronizer$ConditionNode, last, this->lastWaiter);
		if (last == nullptr) {
			$set(this, firstWaiter, node);
		} else {
			$set($nc(last), nextWaiter, node);
		}
		$set(this, lastWaiter, node);
		int32_t savedState = this->this$0->getState();
		if (this->this$0->release(savedState)) {
			return savedState;
		}
	}
	$nc(node)->status = (int32_t)0x80000000;
	$throwNew($IllegalMonitorStateException);
}

bool AbstractQueuedSynchronizer$ConditionObject::canReacquire($AbstractQueuedSynchronizer$ConditionNode* node) {
	return node != nullptr && node->prev != nullptr && this->this$0->isEnqueued(node);
}

void AbstractQueuedSynchronizer$ConditionObject::unlinkCancelledWaiters($AbstractQueuedSynchronizer$ConditionNode* node) {
	if (node == nullptr || $nc(node)->nextWaiter != nullptr || node == this->lastWaiter) {
		$var($AbstractQueuedSynchronizer$ConditionNode, w, this->firstWaiter);
		$var($AbstractQueuedSynchronizer$ConditionNode, trail, nullptr);
		while (w != nullptr) {
			$var($AbstractQueuedSynchronizer$ConditionNode, next, w->nextWaiter);
			if (((int32_t)(w->status & (uint32_t)2)) == 0) {
				$set(w, nextWaiter, nullptr);
				if (trail == nullptr) {
					$set(this, firstWaiter, next);
				} else {
					$set($nc(trail), nextWaiter, next);
				}
				if (next == nullptr) {
					$set(this, lastWaiter, trail);
				}
			} else {
				$assign(trail, w);
			}
			$assign(w, next);
		}
	}
}

void AbstractQueuedSynchronizer$ConditionObject::awaitUninterruptibly() {
	$var($AbstractQueuedSynchronizer$ConditionNode, node, $new($AbstractQueuedSynchronizer$ConditionNode));
	int32_t savedState = enableWait(node);
	$LockSupport::setCurrentBlocker(this);
	bool interrupted = false;
	bool rejected = false;
	while (!canReacquire(node)) {
		if ($Thread::interrupted()) {
			interrupted = true;
		} else if (((int32_t)(node->status & (uint32_t)2)) != 0) {
			try {
				if (rejected) {
					node->block();
				} else {
					$ForkJoinPool::managedBlock(node);
				}
			} catch ($RejectedExecutionException&) {
				$var($RejectedExecutionException, ex, $catch());
				rejected = true;
			} catch ($InterruptedException&) {
				$var($InterruptedException, ie, $catch());
				interrupted = true;
			}
		} else {
			$Thread::onSpinWait();
		}
	}
	$LockSupport::setCurrentBlocker(nullptr);
	node->clearStatus();
	this->this$0->acquire(node, savedState, false, false, false, 0);
	if (interrupted) {
		$($Thread::currentThread())->interrupt();
	}
}

void AbstractQueuedSynchronizer$ConditionObject::await() {
	if ($Thread::interrupted()) {
		$throwNew($InterruptedException);
	}
	$var($AbstractQueuedSynchronizer$ConditionNode, node, $new($AbstractQueuedSynchronizer$ConditionNode));
	int32_t savedState = enableWait(node);
	$LockSupport::setCurrentBlocker(this);
	bool interrupted = false;
	bool cancelled = false;
	bool rejected = false;
	while (!canReacquire(node)) {
		if (interrupted |= $Thread::interrupted()) {
			if (cancelled = ((int32_t)(node->getAndUnsetStatus(2) & (uint32_t)2)) != 0) {
				break;
			}
		} else if (((int32_t)(node->status & (uint32_t)2)) != 0) {
			try {
				if (rejected) {
					node->block();
				} else {
					$ForkJoinPool::managedBlock(node);
				}
			} catch ($RejectedExecutionException&) {
				$var($RejectedExecutionException, ex, $catch());
				rejected = true;
			} catch ($InterruptedException&) {
				$var($InterruptedException, ie, $catch());
				interrupted = true;
			}
		} else {
			$Thread::onSpinWait();
		}
	}
	$LockSupport::setCurrentBlocker(nullptr);
	node->clearStatus();
	this->this$0->acquire(node, savedState, false, false, false, 0);
	if (interrupted) {
		if (cancelled) {
			unlinkCancelledWaiters(node);
			$throwNew($InterruptedException);
		}
		$($Thread::currentThread())->interrupt();
	}
}

int64_t AbstractQueuedSynchronizer$ConditionObject::awaitNanos(int64_t nanosTimeout) {
	if ($Thread::interrupted()) {
		$throwNew($InterruptedException);
	}
	$var($AbstractQueuedSynchronizer$ConditionNode, node, $new($AbstractQueuedSynchronizer$ConditionNode));
	int32_t savedState = enableWait(node);
	int64_t nanos = (nanosTimeout < (int64_t)0) ? (int64_t)0 : nanosTimeout;
	int64_t deadline = $System::nanoTime() + nanos;
	bool cancelled = false;
	bool interrupted = false;
	while (!canReacquire(node)) {
		bool var$0 = (interrupted |= $Thread::interrupted());
		if (var$0 || (nanos = deadline - $System::nanoTime()) <= (int64_t)0) {
			if (cancelled = ((int32_t)(node->getAndUnsetStatus(2) & (uint32_t)2)) != 0) {
				break;
			}
		} else {
			$LockSupport::parkNanos(this, nanos);
		}
	}
	node->clearStatus();
	this->this$0->acquire(node, savedState, false, false, false, 0);
	if (cancelled) {
		unlinkCancelledWaiters(node);
		if (interrupted) {
			$throwNew($InterruptedException);
		}
	} else if (interrupted) {
		$($Thread::currentThread())->interrupt();
	}
	int64_t remaining = deadline - $System::nanoTime();
	return (remaining <= nanosTimeout) ? remaining : $Long::MIN_VALUE;
}

bool AbstractQueuedSynchronizer$ConditionObject::awaitUntil($Date* deadline) {
	int64_t abstime = $nc(deadline)->getTime();
	if ($Thread::interrupted()) {
		$throwNew($InterruptedException);
	}
	$var($AbstractQueuedSynchronizer$ConditionNode, node, $new($AbstractQueuedSynchronizer$ConditionNode));
	int32_t savedState = enableWait(node);
	bool cancelled = false;
	bool interrupted = false;
	while (!canReacquire(node)) {
		bool var$0 = (interrupted |= $Thread::interrupted());
		if (var$0 || $System::currentTimeMillis() >= abstime) {
			if (cancelled = ((int32_t)(node->getAndUnsetStatus(2) & (uint32_t)2)) != 0) {
				break;
			}
		} else {
			$LockSupport::parkUntil(this, abstime);
		}
	}
	node->clearStatus();
	this->this$0->acquire(node, savedState, false, false, false, 0);
	if (cancelled) {
		unlinkCancelledWaiters(node);
		if (interrupted) {
			$throwNew($InterruptedException);
		}
	} else if (interrupted) {
		$($Thread::currentThread())->interrupt();
	}
	return !cancelled;
}

bool AbstractQueuedSynchronizer$ConditionObject::await(int64_t time, $TimeUnit* unit) {
	int64_t nanosTimeout = $nc(unit)->toNanos(time);
	if ($Thread::interrupted()) {
		$throwNew($InterruptedException);
	}
	$var($AbstractQueuedSynchronizer$ConditionNode, node, $new($AbstractQueuedSynchronizer$ConditionNode));
	int32_t savedState = enableWait(node);
	int64_t nanos = (nanosTimeout < (int64_t)0) ? (int64_t)0 : nanosTimeout;
	int64_t deadline = $System::nanoTime() + nanos;
	bool cancelled = false;
	bool interrupted = false;
	while (!canReacquire(node)) {
		bool var$0 = (interrupted |= $Thread::interrupted());
		if (var$0 || (nanos = deadline - $System::nanoTime()) <= (int64_t)0) {
			if (cancelled = ((int32_t)(node->getAndUnsetStatus(2) & (uint32_t)2)) != 0) {
				break;
			}
		} else {
			$LockSupport::parkNanos(this, nanos);
		}
	}
	node->clearStatus();
	this->this$0->acquire(node, savedState, false, false, false, 0);
	if (cancelled) {
		unlinkCancelledWaiters(node);
		if (interrupted) {
			$throwNew($InterruptedException);
		}
	} else if (interrupted) {
		$($Thread::currentThread())->interrupt();
	}
	return !cancelled;
}

bool AbstractQueuedSynchronizer$ConditionObject::isOwnedBy($AbstractQueuedSynchronizer* sync) {
	return sync == this->this$0;
}

bool AbstractQueuedSynchronizer$ConditionObject::hasWaiters() {
	if (!this->this$0->isHeldExclusively()) {
		$throwNew($IllegalMonitorStateException);
	}
	{
		$var($AbstractQueuedSynchronizer$ConditionNode, w, this->firstWaiter);
		for (; w != nullptr; $assign(w, $nc(w)->nextWaiter)) {
			if (((int32_t)(w->status & (uint32_t)2)) != 0) {
				return true;
			}
		}
	}
	return false;
}

int32_t AbstractQueuedSynchronizer$ConditionObject::getWaitQueueLength() {
	if (!this->this$0->isHeldExclusively()) {
		$throwNew($IllegalMonitorStateException);
	}
	int32_t n = 0;
	{
		$var($AbstractQueuedSynchronizer$ConditionNode, w, this->firstWaiter);
		for (; w != nullptr; $assign(w, $nc(w)->nextWaiter)) {
			if (((int32_t)(w->status & (uint32_t)2)) != 0) {
				++n;
			}
		}
	}
	return n;
}

$Collection* AbstractQueuedSynchronizer$ConditionObject::getWaitingThreads() {
	if (!this->this$0->isHeldExclusively()) {
		$throwNew($IllegalMonitorStateException);
	}
	$var($ArrayList, list, $new($ArrayList));
	{
		$var($AbstractQueuedSynchronizer$ConditionNode, w, this->firstWaiter);
		for (; w != nullptr; $assign(w, $nc(w)->nextWaiter)) {
			if (((int32_t)(w->status & (uint32_t)2)) != 0) {
				$var($Thread, t, w->waiter);
				if (t != nullptr) {
					list->add(t);
				}
			}
		}
	}
	return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(list)));
}

AbstractQueuedSynchronizer$ConditionObject::AbstractQueuedSynchronizer$ConditionObject() {
}

$Class* AbstractQueuedSynchronizer$ConditionObject::load$($String* name, bool initialize) {
	$loadClass(AbstractQueuedSynchronizer$ConditionObject, name, initialize, &_AbstractQueuedSynchronizer$ConditionObject_ClassInfo_, allocate$AbstractQueuedSynchronizer$ConditionObject);
	return class$;
}

$Class* AbstractQueuedSynchronizer$ConditionObject::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java