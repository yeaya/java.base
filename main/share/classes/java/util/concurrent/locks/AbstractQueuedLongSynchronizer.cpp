#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer.h>

#include <java/lang/InterruptedException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ExclusiveNode.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedLongSynchronizer$SharedNode.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef CANCELLED
#undef COND
#undef HEAD
#undef STATE
#undef TAIL
#undef U
#undef WAITING

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $AbstractOwnableSynchronizer = ::java::util::concurrent::locks::AbstractOwnableSynchronizer;
using $AbstractQueuedLongSynchronizer$ConditionObject = ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ConditionObject;
using $AbstractQueuedLongSynchronizer$ExclusiveNode = ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$ExclusiveNode;
using $AbstractQueuedLongSynchronizer$Node = ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$Node;
using $AbstractQueuedLongSynchronizer$SharedNode = ::java::util::concurrent::locks::AbstractQueuedLongSynchronizer$SharedNode;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _AbstractQueuedLongSynchronizer_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractQueuedLongSynchronizer, serialVersionUID)},
	{"WAITING", "I", nullptr, $STATIC | $FINAL, $constField(AbstractQueuedLongSynchronizer, WAITING)},
	{"CANCELLED", "I", nullptr, $STATIC | $FINAL, $constField(AbstractQueuedLongSynchronizer, CANCELLED)},
	{"COND", "I", nullptr, $STATIC | $FINAL, $constField(AbstractQueuedLongSynchronizer, COND)},
	{"head", "Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(AbstractQueuedLongSynchronizer, head)},
	{"tail", "Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(AbstractQueuedLongSynchronizer, tail)},
	{"state", "J", nullptr, $PRIVATE | $VOLATILE, $field(AbstractQueuedLongSynchronizer, state)},
	{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedLongSynchronizer, U)},
	{"STATE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedLongSynchronizer, STATE)},
	{"HEAD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedLongSynchronizer, HEAD)},
	{"TAIL", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedLongSynchronizer, TAIL)},
	{}
};

$MethodInfo _AbstractQueuedLongSynchronizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbstractQueuedLongSynchronizer, init$, void)},
	{"acquire", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;JZZZJ)I", nullptr, $FINAL, $method(AbstractQueuedLongSynchronizer, acquire, int32_t, $AbstractQueuedLongSynchronizer$Node*, int64_t, bool, bool, bool, int64_t)},
	{"acquire", "(J)V", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, acquire, void, int64_t)},
	{"acquireInterruptibly", "(J)V", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, acquireInterruptibly, void, int64_t), "java.lang.InterruptedException"},
	{"acquireShared", "(J)V", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, acquireShared, void, int64_t)},
	{"acquireSharedInterruptibly", "(J)V", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, acquireSharedInterruptibly, void, int64_t), "java.lang.InterruptedException"},
	{"apparentlyFirstQueuedIsExclusive", "()Z", nullptr, $FINAL, $method(AbstractQueuedLongSynchronizer, apparentlyFirstQueuedIsExclusive, bool)},
	{"cancelAcquire", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;ZZ)I", nullptr, $PRIVATE, $method(AbstractQueuedLongSynchronizer, cancelAcquire, int32_t, $AbstractQueuedLongSynchronizer$Node*, bool, bool)},
	{"casTail", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;)Z", nullptr, $PRIVATE, $method(AbstractQueuedLongSynchronizer, casTail, bool, $AbstractQueuedLongSynchronizer$Node*, $AbstractQueuedLongSynchronizer$Node*)},
	{"cleanQueue", "()V", nullptr, $PRIVATE, $method(AbstractQueuedLongSynchronizer, cleanQueue, void)},
	{"compareAndSetState", "(JJ)Z", nullptr, $PROTECTED | $FINAL, $method(AbstractQueuedLongSynchronizer, compareAndSetState, bool, int64_t, int64_t)},
	{"enqueue", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;)V", nullptr, $FINAL, $method(AbstractQueuedLongSynchronizer, enqueue, void, $AbstractQueuedLongSynchronizer$Node*)},
	{"getExclusiveQueuedThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, getExclusiveQueuedThreads, $Collection*)},
	{"getFirstQueuedThread", "()Ljava/lang/Thread;", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, getFirstQueuedThread, $Thread*)},
	{"getQueueLength", "()I", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, getQueueLength, int32_t)},
	{"getQueuedThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, getQueuedThreads, $Collection*)},
	{"getSharedQueuedThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, getSharedQueuedThreads, $Collection*)},
	{"getState", "()J", nullptr, $PROTECTED | $FINAL, $method(AbstractQueuedLongSynchronizer, getState, int64_t)},
	{"getWaitQueueLength", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)I", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, getWaitQueueLength, int32_t, $AbstractQueuedLongSynchronizer$ConditionObject*)},
	{"getWaitingThreads", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Ljava/util/Collection;", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Ljava/util/Collection<Ljava/lang/Thread;>;", $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, getWaitingThreads, $Collection*, $AbstractQueuedLongSynchronizer$ConditionObject*)},
	{"hasContended", "()Z", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, hasContended, bool)},
	{"hasQueuedPredecessors", "()Z", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, hasQueuedPredecessors, bool)},
	{"hasQueuedThreads", "()Z", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, hasQueuedThreads, bool)},
	{"hasWaiters", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, hasWaiters, bool, $AbstractQueuedLongSynchronizer$ConditionObject*)},
	{"isEnqueued", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;)Z", nullptr, $FINAL, $method(AbstractQueuedLongSynchronizer, isEnqueued, bool, $AbstractQueuedLongSynchronizer$Node*)},
	{"isHeldExclusively", "()Z", nullptr, $PROTECTED, $virtualMethod(AbstractQueuedLongSynchronizer, isHeldExclusively, bool)},
	{"isQueued", "(Ljava/lang/Thread;)Z", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, isQueued, bool, $Thread*)},
	{"owns", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, owns, bool, $AbstractQueuedLongSynchronizer$ConditionObject*)},
	{"release", "(J)Z", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, release, bool, int64_t)},
	{"releaseShared", "(J)Z", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, releaseShared, bool, int64_t)},
	{"setState", "(J)V", nullptr, $PROTECTED | $FINAL, $method(AbstractQueuedLongSynchronizer, setState, void, int64_t)},
	{"signalNext", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractQueuedLongSynchronizer, signalNext, void, $AbstractQueuedLongSynchronizer$Node*)},
	{"signalNextIfShared", "(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$Node;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractQueuedLongSynchronizer, signalNextIfShared, void, $AbstractQueuedLongSynchronizer$Node*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractQueuedLongSynchronizer, toString, $String*)},
	{"tryAcquire", "(J)Z", nullptr, $PROTECTED, $virtualMethod(AbstractQueuedLongSynchronizer, tryAcquire, bool, int64_t)},
	{"tryAcquireNanos", "(JJ)Z", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, tryAcquireNanos, bool, int64_t, int64_t), "java.lang.InterruptedException"},
	{"tryAcquireShared", "(J)J", nullptr, $PROTECTED, $virtualMethod(AbstractQueuedLongSynchronizer, tryAcquireShared, int64_t, int64_t)},
	{"tryAcquireSharedNanos", "(JJ)Z", nullptr, $PUBLIC | $FINAL, $method(AbstractQueuedLongSynchronizer, tryAcquireSharedNanos, bool, int64_t, int64_t), "java.lang.InterruptedException"},
	{"tryInitializeHead", "()V", nullptr, $PRIVATE, $method(AbstractQueuedLongSynchronizer, tryInitializeHead, void)},
	{"tryRelease", "(J)Z", nullptr, $PROTECTED, $virtualMethod(AbstractQueuedLongSynchronizer, tryRelease, bool, int64_t)},
	{"tryReleaseShared", "(J)Z", nullptr, $PROTECTED, $virtualMethod(AbstractQueuedLongSynchronizer, tryReleaseShared, bool, int64_t)},
	{}
};

