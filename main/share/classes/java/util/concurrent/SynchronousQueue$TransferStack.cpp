#include <java/util/concurrent/SynchronousQueue$TransferStack.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/SynchronousQueue$TransferStack$SNode.h>
#include <java/util/concurrent/SynchronousQueue$Transferer.h>
#include <java/util/concurrent/SynchronousQueue.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

#undef SHEAD
#undef REQUEST
#undef DATA
#undef FULFILLING

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$ManagedBlocker = ::java::util::concurrent::ForkJoinPool$ManagedBlocker;
using $SynchronousQueue = ::java::util::concurrent::SynchronousQueue;
using $SynchronousQueue$TransferStack$SNode = ::java::util::concurrent::SynchronousQueue$TransferStack$SNode;
using $SynchronousQueue$Transferer = ::java::util::concurrent::SynchronousQueue$Transferer;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _SynchronousQueue$TransferStack_FieldInfo_[] = {
	{"REQUEST", "I", nullptr, $STATIC | $FINAL, $constField(SynchronousQueue$TransferStack, REQUEST)},
	{"DATA", "I", nullptr, $STATIC | $FINAL, $constField(SynchronousQueue$TransferStack, DATA)},
	{"FULFILLING", "I", nullptr, $STATIC | $FINAL, $constField(SynchronousQueue$TransferStack, FULFILLING)},
	{"head", "Ljava/util/concurrent/SynchronousQueue$TransferStack$SNode;", nullptr, $VOLATILE, $field(SynchronousQueue$TransferStack, head)},
	{"SHEAD", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynchronousQueue$TransferStack, SHEAD)},
	{}
};

$MethodInfo _SynchronousQueue$TransferStack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SynchronousQueue$TransferStack::*)()>(&SynchronousQueue$TransferStack::init$))},
	{"casHead", "(Ljava/util/concurrent/SynchronousQueue$TransferStack$SNode;Ljava/util/concurrent/SynchronousQueue$TransferStack$SNode;)Z", nullptr, 0, $method(static_cast<bool(SynchronousQueue$TransferStack::*)($SynchronousQueue$TransferStack$SNode*,$SynchronousQueue$TransferStack$SNode*)>(&SynchronousQueue$TransferStack::casHead))},
	{"clean", "(Ljava/util/concurrent/SynchronousQueue$TransferStack$SNode;)V", nullptr, 0, $method(static_cast<void(SynchronousQueue$TransferStack::*)($SynchronousQueue$TransferStack$SNode*)>(&SynchronousQueue$TransferStack::clean))},
	{"isFulfilling", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&SynchronousQueue$TransferStack::isFulfilling))},
	{"snode", "(Ljava/util/concurrent/SynchronousQueue$TransferStack$SNode;Ljava/lang/Object;Ljava/util/concurrent/SynchronousQueue$TransferStack$SNode;I)Ljava/util/concurrent/SynchronousQueue$TransferStack$SNode;", nullptr, $STATIC, $method(static_cast<$SynchronousQueue$TransferStack$SNode*(*)($SynchronousQueue$TransferStack$SNode*,Object$*,$SynchronousQueue$TransferStack$SNode*,int32_t)>(&SynchronousQueue$TransferStack::snode))},
	{"transfer", "(Ljava/lang/Object;ZJ)Ljava/lang/Object;", "(TE;ZJ)TE;", 0},
	{}
};

$InnerClassInfo _SynchronousQueue$TransferStack_InnerClassesInfo_[] = {
	{"java.util.concurrent.SynchronousQueue$TransferStack", "java.util.concurrent.SynchronousQueue", "TransferStack", $STATIC | $FINAL},
	{"java.util.concurrent.SynchronousQueue$Transferer", "java.util.concurrent.SynchronousQueue", "Transferer", $STATIC | $ABSTRACT},
	{"java.util.concurrent.SynchronousQueue$TransferStack$SNode", "java.util.concurrent.SynchronousQueue$TransferStack", "SNode", $STATIC | $FINAL},
	{}
};

