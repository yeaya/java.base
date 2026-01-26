#include <java/util/concurrent/CompletableFuture$Signaller.h>

#include <java/util/concurrent/CompletableFuture$Completion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$Completion = ::java::util::concurrent::CompletableFuture$Completion;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$Signaller_FieldInfo_[] = {
	{"nanos", "J", nullptr, 0, $field(CompletableFuture$Signaller, nanos)},
	{"deadline", "J", nullptr, $FINAL, $field(CompletableFuture$Signaller, deadline)},
	{"interruptible", "Z", nullptr, $FINAL, $field(CompletableFuture$Signaller, interruptible)},
	{"interrupted", "Z", nullptr, 0, $field(CompletableFuture$Signaller, interrupted)},
	{"thread", "Ljava/lang/Thread;", nullptr, $VOLATILE, $field(CompletableFuture$Signaller, thread)},
	{}
};

$MethodInfo _CompletableFuture$Signaller_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ZJJ)V", nullptr, 0, $method(CompletableFuture$Signaller, init$, void, bool, int64_t, int64_t)},
	{"block", "()Z", nullptr, $PUBLIC, $virtualMethod(CompletableFuture$Signaller, block, bool)},
	{"isLive", "()Z", nullptr, $FINAL, $virtualMethod(CompletableFuture$Signaller, isLive, bool)},
	{"isReleasable", "()Z", nullptr, $PUBLIC, $virtualMethod(CompletableFuture$Signaller, isReleasable, bool)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<*>;", $FINAL, $virtualMethod(CompletableFuture$Signaller, tryFire, $CompletableFuture*, int32_t)},
	{}
};

$InnerClassInfo _CompletableFuture$Signaller_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$Signaller", "java.util.concurrent.CompletableFuture", "Signaller", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$Completion", "java.util.concurrent.CompletableFuture", "Completion", $STATIC | $ABSTRACT},
	{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$Signaller_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$Signaller",
	"java.util.concurrent.CompletableFuture$Completion",
	"java.util.concurrent.ForkJoinPool$ManagedBlocker",
	_CompletableFuture$Signaller_FieldInfo_,
	_CompletableFuture$Signaller_MethodInfo_,
	nullptr,
	nullptr,
	_CompletableFuture$Signaller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$Signaller($Class* clazz) {
	return $of($alloc(CompletableFuture$Signaller));
}

int32_t CompletableFuture$Signaller::hashCode() {
	 return this->$CompletableFuture$Completion::hashCode();
}

bool CompletableFuture$Signaller::equals(Object$* obj) {
	 return this->$CompletableFuture$Completion::equals(obj);
}

$Object* CompletableFuture$Signaller::clone() {
	 return this->$CompletableFuture$Completion::clone();
}

$String* CompletableFuture$Signaller::toString() {
	 return this->$CompletableFuture$Completion::toString();
}

void CompletableFuture$Signaller::finalize() {
	this->$CompletableFuture$Completion::finalize();
}

void CompletableFuture$Signaller::init$(bool interruptible, int64_t nanos, int64_t deadline) {
	$CompletableFuture$Completion::init$();
	$set(this, thread, $Thread::currentThread());
	this->interruptible = interruptible;
	this->nanos = nanos;
	this->deadline = deadline;
}

$CompletableFuture* CompletableFuture$Signaller::tryFire(int32_t ignore) {
	$var($Thread, w, nullptr);
	if (($assign(w, this->thread)) != nullptr) {
		$set(this, thread, nullptr);
		$LockSupport::unpark(w);
	}
	return nullptr;
}

bool CompletableFuture$Signaller::isReleasable() {
	if ($Thread::interrupted()) {
		this->interrupted = true;
	}
	bool var$0 = (this->interrupted && this->interruptible);
	if (!var$0) {
		bool var$1 = this->deadline != (int64_t)0;
		if (var$1) {
			bool var$2 = this->nanos <= (int64_t)0;
			var$1 = (var$2 || (this->nanos = this->deadline - $System::nanoTime()) <= (int64_t)0);
		}
		var$0 = (var$1);
	}
	return (var$0 || this->thread == nullptr);
}

bool CompletableFuture$Signaller::block() {
	while (!isReleasable()) {
		if (this->deadline == (int64_t)0) {
			$LockSupport::park(this);
		} else {
			$LockSupport::parkNanos(this, this->nanos);
		}
	}
	return true;
}

bool CompletableFuture$Signaller::isLive() {
	return this->thread != nullptr;
}

CompletableFuture$Signaller::CompletableFuture$Signaller() {
}

$Class* CompletableFuture$Signaller::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$Signaller, name, initialize, &_CompletableFuture$Signaller_ClassInfo_, allocate$CompletableFuture$Signaller);
	return class$;
}

$Class* CompletableFuture$Signaller::class$ = nullptr;

		} // concurrent
	} // util
} // java