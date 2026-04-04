#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ref/FinalReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue$Lock.h>
#include <java/lang/ref/ReferenceQueue$Null.h>
#include <java/util/function/Consumer.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef ENQUEUED
#undef NULL

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FinalReference = ::java::lang::ref::FinalReference;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue$Lock = ::java::lang::ref::ReferenceQueue$Lock;
using $ReferenceQueue$Null = ::java::lang::ref::ReferenceQueue$Null;
using $Consumer = ::java::util::function::Consumer;
using $VM = ::jdk::internal::misc::VM;

namespace java {
	namespace lang {
		namespace ref {

bool ReferenceQueue::$assertionsDisabled = false;
ReferenceQueue* ReferenceQueue::NULL = nullptr;
ReferenceQueue* ReferenceQueue::ENQUEUED = nullptr;

void ReferenceQueue::init$() {
	$set(this, lock, $new($ReferenceQueue$Lock));
	this->queueLength = 0;
}

bool ReferenceQueue::enqueue($Reference* r) {
	$synchronized(this->lock) {
		$var(ReferenceQueue, queue, $nc(r)->queue);
		if ((queue == ReferenceQueue::NULL) || (queue == ReferenceQueue::ENQUEUED)) {
			return false;
		}
		if (!ReferenceQueue::$assertionsDisabled && !(queue == this)) {
			$throwNew($AssertionError);
		}
		$set(r, next, (this->head == nullptr) ? r : $cast($Reference, this->head));
		$set(this, head, r);
		++this->queueLength;
		$set(r, queue, ReferenceQueue::ENQUEUED);
		if ($instanceOf($FinalReference, r)) {
			$VM::addFinalRefCount(1);
		}
		this->lock->notifyAll();
		return true;
	}
}

$Reference* ReferenceQueue::reallyPoll() {
	$useLocalObjectStack();
	$var($Reference, r, this->head);
	if (r != nullptr) {
		$set(r, queue, ReferenceQueue::NULL);
		$var($Reference, rn, r->next);
		$set(this, head, (rn == r) ? ($Reference*)nullptr : rn);
		$set(r, next, r);
		--this->queueLength;
		if ($instanceOf($FinalReference, r)) {
			$VM::addFinalRefCount(-1);
		}
		return r;
	}
	return nullptr;
}

$Reference* ReferenceQueue::poll() {
	if (this->head == nullptr) {
		return nullptr;
	}
	$synchronized(this->lock) {
		return reallyPoll();
	}
}

$Reference* ReferenceQueue::remove(int64_t timeout) {
	if (timeout < 0) {
		$throwNew($IllegalArgumentException, "Negative timeout value"_s);
	}
	$synchronized(this->lock) {
		$var($Reference, r, reallyPoll());
		if (r != nullptr) {
			return r;
		}
		int64_t start = (timeout == 0) ? 0 : $System::nanoTime();
		for (;;) {
			this->lock->wait(timeout);
			$assign(r, reallyPoll());
			if (r != nullptr) {
				return r;
			}
			if (timeout != 0) {
				int64_t end = $System::nanoTime();
				timeout -= (end - start) / 1000000;
				if (timeout <= 0) {
					return nullptr;
				}
				start = end;
			}
		}
	}
}

$Reference* ReferenceQueue::remove() {
	return remove(0);
}

void ReferenceQueue::forEach($Consumer* action) {
	$useLocalObjectStack();
	$var($Reference, r, this->head);
	for (; r != nullptr;) {
		$nc(action)->accept(r);
		$var($Reference, rn, r->next);
		if (rn == r) {
			if (r->queue == ReferenceQueue::ENQUEUED) {
				$assign(r, nullptr);
			} else {
				$assign(r, this->head);
			}
		} else {
			$assign(r, rn);
		}
	}
}

void ReferenceQueue::clinit$($Class* clazz) {
	ReferenceQueue::$assertionsDisabled = !ReferenceQueue::class$->desiredAssertionStatus();
	$assignStatic(ReferenceQueue::NULL, $new($ReferenceQueue$Null));
	$assignStatic(ReferenceQueue::ENQUEUED, $new($ReferenceQueue$Null));
}

ReferenceQueue::ReferenceQueue() {
}

$Class* ReferenceQueue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ReferenceQueue, $assertionsDisabled)},
		{"NULL", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(ReferenceQueue, NULL)},
		{"ENQUEUED", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(ReferenceQueue, ENQUEUED)},
		{"lock", "Ljava/lang/ref/ReferenceQueue$Lock;", nullptr, $PRIVATE | $FINAL, $field(ReferenceQueue, lock)},
		{"head", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+TT;>;", $PRIVATE | $VOLATILE, $field(ReferenceQueue, head)},
		{"queueLength", "J", nullptr, $PRIVATE, $field(ReferenceQueue, queueLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReferenceQueue, init$, void)},
		{"enqueue", "(Ljava/lang/ref/Reference;)Z", "(Ljava/lang/ref/Reference<+TT;>;)Z", 0, $virtualMethod(ReferenceQueue, enqueue, bool, $Reference*)},
		{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/ref/Reference<+TT;>;>;)V", 0, $virtualMethod(ReferenceQueue, forEach, void, $Consumer*)},
		{"poll", "()Ljava/lang/ref/Reference;", "()Ljava/lang/ref/Reference<+TT;>;", $PUBLIC, $virtualMethod(ReferenceQueue, poll, $Reference*)},
		{"reallyPoll", "()Ljava/lang/ref/Reference;", "()Ljava/lang/ref/Reference<+TT;>;", $PRIVATE, $method(ReferenceQueue, reallyPoll, $Reference*)},
		{"remove", "(J)Ljava/lang/ref/Reference;", "(J)Ljava/lang/ref/Reference<+TT;>;", $PUBLIC, $virtualMethod(ReferenceQueue, remove, $Reference*, int64_t), "java.lang.IllegalArgumentException,java.lang.InterruptedException"},
		{"remove", "()Ljava/lang/ref/Reference;", "()Ljava/lang/ref/Reference<+TT;>;", $PUBLIC, $virtualMethod(ReferenceQueue, remove, $Reference*), "java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.ReferenceQueue$Lock", "java.lang.ref.ReferenceQueue", "Lock", $PRIVATE | $STATIC},
		{"java.lang.ref.ReferenceQueue$Null", "java.lang.ref.ReferenceQueue", "Null", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ref.ReferenceQueue",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.ref.ReferenceQueue$Lock,java.lang.ref.ReferenceQueue$Null"
	};
	$loadClass(ReferenceQueue, name, initialize, &classInfo$$, ReferenceQueue::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceQueue);
	});
	return class$;
}

$Class* ReferenceQueue::class$ = nullptr;

		} // ref
	} // lang
} // java