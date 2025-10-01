#include <sun/nio/fs/Cancellable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Cancellable::*)()>(&Cancellable::init$))},
	{"addressToPollForCancel", "()J", nullptr, $PROTECTED},
	{"cancel", "()V", nullptr, $FINAL, $method(static_cast<void(Cancellable::*)()>(&Cancellable::cancel))},
	{"cancelValue", "()I", nullptr, $PROTECTED},
	{"exception", "()Ljava/lang/Throwable;", nullptr, $PRIVATE, $method(static_cast<$Throwable*(Cancellable::*)()>(&Cancellable::exception))},
	{"implRun", "()V", nullptr, $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"run", "()V", nullptr, $PUBLIC | $FINAL},
	{"runInterruptibly", "(Lsun/nio/fs/Cancellable;)V", nullptr, $STATIC, $method(static_cast<void(*)(Cancellable*)>(&Cancellable::runInterruptibly)), "java.util.concurrent.ExecutionException"},
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
			} catch ($Throwable&) {
				$var($Throwable, t, $catch());
				$synchronized(this->lock) {
					$set(this, exception$, t);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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
	$var($Thread, t, $new($Thread, nullptr, task, "NIO-Task"_s, 0, false));
	t->start();
	bool cancelledByInterrupt = false;
	while (t->isAlive()) {
		try {
			t->join();
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
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