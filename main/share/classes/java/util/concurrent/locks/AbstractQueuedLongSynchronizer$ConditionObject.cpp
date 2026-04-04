#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject.h>
#include <java/lang/IllegalMonitorStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Date.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/RejectedExecutionException.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionNode.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalMonitorStateException = ::java::lang::IllegalMonitorStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Date = ::java::util::Date;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $RejectedExecutionException = ::java::util::concurrent::RejectedExecutionException;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractQueuedLongSynchronizer = ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer;
using $AbstractQueuedLongSynchronizer$ConditionNode = ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionNode;
using $Condition = ::java::util::concurrent::locks::Condition;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

int32_t AbstractQueuedLongSynchronizer$ConditionObject::hashCode() {
	 return this->$Condition::hashCode();
}

bool AbstractQueuedLongSynchronizer$ConditionObject::equals(Object$* obj) {
	 return this->$Condition::equals(obj);
}

$Object* AbstractQueuedLongSynchronizer$ConditionObject::clone() {
	 return this->$Condition::clone();
}

$String* AbstractQueuedLongSynchronizer$ConditionObject::toString() {
	 return this->$Condition::toString();
}

void AbstractQueuedLongSynchronizer$ConditionObject::finalize() {
	this->$Condition::finalize();
}

void AbstractQueuedLongSynchronizer$ConditionObject::init$($AbstractQueuedLongSynchronizer* this$0) {
	$set(this, this$0, this$0);
}

void AbstractQueuedLongSynchronizer$ConditionObject::doSignal($AbstractQueuedLongSynchronizer$ConditionNode* first$renamed, bool all) {
	$useLocalObjectStack();
	$var($AbstractQueuedLongSynchronizer$ConditionNode, first, first$renamed);
	while (first != nullptr) {
		$var($AbstractQueuedLongSynchronizer$ConditionNode, next, first->nextWaiter);
		if (($set(this, firstWaiter, next)) == nullptr) {
			$set(this, lastWaiter, nullptr);
		}
		if ((first->getAndUnsetStatus(2) & 2) != 0) {
			this->this$0->enqueue(first);
			if (!all) {
				break;
			}
		}
		$assign(first, next);
	}
}

void AbstractQueuedLongSynchronizer$ConditionObject::signal() {
	$var($AbstractQueuedLongSynchronizer$ConditionNode, first, this->firstWaiter);
	if (!this->this$0->isHeldExclusively()) {
		$throwNew($IllegalMonitorStateException);
	}
	if (first != nullptr) {
		doSignal(first, false);
	}
}

void AbstractQueuedLongSynchronizer$ConditionObject::signalAll() {
	$var($AbstractQueuedLongSynchronizer$ConditionNode, first, this->firstWaiter);
	if (!this->this$0->isHeldExclusively()) {
		$throwNew($IllegalMonitorStateException);
	}
	if (first != nullptr) {
		doSignal(first, true);
	}
}

int64_t AbstractQueuedLongSynchronizer$ConditionObject::enableWait($AbstractQueuedLongSynchronizer$ConditionNode* node) {
	if (this->this$0->isHeldExclusively()) {
		$set($nc(node), waiter, $Thread::currentThread());
		node->setStatusRelaxed(2 | 1);
		$var($AbstractQueuedLongSynchronizer$ConditionNode, last, this->lastWaiter);
		if (last == nullptr) {
			$set(this, firstWaiter, node);
		} else {
			$set(last, nextWaiter, node);
		}
		$set(this, lastWaiter, node);
		int64_t savedState = this->this$0->getState();
		if (this->this$0->release(savedState)) {
			return savedState;
		}
	}
	$nc(node)->status = (int32_t)0x80000000;
	$throwNew($IllegalMonitorStateException);
}

bool AbstractQueuedLongSynchronizer$ConditionObject::canReacquire($AbstractQueuedLongSynchronizer$ConditionNode* node) {
	return node != nullptr && node->prev != nullptr && this->this$0->isEnqueued(node);
}