$ClassInfo _SynchronousQueue$TransferStack_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.SynchronousQueue$TransferStack",
	"java.util.concurrent.SynchronousQueue$Transferer",
	nullptr,
	_SynchronousQueue$TransferStack_FieldInfo_,
	_SynchronousQueue$TransferStack_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/concurrent/SynchronousQueue$Transferer<TE;>;",
	nullptr,
	_SynchronousQueue$TransferStack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.SynchronousQueue"
};

$Object* allocate$SynchronousQueue$TransferStack($Class* clazz) {
	return $of($alloc(SynchronousQueue$TransferStack));
}

$VarHandle* SynchronousQueue$TransferStack::SHEAD = nullptr;

void SynchronousQueue$TransferStack::init$() {
	$SynchronousQueue$Transferer::init$();
}

bool SynchronousQueue$TransferStack::isFulfilling(int32_t m) {
	$init(SynchronousQueue$TransferStack);
	return ((int32_t)(m & (uint32_t)SynchronousQueue$TransferStack::FULFILLING)) != 0;
}

bool SynchronousQueue$TransferStack::casHead($SynchronousQueue$TransferStack$SNode* h, $SynchronousQueue$TransferStack$SNode* nh) {
	return h == this->head && $nc(SynchronousQueue$TransferStack::SHEAD)->compareAndSet($$new($ObjectArray, {$of(this), $of(h), $of(nh)}));
}

$SynchronousQueue$TransferStack$SNode* SynchronousQueue$TransferStack::snode($SynchronousQueue$TransferStack$SNode* s$renamed, Object$* e, $SynchronousQueue$TransferStack$SNode* next, int32_t mode) {
	$init(SynchronousQueue$TransferStack);
	$var($SynchronousQueue$TransferStack$SNode, s, s$renamed);
	if (s == nullptr) {
		$assign(s, $new($SynchronousQueue$TransferStack$SNode, e));
	}
	$nc(s)->mode = mode;
	$set(s, next, next);
	return s;
}