$InnerClassInfo _AbstractQueuedLongSynchronizer_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionObject", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "ConditionObject", $PUBLIC},
	{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionNode", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "ConditionNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$SharedNode", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "SharedNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ExclusiveNode", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "ExclusiveNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedLongSynchronizer", "Node", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractQueuedLongSynchronizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.locks.AbstractQueuedLongSynchronizer",
	"java.util.concurrent.locks.AbstractOwnableSynchronizer",
	nullptr,
	_AbstractQueuedLongSynchronizer_FieldInfo_,
	_AbstractQueuedLongSynchronizer_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractQueuedLongSynchronizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionObject,java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionNode,java.util.concurrent.locks.AbstractQueuedLongSynchronizer$SharedNode,java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ExclusiveNode,java.util.concurrent.locks.AbstractQueuedLongSynchronizer$Node"
};

$Object* allocate$AbstractQueuedLongSynchronizer($Class* clazz) {
	return $of($alloc(AbstractQueuedLongSynchronizer));
}

$Unsafe* AbstractQueuedLongSynchronizer::U = nullptr;
int64_t AbstractQueuedLongSynchronizer::STATE = 0;
int64_t AbstractQueuedLongSynchronizer::HEAD = 0;
int64_t AbstractQueuedLongSynchronizer::TAIL = 0;