void AbstractQueuedLongSynchronizer$ConditionObject::unlinkCancelledWaiters($AbstractQueuedLongSynchronizer$ConditionNode* node) {
	$useLocalObjectStack();
	if (node == nullptr || node->nextWaiter != nullptr || node == this->lastWaiter) {
		$var($AbstractQueuedLongSynchronizer$ConditionNode, w, this->firstWaiter);
		$var($AbstractQueuedLongSynchronizer$ConditionNode, trail, nullptr);
		while (w != nullptr) {
			$var($AbstractQueuedLongSynchronizer$ConditionNode, next, w->nextWaiter);
			if ((w->status & 2) == 0) {
				$set(w, nextWaiter, nullptr);
				if (trail == nullptr) {
					$set(this, firstWaiter, next);
				} else {
					$set(trail, nextWaiter, next);
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

void AbstractQueuedLongSynchronizer$ConditionObject::awaitUninterruptibly() {
	$useLocalObjectStack();
	$var($AbstractQueuedLongSynchronizer$ConditionNode, node, $new($AbstractQueuedLongSynchronizer$ConditionNode));
	int64_t savedState = enableWait(node);
	$LockSupport::setCurrentBlocker(this);
	bool interrupted = false;
	bool rejected = false;
	while (!canReacquire(node)) {
		if ($Thread::interrupted()) {
			interrupted = true;
		} else if ((node->status & 2) != 0) {
			try {
				if (rejected) {
					node->block();
				} else {
					$ForkJoinPool::managedBlock(node);
				}
			} catch ($RejectedExecutionException& ex) {
				rejected = true;
			} catch ($InterruptedException& ie) {
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

void AbstractQueuedLongSynchronizer$ConditionObject::await() {
	$useLocalObjectStack();
	if ($Thread::interrupted()) {
		$throwNew($InterruptedException);
	}
	$var($AbstractQueuedLongSynchronizer$ConditionNode, node, $new($AbstractQueuedLongSynchronizer$ConditionNode));
	int64_t savedState = enableWait(node);
	$LockSupport::setCurrentBlocker(this);
	bool interrupted = false;
	bool cancelled = false;
	bool rejected = false;
	while (!canReacquire(node)) {
		if (interrupted |= $Thread::interrupted()) {
			if (cancelled = (node->getAndUnsetStatus(2) & 2) != 0) {
				break;
			}
		} else if ((node->status & 2) != 0) {
			try {
				if (rejected) {
					node->block();
				} else {
					$ForkJoinPool::managedBlock(node);
				}
			} catch ($RejectedExecutionException& ex) {
				rejected = true;
			} catch ($InterruptedException& ie) {
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

int64_t AbstractQueuedLongSynchronizer$ConditionObject::awaitNanos(int64_t nanosTimeout) {
	$useLocalObjectStack();
	if ($Thread::interrupted()) {
		$throwNew($InterruptedException);
	}
	$var($AbstractQueuedLongSynchronizer$ConditionNode, node, $new($AbstractQueuedLongSynchronizer$ConditionNode));
	int64_t savedState = enableWait(node);
	int64_t nanos = (nanosTimeout < 0) ? 0 : nanosTimeout;
	int64_t deadline = $System::nanoTime() + nanos;
	bool cancelled = false;
	bool interrupted = false;
	while (!canReacquire(node)) {
		bool var$0 = interrupted |= $Thread::interrupted();
		if (var$0 || (nanos = deadline - $System::nanoTime()) <= 0) {
			if (cancelled = (node->getAndUnsetStatus(2) & 2) != 0) {
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

bool AbstractQueuedLongSynchronizer$ConditionObject::awaitUntil($Date* deadline) {
	$useLocalObjectStack();
	int64_t abstime = $nc(deadline)->getTime();
	if ($Thread::interrupted()) {
		$throwNew($InterruptedException);
	}
	$var($AbstractQueuedLongSynchronizer$ConditionNode, node, $new($AbstractQueuedLongSynchronizer$ConditionNode));
	int64_t savedState = enableWait(node);
	bool cancelled = false;
	bool interrupted = false;
	while (!canReacquire(node)) {
		bool var$0 = interrupted |= $Thread::interrupted();
		if (var$0 || $System::currentTimeMillis() >= abstime) {
			if (cancelled = (node->getAndUnsetStatus(2) & 2) != 0) {
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

bool AbstractQueuedLongSynchronizer$ConditionObject::await(int64_t time, $TimeUnit* unit) {
	$useLocalObjectStack();
	int64_t nanosTimeout = $nc(unit)->toNanos(time);
	if ($Thread::interrupted()) {
		$throwNew($InterruptedException);
	}
	$var($AbstractQueuedLongSynchronizer$ConditionNode, node, $new($AbstractQueuedLongSynchronizer$ConditionNode));
	int64_t savedState = enableWait(node);
	int64_t nanos = (nanosTimeout < 0) ? 0 : nanosTimeout;
	int64_t deadline = $System::nanoTime() + nanos;
	bool cancelled = false;
	bool interrupted = false;
	while (!canReacquire(node)) {
		bool var$0 = interrupted |= $Thread::interrupted();
		if (var$0 || (nanos = deadline - $System::nanoTime()) <= 0) {
			if (cancelled = (node->getAndUnsetStatus(2) & 2) != 0) {
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

bool AbstractQueuedLongSynchronizer$ConditionObject::isOwnedBy($AbstractQueuedLongSynchronizer* sync) {
	return sync == this->this$0;
}

bool AbstractQueuedLongSynchronizer$ConditionObject::hasWaiters() {
	if (!this->this$0->isHeldExclusively()) {
		$throwNew($IllegalMonitorStateException);
	}
	{
		$var($AbstractQueuedLongSynchronizer$ConditionNode, w, this->firstWaiter);
		for (; w != nullptr; $assign(w, w->nextWaiter)) {
			if ((w->status & 2) != 0) {
				return true;
			}
		}
	}
	return false;
}

int32_t AbstractQueuedLongSynchronizer$ConditionObject::getWaitQueueLength() {
	if (!this->this$0->isHeldExclusively()) {
		$throwNew($IllegalMonitorStateException);
	}
	int32_t n = 0;
	{
		$var($AbstractQueuedLongSynchronizer$ConditionNode, w, this->firstWaiter);
		for (; w != nullptr; $assign(w, w->nextWaiter)) {
			if ((w->status & 2) != 0) {
				++n;
			}
		}
	}
	return n;
}

$Collection* AbstractQueuedLongSynchronizer$ConditionObject::getWaitingThreads() {
	$useLocalObjectStack();
	if (!this->this$0->isHeldExclusively()) {
		$throwNew($IllegalMonitorStateException);
	}
	$var($ArrayList, list, $new($ArrayList));
	{
		$var($AbstractQueuedLongSynchronizer$ConditionNode, w, this->firstWaiter);
		for (; w != nullptr; $assign(w, w->nextWaiter)) {
			if ((w->status & 2) != 0) {
				$var($Thread, t, w->waiter);
				if (t != nullptr) {
					list->add(t);
				}
			}
		}
	}
	return $cast($AbstractCollection, list);
}

AbstractQueuedLongSynchronizer$ConditionObject::AbstractQueuedLongSynchronizer$ConditionObject() {
}

$Class* AbstractQueuedLongSynchronizer$ConditionObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractQueuedLongSynchronizer$ConditionObject, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractQueuedLongSynchronizer$ConditionObject, serialVersionUID)},
		{"firstWaiter", "Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionNode;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractQueuedLongSynchronizer$ConditionObject, firstWaiter)},
		{"lastWaiter", "Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionNode;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractQueuedLongSynchronizer$ConditionObject, lastWaiter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer;)V", nullptr, $PUBLIC, $method(AbstractQueuedLongSynchronizer$ConditionObject, init$, void, $AbstractQueuedLongSynchronizer*)},
		{"await", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractQueuedLongSynchronizer$ConditionObject, await, void), "java.lang.InterruptedException"},
		{"await", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractQueuedLongSynchronizer$ConditionObject, await, bool, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
		{"awaitNanos", "(J)J", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractQueuedLongSynchronizer$ConditionObject, awaitNanos, int64_t, int64_t), "java.lang.InterruptedException"},
		{"awaitUninterruptibly", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractQueuedLongSynchronizer$ConditionObject, awaitUninterruptibly, void)},
		{"awaitUntil", "(Ljava/util/Date;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractQueuedLongSynchronizer$ConditionObject, awaitUntil, bool, $Date*), "java.lang.InterruptedException"},
		{"canReacquire", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionNode;)Z", nullptr, $PRIVATE, $method(AbstractQueuedLongSynchronizer$ConditionObject, canReacquire, bool, $AbstractQueuedLongSynchronizer$ConditionNode*)},
		{"doSignal", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionNode;Z)V", nullptr, $PRIVATE, $method(AbstractQueuedLongSynchronizer$ConditionObject, doSignal, void, $AbstractQueuedLongSynchronizer$ConditionNode*, bool)},
		{"enableWait", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionNode;)J", nullptr, $PRIVATE, $method(AbstractQueuedLongSynchronizer$ConditionObject, enableWait, int64_t, $AbstractQueuedLongSynchronizer$ConditionNode*)},
		{"getWaitQueueLength", "()I", nullptr, $PROTECTED | $FINAL, $method(AbstractQueuedLongSynchronizer$ConditionObject, getWaitQueueLength, int32_t)},
		{"getWaitingThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PROTECTED | $FINAL, $method(AbstractQueuedLongSynchronizer$ConditionObject, getWaitingThreads, $Collection*)},
		{"hasWaiters", "()Z", nullptr, $PROTECTED | $FINAL, $method(AbstractQueuedLongSynchronizer$ConditionObject, hasWaiters, bool)},
		{"isOwnedBy", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer;)Z", nullptr, $FINAL, $method(AbstractQueuedLongSynchronizer$ConditionObject, isOwnedBy, bool, $AbstractQueuedLongSynchronizer*)},
		{"signal", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractQueuedLongSynchronizer$ConditionObject, signal, void)},
		{"signalAll", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractQueuedLongSynchronizer$ConditionObject, signalAll, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"unlinkCancelledWaiters", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionNode;)V", nullptr, $PRIVATE, $method(AbstractQueuedLongSynchronizer$ConditionObject, unlinkCancelledWaiters, void, $AbstractQueuedLongSynchronizer$ConditionNode*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionObject", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "ConditionObject", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionObject",
		"java.lang.Object",
		"java.util.concurrent.locks.Condition,java.io.Serializable",
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
	$loadClass(AbstractQueuedLongSynchronizer$ConditionObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractQueuedLongSynchronizer$ConditionObject));
	});
	return class$;
}

$Class* AbstractQueuedLongSynchronizer$ConditionObject::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java