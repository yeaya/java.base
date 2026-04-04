#include <java/util/concurrent/ForkJoinPool$WorkQueue.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Thread$State.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/security/AccessControlContext.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/concurrent/CompletableFuture$AsynchronousCompletionTask.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/ForkJoinWorkerThread.h>
#include <java/util/concurrent/RejectedExecutionException.h>
#include <java/util/concurrent/ThreadLocalRandom.h>
#include <jcpp.h>

#undef BASE
#undef BLOCKED
#undef INNOCUOUS_ACC
#undef QA
#undef SOURCE
#undef TIMED_WAITING
#undef TYPE
#undef WAITING

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $ForkJoinTaskArray = $Array<::java::util::concurrent::ForkJoinTask>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Thread$State = ::java::lang::Thread$State;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $AccessControlContext = ::java::security::AccessControlContext;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $CompletableFuture$AsynchronousCompletionTask = ::java::util::concurrent::CompletableFuture$AsynchronousCompletionTask;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$ManagedBlocker = ::java::util::concurrent::ForkJoinPool$ManagedBlocker;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $ForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread;
using $RejectedExecutionException = ::java::util::concurrent::RejectedExecutionException;
using $ThreadLocalRandom = ::java::util::concurrent::ThreadLocalRandom;

namespace java {
	namespace util {
		namespace concurrent {

$VarHandle* ForkJoinPool$WorkQueue::QA = nullptr;
$VarHandle* ForkJoinPool$WorkQueue::SOURCE = nullptr;
$VarHandle* ForkJoinPool$WorkQueue::BASE = nullptr;
$AccessControlContext* ForkJoinPool$WorkQueue::INNOCUOUS_ACC = nullptr;

$ForkJoinTask* ForkJoinPool$WorkQueue::getSlot($ForkJoinTaskArray* a, int32_t i) {
	$init(ForkJoinPool$WorkQueue);
	return $cast($ForkJoinTask, $nc(ForkJoinPool$WorkQueue::QA)->getAcquire($$new($ObjectArray, {a, $$of(i)})));
}

$ForkJoinTask* ForkJoinPool$WorkQueue::getAndClearSlot($ForkJoinTaskArray* a, int32_t i) {
	$init(ForkJoinPool$WorkQueue);
	return $cast($ForkJoinTask, $nc(ForkJoinPool$WorkQueue::QA)->getAndSet($$new($ObjectArray, {a, $$of(i), nullptr})));
}

void ForkJoinPool$WorkQueue::setSlotVolatile($ForkJoinTaskArray* a, int32_t i, $ForkJoinTask* v) {
	$init(ForkJoinPool$WorkQueue);
	$nc(ForkJoinPool$WorkQueue::QA)->setVolatile($$new($ObjectArray, {a, $$of(i), v}));
}

bool ForkJoinPool$WorkQueue::casSlotToNull($ForkJoinTaskArray* a, int32_t i, $ForkJoinTask* c) {
	$init(ForkJoinPool$WorkQueue);
	return $nc(ForkJoinPool$WorkQueue::QA)->compareAndSet($$new($ObjectArray, {a, $$of(i), c, nullptr}));
}

bool ForkJoinPool$WorkQueue::tryLock() {
	return $nc(ForkJoinPool$WorkQueue::SOURCE)->compareAndSet($$new($ObjectArray, {this, $$of(0), $$of(1)}));
}

void ForkJoinPool$WorkQueue::setBaseOpaque(int32_t b) {
	$nc(ForkJoinPool$WorkQueue::BASE)->setOpaque($$new($ObjectArray, {this, $$of(b)}));
}

void ForkJoinPool$WorkQueue::init$($ForkJoinWorkerThread* owner, bool isInnocuous) {
	this->config = (isInnocuous) ? 0x00040000 : 0;
	$set(this, owner, owner);
}

void ForkJoinPool$WorkQueue::init$(int32_t config) {
	$set(this, array, $new($ForkJoinTaskArray, 256));
	this->config = config;
	$set(this, owner, nullptr);
	this->phase = -1;
}

int32_t ForkJoinPool$WorkQueue::getPoolIndex() {
	return (int32_t)((uint32_t)(this->config & 0xffff) >> 1);
}

int32_t ForkJoinPool$WorkQueue::queueSize() {
	$VarHandle::acquireFence();
	int32_t n = this->top - this->base;
	return (n < 0) ? 0 : n;
}

bool ForkJoinPool$WorkQueue::isEmpty() {
	return !((this->source != 0 && this->owner == nullptr) || this->top - this->base > 0);
}

void ForkJoinPool$WorkQueue::push($ForkJoinTask* task, $ForkJoinPool* pool) {
	$var($ForkJoinTaskArray, a, this->array);
	int32_t s = this->top++;
	int32_t d = s - this->base;
	int32_t cap = 0;
	int32_t m = 0;
	if (a != nullptr && pool != nullptr && (cap = a->length) > 0) {
		setSlotVolatile(a, (m = cap - 1) & s, task);
		if (d == m) {
			growArray();
		}
		if (d == m || a->get(m & (s - 1)) == nullptr) {
			pool->signalWork();
		}
	}
}

bool ForkJoinPool$WorkQueue::lockedPush($ForkJoinTask* task) {
	$var($ForkJoinTaskArray, a, this->array);
	int32_t s = this->top++;
	int32_t d = s - this->base;
	int32_t cap = 0;
	int32_t m = 0;
	if (a != nullptr && (cap = a->length) > 0) {
		a->set((m = cap - 1) & s, task);
		if (d == m) {
			growArray();
		}
		this->source = 0;
		if (d == m || a->get(m & (s - 1)) == nullptr) {
			return true;
		}
	}
	return false;
}

void ForkJoinPool$WorkQueue::growArray() {
	$useLocalObjectStack();
	$var($ForkJoinTaskArray, oldArray, this->array);
	$var($ForkJoinTaskArray, newArray, nullptr);
	int32_t s = this->top - 1;
	int32_t oldCap = 0;
	int32_t newCap = 0;
	bool var$0 = oldArray != nullptr && (oldCap = oldArray->length) > 0;
	if (var$0 && (newCap = oldCap << 1) > 0) {
		try {
			$assign(newArray, $new($ForkJoinTaskArray, newCap));
		} catch ($Throwable& ex) {
			this->top = s;
			if (this->owner == nullptr) {
				this->source = 0;
			}
			$throwNew($RejectedExecutionException, "Queue capacity exceeded"_s);
		}
		int32_t newMask = newCap - 1;
		int32_t oldMask = oldCap - 1;
		for (int32_t k = oldCap; k > 0; --k, --s) {
			$var($ForkJoinTask, x, nullptr);
			if (($assign(x, getAndClearSlot(oldArray, s & oldMask))) == nullptr) {
				break;
			}
			$nc(newArray)->set(s & newMask, x);
		}
		$VarHandle::releaseFence();
		$set(this, array, newArray);
	}
}

$ForkJoinTask* ForkJoinPool$WorkQueue::pop() {
	$useLocalObjectStack();
	$var($ForkJoinTask, t, nullptr);
	int32_t s = this->top;
	int32_t cap = 0;
	$var($ForkJoinTaskArray, a, nullptr);
	bool var$1 = ($assign(a, this->array)) != nullptr;
	bool var$0 = var$1 && (cap = $nc(a)->length) > 0 && this->base != s--;
	if (var$0 && ($assign(t, getAndClearSlot(a, (cap - 1) & s))) != nullptr) {
		this->top = s;
	}
	return t;
}

bool ForkJoinPool$WorkQueue::tryUnpush($ForkJoinTask* task) {
	int32_t s = this->top;
	int32_t cap = 0;
	$var($ForkJoinTaskArray, a, nullptr);
	bool var$1 = ($assign(a, this->array)) != nullptr;
	bool var$0 = var$1 && (cap = $nc(a)->length) > 0 && this->base != s--;
	if (var$0 && casSlotToNull(a, (cap - 1) & s, task)) {
		this->top = s;
		return true;
	}
	return false;
}

bool ForkJoinPool$WorkQueue::externalTryUnpush($ForkJoinTask* task) {
	$useLocalObjectStack();
	bool taken = false;
	for (;;) {
		int32_t s = this->top;
		int32_t cap = 0;
		int32_t k = 0;
		$var($ForkJoinTaskArray, a, nullptr);
		bool var$1 = ($assign(a, this->array)) == nullptr;
		bool var$0 = var$1 || (cap = $nc(a)->length) <= 0;
		if (var$0 || $nc(a)->get(k = (cap - 1) & (s - 1)) != task) {
			break;
		}
		if (tryLock()) {
			if (this->top == s && this->array == a) {
				if (taken = casSlotToNull(a, k, task)) {
					this->top = s - 1;
					this->source = 0;
					break;
				}
			}
			this->source = 0;
		}
		$Thread::yield();
	}
	return taken;
}

bool ForkJoinPool$WorkQueue::tryRemove($ForkJoinTask* task, bool owned) {
	$useLocalObjectStack();
	bool taken = false;
	int32_t p = this->top;
	int32_t cap = 0;
	$var($ForkJoinTaskArray, a, nullptr);
	$var($ForkJoinTask, t, nullptr);
	bool var$0 = ($assign(a, this->array)) != nullptr && task != nullptr;
	if (var$0 && (cap = $nc(a)->length) > 0) {
		int32_t m = cap - 1;
		int32_t s = p - 1;
		int32_t d = p - this->base;
		for (int32_t i = s, k = 0; d > 0; --i, --d) {
			if (($assign(t, a->get(k = i & m))) == task) {
				if (owned || tryLock()) {
					if ((owned || (this->array == a && this->top == p)) && (taken = casSlotToNull(a, k, t))) {
						for (int32_t j = i; j != s;) {
							a->set(j & m, $(getAndClearSlot(a, ++j & m)));
						}
						this->top = s;
					}
					if (!owned) {
						this->source = 0;
					}
				}
				break;
			}
		}
	}
	return taken;
}

$ForkJoinTask* ForkJoinPool$WorkQueue::tryPoll() {
	$useLocalObjectStack();
	int32_t cap = 0;
	int32_t b = 0;
	int32_t k = 0;
	$var($ForkJoinTaskArray, a, nullptr);
	bool var$0 = ($assign(a, this->array)) != nullptr;
	if (var$0 && (cap = $nc(a)->length) > 0) {
		$var($ForkJoinTask, t, getSlot(a, k = (cap - 1) & (b = this->base)));
		if (this->base == b++ && t != nullptr && casSlotToNull(a, k, t)) {
			setBaseOpaque(b);
			return t;
		}
	}
	return nullptr;
}

$ForkJoinTask* ForkJoinPool$WorkQueue::nextLocalTask(int32_t cfg) {
	$useLocalObjectStack();
	$var($ForkJoinTask, t, nullptr);
	int32_t s = this->top;
	int32_t cap = 0;
	$var($ForkJoinTaskArray, a, nullptr);
	bool var$0 = ($assign(a, this->array)) != nullptr;
	if (var$0 && (cap = $nc(a)->length) > 0) {
		for (int32_t b = 0, d = 0;;) {
			if ((d = s - (b = this->base)) <= 0) {
				break;
			}
			if (d == 1 || (cfg & 0x00010000) == 0) {
				if (($assign(t, getAndClearSlot(a, --s & (cap - 1)))) != nullptr) {
					this->top = s;
				}
				break;
			}
			if (($assign(t, getAndClearSlot(a, b++ & (cap - 1)))) != nullptr) {
				setBaseOpaque(b);
				break;
			}
		}
	}
	return t;
}

$ForkJoinTask* ForkJoinPool$WorkQueue::nextLocalTask() {
	return nextLocalTask(this->config);
}

$ForkJoinTask* ForkJoinPool$WorkQueue::peek() {
	$VarHandle::acquireFence();
	int32_t cap = 0;
	$var($ForkJoinTaskArray, a, nullptr);
	bool var$0 = ($assign(a, this->array)) != nullptr;
	return (var$0 && (cap = $nc(a)->length) > 0) ? a->get((cap - 1) & ((this->config & 0x00010000) != 0 ? this->base : this->top - 1)) : ($ForkJoinTask*)nullptr;
}

void ForkJoinPool$WorkQueue::topLevelExec($ForkJoinTask* task$renamed, ForkJoinPool$WorkQueue* q) {
	$useLocalObjectStack();
	$var($ForkJoinTask, task, task$renamed);
	int32_t cfg = this->config;
	int32_t nstolen = 1;
	while (task != nullptr) {
		task->doExec();
		bool var$0 = ($assign(task, nextLocalTask(cfg))) == nullptr && q != nullptr;
		if (var$0 && ($assign(task, q->tryPoll())) != nullptr) {
			++nstolen;
		}
	}
	this->nsteals += nstolen;
	this->source = 0;
	if ((cfg & 0x00040000) != 0) {
		$ThreadLocalRandom::eraseThreadLocals($($Thread::currentThread()));
	}
}

int32_t ForkJoinPool$WorkQueue::helpComplete($ForkJoinTask* task, bool owned, int32_t limit) {
	$useLocalObjectStack();
	int32_t status = 0;
	int32_t cap = 0;
	int32_t k = 0;
	int32_t p = 0;
	int32_t s = 0;
	$var($ForkJoinTaskArray, a, nullptr);
	$var($ForkJoinTask, t, nullptr);
	while (true) {
		bool var$1 = task != nullptr && (status = task->status) >= 0 && ($assign(a, this->array)) != nullptr;
		bool var$0 = var$1 && (cap = $nc(a)->length) > 0;
		if (!(var$0 && $instanceOf($CountedCompleter, $assign(t, a->get(k = (cap - 1) & (s = (p = this->top) - 1)))))) {
			break;
		}
		{
			$var($CountedCompleter, f, $cast($CountedCompleter, t));
			bool taken = false;
			for (;;) {
				if ($equals(f, task)) {
					if (owned) {
						if (taken = casSlotToNull(a, k, t)) {
							this->top = s;
						}
					} else if (tryLock()) {
						if (this->top == p && this->array == a && (taken = casSlotToNull(a, k, t))) {
							this->top = s;
						}
						this->source = 0;
					}
					if (taken) {
						$nc(t)->doExec();
					} else if (!owned) {
						$Thread::yield();
					}
					break;
				} else if (($assign(f, $nc(f)->completer)) == nullptr) {
					break;
				}
			}
			bool var$2 = taken && limit != 0;
			if (var$2 && --limit == 0) {
				break;
			}
		}
	}
	return status;
}

void ForkJoinPool$WorkQueue::helpAsyncBlocker($ForkJoinPool$ManagedBlocker* blocker) {
	$useLocalObjectStack();
	int32_t cap = 0;
	int32_t b = 0;
	int32_t d = 0;
	int32_t k = 0;
	$var($ForkJoinTaskArray, a, nullptr);
	$var($ForkJoinTask, t, nullptr);
	while (true) {
		bool var$2 = blocker != nullptr && (d = this->top - (b = this->base)) > 0 && ($assign(a, this->array)) != nullptr;
		bool var$1 = var$2 && (cap = $nc(a)->length) > 0;
		bool var$0 = var$1 && ((($assign(t, getSlot(a, k = (cap - 1) & b))) == nullptr && d > 1) || $instanceOf($CompletableFuture$AsynchronousCompletionTask, t));
		if (!(var$0 && !blocker->isReleasable())) {
			break;
		}
		{
			if (t != nullptr && this->base == b++ && casSlotToNull(a, k, t)) {
				setBaseOpaque(b);
				t->doExec();
			}
		}
	}
}

void ForkJoinPool$WorkQueue::initializeInnocuousWorker() {
	$useLocalObjectStack();
	$var($AccessControlContext, acc, nullptr);
	if (($assign(acc, ForkJoinPool$WorkQueue::INNOCUOUS_ACC)) == nullptr) {
		$assignStatic(ForkJoinPool$WorkQueue::INNOCUOUS_ACC, $assign(acc, $new($AccessControlContext, $$new($ProtectionDomainArray, {$$new($ProtectionDomain, nullptr, nullptr)}))));
	}
	$var($Thread, t, $Thread::currentThread());
	$ThreadLocalRandom::setInheritedAccessControlContext(t, acc);
	$ThreadLocalRandom::eraseThreadLocals(t);
}

bool ForkJoinPool$WorkQueue::isApparentlyUnblocked() {
	$var($Thread, wt, nullptr);
	$Thread$State* s = nullptr;
	bool var$2 = ($assign(wt, this->owner)) != nullptr;
	$init($Thread$State);
	bool var$1 = var$2 && (s = $nc(wt)->getState()) != $Thread$State::BLOCKED;
	bool var$0 = var$1 && s != $Thread$State::WAITING;
	return (var$0 && s != $Thread$State::TIMED_WAITING);
}

void ForkJoinPool$WorkQueue::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		try {
			$load($ForkJoinTask);
			$assignStatic(ForkJoinPool$WorkQueue::QA, $MethodHandles::arrayElementVarHandle($getClass($ForkJoinTaskArray)));
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$assignStatic(ForkJoinPool$WorkQueue::SOURCE, $nc(l)->findVarHandle(ForkJoinPool$WorkQueue::class$, "source"_s, $Integer::TYPE));
			$assignStatic(ForkJoinPool$WorkQueue::BASE, l->findVarHandle(ForkJoinPool$WorkQueue::class$, "base"_s, $Integer::TYPE));
		} catch ($ReflectiveOperationException& e) {
			$throwNew($ExceptionInInitializerError, e);
		}
	}
}

ForkJoinPool$WorkQueue::ForkJoinPool$WorkQueue() {
}

$Class* ForkJoinPool$WorkQueue::load$($String* name, bool initialize) {
	$NamedAttribute topfieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "w"},
		{}
	};
	$CompoundAttribute topfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Contended;", topfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute sourcefieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "w"},
		{}
	};
	$CompoundAttribute sourcefieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Contended;", sourcefieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute nstealsfieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "w"},
		{}
	};
	$CompoundAttribute nstealsfieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Contended;", nstealsfieldAnnotations$$$namedAttribute},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"phase", "I", nullptr, $VOLATILE, $field(ForkJoinPool$WorkQueue, phase)},
		{"stackPred", "I", nullptr, 0, $field(ForkJoinPool$WorkQueue, stackPred)},
		{"config", "I", nullptr, 0, $field(ForkJoinPool$WorkQueue, config)},
		{"base", "I", nullptr, 0, $field(ForkJoinPool$WorkQueue, base)},
		{"array", "[Ljava/util/concurrent/ForkJoinTask;", "[Ljava/util/concurrent/ForkJoinTask<*>;", 0, $field(ForkJoinPool$WorkQueue, array)},
		{"owner", "Ljava/util/concurrent/ForkJoinWorkerThread;", nullptr, $FINAL, $field(ForkJoinPool$WorkQueue, owner)},
		{"top", "I", nullptr, 0, $field(ForkJoinPool$WorkQueue, top), topfieldAnnotations$$},
		{"source", "I", nullptr, $VOLATILE, $field(ForkJoinPool$WorkQueue, source), sourcefieldAnnotations$$},
		{"nsteals", "I", nullptr, 0, $field(ForkJoinPool$WorkQueue, nsteals), nstealsfieldAnnotations$$},
		{"QA", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ForkJoinPool$WorkQueue, QA)},
		{"SOURCE", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ForkJoinPool$WorkQueue, SOURCE)},
		{"BASE", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ForkJoinPool$WorkQueue, BASE)},
		{"INNOCUOUS_ACC", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $STATIC, $staticField(ForkJoinPool$WorkQueue, INNOCUOUS_ACC)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ForkJoinWorkerThread;Z)V", nullptr, 0, $method(ForkJoinPool$WorkQueue, init$, void, $ForkJoinWorkerThread*, bool)},
		{"<init>", "(I)V", nullptr, 0, $method(ForkJoinPool$WorkQueue, init$, void, int32_t)},
		{"casSlotToNull", "([Ljava/util/concurrent/ForkJoinTask;ILjava/util/concurrent/ForkJoinTask;)Z", "([Ljava/util/concurrent/ForkJoinTask<*>;ILjava/util/concurrent/ForkJoinTask<*>;)Z", $STATIC | $FINAL, $staticMethod(ForkJoinPool$WorkQueue, casSlotToNull, bool, $ForkJoinTaskArray*, int32_t, $ForkJoinTask*)},
		{"externalTryUnpush", "(Ljava/util/concurrent/ForkJoinTask;)Z", "(Ljava/util/concurrent/ForkJoinTask<*>;)Z", $FINAL, $method(ForkJoinPool$WorkQueue, externalTryUnpush, bool, $ForkJoinTask*)},
		{"getAndClearSlot", "([Ljava/util/concurrent/ForkJoinTask;I)Ljava/util/concurrent/ForkJoinTask;", "([Ljava/util/concurrent/ForkJoinTask<*>;I)Ljava/util/concurrent/ForkJoinTask<*>;", $STATIC | $FINAL, $staticMethod(ForkJoinPool$WorkQueue, getAndClearSlot, $ForkJoinTask*, $ForkJoinTaskArray*, int32_t)},
		{"getPoolIndex", "()I", nullptr, $FINAL, $method(ForkJoinPool$WorkQueue, getPoolIndex, int32_t)},
		{"getSlot", "([Ljava/util/concurrent/ForkJoinTask;I)Ljava/util/concurrent/ForkJoinTask;", "([Ljava/util/concurrent/ForkJoinTask<*>;I)Ljava/util/concurrent/ForkJoinTask<*>;", $STATIC | $FINAL, $staticMethod(ForkJoinPool$WorkQueue, getSlot, $ForkJoinTask*, $ForkJoinTaskArray*, int32_t)},
		{"growArray", "()V", nullptr, $FINAL, $method(ForkJoinPool$WorkQueue, growArray, void)},
		{"helpAsyncBlocker", "(Ljava/util/concurrent/ForkJoinPool$ManagedBlocker;)V", nullptr, $FINAL, $method(ForkJoinPool$WorkQueue, helpAsyncBlocker, void, $ForkJoinPool$ManagedBlocker*)},
		{"helpComplete", "(Ljava/util/concurrent/ForkJoinTask;ZI)I", "(Ljava/util/concurrent/ForkJoinTask<*>;ZI)I", $FINAL, $method(ForkJoinPool$WorkQueue, helpComplete, int32_t, $ForkJoinTask*, bool, int32_t)},
		{"initializeInnocuousWorker", "()V", nullptr, $FINAL, $method(ForkJoinPool$WorkQueue, initializeInnocuousWorker, void)},
		{"isApparentlyUnblocked", "()Z", nullptr, $FINAL, $method(ForkJoinPool$WorkQueue, isApparentlyUnblocked, bool)},
		{"isEmpty", "()Z", nullptr, $FINAL, $method(ForkJoinPool$WorkQueue, isEmpty, bool)},
		{"lockedPush", "(Ljava/util/concurrent/ForkJoinTask;)Z", "(Ljava/util/concurrent/ForkJoinTask<*>;)Z", $FINAL, $method(ForkJoinPool$WorkQueue, lockedPush, bool, $ForkJoinTask*)},
		{"nextLocalTask", "(I)Ljava/util/concurrent/ForkJoinTask;", "(I)Ljava/util/concurrent/ForkJoinTask<*>;", $FINAL, $method(ForkJoinPool$WorkQueue, nextLocalTask, $ForkJoinTask*, int32_t)},
		{"nextLocalTask", "()Ljava/util/concurrent/ForkJoinTask;", "()Ljava/util/concurrent/ForkJoinTask<*>;", $FINAL, $method(ForkJoinPool$WorkQueue, nextLocalTask, $ForkJoinTask*)},
		{"peek", "()Ljava/util/concurrent/ForkJoinTask;", "()Ljava/util/concurrent/ForkJoinTask<*>;", $FINAL, $method(ForkJoinPool$WorkQueue, peek, $ForkJoinTask*)},
		{"pop", "()Ljava/util/concurrent/ForkJoinTask;", "()Ljava/util/concurrent/ForkJoinTask<*>;", $PRIVATE, $method(ForkJoinPool$WorkQueue, pop, $ForkJoinTask*)},
		{"push", "(Ljava/util/concurrent/ForkJoinTask;Ljava/util/concurrent/ForkJoinPool;)V", "(Ljava/util/concurrent/ForkJoinTask<*>;Ljava/util/concurrent/ForkJoinPool;)V", $FINAL, $method(ForkJoinPool$WorkQueue, push, void, $ForkJoinTask*, $ForkJoinPool*)},
		{"queueSize", "()I", nullptr, $FINAL, $method(ForkJoinPool$WorkQueue, queueSize, int32_t)},
		{"setBaseOpaque", "(I)V", nullptr, $FINAL, $method(ForkJoinPool$WorkQueue, setBaseOpaque, void, int32_t)},
		{"setSlotVolatile", "([Ljava/util/concurrent/ForkJoinTask;ILjava/util/concurrent/ForkJoinTask;)V", "([Ljava/util/concurrent/ForkJoinTask<*>;ILjava/util/concurrent/ForkJoinTask<*>;)V", $STATIC | $FINAL, $staticMethod(ForkJoinPool$WorkQueue, setSlotVolatile, void, $ForkJoinTaskArray*, int32_t, $ForkJoinTask*)},
		{"topLevelExec", "(Ljava/util/concurrent/ForkJoinTask;Ljava/util/concurrent/ForkJoinPool$WorkQueue;)V", "(Ljava/util/concurrent/ForkJoinTask<*>;Ljava/util/concurrent/ForkJoinPool$WorkQueue;)V", $FINAL, $method(ForkJoinPool$WorkQueue, topLevelExec, void, $ForkJoinTask*, ForkJoinPool$WorkQueue*)},
		{"tryLock", "()Z", nullptr, $FINAL, $method(ForkJoinPool$WorkQueue, tryLock, bool)},
		{"tryPoll", "()Ljava/util/concurrent/ForkJoinTask;", "()Ljava/util/concurrent/ForkJoinTask<*>;", $FINAL, $method(ForkJoinPool$WorkQueue, tryPoll, $ForkJoinTask*)},
		{"tryRemove", "(Ljava/util/concurrent/ForkJoinTask;Z)Z", "(Ljava/util/concurrent/ForkJoinTask<*>;Z)Z", $FINAL, $method(ForkJoinPool$WorkQueue, tryRemove, bool, $ForkJoinTask*, bool)},
		{"tryUnpush", "(Ljava/util/concurrent/ForkJoinTask;)Z", "(Ljava/util/concurrent/ForkJoinTask<*>;)Z", $FINAL, $method(ForkJoinPool$WorkQueue, tryUnpush, bool, $ForkJoinTask*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ForkJoinPool$WorkQueue", "java.util.concurrent.ForkJoinPool", "WorkQueue", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ForkJoinPool$WorkQueue",
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
		"java.util.concurrent.ForkJoinPool"
	};
	$loadClass(ForkJoinPool$WorkQueue, name, initialize, &classInfo$$, ForkJoinPool$WorkQueue::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ForkJoinPool$WorkQueue);
	});
	return class$;
}

$Class* ForkJoinPool$WorkQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java