void AbstractQueuedLongSynchronizer::init$() {
	$AbstractOwnableSynchronizer::init$();
}

int64_t AbstractQueuedLongSynchronizer::getState() {
	return this->state;
}

void AbstractQueuedLongSynchronizer::setState(int64_t newState) {
	this->state = newState;
}

bool AbstractQueuedLongSynchronizer::compareAndSetState(int64_t expect, int64_t update) {
	return $nc(AbstractQueuedLongSynchronizer::U)->compareAndSetLong(this, AbstractQueuedLongSynchronizer::STATE, expect, update);
}

bool AbstractQueuedLongSynchronizer::casTail($AbstractQueuedLongSynchronizer$Node* c, $AbstractQueuedLongSynchronizer$Node* v) {
	return $nc(AbstractQueuedLongSynchronizer::U)->compareAndSetReference(this, AbstractQueuedLongSynchronizer::TAIL, c, v);
}

void AbstractQueuedLongSynchronizer::tryInitializeHead() {
	$var($AbstractQueuedLongSynchronizer$Node, h, $new($AbstractQueuedLongSynchronizer$ExclusiveNode));
	if ($nc(AbstractQueuedLongSynchronizer::U)->compareAndSetReference(this, AbstractQueuedLongSynchronizer::HEAD, nullptr, h)) {
		$set(this, tail, h);
	}
}

void AbstractQueuedLongSynchronizer::enqueue($AbstractQueuedLongSynchronizer$Node* node) {
	$useLocalCurrentObjectStackCache();
	if (node != nullptr) {
		for (;;) {
			$var($AbstractQueuedLongSynchronizer$Node, t, this->tail);
			node->setPrevRelaxed(t);
			if (t == nullptr) {
				tryInitializeHead();
			} else if (casTail(t, node)) {
				$set($nc(t), next, node);
				if (t->status < 0) {
					$LockSupport::unpark(node->waiter);
				}
				break;
			}
		}
	}
}

bool AbstractQueuedLongSynchronizer::isEnqueued($AbstractQueuedLongSynchronizer$Node* node) {
	{
		$var($AbstractQueuedLongSynchronizer$Node, t, this->tail);
		for (; t != nullptr; $assign(t, $nc(t)->prev)) {
			if (t == node) {
				return true;
			}
		}
	}
	return false;
}

void AbstractQueuedLongSynchronizer::signalNext($AbstractQueuedLongSynchronizer$Node* h) {
	$init(AbstractQueuedLongSynchronizer);
	$var($AbstractQueuedLongSynchronizer$Node, s, nullptr);
	bool var$0 = h != nullptr && ($assign(s, h->next)) != nullptr;
	if (var$0 && $nc(s)->status != 0) {
		s->getAndUnsetStatus(AbstractQueuedLongSynchronizer::WAITING);
		$LockSupport::unpark(s->waiter);
	}
}

void AbstractQueuedLongSynchronizer::signalNextIfShared($AbstractQueuedLongSynchronizer$Node* h) {
	$init(AbstractQueuedLongSynchronizer);
	$var($AbstractQueuedLongSynchronizer$Node, s, nullptr);
	bool var$1 = h != nullptr && ($assign(s, h->next)) != nullptr;
	bool var$0 = var$1 && ($instanceOf($AbstractQueuedLongSynchronizer$SharedNode, s));
	if (var$0 && $nc(s)->status != 0) {
		s->getAndUnsetStatus(AbstractQueuedLongSynchronizer::WAITING);
		$LockSupport::unpark(s->waiter);
	}
}

