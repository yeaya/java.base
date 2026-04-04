#include <java/util/concurrent/ForkJoinTask$AdaptedCallable.h>
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

bool ForkJoinTask$AdaptedCallable::cancel(bool mayInterruptIfRunning) {
	 return this->$ForkJoinTask::cancel(mayInterruptIfRunning);
}

bool ForkJoinTask$AdaptedCallable::isDone() {
	 return this->$ForkJoinTask::isDone();
}

bool ForkJoinTask$AdaptedCallable::isCancelled() {
	 return this->$ForkJoinTask::isCancelled();
}

$Object* ForkJoinTask$AdaptedCallable::get() {
	 return this->$ForkJoinTask::get();
}

$Object* ForkJoinTask$AdaptedCallable::get(int64_t timeout, $TimeUnit* unit) {
	 return this->$ForkJoinTask::get(timeout, unit);
}

int32_t ForkJoinTask$AdaptedCallable::hashCode() {
	 return this->$ForkJoinTask::hashCode();
}

bool ForkJoinTask$AdaptedCallable::equals(Object$* obj) {
	 return this->$ForkJoinTask::equals(obj);
}

$Object* ForkJoinTask$AdaptedCallable::clone() {
	 return this->$ForkJoinTask::clone();
}

void ForkJoinTask$AdaptedCallable::finalize() {
	this->$ForkJoinTask::finalize();
}

void ForkJoinTask$AdaptedCallable::init$($Callable* callable) {
	$ForkJoinTask::init$();
	if (callable == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, callable, callable);
}

$Object* ForkJoinTask$AdaptedCallable::getRawResult() {
	return this->result;
}

void ForkJoinTask$AdaptedCallable::setRawResult(Object$* v) {
	$set(this, result, v);
}

bool ForkJoinTask$AdaptedCallable::exec() {
	try {
		$set(this, result, $nc(this->callable)->call());
		return true;
	} catch ($RuntimeException& rex) {
		$throw(rex);
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, ex);
	}
	$shouldNotReachHere();
}

void ForkJoinTask$AdaptedCallable::run() {
	invoke();
}

$String* ForkJoinTask$AdaptedCallable::toString() {
	return $str({$($ForkJoinTask::toString()), "[Wrapped task = "_s, this->callable, "]"_s});
}

ForkJoinTask$AdaptedCallable::ForkJoinTask$AdaptedCallable() {
}

$Class* ForkJoinTask$AdaptedCallable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"callable", "Ljava/util/concurrent/Callable;", "Ljava/util/concurrent/Callable<+TT;>;", $FINAL, $field(ForkJoinTask$AdaptedCallable, callable)},
		{"result", "Ljava/lang/Object;", "TT;", 0, $field(ForkJoinTask$AdaptedCallable, result)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ForkJoinTask$AdaptedCallable, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*cancel", "(Z)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
		{"*get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/concurrent/Callable;)V", "(Ljava/util/concurrent/Callable<+TT;>;)V", 0, $method(ForkJoinTask$AdaptedCallable, init$, void, $Callable*)},
		{"exec", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedCallable, exec, bool)},
		{"getRawResult", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedCallable, getRawResult, $Object*)},
		{"*isCancelled", "()Z", nullptr, $PUBLIC | $FINAL},
		{"*isDone", "()Z", nullptr, $PUBLIC | $FINAL},
		{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedCallable, run, void)},
		{"setRawResult", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedCallable, setRawResult, void, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ForkJoinTask$AdaptedCallable, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ForkJoinTask$AdaptedCallable", "java.util.concurrent.ForkJoinTask", "AdaptedCallable", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.ForkJoinTask$AdaptedCallable",
		"java.util.concurrent.ForkJoinTask",
		"java.util.concurrent.RunnableFuture",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/concurrent/ForkJoinTask<TT;>;Ljava/util/concurrent/RunnableFuture<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ForkJoinTask"
	};
	$loadClass(ForkJoinTask$AdaptedCallable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ForkJoinTask$AdaptedCallable));
	});
	return class$;
}

$Class* ForkJoinTask$AdaptedCallable::class$ = nullptr;

		} // concurrent
	} // util
} // java