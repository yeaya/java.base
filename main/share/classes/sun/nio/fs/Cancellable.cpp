#include <sun/nio/fs/Cancellable.h>

#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/ExecutionException.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _Cancellable_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Cancellable, unsafe)},
	{"pollingAddress", "J", nullptr, $PRIVATE | $FINAL, $field(Cancellable, pollingAddress)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Cancellable, lock)},
	{"completed", "Z", nullptr, $PRIVATE, $field(Cancellable, completed)},
	{"exception", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(Cancellable, exception$)},
	{}
};

$MethodInfo _Cancellable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(Cancellable, init$, void)},
	{"addressToPollForCancel", "()J", nullptr, $PROTECTED, $virtualMethod(Cancellable, addressToPollForCancel, int64_t)},
	{"cancel", "()V", nullptr, $FINAL, $method(Cancellable, cancel, void)},
	{"cancelValue", "()I", nullptr, $PROTECTED, $virtualMethod(Cancellable, cancelValue, int32_t)},
	{"exception", "()Ljava/lang/Throwable;", nullptr, $PRIVATE, $method(Cancellable, exception, $Throwable*)},
	{"implRun", "()V", nullptr, $ABSTRACT, $virtualMethod(Cancellable, implRun, void), "java.lang.Throwable"},
	{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(Cancellable, run, void)},
	{"runInterruptibly", "(Lsun/nio/fs/Cancellable;)V", nullptr, $STATIC, $staticMethod(Cancellable, runInterruptibly, void, Cancellable*), "java.util.concurrent.ExecutionException"},
	{}
};

$ClassInfo _Cancellable_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.nio.fs.Cancellable",
	"java.lang.Object",
	"java.lang.Runnable",
	_Cancellable_FieldInfo_,
	_Cancellable_MethodInfo_
};

$Object* allocate$Cancellable($Class* clazz) {
	return $of($alloc(Cancellable));
}

$Unsafe* Cancellable::unsafe = nullptr;

void Cancellable::init$() {
	$set(this, lock, $new($Object));
	this->pollingAddress = $nc(Cancellable::unsafe)->allocateMemory(4);
	$nc(Cancellable::unsafe)->putIntVolatile(nullptr, this->pollingAddress, 0);
}

int64_t Cancellable::addressToPollForCancel() {
	return this->pollingAddress;
}

int32_t Cancellable::cancelValue() {
	return $Integer::MAX_VALUE;
}

void Cancellable::cancel() {
	$synchronized(this->lock) {
		if (!this->completed) {
			$nc(Cancellable::unsafe)->putIntVolatile(nullptr, this->pollingAddress, cancelValue());
		}
	}
}

$Throwable* Cancellable::exception() {
	$synchronized(this->lock) {
		return this->exception$;
	}
}

void Cancellable::run() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				implRun();
			} catch ($Throwable& t) {
				$synchronized(this->lock) {
					$set(this, exception$, t);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$synchronized(this->lock) {
				this->completed = true;
				$nc(Cancellable::unsafe)->freeMemory(this->pollingAddress);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Cancellable::runInterruptibly(Cancellable* task) {
	$init(Cancellable);
	$useLocalCurrentObjectStackCache();
	$var($Thread, t, $new($Thread, nullptr, task, "NIO-Task"_s, 0, false));
	t->start();
	bool cancelledByInterrupt = false;
	while (t->isAlive()) {
		try {
			t->join();
		} catch ($InterruptedException& e) {
			cancelledByInterrupt = true;
			$nc(task)->cancel();
		}
	}
	if (cancelledByInterrupt) {
		$($Thread::currentThread())->interrupt();
	}
	$var($Throwable, exc, $nc(task)->exception());
	if (exc != nullptr) {
		$throwNew($ExecutionException, exc);
	}
}

void clinit$Cancellable($Class* class$) {
	$assignStatic(Cancellable::unsafe, $Unsafe::getUnsafe());
}

Cancellable::Cancellable() {
}

$Class* Cancellable::load$($String* name, bool initialize) {
	$loadClass(Cancellable, name, initialize, &_Cancellable_ClassInfo_, clinit$Cancellable, allocate$Cancellable);
	return class$;
}

$Class* Cancellable::class$ = nullptr;

		} // fs
	} // nio
} // sun