int32_t AbstractQueuedLongSynchronizer::acquire($AbstractQueuedLongSynchronizer$Node* node$renamed, int64_t arg, bool shared, bool interruptible, bool timed, int64_t time) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractQueuedLongSynchronizer$Node, node, node$renamed);
	$var($Thread, current, $Thread::currentThread());
	int8_t spins = (int8_t)0;
	int8_t postSpins = (int8_t)0;
	bool interrupted = false;
	bool first = false;
	$var($AbstractQueuedLongSynchronizer$Node, pred, nullptr);
	for (;;) {
		bool var$0 = !first && ($assign(pred, (node == nullptr) ? ($AbstractQueuedLongSynchronizer$Node*)nullptr : $cast($AbstractQueuedLongSynchronizer$Node, $nc(node)->prev))) != nullptr;
		if (var$0 && !(first = (this->head == pred))) {
			if ($nc(pred)->status < 0) {
				cleanQueue();
				continue;
			} else if (pred->prev == nullptr) {
				$Thread::onSpinWait();
				continue;
			}
		}
		if (first || pred == nullptr) {
			bool acquired = false;
			try {
				if (shared) {
					acquired = (tryAcquireShared(arg) >= 0);
				} else {
					acquired = tryAcquire(arg);
				}
			} catch ($Throwable& ex) {
				cancelAcquire(node, interrupted, false);
				$throw(ex);
			}
			if (acquired) {
				if (first) {
					$set($nc(node), prev, nullptr);
					$set(this, head, node);
					$set($nc(pred), next, nullptr);
					$set(node, waiter, nullptr);
					if (shared) {
						signalNextIfShared(node);
					}
					if (interrupted) {
						current->interrupt();
					}
				}
				return 1;
			}
		}
		if (node == nullptr) {
			if (shared) {
				$assign(node, $new($AbstractQueuedLongSynchronizer$SharedNode));
			} else {
				$assign(node, $new($AbstractQueuedLongSynchronizer$ExclusiveNode));
			}
		} else if (pred == nullptr) {
			$set($nc(node), waiter, current);
			$var($AbstractQueuedLongSynchronizer$Node, t, this->tail);
			node->setPrevRelaxed(t);
			if (t == nullptr) {
				tryInitializeHead();
			} else if (!casTail(t, node)) {
				node->setPrevRelaxed(nullptr);
			} else {
				$set($nc(t), next, node);
			}
		} else if (first && spins != 0) {
			--spins;
			$Thread::onSpinWait();
		} else if ($nc(node)->status == 0) {
			node->status = AbstractQueuedLongSynchronizer::WAITING;
		} else {
			int64_t nanos = 0;
			spins = (postSpins = (int8_t)((postSpins << 1) | 1));
			if (!timed) {
				$LockSupport::park(this);
			} else if ((nanos = time - $System::nanoTime()) > (int64_t)0) {
				$LockSupport::parkNanos(this, nanos);
			} else {
				break;
			}
			node->clearStatus();
			if ((interrupted |= $Thread::interrupted()) && interruptible) {
				break;
			}
		}
	}
	return cancelAcquire(node, interrupted, interruptible);
}

void AbstractQueuedLongSynchronizer::cleanQueue() {
	$useLocalCurrentObjectStackCache();
	for (;;) {
		{
			$var($AbstractQueuedLongSynchronizer$Node, q, this->tail);
			$var($AbstractQueuedLongSynchronizer$Node, s, nullptr);
			$var($AbstractQueuedLongSynchronizer$Node, p, nullptr);
			$var($AbstractQueuedLongSynchronizer$Node, n, nullptr);
			for (;;) {
				if (q == nullptr || ($assign(p, $nc(q)->prev)) == nullptr) {
					return;
				}
				if (s == nullptr ? this->tail != q : ($nc(s)->prev != q || $nc(s)->status < 0)) {
					break;
				}
				if ($nc(q)->status < 0) {
					if ((s == nullptr ? casTail(q, p) : $nc(s)->casPrev(q, p)) && q->prev == p) {
						$nc(p)->casNext(q, s);
						if (p->prev == nullptr) {
							signalNext(p);
						}
					}
					break;
				}
				if (($assign(n, $nc(p)->next)) != q) {
					if (n != nullptr && $nc(q)->prev == p) {
						p->casNext(n, q);
						if (p->prev == nullptr) {
							signalNext(p);
						}
					}
					break;
				}
				$assign(s, q);
				$assign(q, $nc(q)->prev);
			}
		}
	}
}

