#include <java/util/concurrent/Phaser.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runtime.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/Phaser$QNode.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/TimeoutException.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

#undef COUNTS_MASK
#undef EMPTY
#undef MAX_PARTIES
#undef MAX_PHASE
#undef NCPU
#undef ONE_ARRIVAL
#undef ONE_DEREGISTER
#undef ONE_PARTY
#undef PARTIES_MASK
#undef PARTIES_SHIFT
#undef PHASE_SHIFT
#undef SPINS_PER_ARRIVAL
#undef STATE
#undef TERMINATION_BIT
#undef TYPE
#undef UNARRIVED_MASK

using $ClassInfo = ::java::lang::ClassInfo;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runtime = ::java::lang::Runtime;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $Phaser$QNode = ::java::util::concurrent::Phaser$QNode;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $TimeoutException = ::java::util::concurrent::TimeoutException;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {

int32_t Phaser::NCPU = 0;
int32_t Phaser::SPINS_PER_ARRIVAL = 0;
$VarHandle* Phaser::STATE = nullptr;

int32_t Phaser::unarrivedOf(int64_t s) {
	$init(Phaser);
	int32_t counts = (int32_t)s;
	return (counts == Phaser::EMPTY) ? 0 : (counts & Phaser::UNARRIVED_MASK);
}

int32_t Phaser::partiesOf(int64_t s) {
	$init(Phaser);
	return $usr((int32_t)s, Phaser::PARTIES_SHIFT);
}

int32_t Phaser::phaseOf(int64_t s) {
	$init(Phaser);
	return (int32_t)($usr(s, Phaser::PHASE_SHIFT));
}

int32_t Phaser::arrivedOf(int64_t s) {
	$init(Phaser);
	int32_t counts = (int32_t)s;
	return (counts == Phaser::EMPTY) ? 0 : ($usr(counts, Phaser::PARTIES_SHIFT)) - (counts & Phaser::UNARRIVED_MASK);
}

$String* Phaser::badArrive(int64_t s) {
	return $str({"Attempted arrival of unregistered party for "_s, $(stateToString(s))});
}

$String* Phaser::badRegister(int64_t s) {
	$useLocalObjectStack();
	return $str({"Attempt to register more than "_s, $$str(Phaser::MAX_PARTIES), " parties for "_s, $(stateToString(s))});
}

int32_t Phaser::doArrive(int32_t adjust) {
	$useLocalObjectStack();
	$var(Phaser, root, this->root);
	for (;;) {
		int64_t s = (root == this) ? $cast(int64_t, this->state) : reconcileState();
		int32_t phase = (int32_t)($usr(s, Phaser::PHASE_SHIFT));
		if (phase < 0) {
			return phase;
		}
		int32_t counts = (int32_t)s;
		int32_t unarrived = (counts == Phaser::EMPTY) ? 0 : (counts & Phaser::UNARRIVED_MASK);
		if (unarrived <= 0) {
			$throwNew($IllegalStateException, $(badArrive(s)));
		}
		$var($Object, var$0, $of(s));
		if ($nc(Phaser::STATE)->compareAndSet($$new($ObjectArray, {this, var$0, $$of(s -= adjust)}))) {
			if (unarrived == 1) {
				int64_t n = s & Phaser::PARTIES_MASK;
				int32_t nextUnarrived = $usr((int32_t)n, Phaser::PARTIES_SHIFT);
				if (root == this) {
					if (onAdvance(phase, nextUnarrived)) {
						n |= Phaser::TERMINATION_BIT;
					} else if (nextUnarrived == 0) {
						n |= Phaser::EMPTY;
					} else {
						n |= nextUnarrived;
					}
					int32_t nextPhase = (phase + 1) & Phaser::MAX_PHASE;
					n |= $sl((int64_t)nextPhase, Phaser::PHASE_SHIFT);
					$nc(Phaser::STATE)->compareAndSet($$new($ObjectArray, {this, $$of(s), $$of(n)}));
					releaseWaiters(phase);
				} else if (nextUnarrived == 0) {
					phase = $nc(this->parent)->doArrive(Phaser::ONE_DEREGISTER);
					$nc(Phaser::STATE)->compareAndSet($$new($ObjectArray, {this, $$of(s), $$of(s | Phaser::EMPTY)}));
				} else {
					phase = $nc(this->parent)->doArrive(Phaser::ONE_ARRIVAL);
				}
			}
			return phase;
		}
	}
}

int32_t Phaser::doRegister(int32_t registrations) {
	$useLocalObjectStack();
	int64_t adjust = ($sl((int64_t)registrations, Phaser::PARTIES_SHIFT)) | registrations;
	$var(Phaser, parent, this->parent);
	int32_t phase = 0;
	for (;;) {
		int64_t s = (parent == nullptr) ? $cast(int64_t, this->state) : reconcileState();
		int32_t counts = (int32_t)s;
		int32_t parties = $usr(counts, Phaser::PARTIES_SHIFT);
		int32_t unarrived = counts & Phaser::UNARRIVED_MASK;
		if (registrations > Phaser::MAX_PARTIES - parties) {
			$throwNew($IllegalStateException, $(badRegister(s)));
		}
		phase = (int32_t)($usr(s, Phaser::PHASE_SHIFT));
		if (phase < 0) {
			break;
		}
		if (counts != Phaser::EMPTY) {
			if (parent == nullptr || reconcileState() == s) {
				if (unarrived == 0) {
					$nc(this->root)->internalAwaitAdvance(phase, nullptr);
				} else if ($nc(Phaser::STATE)->compareAndSet($$new($ObjectArray, {this, $$of(s), $$of(s + adjust)}))) {
					break;
				}
			}
		} else if (parent == nullptr) {
			int64_t next = ($sl((int64_t)phase, Phaser::PHASE_SHIFT)) | adjust;
			if ($nc(Phaser::STATE)->compareAndSet($$new($ObjectArray, {this, $$of(s), $$of(next)}))) {
				break;
			}
		} else {
			$synchronized(this) {
				if (this->state == s) {
					phase = parent->doRegister(1);
					if (phase < 0) {
						break;
					}
					while (!$nc(Phaser::STATE)->weakCompareAndSet($$new($ObjectArray, {this, $$of(s), $$of(($sl((int64_t)phase, Phaser::PHASE_SHIFT)) | adjust)}))) {
						s = this->state;
						phase = (int32_t)($usr($nc(this->root)->state, Phaser::PHASE_SHIFT));
					}
					break;
				}
			}
		}
	}
	return phase;
}

int64_t Phaser::reconcileState() {
	$useLocalObjectStack();
	$var(Phaser, root, this->root);
	int64_t s = this->state;
	if (root != this) {
		int32_t phase = 0;
		int32_t p = 0;
		while (true) {
			bool var$0 = (phase = (int32_t)($usr($nc(root)->state, Phaser::PHASE_SHIFT))) != (int32_t)($usr(s, Phaser::PHASE_SHIFT));
			if (var$0) {
				$var($Object, var$1, $of(s));
				var$0 = !$nc(Phaser::STATE)->weakCompareAndSet($$new($ObjectArray, {this, var$1, $$of(s = (($sl((int64_t)phase, Phaser::PHASE_SHIFT)) | ((phase < 0) ? (s & Phaser::COUNTS_MASK) : (((p = $usr((int32_t)s, Phaser::PARTIES_SHIFT)) == 0) ? Phaser::EMPTY : ((s & Phaser::PARTIES_MASK) | p)))))}));
			}
			if (!(var$0)) {
				break;
			}
			{
				s = this->state;
			}
		}
	}
	return s;
}

void Phaser::init$() {
	Phaser::init$(nullptr, 0);
}

void Phaser::init$(int32_t parties) {
	Phaser::init$(nullptr, parties);
}

void Phaser::init$(Phaser* parent) {
	Phaser::init$(parent, 0);
}

void Phaser::init$(Phaser* parent, int32_t parties) {
	if ($usr(parties, Phaser::PARTIES_SHIFT) != 0) {
		$throwNew($IllegalArgumentException, "Illegal number of parties"_s);
	}
	int32_t phase = 0;
	$set(this, parent, parent);
	if (parent != nullptr) {
		$var(Phaser, root, parent->root);
		$set(this, root, root);
		$set(this, evenQ, $nc(root)->evenQ);
		$set(this, oddQ, root->oddQ);
		if (parties != 0) {
			phase = parent->doRegister(1);
		}
	} else {
		$set(this, root, this);
		$set(this, evenQ, $new($AtomicReference));
		$set(this, oddQ, $new($AtomicReference));
	}
	this->state = (parties == 0) ? (int64_t)Phaser::EMPTY : (($sl((int64_t)phase, Phaser::PHASE_SHIFT)) | ($sl((int64_t)parties, Phaser::PARTIES_SHIFT))) | ((int64_t)parties);
}

int32_t Phaser::register$() {
	return doRegister(1);
}

int32_t Phaser::bulkRegister(int32_t parties) {
	if (parties < 0) {
		$throwNew($IllegalArgumentException);
	}
	if (parties == 0) {
		return getPhase();
	}
	return doRegister(parties);
}

int32_t Phaser::arrive() {
	return doArrive(Phaser::ONE_ARRIVAL);
}

int32_t Phaser::arriveAndDeregister() {
	return doArrive(Phaser::ONE_DEREGISTER);
}

int32_t Phaser::arriveAndAwaitAdvance() {
	$useLocalObjectStack();
	$var(Phaser, root, this->root);
	for (;;) {
		int64_t s = (root == this) ? $cast(int64_t, this->state) : reconcileState();
		int32_t phase = (int32_t)($usr(s, Phaser::PHASE_SHIFT));
		if (phase < 0) {
			return phase;
		}
		int32_t counts = (int32_t)s;
		int32_t unarrived = (counts == Phaser::EMPTY) ? 0 : (counts & Phaser::UNARRIVED_MASK);
		if (unarrived <= 0) {
			$throwNew($IllegalStateException, $(badArrive(s)));
		}
		$var($Object, var$0, $of(s));
		if ($nc(Phaser::STATE)->compareAndSet($$new($ObjectArray, {this, var$0, $$of(s -= Phaser::ONE_ARRIVAL)}))) {
			if (unarrived > 1) {
				return $nc(root)->internalAwaitAdvance(phase, nullptr);
			}
			if (root != this) {
				return $nc(this->parent)->arriveAndAwaitAdvance();
			}
			int64_t n = s & Phaser::PARTIES_MASK;
			int32_t nextUnarrived = $usr((int32_t)n, Phaser::PARTIES_SHIFT);
			if (onAdvance(phase, nextUnarrived)) {
				n |= Phaser::TERMINATION_BIT;
			} else if (nextUnarrived == 0) {
				n |= Phaser::EMPTY;
			} else {
				n |= nextUnarrived;
			}
			int32_t nextPhase = (phase + 1) & Phaser::MAX_PHASE;
			n |= $sl((int64_t)nextPhase, Phaser::PHASE_SHIFT);
			if (!$nc(Phaser::STATE)->compareAndSet($$new($ObjectArray, {this, $$of(s), $$of(n)}))) {
				return (int32_t)($usr(this->state, Phaser::PHASE_SHIFT));
			}
			releaseWaiters(phase);
			return nextPhase;
		}
	}
}

int32_t Phaser::awaitAdvance(int32_t phase) {
	$var(Phaser, root, this->root);
	int64_t s = (root == this) ? $cast(int64_t, this->state) : reconcileState();
	int32_t p = (int32_t)($usr(s, Phaser::PHASE_SHIFT));
	if (phase < 0) {
		return phase;
	}
	if (p == phase) {
		return $nc(root)->internalAwaitAdvance(phase, nullptr);
	}
	return p;
}

int32_t Phaser::awaitAdvanceInterruptibly(int32_t phase) {
	$useLocalObjectStack();
	$var(Phaser, root, this->root);
	int64_t s = (root == this) ? $cast(int64_t, this->state) : reconcileState();
	int32_t p = (int32_t)($usr(s, Phaser::PHASE_SHIFT));
	if (phase < 0) {
		return phase;
	}
	if (p == phase) {
		$var($Phaser$QNode, node, $new($Phaser$QNode, this, phase, true, false, 0));
		p = $nc(root)->internalAwaitAdvance(phase, node);
		if (node->wasInterrupted) {
			$throwNew($InterruptedException);
		}
	}
	return p;
}

int32_t Phaser::awaitAdvanceInterruptibly(int32_t phase, int64_t timeout, $TimeUnit* unit) {
	$useLocalObjectStack();
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var(Phaser, root, this->root);
	int64_t s = (root == this) ? $cast(int64_t, this->state) : reconcileState();
	int32_t p = (int32_t)($usr(s, Phaser::PHASE_SHIFT));
	if (phase < 0) {
		return phase;
	}
	if (p == phase) {
		$var($Phaser$QNode, node, $new($Phaser$QNode, this, phase, true, true, nanos));
		p = $nc(root)->internalAwaitAdvance(phase, node);
		if (node->wasInterrupted) {
			$throwNew($InterruptedException);
		} else if (p == phase) {
			$throwNew($TimeoutException);
		}
	}
	return p;
}

void Phaser::forceTermination() {
	$useLocalObjectStack();
	$var(Phaser, root, this->root);
	int64_t s = 0;
	while ((s = $nc(root)->state) >= 0) {
		if ($nc(Phaser::STATE)->compareAndSet($$new($ObjectArray, {root, $$of(s), $$of(s | Phaser::TERMINATION_BIT)}))) {
			releaseWaiters(0);
			releaseWaiters(1);
			return;
		}
	}
}

int32_t Phaser::getPhase() {
	return (int32_t)($usr($nc(this->root)->state, Phaser::PHASE_SHIFT));
}

int32_t Phaser::getRegisteredParties() {
	return partiesOf(this->state);
}

int32_t Phaser::getArrivedParties() {
	return arrivedOf(reconcileState());
}

int32_t Phaser::getUnarrivedParties() {
	return unarrivedOf(reconcileState());
}

Phaser* Phaser::getParent() {
	return this->parent;
}

Phaser* Phaser::getRoot() {
	return this->root;
}

bool Phaser::isTerminated() {
	return $nc(this->root)->state < 0;
}

bool Phaser::onAdvance(int32_t phase, int32_t registeredParties) {
	return registeredParties == 0;
}

$String* Phaser::toString() {
	return stateToString(reconcileState());
}

$String* Phaser::stateToString(int64_t s) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($Object::toString()));
	var$0->append("[phase = "_s);
	var$0->append(phaseOf(s));
	var$0->append(" parties = "_s);
	var$0->append(partiesOf(s));
	var$0->append(" arrived = "_s);
	var$0->append(arrivedOf(s));
	var$0->append("]"_s);
	return $str(var$0);
}

