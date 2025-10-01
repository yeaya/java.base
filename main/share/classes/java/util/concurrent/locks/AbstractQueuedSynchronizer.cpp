#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ExclusiveNode.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$Node.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$SharedNode.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef CANCELLED
#undef HEAD
#undef U
#undef TAIL
#undef WAITING
#undef STATE
#undef COND

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
using $AbstractQueuedSynchronizer$ConditionObject = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject;
using $AbstractQueuedSynchronizer$ExclusiveNode = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$ExclusiveNode;
using $AbstractQueuedSynchronizer$Node = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node;
using $AbstractQueuedSynchronizer$SharedNode = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$SharedNode;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _AbstractQueuedSynchronizer_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractQueuedSynchronizer, serialVersionUID)},
	{"WAITING", "I", nullptr, $STATIC | $FINAL, $constField(AbstractQueuedSynchronizer, WAITING)},
	{"CANCELLED", "I", nullptr, $STATIC | $FINAL, $constField(AbstractQueuedSynchronizer, CANCELLED)},
	{"COND", "I", nullptr, $STATIC | $FINAL, $constField(AbstractQueuedSynchronizer, COND)},
	{"head", "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(AbstractQueuedSynchronizer, head)},
	{"tail", "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(AbstractQueuedSynchronizer, tail)},
	{"state", "I", nullptr, $PRIVATE | $VOLATILE, $field(AbstractQueuedSynchronizer, state)},
	{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedSynchronizer, U)},
	{"STATE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedSynchronizer, STATE)},
	{"HEAD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedSynchronizer, HEAD)},
	{"TAIL", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractQueuedSynchronizer, TAIL)},
	{}
};

$MethodInfo _AbstractQueuedSynchronizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::init$))},
	{"acquire", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;IZZZJ)I", nullptr, $FINAL, $method(static_cast<int32_t(AbstractQueuedSynchronizer::*)($AbstractQueuedSynchronizer$Node*,int32_t,bool,bool,bool,int64_t)>(&AbstractQueuedSynchronizer::acquire))},
	{"acquire", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AbstractQueuedSynchronizer::*)(int32_t)>(&AbstractQueuedSynchronizer::acquire))},
	{"acquireInterruptibly", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AbstractQueuedSynchronizer::*)(int32_t)>(&AbstractQueuedSynchronizer::acquireInterruptibly)), "java.lang.InterruptedException"},
	{"acquireShared", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AbstractQueuedSynchronizer::*)(int32_t)>(&AbstractQueuedSynchronizer::acquireShared))},
	{"acquireSharedInterruptibly", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AbstractQueuedSynchronizer::*)(int32_t)>(&AbstractQueuedSynchronizer::acquireSharedInterruptibly)), "java.lang.InterruptedException"},
	{"apparentlyFirstQueuedIsExclusive", "()Z", nullptr, $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::apparentlyFirstQueuedIsExclusive))},
	{"cancelAcquire", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;ZZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AbstractQueuedSynchronizer::*)($AbstractQueuedSynchronizer$Node*,bool,bool)>(&AbstractQueuedSynchronizer::cancelAcquire))},
	{"casTail", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", nullptr, $PRIVATE, $method(static_cast<bool(AbstractQueuedSynchronizer::*)($AbstractQueuedSynchronizer$Node*,$AbstractQueuedSynchronizer$Node*)>(&AbstractQueuedSynchronizer::casTail))},
	{"cleanQueue", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::cleanQueue))},
	{"compareAndSetState", "(II)Z", nullptr, $PROTECTED | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)(int32_t,int32_t)>(&AbstractQueuedSynchronizer::compareAndSetState))},
	{"enqueue", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V", nullptr, $FINAL, $method(static_cast<void(AbstractQueuedSynchronizer::*)($AbstractQueuedSynchronizer$Node*)>(&AbstractQueuedSynchronizer::enqueue))},
	{"getExclusiveQueuedThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PUBLIC | $FINAL, $method(static_cast<$Collection*(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::getExclusiveQueuedThreads))},
	{"getFirstQueuedThread", "()Ljava/lang/Thread;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Thread*(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::getFirstQueuedThread))},
	{"getQueueLength", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::getQueueLength))},
	{"getQueuedThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PUBLIC | $FINAL, $method(static_cast<$Collection*(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::getQueuedThreads))},
	{"getSharedQueuedThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PUBLIC | $FINAL, $method(static_cast<$Collection*(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::getSharedQueuedThreads))},
	{"getState", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::getState))},
	{"getWaitQueueLength", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AbstractQueuedSynchronizer::*)($AbstractQueuedSynchronizer$ConditionObject*)>(&AbstractQueuedSynchronizer::getWaitQueueLength))},
	{"getWaitingThreads", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Ljava/util/Collection;", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Ljava/util/Collection<Ljava/lang/Thread;>;", $PUBLIC | $FINAL, $method(static_cast<$Collection*(AbstractQueuedSynchronizer::*)($AbstractQueuedSynchronizer$ConditionObject*)>(&AbstractQueuedSynchronizer::getWaitingThreads))},
	{"hasContended", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::hasContended))},
	{"hasQueuedPredecessors", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::hasQueuedPredecessors))},
	{"hasQueuedThreads", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::hasQueuedThreads))},
	{"hasWaiters", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)($AbstractQueuedSynchronizer$ConditionObject*)>(&AbstractQueuedSynchronizer::hasWaiters))},
	{"isEnqueued", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", nullptr, $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)($AbstractQueuedSynchronizer$Node*)>(&AbstractQueuedSynchronizer::isEnqueued))},
	{"isHeldExclusively", "()Z", nullptr, $PROTECTED},
	{"isQueued", "(Ljava/lang/Thread;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)($Thread*)>(&AbstractQueuedSynchronizer::isQueued))},
	{"owns", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)($AbstractQueuedSynchronizer$ConditionObject*)>(&AbstractQueuedSynchronizer::owns))},
	{"release", "(I)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)(int32_t)>(&AbstractQueuedSynchronizer::release))},
	{"releaseShared", "(I)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)(int32_t)>(&AbstractQueuedSynchronizer::releaseShared))},
	{"setState", "(I)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(AbstractQueuedSynchronizer::*)(int32_t)>(&AbstractQueuedSynchronizer::setState))},
	{"signalNext", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($AbstractQueuedSynchronizer$Node*)>(&AbstractQueuedSynchronizer::signalNext))},
	{"signalNextIfShared", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($AbstractQueuedSynchronizer$Node*)>(&AbstractQueuedSynchronizer::signalNextIfShared))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAcquire", "(I)Z", nullptr, $PROTECTED},
	{"tryAcquireNanos", "(IJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)(int32_t,int64_t)>(&AbstractQueuedSynchronizer::tryAcquireNanos)), "java.lang.InterruptedException"},
	{"tryAcquireShared", "(I)I", nullptr, $PROTECTED},
	{"tryAcquireSharedNanos", "(IJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(AbstractQueuedSynchronizer::*)(int32_t,int64_t)>(&AbstractQueuedSynchronizer::tryAcquireSharedNanos)), "java.lang.InterruptedException"},
	{"tryInitializeHead", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractQueuedSynchronizer::*)()>(&AbstractQueuedSynchronizer::tryInitializeHead))},
	{"tryRelease", "(I)Z", nullptr, $PROTECTED},
	{"tryReleaseShared", "(I)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AbstractQueuedSynchronizer_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionObject", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "ConditionObject", $PUBLIC},
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionNode", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "ConditionNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$SharedNode", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "SharedNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$ExclusiveNode", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "ExclusiveNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.AbstractQueuedSynchronizer$Node", "java.util.concurrent.locks.AbstractQueuedSynchronizer", "Node", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractQueuedSynchronizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.locks.AbstractQueuedSynchronizer",
	"java.util.concurrent.locks.AbstractOwnableSynchronizer",
	nullptr,
	_AbstractQueuedSynchronizer_FieldInfo_,
	_AbstractQueuedSynchronizer_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractQueuedSynchronizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionObject,java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionNode,java.util.concurrent.locks.AbstractQueuedSynchronizer$SharedNode,java.util.concurrent.locks.AbstractQueuedSynchronizer$ExclusiveNode,java.util.concurrent.locks.AbstractQueuedSynchronizer$Node"
};

$Object* allocate$AbstractQueuedSynchronizer($Class* clazz) {
	return $of($alloc(AbstractQueuedSynchronizer));
}

$Unsafe* AbstractQueuedSynchronizer::U = nullptr;
int64_t AbstractQueuedSynchronizer::STATE = 0;
int64_t AbstractQueuedSynchronizer::HEAD = 0;
int64_t AbstractQueuedSynchronizer::TAIL = 0;

void AbstractQueuedSynchronizer::init$() {
	$AbstractOwnableSynchronizer::init$();
}

int32_t AbstractQueuedSynchronizer::getState() {
	return this->state;
}

void AbstractQueuedSynchronizer::setState(int32_t newState) {
	this->state = newState;
}

bool AbstractQueuedSynchronizer::compareAndSetState(int32_t expect, int32_t update) {
	return $nc(AbstractQueuedSynchronizer::U)->compareAndSetInt(this, AbstractQueuedSynchronizer::STATE, expect, update);
}

bool AbstractQueuedSynchronizer::casTail($AbstractQueuedSynchronizer$Node* c, $AbstractQueuedSynchronizer$Node* v) {
	return $nc(AbstractQueuedSynchronizer::U)->compareAndSetReference(this, AbstractQueuedSynchronizer::TAIL, c, v);
}

void AbstractQueuedSynchronizer::tryInitializeHead() {
	$var($AbstractQueuedSynchronizer$Node, h, $new($AbstractQueuedSynchronizer$ExclusiveNode));
	if ($nc(AbstractQueuedSynchronizer::U)->compareAndSetReference(this, AbstractQueuedSynchronizer::HEAD, nullptr, h)) {
		$set(this, tail, h);
	}
}

void AbstractQueuedSynchronizer::enqueue($AbstractQueuedSynchronizer$Node* node) {
	if (node != nullptr) {
		for (;;) {
			$var($AbstractQueuedSynchronizer$Node, t, this->tail);
			node->setPrevRelaxed(t);
			if (t == nullptr) {
				tryInitializeHead();
			} else if (casTail(t, node)) {
				$set($nc(t), next, node);
				if (t->status < 0) {
					$LockSupport::unpark($nc(node)->waiter);
				}
				break;
			}
		}
	}
}

bool AbstractQueuedSynchronizer::isEnqueued($AbstractQueuedSynchronizer$Node* node) {
	{
		$var($AbstractQueuedSynchronizer$Node, t, this->tail);
		for (; t != nullptr; $assign(t, $nc(t)->prev)) {
			if (t == node) {
				return true;
			}
		}
	}
	return false;
}

void AbstractQueuedSynchronizer::signalNext($AbstractQueuedSynchronizer$Node* h) {
	$init(AbstractQueuedSynchronizer);
	$var($AbstractQueuedSynchronizer$Node, s, nullptr);
	bool var$0 = h != nullptr && ($assign(s, h->next)) != nullptr;
	if (var$0 && $nc(s)->status != 0) {
		s->getAndUnsetStatus(AbstractQueuedSynchronizer::WAITING);
		$LockSupport::unpark(s->waiter);
	}
}

void AbstractQueuedSynchronizer::signalNextIfShared($AbstractQueuedSynchronizer$Node* h) {
	$init(AbstractQueuedSynchronizer);
	$var($AbstractQueuedSynchronizer$Node, s, nullptr);
	bool var$1 = h != nullptr && ($assign(s, h->next)) != nullptr;
	bool var$0 = var$1 && ($instanceOf($AbstractQueuedSynchronizer$SharedNode, s));
	if (var$0 && $nc(s)->status != 0) {
		s->getAndUnsetStatus(AbstractQueuedSynchronizer::WAITING);
		$LockSupport::unpark(s->waiter);
	}
}

int32_t AbstractQueuedSynchronizer::acquire($AbstractQueuedSynchronizer$Node* node$renamed, int32_t arg, bool shared, bool interruptible, bool timed, int64_t time) {
	$var($AbstractQueuedSynchronizer$Node, node, node$renamed);
	$var($Thread, current, $Thread::currentThread());
	int8_t spins = (int8_t)0;
	int8_t postSpins = (int8_t)0;
	bool interrupted = false;
	bool first = false;
	$var($AbstractQueuedSynchronizer$Node, pred, nullptr);
	for (;;) {
		bool var$0 = !first && ($assign(pred, (node == nullptr) ? ($AbstractQueuedSynchronizer$Node*)nullptr : $cast($AbstractQueuedSynchronizer$Node, $nc(node)->prev))) != nullptr;
		if (var$0 && !(first = (this->head == pred))) {
			if ($nc(pred)->status < 0) {
				cleanQueue();
				continue;
			} else if ($nc(pred)->prev == nullptr) {
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
			} catch ($Throwable&) {
				$var($Throwable, ex, $catch());
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
				$assign(node, $new($AbstractQueuedSynchronizer$SharedNode));
			} else {
				$assign(node, $new($AbstractQueuedSynchronizer$ExclusiveNode));
			}
		} else if (pred == nullptr) {
			$set($nc(node), waiter, current);
			$var($AbstractQueuedSynchronizer$Node, t, this->tail);
			node->setPrevRelaxed(t);
			if (t == nullptr) {
				tryInitializeHead();
			} else if (!casTail(t, node)) {
				$nc(node)->setPrevRelaxed(nullptr);
			} else {
				$set($nc(t), next, node);
			}
		} else if (first && spins != 0) {
			--spins;
			$Thread::onSpinWait();
		} else if ($nc(node)->status == 0) {
			node->status = AbstractQueuedSynchronizer::WAITING;
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

void AbstractQueuedSynchronizer::cleanQueue() {
	for (;;) {
		{
			$var($AbstractQueuedSynchronizer$Node, q, this->tail);
			$var($AbstractQueuedSynchronizer$Node, s, nullptr);
			$var($AbstractQueuedSynchronizer$Node, p, nullptr);
			$var($AbstractQueuedSynchronizer$Node, n, nullptr);
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

int32_t AbstractQueuedSynchronizer::cancelAcquire($AbstractQueuedSynchronizer$Node* node, bool interrupted, bool interruptible) {
	if (node != nullptr) {
		$set(node, waiter, nullptr);
		node->status = AbstractQueuedSynchronizer::CANCELLED;
		if (node->prev != nullptr) {
			cleanQueue();
		}
	}
	if (interrupted) {
		if (interruptible) {
			return AbstractQueuedSynchronizer::CANCELLED;
		} else {
			$($Thread::currentThread())->interrupt();
		}
	}
	return 0;
}

bool AbstractQueuedSynchronizer::tryAcquire(int32_t arg) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool AbstractQueuedSynchronizer::tryRelease(int32_t arg) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t AbstractQueuedSynchronizer::tryAcquireShared(int32_t arg) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool AbstractQueuedSynchronizer::tryReleaseShared(int32_t arg) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool AbstractQueuedSynchronizer::isHeldExclusively() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void AbstractQueuedSynchronizer::acquire(int32_t arg) {
	if (!tryAcquire(arg)) {
		acquire(nullptr, arg, false, false, false, 0);
	}
}

void AbstractQueuedSynchronizer::acquireInterruptibly(int32_t arg) {
	bool var$0 = $Thread::interrupted();
	if (!var$0) {
		bool var$1 = !tryAcquire(arg);
		var$0 = (var$1 && acquire(nullptr, arg, false, true, false, 0) < 0);
	}
	if (var$0) {
		$throwNew($InterruptedException);
	}
}

bool AbstractQueuedSynchronizer::tryAcquireNanos(int32_t arg, int64_t nanosTimeout) {
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

bool AbstractQueuedSynchronizer::release(int32_t arg) {
	if (tryRelease(arg)) {
		signalNext(this->head);
		return true;
	}
	return false;
}

void AbstractQueuedSynchronizer::acquireShared(int32_t arg) {
	if (tryAcquireShared(arg) < 0) {
		acquire(nullptr, arg, true, false, false, 0);
	}
}

void AbstractQueuedSynchronizer::acquireSharedInterruptibly(int32_t arg) {
	bool var$0 = $Thread::interrupted();
	if (!var$0) {
		bool var$1 = tryAcquireShared(arg) < 0;
		var$0 = (var$1 && acquire(nullptr, arg, true, true, false, 0) < 0);
	}
	if (var$0) {
		$throwNew($InterruptedException);
	}
}

bool AbstractQueuedSynchronizer::tryAcquireSharedNanos(int32_t arg, int64_t nanosTimeout) {
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

bool AbstractQueuedSynchronizer::releaseShared(int32_t arg) {
	if (tryReleaseShared(arg)) {
		signalNext(this->head);
		return true;
	}
	return false;
}

bool AbstractQueuedSynchronizer::hasQueuedThreads() {
	{
		$var($AbstractQueuedSynchronizer$Node, p, this->tail);
		$var($AbstractQueuedSynchronizer$Node, h, this->head);
		for (; p != h && p != nullptr; $assign(p, $nc(p)->prev)) {
			if (p->status >= 0) {
				return true;
			}
		}
	}
	return false;
}

bool AbstractQueuedSynchronizer::hasContended() {
	return this->head != nullptr;
}

$Thread* AbstractQueuedSynchronizer::getFirstQueuedThread() {
	$var($Thread, first, nullptr);
	$var($Thread, w, nullptr);
	$var($AbstractQueuedSynchronizer$Node, h, nullptr);
	$var($AbstractQueuedSynchronizer$Node, s, nullptr);
	bool var$0 = ($assign(h, this->head)) != nullptr;
	if (var$0) {
		bool var$2 = ($assign(s, $nc(h)->next)) == nullptr;
		bool var$1 = var$2 || ($assign(first, $nc(s)->waiter)) == nullptr;
		var$0 = (var$1 || $nc(s)->prev == nullptr);
	}
	if (var$0) {
		{
			$var($AbstractQueuedSynchronizer$Node, p, this->tail);
			$var($AbstractQueuedSynchronizer$Node, q, nullptr);
			for (; p != nullptr && ($assign(q, p->prev)) != nullptr; $assign(p, q)) {
				if (($assign(w, p->waiter)) != nullptr) {
					$assign(first, w);
				}
			}
		}
	}
	return first;
}

bool AbstractQueuedSynchronizer::isQueued($Thread* thread) {
	if (thread == nullptr) {
		$throwNew($NullPointerException);
	}
	{
		$var($AbstractQueuedSynchronizer$Node, p, this->tail);
		for (; p != nullptr; $assign(p, $nc(p)->prev)) {
			if (p->waiter == thread) {
				return true;
			}
		}
	}
	return false;
}

bool AbstractQueuedSynchronizer::apparentlyFirstQueuedIsExclusive() {
	$var($AbstractQueuedSynchronizer$Node, h, nullptr);
	$var($AbstractQueuedSynchronizer$Node, s, nullptr);
	bool var$2 = ($assign(h, this->head)) != nullptr;
	bool var$1 = var$2 && ($assign(s, $nc(h)->next)) != nullptr;
	bool var$0 = var$1 && !($instanceOf($AbstractQueuedSynchronizer$SharedNode, s));
	return var$0 && $nc(s)->waiter != nullptr;
}

bool AbstractQueuedSynchronizer::hasQueuedPredecessors() {
	$var($Thread, first, nullptr);
	$var($AbstractQueuedSynchronizer$Node, h, nullptr);
	$var($AbstractQueuedSynchronizer$Node, s, nullptr);
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

int32_t AbstractQueuedSynchronizer::getQueueLength() {
	int32_t n = 0;
	{
		$var($AbstractQueuedSynchronizer$Node, p, this->tail);
		for (; p != nullptr; $assign(p, $nc(p)->prev)) {
			if (p->waiter != nullptr) {
				++n;
			}
		}
	}
	return n;
}

$Collection* AbstractQueuedSynchronizer::getQueuedThreads() {
	$var($ArrayList, list, $new($ArrayList));
	{
		$var($AbstractQueuedSynchronizer$Node, p, this->tail);
		for (; p != nullptr; $assign(p, $nc(p)->prev)) {
			$var($Thread, t, p->waiter);
			if (t != nullptr) {
				list->add(t);
			}
		}
	}
	return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(list)));
}

$Collection* AbstractQueuedSynchronizer::getExclusiveQueuedThreads() {
	$var($ArrayList, list, $new($ArrayList));
	{
		$var($AbstractQueuedSynchronizer$Node, p, this->tail);
		for (; p != nullptr; $assign(p, $nc(p)->prev)) {
			if (!($instanceOf($AbstractQueuedSynchronizer$SharedNode, p))) {
				$var($Thread, t, p->waiter);
				if (t != nullptr) {
					list->add(t);
				}
			}
		}
	}
	return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(list)));
}

$Collection* AbstractQueuedSynchronizer::getSharedQueuedThreads() {
	$var($ArrayList, list, $new($ArrayList));
	{
		$var($AbstractQueuedSynchronizer$Node, p, this->tail);
		for (; p != nullptr; $assign(p, $nc(p)->prev)) {
			if ($instanceOf($AbstractQueuedSynchronizer$SharedNode, p)) {
				$var($Thread, t, p->waiter);
				if (t != nullptr) {
					list->add(t);
				}
			}
		}
	}
	return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(list)));
}

$String* AbstractQueuedSynchronizer::toString() {
	$var($String, var$3, $$str({$($AbstractOwnableSynchronizer::toString()), "[State = "_s}));
	$var($String, var$2, $$concat(var$3, $$str(getState())));
	$var($String, var$1, $$concat(var$2, ", "));
	$var($String, var$0, $$concat(var$1, (hasQueuedThreads() ? "non"_s : ""_s)));
	return $concat(var$0, "empty queue]");
}

bool AbstractQueuedSynchronizer::owns($AbstractQueuedSynchronizer$ConditionObject* condition) {
	return $nc(condition)->isOwnedBy(this);
}

bool AbstractQueuedSynchronizer::hasWaiters($AbstractQueuedSynchronizer$ConditionObject* condition) {
	if (!owns(condition)) {
		$throwNew($IllegalArgumentException, "Not owner"_s);
	}
	return $nc(condition)->hasWaiters();
}

int32_t AbstractQueuedSynchronizer::getWaitQueueLength($AbstractQueuedSynchronizer$ConditionObject* condition) {
	if (!owns(condition)) {
		$throwNew($IllegalArgumentException, "Not owner"_s);
	}
	return $nc(condition)->getWaitQueueLength();
}

$Collection* AbstractQueuedSynchronizer::getWaitingThreads($AbstractQueuedSynchronizer$ConditionObject* condition) {
	if (!owns(condition)) {
		$throwNew($IllegalArgumentException, "Not owner"_s);
	}
	return $nc(condition)->getWaitingThreads();
}

void clinit$AbstractQueuedSynchronizer($Class* class$) {
	$assignStatic(AbstractQueuedSynchronizer::U, $Unsafe::getUnsafe());
	AbstractQueuedSynchronizer::STATE = $nc(AbstractQueuedSynchronizer::U)->objectFieldOffset(AbstractQueuedSynchronizer::class$, "state"_s);
	AbstractQueuedSynchronizer::HEAD = $nc(AbstractQueuedSynchronizer::U)->objectFieldOffset(AbstractQueuedSynchronizer::class$, "head"_s);
	AbstractQueuedSynchronizer::TAIL = $nc(AbstractQueuedSynchronizer::U)->objectFieldOffset(AbstractQueuedSynchronizer::class$, "tail"_s);
	{
		$load($LockSupport);
		$Class* ensureLoaded = $LockSupport::class$;
	}
}

AbstractQueuedSynchronizer::AbstractQueuedSynchronizer() {
}

$Class* AbstractQueuedSynchronizer::load$($String* name, bool initialize) {
	$loadClass(AbstractQueuedSynchronizer, name, initialize, &_AbstractQueuedSynchronizer_ClassInfo_, clinit$AbstractQueuedSynchronizer, allocate$AbstractQueuedSynchronizer);
	return class$;
}

$Class* AbstractQueuedSynchronizer::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java