int32_t AbstractQueuedLongSynchronizer::cancelAcquire($AbstractQueuedLongSynchronizer$Node* node, bool interrupted, bool interruptible) {
	if (node != nullptr) {
		$set(node, waiter, nullptr);
		node->status = AbstractQueuedLongSynchronizer::CANCELLED;
		if (node->prev != nullptr) {
			cleanQueue();
		}
	}
	if (interrupted) {
		if (interruptible) {
			return AbstractQueuedLongSynchronizer::CANCELLED;
		} else {
			$($Thread::currentThread())->interrupt();
		}
	}
	return 0;
}

bool AbstractQueuedLongSynchronizer::tryAcquire(int64_t arg) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool AbstractQueuedLongSynchronizer::tryRelease(int64_t arg) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int64_t AbstractQueuedLongSynchronizer::tryAcquireShared(int64_t arg) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool AbstractQueuedLongSynchronizer::tryReleaseShared(int64_t arg) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool AbstractQueuedLongSynchronizer::isHeldExclusively() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void AbstractQueuedLongSynchronizer::acquire(int64_t arg) {
	if (!tryAcquire(arg)) {
		acquire(nullptr, arg, false, false, false, 0);
	}
}

void AbstractQueuedLongSynchronizer::acquireInterruptibly(int64_t arg) {
	bool var$0 = $Thread::interrupted();
	if (!var$0) {
		bool var$1 = !tryAcquire(arg);
		var$0 = (var$1 && acquire(nullptr, arg, false, true, false, 0) < 0);
	}
	if (var$0) {
		$throwNew($InterruptedException);
	}
}

bool AbstractQueuedLongSynchronizer::tryAcquireNanos(int64_t arg, int64_t nanosTimeout) {
	if (!$Thread::interrupted()) {
		if (tryAcquire(arg)) {
			return true;
		}
		if (nanosTimeout <= (int64_t)0) {
			return false;
		}
		int32_t stat = acquire(nullptr, arg, false, true, true, $System::nanoTime() + nanosTimeout);
		if (stat > 0) {
			return true;
		}
		if (stat == 0) {
			return false;
		}
	}
	$throwNew($InterruptedException);
}

bool AbstractQueuedLongSynchronizer::release(int64_t arg) {
	if (tryRelease(arg)) {
		signalNext(this->head);
		return true;
	}
	return false;
}

void AbstractQueuedLongSynchronizer::acquireShared(int64_t arg) {
	if (tryAcquireShared(arg) < 0) {
		acquire(nullptr, arg, true, false, false, 0);
	}
}

void AbstractQueuedLongSynchronizer::acquireSharedInterruptibly(int64_t arg) {
	bool var$0 = $Thread::interrupted();
	if (!var$0) {
		bool var$1 = tryAcquireShared(arg) < 0;
		var$0 = (var$1 && acquire(nullptr, arg, true, true, false, 0) < 0);
	}
	if (var$0) {
		$throwNew($InterruptedException);
	}
}

bool AbstractQueuedLongSynchronizer::tryAcquireSharedNanos(int64_t arg, int64_t nanosTimeout) {
	if (!$Thread::interrupted()) {
		if (tryAcquireShared(arg) >= 0) {
			return true;
		}
		if (nanosTimeout <= (int64_t)0) {
			return false;
		}
		int32_t stat = acquire(nullptr, arg, true, true, true, $System::nanoTime() + nanosTimeout);
		if (stat > 0) {
			return true;
		}
		if (stat == 0) {
			return false;
		}
	}
	$throwNew($InterruptedException);
}