void Phaser::releaseWaiters(int32_t phase) {
	$useLocalObjectStack();
	$var($Phaser$QNode, q, nullptr);
	$var($Thread, t, nullptr);
	$var($AtomicReference, head, (phase & 1) == 0 ? this->evenQ : this->oddQ);
	while (true) {
		bool var$0 = ($assign(q, $cast($Phaser$QNode, $nc(head)->get()))) != nullptr;
		if (!(var$0 && $nc(q)->phase != (int32_t)($usr($nc(this->root)->state, Phaser::PHASE_SHIFT)))) {
			break;
		}
		{
			if (head->compareAndSet(q, $nc(q)->next) && ($assign(t, q->thread)) != nullptr) {
				$set(q, thread, nullptr);
				$LockSupport::unpark(t);
			}
		}
	}
}

int32_t Phaser::abortWait(int32_t phase) {
	$useLocalObjectStack();
	$var($AtomicReference, head, (phase & 1) == 0 ? this->evenQ : this->oddQ);
	for (;;) {
		$var($Thread, t, nullptr);
		$var($Phaser$QNode, q, $cast($Phaser$QNode, $nc(head)->get()));
		int32_t p = (int32_t)($usr($nc(this->root)->state, Phaser::PHASE_SHIFT));
		if (q == nullptr || (($assign(t, q->thread)) != nullptr && q->phase == p)) {
			return p;
		}
		if (head->compareAndSet(q, $nc(q)->next) && t != nullptr) {
			$set(q, thread, nullptr);
			$LockSupport::unpark(t);
		}
	}
}

