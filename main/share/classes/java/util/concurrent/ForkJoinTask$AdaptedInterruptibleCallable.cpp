#include <java/util/concurrent/ForkJoinTask$AdaptedInterruptibleCallable.h>

#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Callable = ::java::util::concurrent::Callable;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ForkJoinTask$AdaptedInterruptibleCallable_FieldInfo_[] = {
	{"callable", "Ljava/util/concurrent/Callable;", "Ljava/util/concurrent/Callable<+TT;>;", $FINAL, $field(ForkJoinTask$AdaptedInterruptibleCallable, callable)},
	{"runner", "Ljava/lang/Thread;", nullptr, $VOLATILE | $TRANSIENT, $field(ForkJoinTask$AdaptedInterruptibleCallable, runner)},
	{"result", "Ljava/lang/Object;", "TT;", 0, $field(ForkJoinTask$AdaptedInterruptibleCallable, result)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ForkJoinTask$AdaptedInterruptibleCallable, serialVersionUID)},
	{}
};

$MethodInfo _ForkJoinTask$AdaptedInterruptibleCallable_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/concurrent/Callable;)V", "(Ljava/util/concurrent/Callable<+TT;>;)V", 0, $method(ForkJoinTask$AdaptedInterruptibleCallable, init$, void, $Callable*)},
	{"cancel", "(Z)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedInterruptibleCallable, cancel, bool, bool)},
	{"exec", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedInterruptibleCallable, exec, bool)},
	{"getRawResult", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedInterruptibleCallable, getRawResult, $Object*)},
	{"*isCancelled", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*isDone", "()Z", nullptr, $PUBLIC | $FINAL},
	{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedInterruptibleCallable, run, void)},
	{"setRawResult", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedInterruptibleCallable, setRawResult, void, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ForkJoinTask$AdaptedInterruptibleCallable, toString, $String*)},
	{}
};

$InnerClassInfo _ForkJoinTask$AdaptedInterruptibleCallable_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinTask$AdaptedInterruptibleCallable", "java.util.concurrent.ForkJoinTask", "AdaptedInterruptibleCallable", $STATIC | $FINAL},
	{}
};

$ClassInfo _ForkJoinTask$AdaptedInterruptibleCallable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ForkJoinTask$AdaptedInterruptibleCallable",
	"java.util.concurrent.ForkJoinTask",
	"java.util.concurrent.RunnableFuture",
	_ForkJoinTask$AdaptedInterruptibleCallable_FieldInfo_,
	_ForkJoinTask$AdaptedInterruptibleCallable_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/ForkJoinTask<TT;>;Ljava/util/concurrent/RunnableFuture<TT;>;",
	nullptr,
	_ForkJoinTask$AdaptedInterruptibleCallable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinTask"
};

$Object* allocate$ForkJoinTask$AdaptedInterruptibleCallable($Class* clazz) {
	return $of($alloc(ForkJoinTask$AdaptedInterruptibleCallable));
}

bool ForkJoinTask$AdaptedInterruptibleCallable::isDone() {
	 return this->$ForkJoinTask::isDone();
}

bool ForkJoinTask$AdaptedInterruptibleCallable::isCancelled() {
	 return this->$ForkJoinTask::isCancelled();
}

$Object* ForkJoinTask$AdaptedInterruptibleCallable::get() {
	 return this->$ForkJoinTask::get();
}

$Object* ForkJoinTask$AdaptedInterruptibleCallable::get(int64_t timeout, $TimeUnit* unit) {
	 return this->$ForkJoinTask::get(timeout, unit);
}

int32_t ForkJoinTask$AdaptedInterruptibleCallable::hashCode() {
	 return this->$ForkJoinTask::hashCode();
}

bool ForkJoinTask$AdaptedInterruptibleCallable::equals(Object$* obj) {
	 return this->$ForkJoinTask::equals(obj);
}

$Object* ForkJoinTask$AdaptedInterruptibleCallable::clone() {
	 return this->$ForkJoinTask::clone();
}

void ForkJoinTask$AdaptedInterruptibleCallable::finalize() {
	this->$ForkJoinTask::finalize();
}

void ForkJoinTask$AdaptedInterruptibleCallable::init$($Callable* callable) {
	$ForkJoinTask::init$();
	if (callable == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, callable, callable);
}

$Object* ForkJoinTask$AdaptedInterruptibleCallable::getRawResult() {
	return $of(this->result);
}

void ForkJoinTask$AdaptedInterruptibleCallable::setRawResult(Object$* v) {
	$set(this, result, v);
}

bool ForkJoinTask$AdaptedInterruptibleCallable::exec() {
	$Thread::interrupted();
	$set(this, runner, $Thread::currentThread());
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				if (!isDone()) {
					$set(this, result, $nc(this->callable)->call());
				}
				var$2 = true;
				return$1 = true;
				goto $finally;
			} catch ($RuntimeException& rex) {
				$throw(rex);
			} catch ($Exception& ex) {
				$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$set(this, runner, nullptr);
			$Thread::interrupted();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ForkJoinTask$AdaptedInterruptibleCallable::run() {
	invoke();
}

bool ForkJoinTask$AdaptedInterruptibleCallable::cancel(bool mayInterruptIfRunning) {
	$var($Thread, t, nullptr);
	bool stat = $ForkJoinTask::cancel(false);
	if (mayInterruptIfRunning && ($assign(t, this->runner)) != nullptr) {
		try {
			$nc(t)->interrupt();
		} catch ($Throwable& ignore) {
		}
	}
	return stat;
}

$String* ForkJoinTask$AdaptedInterruptibleCallable::toString() {
	return $str({$($ForkJoinTask::toString()), "[Wrapped task = "_s, this->callable, "]"_s});
}

ForkJoinTask$AdaptedInterruptibleCallable::ForkJoinTask$AdaptedInterruptibleCallable() {
}

$Class* ForkJoinTask$AdaptedInterruptibleCallable::load$($String* name, bool initialize) {
	$loadClass(ForkJoinTask$AdaptedInterruptibleCallable, name, initialize, &_ForkJoinTask$AdaptedInterruptibleCallable_ClassInfo_, allocate$ForkJoinTask$AdaptedInterruptibleCallable);
	return class$;
}

$Class* ForkJoinTask$AdaptedInterruptibleCallable::class$ = nullptr;

		} // concurrent
	} // util
} // java