bool AbstractQueuedLongSynchronizer::releaseShared(int64_t arg) {
	if (tryReleaseShared(arg)) {
		signalNext(this->head);
		return true;
	}
	return false;
}

bool AbstractQueuedLongSynchronizer::hasQueuedThreads() {
	$useLocalCurrentObjectStackCache();
	{
		$var($AbstractQueuedLongSynchronizer$Node, p, this->tail);
		$var($AbstractQueuedLongSynchronizer$Node, h, this->head);
		for (; p != h && p != nullptr; $assign(p, $nc(p)->prev)) {
			if (p->status >= 0) {
				return true;
			}
		}
	}
	return false;
}

bool AbstractQueuedLongSynchronizer::hasContended() {
	return this->head != nullptr;
}

$Thread* AbstractQueuedLongSynchronizer::getFirstQueuedThread() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, first, nullptr);
	$var($Thread, w, nullptr);
	$var($AbstractQueuedLongSynchronizer$Node, h, nullptr);
	$var($AbstractQueuedLongSynchronizer$Node, s, nullptr);
	bool var$0 = ($assign(h, this->head)) != nullptr;
	if (var$0) {
		bool var$2 = ($assign(s, $nc(h)->next)) == nullptr;
		bool var$1 = var$2 || ($assign(first, $nc(s)->waiter)) == nullptr;
		var$0 = (var$1 || $nc(s)->prev == nullptr);
	}
	if (var$0) {
		{
			$var($AbstractQueuedLongSynchronizer$Node, p, this->tail);
			$var($AbstractQueuedLongSynchronizer$Node, q, nullptr);
			for (; p != nullptr && ($assign(q, p->prev)) != nullptr; $assign(p, q)) {
				if (($assign(w, p->waiter)) != nullptr) {
					$assign(first, w);
				}
			}
		}
	}
	return first;
}

bool AbstractQueuedLongSynchronizer::isQueued($Thread* thread) {
	if (thread == nullptr) {
		$throwNew($NullPointerException);
	}
	{
		$var($AbstractQueuedLongSynchronizer$Node, p, this->tail);
		for (; p != nullptr; $assign(p, $nc(p)->prev)) {
			if (p->waiter == thread) {
				return true;
			}
		}
	}
	return false;
}

bool AbstractQueuedLongSynchronizer::apparentlyFirstQueuedIsExclusive() {
	$useLocalCurrentObjectStackCache();
	$var($AbstractQueuedLongSynchronizer$Node, h, nullptr);
	$var($AbstractQueuedLongSynchronizer$Node, s, nullptr);
	bool var$2 = ($assign(h, this->head)) != nullptr;
	bool var$1 = var$2 && ($assign(s, $nc(h)->next)) != nullptr;
	bool var$0 = var$1 && !($instanceOf($AbstractQueuedLongSynchronizer$SharedNode, s));
	return var$0 && $nc(s)->waiter != nullptr;
}

bool AbstractQueuedLongSynchronizer::hasQueuedPredecessors() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, first, nullptr);
	$var($AbstractQueuedLongSynchronizer$Node, h, nullptr);
	$var($AbstractQueuedLongSynchronizer$Node, s, nullptr);
	bool var$0 = ($assign(h, this->head)) != nullptr;
	if (var$0) {
		bool var$2 = ($assign(s, $nc(h)->next)) == nullptr;
		bool var$1 = var$2 || ($assign(first, $nc(s)->waiter)) == nullptr;
		var$0 = (var$1 || $nc(s)->prev == nullptr);
	}
	if (var$0) {
		$assign(first, getFirstQueuedThread());
	}
	return first != nullptr && first != $Thread::currentThread();
}

int32_t AbstractQueuedLongSynchronizer::getQueueLength() {
	int32_t n = 0;
	{
		$var($AbstractQueuedLongSynchronizer$Node, p, this->tail);
		for (; p != nullptr; $assign(p, $nc(p)->prev)) {
			if (p->waiter != nullptr) {
				++n;
			}
		}
	}
	return n;
}

$Collection* AbstractQueuedLongSynchronizer::getQueuedThreads() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, list, $new($ArrayList));
	{
		$var($AbstractQueuedLongSynchronizer$Node, p, this->tail);
		for (; p != nullptr; $assign(p, $nc(p)->prev)) {
			$var($Thread, t, p->waiter);
			if (t != nullptr) {
				list->add(t);
			}
		}
	}
	return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(list)));
}