int32_t Phaser::internalAwaitAdvance(int32_t phase, $Phaser$QNode* node$renamed) {
	$useLocalObjectStack();
	$var($Phaser$QNode, node, node$renamed);
	releaseWaiters(phase - 1);
	bool queued = false;
	int32_t lastUnarrived = 0;
	int32_t spins = Phaser::SPINS_PER_ARRIVAL;
	int64_t s = 0;
	int32_t p = 0;
	while ((p = (int32_t)($usr(s = this->state, Phaser::PHASE_SHIFT))) == phase) {
		if (node == nullptr) {
			int32_t unarrived = (int32_t)s & Phaser::UNARRIVED_MASK;
			bool var$0 = unarrived != lastUnarrived;
			if (var$0 && (lastUnarrived = unarrived) < Phaser::NCPU) {
				spins += Phaser::SPINS_PER_ARRIVAL;
			}
			bool interrupted = $Thread::interrupted();
			if (interrupted || --spins < 0) {
				$assign(node, $new($Phaser$QNode, this, phase, false, false, 0));
				node->wasInterrupted = interrupted;
			} else {
				$Thread::onSpinWait();
			}
		} else if (node->isReleasable()) {
			break;
		} else if (!queued) {
			$var($AtomicReference, head, (phase & 1) == 0 ? this->evenQ : this->oddQ);
			$var($Phaser$QNode, q, $set(node, next, $cast($Phaser$QNode, $nc(head)->get())));
			if ((q == nullptr || q->phase == phase) && (int32_t)($usr(this->state, Phaser::PHASE_SHIFT)) == phase) {
				queued = head->compareAndSet(q, node);
			}
		} else {
			try {
				$ForkJoinPool::managedBlock(node);
			} catch ($InterruptedException& cantHappen) {
				node->wasInterrupted = true;
			}
		}
	}
	if (node != nullptr) {
		if (node->thread != nullptr) {
			$set(node, thread, nullptr);
		}
		if (node->wasInterrupted && !node->interruptible) {
			$($Thread::currentThread())->interrupt();
		}
		bool var$1 = p == phase;
		if (var$1 && (p = (int32_t)($usr(this->state, Phaser::PHASE_SHIFT))) == phase) {
			return abortWait(phase);
		}
	}
	releaseWaiters(phase);
	return p;
}