$Object* SynchronousQueue$TransferStack::transfer(Object$* e, bool timed, int64_t nanos) {
	$var($SynchronousQueue$TransferStack$SNode, s, nullptr);
	int32_t mode = (e == nullptr) ? SynchronousQueue$TransferStack::REQUEST : SynchronousQueue$TransferStack::DATA;
	for (;;) {
		$var($SynchronousQueue$TransferStack$SNode, h, this->head);
		if (h == nullptr || $nc(h)->mode == mode) {
			if (timed && nanos <= (int64_t)0) {
				if (h != nullptr && h->isCancelled()) {
					casHead(h, h->next);
				} else {
					return $of(nullptr);
				}
			} else if (casHead(h, $assign(s, snode(s, e, h, mode)))) {
				int64_t deadline = timed ? $System::nanoTime() + nanos : (int64_t)0;
				$var($Thread, w, $Thread::currentThread());
				int32_t stat = -1;
				$var($SynchronousQueue$TransferStack$SNode, m, nullptr);
				while (($assign(m, $nc(s)->match)) == nullptr) {
					bool var$0 = (timed && (nanos = deadline - $System::nanoTime()) <= 0);
					if (var$0 || w->isInterrupted()) {
						if (s->tryCancel()) {
							clean(s);
							return $of(nullptr);
						}
					} else if (($assign(m, $nc(s)->match)) != nullptr) {
						break;
					} else if (stat <= 0) {
						if (stat < 0 && h == nullptr && this->head == s) {
							stat = 0;
							$Thread::yield();
						} else {
							stat = 1;
							$set($nc(s), waiter, w);
						}
					} else if (!timed) {
						$LockSupport::setCurrentBlocker(this);
						try {
							$ForkJoinPool::managedBlock(s);
						} catch ($InterruptedException&) {
							$catch();
						}
						$LockSupport::setCurrentBlocker(nullptr);
					} else if (nanos > (int64_t)1023) {
						$LockSupport::parkNanos(this, nanos);
					}
				}
				if (stat == 1) {
					$nc(s)->forgetWaiter();
				}
				$var($Object, result, (mode == SynchronousQueue$TransferStack::REQUEST) ? $nc(m)->item : $nc(s)->item);
				if (h != nullptr && h->next == s) {
					casHead(h, s->next);
				}
				return $of(result);
			}
		} else if (!isFulfilling($nc(h)->mode)) {
			if ($nc(h)->isCancelled()) {
				casHead(h, h->next);
			} else if (casHead(h, $assign(s, snode(s, e, h, SynchronousQueue$TransferStack::FULFILLING | mode)))) {
				for (;;) {
					$var($SynchronousQueue$TransferStack$SNode, m, $nc(s)->next);
					if (m == nullptr) {
						casHead(s, nullptr);
						$assign(s, nullptr);
						break;
					}
					$var($SynchronousQueue$TransferStack$SNode, mn, $nc(m)->next);
					if (m->tryMatch(s)) {
						casHead(s, mn);
						return $of(((mode == SynchronousQueue$TransferStack::REQUEST) ? m->item : s->item));
					} else {
						s->casNext(m, mn);
					}
				}
			}
		} else {
			$var($SynchronousQueue$TransferStack$SNode, m, $nc(h)->next);
			if (m == nullptr) {
				casHead(h, nullptr);
			} else {
				$var($SynchronousQueue$TransferStack$SNode, mn, $nc(m)->next);
				if (m->tryMatch(h)) {
					casHead(h, mn);
				} else {
					h->casNext(m, mn);
				}
			}
		}
	}
}

void SynchronousQueue$TransferStack::clean($SynchronousQueue$TransferStack$SNode* s) {
	$set($nc(s), item, nullptr);
	s->forgetWaiter();
	$var($SynchronousQueue$TransferStack$SNode, past, s->next);
	if (past != nullptr && past->isCancelled()) {
		$assign(past, past->next);
	}
	$var($SynchronousQueue$TransferStack$SNode, p, nullptr);
	while (true) {
		bool var$1 = ($assign(p, this->head)) != nullptr;
		bool var$0 = var$1 && p != past;
		if (!(var$0 && $nc(p)->isCancelled())) {
			break;
		}
		{
			casHead(p, p->next);
		}
	}
	while (p != nullptr && p != past) {
		$var($SynchronousQueue$TransferStack$SNode, n, p->next);
		if (n != nullptr && n->isCancelled()) {
			p->casNext(n, n->next);
		} else {
			$assign(p, n);
		}
	}
}

void clinit$SynchronousQueue$TransferStack($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$var($MethodHandles$Lookup, l, $MethodHandles::lookup());
			$load($SynchronousQueue$TransferStack$SNode);
			$assignStatic(SynchronousQueue$TransferStack::SHEAD, $nc(l)->findVarHandle(SynchronousQueue$TransferStack::class$, "head"_s, $SynchronousQueue$TransferStack$SNode::class$));
		} catch ($ReflectiveOperationException&) {
			$var($ReflectiveOperationException, e, $catch());
			$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(e));
		}
	}
}

SynchronousQueue$TransferStack::SynchronousQueue$TransferStack() {
}

$Class* SynchronousQueue$TransferStack::load$($String* name, bool initialize) {
	$loadClass(SynchronousQueue$TransferStack, name, initialize, &_SynchronousQueue$TransferStack_ClassInfo_, clinit$SynchronousQueue$TransferStack, allocate$SynchronousQueue$TransferStack);
	return class$;
}

$Class* SynchronousQueue$TransferStack::class$ = nullptr;

		} // concurrent
	} // util
} // java