$Collection* AbstractQueuedLongSynchronizer::getExclusiveQueuedThreads() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, list, $new($ArrayList));
	{
		$var($AbstractQueuedLongSynchronizer$Node, p, this->tail);
		for (; p != nullptr; $assign(p, $nc(p)->prev)) {
			if (!($instanceOf($AbstractQueuedLongSynchronizer$SharedNode, p))) {
				$var($Thread, t, p->waiter);
				if (t != nullptr) {
					list->add(t);
				}
			}
		}
	}
	return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(list)));
}

$Collection* AbstractQueuedLongSynchronizer::getSharedQueuedThreads() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, list, $new($ArrayList));
	{
		$var($AbstractQueuedLongSynchronizer$Node, p, this->tail);
		for (; p != nullptr; $assign(p, $nc(p)->prev)) {
			if ($instanceOf($AbstractQueuedLongSynchronizer$SharedNode, p)) {
				$var($Thread, t, p->waiter);
				if (t != nullptr) {
					list->add(t);
				}
			}
		}
	}
	return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(list)));
}

$String* AbstractQueuedLongSynchronizer::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({$($AbstractOwnableSynchronizer::toString()), "[State = "_s}));
	$var($String, var$2, $$concat(var$3, $$str(getState())));
	$var($String, var$1, $$concat(var$2, ", "_s));
	$var($String, var$0, $$concat(var$1, (hasQueuedThreads() ? "non"_s : ""_s)));
	return $concat(var$0, "empty queue]"_s);
}

bool AbstractQueuedLongSynchronizer::owns($AbstractQueuedLongSynchronizer$ConditionObject* condition) {
	return $nc(condition)->isOwnedBy(this);
}

bool AbstractQueuedLongSynchronizer::hasWaiters($AbstractQueuedLongSynchronizer$ConditionObject* condition) {
	if (!owns(condition)) {
		$throwNew($IllegalArgumentException, "Not owner"_s);
	}
	return $nc(condition)->hasWaiters();
}

int32_t AbstractQueuedLongSynchronizer::getWaitQueueLength($AbstractQueuedLongSynchronizer$ConditionObject* condition) {
	if (!owns(condition)) {
		$throwNew($IllegalArgumentException, "Not owner"_s);
	}
	return $nc(condition)->getWaitQueueLength();
}

$Collection* AbstractQueuedLongSynchronizer::getWaitingThreads($AbstractQueuedLongSynchronizer$ConditionObject* condition) {
	if (!owns(condition)) {
		$throwNew($IllegalArgumentException, "Not owner"_s);
	}
	return $nc(condition)->getWaitingThreads();
}

void clinit$AbstractQueuedLongSynchronizer($Class* class$) {
	$assignStatic(AbstractQueuedLongSynchronizer::U, $Unsafe::getUnsafe());
	AbstractQueuedLongSynchronizer::STATE = $nc(AbstractQueuedLongSynchronizer::U)->objectFieldOffset(AbstractQueuedLongSynchronizer::class$, "state"_s);
	AbstractQueuedLongSynchronizer::HEAD = $nc(AbstractQueuedLongSynchronizer::U)->objectFieldOffset(AbstractQueuedLongSynchronizer::class$, "head"_s);
	AbstractQueuedLongSynchronizer::TAIL = $nc(AbstractQueuedLongSynchronizer::U)->objectFieldOffset(AbstractQueuedLongSynchronizer::class$, "tail"_s);
	{
		$load($LockSupport);
		$Class* ensureLoaded = $LockSupport::class$;
	}
}

AbstractQueuedLongSynchronizer::AbstractQueuedLongSynchronizer() {
}

$Class* AbstractQueuedLongSynchronizer::load$($String* name, bool initialize) {
	$loadClass(AbstractQueuedLongSynchronizer, name, initialize, &_AbstractQueuedLongSynchronizer_ClassInfo_, clinit$AbstractQueuedLongSynchronizer, allocate$AbstractQueuedLongSynchronizer);
	return class$;
}

$Class* AbstractQueuedLongSynchronizer::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java