void Phaser::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	Phaser::NCPU = $$nc($Runtime::getRuntime())->availableProcessors();
	Phaser::SPINS_PER_ARRIVAL = (Phaser::NCPU < 2) ? 1 : 1 << 8;
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$assignStatic(Phaser::STATE, $nc(l)->findVarHandle(Phaser::class$, "state"_s, $Long::TYPE));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($ExceptionInInitializerError, e);
		}
		$load($LockSupport);
		$Class* ensureLoaded = $LockSupport::class$;
	}
}

Phaser::Phaser() {
}

$Class* Phaser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"state", "J", nullptr, $PRIVATE | $VOLATILE, $field(Phaser, state)},
		{"MAX_PARTIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, MAX_PARTIES)},
		{"MAX_PHASE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, MAX_PHASE)},
		{"PARTIES_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, PARTIES_SHIFT)},
		{"PHASE_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, PHASE_SHIFT)},
		{"UNARRIVED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, UNARRIVED_MASK)},
		{"PARTIES_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, PARTIES_MASK)},
		{"COUNTS_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, COUNTS_MASK)},
		{"TERMINATION_BIT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, TERMINATION_BIT)},
		{"ONE_ARRIVAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, ONE_ARRIVAL)},
		{"ONE_PARTY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, ONE_PARTY)},
		{"ONE_DEREGISTER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, ONE_DEREGISTER)},
		{"EMPTY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Phaser, EMPTY)},
		{"parent", "Ljava/util/concurrent/Phaser;", nullptr, $PRIVATE | $FINAL, $field(Phaser, parent)},
		{"root", "Ljava/util/concurrent/Phaser;", nullptr, $PRIVATE | $FINAL, $field(Phaser, root)},
		{"evenQ", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljava/util/concurrent/Phaser$QNode;>;", $PRIVATE | $FINAL, $field(Phaser, evenQ)},
		{"oddQ", "Ljava/util/concurrent/atomic/AtomicReference;", "Ljava/util/concurrent/atomic/AtomicReference<Ljava/util/concurrent/Phaser$QNode;>;", $PRIVATE | $FINAL, $field(Phaser, oddQ)},
		{"NCPU", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Phaser, NCPU)},
		{"SPINS_PER_ARRIVAL", "I", nullptr, $STATIC | $FINAL, $staticField(Phaser, SPINS_PER_ARRIVAL)},
		{"STATE", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Phaser, STATE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Phaser, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Phaser, init$, void, int32_t)},
		{"<init>", "(Ljava/util/concurrent/Phaser;)V", nullptr, $PUBLIC, $method(Phaser, init$, void, Phaser*)},
		{"<init>", "(Ljava/util/concurrent/Phaser;I)V", nullptr, $PUBLIC, $method(Phaser, init$, void, Phaser*, int32_t)},
		{"abortWait", "(I)I", nullptr, $PRIVATE, $method(Phaser, abortWait, int32_t, int32_t)},
		{"arrive", "()I", nullptr, $PUBLIC, $virtualMethod(Phaser, arrive, int32_t)},
		{"arriveAndAwaitAdvance", "()I", nullptr, $PUBLIC, $virtualMethod(Phaser, arriveAndAwaitAdvance, int32_t)},
		{"arriveAndDeregister", "()I", nullptr, $PUBLIC, $virtualMethod(Phaser, arriveAndDeregister, int32_t)},
		{"arrivedOf", "(J)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Phaser, arrivedOf, int32_t, int64_t)},
		{"awaitAdvance", "(I)I", nullptr, $PUBLIC, $virtualMethod(Phaser, awaitAdvance, int32_t, int32_t)},
		{"awaitAdvanceInterruptibly", "(I)I", nullptr, $PUBLIC, $virtualMethod(Phaser, awaitAdvanceInterruptibly, int32_t, int32_t), "java.lang.InterruptedException"},
		{"awaitAdvanceInterruptibly", "(IJLjava/util/concurrent/TimeUnit;)I", nullptr, $PUBLIC, $virtualMethod(Phaser, awaitAdvanceInterruptibly, int32_t, int32_t, int64_t, $TimeUnit*), "java.lang.InterruptedException,java.util.concurrent.TimeoutException"},
		{"badArrive", "(J)Ljava/lang/String;", nullptr, $PRIVATE, $method(Phaser, badArrive, $String*, int64_t)},
		{"badRegister", "(J)Ljava/lang/String;", nullptr, $PRIVATE, $method(Phaser, badRegister, $String*, int64_t)},
		{"bulkRegister", "(I)I", nullptr, $PUBLIC, $virtualMethod(Phaser, bulkRegister, int32_t, int32_t)},
		{"doArrive", "(I)I", nullptr, $PRIVATE, $method(Phaser, doArrive, int32_t, int32_t)},
		{"doRegister", "(I)I", nullptr, $PRIVATE, $method(Phaser, doRegister, int32_t, int32_t)},
		{"forceTermination", "()V", nullptr, $PUBLIC, $virtualMethod(Phaser, forceTermination, void)},
		{"getArrivedParties", "()I", nullptr, $PUBLIC, $virtualMethod(Phaser, getArrivedParties, int32_t)},
		{"getParent", "()Ljava/util/concurrent/Phaser;", nullptr, $PUBLIC, $virtualMethod(Phaser, getParent, Phaser*)},
		{"getPhase", "()I", nullptr, $PUBLIC | $FINAL, $method(Phaser, getPhase, int32_t)},
		{"getRegisteredParties", "()I", nullptr, $PUBLIC, $virtualMethod(Phaser, getRegisteredParties, int32_t)},
		{"getRoot", "()Ljava/util/concurrent/Phaser;", nullptr, $PUBLIC, $virtualMethod(Phaser, getRoot, Phaser*)},
		{"getUnarrivedParties", "()I", nullptr, $PUBLIC, $virtualMethod(Phaser, getUnarrivedParties, int32_t)},
		{"internalAwaitAdvance", "(ILjava/util/concurrent/Phaser$QNode;)I", nullptr, $PRIVATE, $method(Phaser, internalAwaitAdvance, int32_t, int32_t, $Phaser$QNode*)},
		{"isTerminated", "()Z", nullptr, $PUBLIC, $virtualMethod(Phaser, isTerminated, bool)},
		{"onAdvance", "(II)Z", nullptr, $PROTECTED, $virtualMethod(Phaser, onAdvance, bool, int32_t, int32_t)},
		{"partiesOf", "(J)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Phaser, partiesOf, int32_t, int64_t)},
		{"phaseOf", "(J)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Phaser, phaseOf, int32_t, int64_t)},
		{"reconcileState", "()J", nullptr, $PRIVATE, $method(Phaser, reconcileState, int64_t)},
		{"register", "()I", nullptr, $PUBLIC, $virtualMethod(Phaser, register$, int32_t)},
		{"releaseWaiters", "(I)V", nullptr, $PRIVATE, $method(Phaser, releaseWaiters, void, int32_t)},
		{"stateToString", "(J)Ljava/lang/String;", nullptr, $PRIVATE, $method(Phaser, stateToString, $String*, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Phaser, toString, $String*)},
		{"unarrivedOf", "(J)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Phaser, unarrivedOf, int32_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Phaser$QNode", "java.util.concurrent.Phaser", "QNode", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.Phaser",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.concurrent.Phaser$QNode"
	};
	$loadClass(Phaser, name, initialize, &classInfo$$, Phaser::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Phaser);
	});
	return class$;
}

$Class* Phaser::class$ = nullptr;

		} // concurrent
	} // util
} // java