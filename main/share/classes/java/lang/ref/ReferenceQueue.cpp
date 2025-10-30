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

$FieldInfo _ReferenceQueue_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ReferenceQueue, $assertionsDisabled)},
	{"NULL", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(ReferenceQueue, NULL)},
	{"ENQUEUED", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(ReferenceQueue, ENQUEUED)},
	{"lock", "Ljava/lang/ref/ReferenceQueue$Lock;", nullptr, $PRIVATE | $FINAL, $field(ReferenceQueue, lock)},
	{"head", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+TT;>;", $PRIVATE | $VOLATILE, $field(ReferenceQueue, head)},
	{"queueLength", "J", nullptr, $PRIVATE, $field(ReferenceQueue, queueLength)},
	{}
};

$MethodInfo _ReferenceQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceQueue::*)()>(&ReferenceQueue::init$))},
	{"enqueue", "(Ljava/lang/ref/Reference;)Z", "(Ljava/lang/ref/Reference<+TT;>;)Z", 0},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/ref/Reference<+TT;>;>;)V", 0},
	{"poll", "()Ljava/lang/ref/Reference;", "()Ljava/lang/ref/Reference<+TT;>;", $PUBLIC},
	{"reallyPoll", "()Ljava/lang/ref/Reference;", "()Ljava/lang/ref/Reference<+TT;>;", $PRIVATE, $method(static_cast<$Reference*(ReferenceQueue::*)()>(&ReferenceQueue::reallyPoll))},
	{"remove", "(J)Ljava/lang/ref/Reference;", "(J)Ljava/lang/ref/Reference<+TT;>;", $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.lang.InterruptedException"},
	{"remove", "()Ljava/lang/ref/Reference;", "()Ljava/lang/ref/Reference<+TT;>;", $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _ReferenceQueue_InnerClassesInfo_[] = {
	{"java.lang.ref.ReferenceQueue$Lock", "java.lang.ref.ReferenceQueue", "Lock", $PRIVATE | $STATIC},
	{"java.lang.ref.ReferenceQueue$Null", "java.lang.ref.ReferenceQueue", "Null", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ReferenceQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ref.ReferenceQueue",
	"java.lang.Object",
	nullptr,
	_ReferenceQueue_FieldInfo_,
	_ReferenceQueue_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ReferenceQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.ref.ReferenceQueue$Lock,java.lang.ref.ReferenceQueue$Null"
};

$Object* allocate$ReferenceQueue($Class* clazz) {
	return $of($alloc(ReferenceQueue));
}

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
		$nc($of(this->lock))->notifyAll();
		return true;
	}
}

$Reference* ReferenceQueue::reallyPoll() {
	$useLocalCurrentObjectStackCache();
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
		int64_t start = (timeout == 0) ? (int64_t)0 : $System::nanoTime();
		for (;;) {
			$nc($of(this->lock))->wait(timeout);
			$assign(r, reallyPoll());
			if (r != nullptr) {
				return r;
			}
			if (timeout != 0) {
				int64_t end = $System::nanoTime();
				timeout -= (end - start) / 0x000F4240;
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
	$useLocalCurrentObjectStackCache();
	{
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
}

void clinit$ReferenceQueue($Class* class$) {
	ReferenceQueue::$assertionsDisabled = !ReferenceQueue::class$->desiredAssertionStatus();
	$assignStatic(ReferenceQueue::NULL, $new($ReferenceQueue$Null));
	$assignStatic(ReferenceQueue::ENQUEUED, $new($ReferenceQueue$Null));
}

ReferenceQueue::ReferenceQueue() {
}

$Class* ReferenceQueue::load$($String* name, bool initialize) {
	$loadClass(ReferenceQueue, name, initialize, &_ReferenceQueue_ClassInfo_, clinit$ReferenceQueue, allocate$ReferenceQueue);
	return class$;
}

$Class* ReferenceQueue::class$ = nullptr;

		} // ref
	} // lang
} // java