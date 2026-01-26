#include <java/util/concurrent/ForkJoinTask$AdaptedRunnable.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ForkJoinTask$AdaptedRunnable_FieldInfo_[] = {
	{"runnable", "Ljava/lang/Runnable;", nullptr, $FINAL, $field(ForkJoinTask$AdaptedRunnable, runnable)},
	{"result", "Ljava/lang/Object;", "TT;", 0, $field(ForkJoinTask$AdaptedRunnable, result)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ForkJoinTask$AdaptedRunnable, serialVersionUID)},
	{}
};

$MethodInfo _ForkJoinTask$AdaptedRunnable_MethodInfo_[] = {
	{"*cancel", "(Z)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Runnable;Ljava/lang/Object;)V", "(Ljava/lang/Runnable;TT;)V", 0, $method(ForkJoinTask$AdaptedRunnable, init$, void, $Runnable*, Object$*)},
	{"exec", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedRunnable, exec, bool)},
	{"getRawResult", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedRunnable, getRawResult, $Object*)},
	{"*isCancelled", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*isDone", "()Z", nullptr, $PUBLIC | $FINAL},
	{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedRunnable, run, void)},
	{"setRawResult", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC | $FINAL, $virtualMethod(ForkJoinTask$AdaptedRunnable, setRawResult, void, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ForkJoinTask$AdaptedRunnable, toString, $String*)},
	{}
};

$InnerClassInfo _ForkJoinTask$AdaptedRunnable_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinTask$AdaptedRunnable", "java.util.concurrent.ForkJoinTask", "AdaptedRunnable", $STATIC | $FINAL},
	{}
};

$ClassInfo _ForkJoinTask$AdaptedRunnable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ForkJoinTask$AdaptedRunnable",
	"java.util.concurrent.ForkJoinTask",
	"java.util.concurrent.RunnableFuture",
	_ForkJoinTask$AdaptedRunnable_FieldInfo_,
	_ForkJoinTask$AdaptedRunnable_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/ForkJoinTask<TT;>;Ljava/util/concurrent/RunnableFuture<TT;>;",
	nullptr,
	_ForkJoinTask$AdaptedRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinTask"
};

$Object* allocate$ForkJoinTask$AdaptedRunnable($Class* clazz) {
	return $of($alloc(ForkJoinTask$AdaptedRunnable));
}

bool ForkJoinTask$AdaptedRunnable::cancel(bool mayInterruptIfRunning) {
	 return this->$ForkJoinTask::cancel(mayInterruptIfRunning);
}

bool ForkJoinTask$AdaptedRunnable::isDone() {
	 return this->$ForkJoinTask::isDone();
}

bool ForkJoinTask$AdaptedRunnable::isCancelled() {
	 return this->$ForkJoinTask::isCancelled();
}

$Object* ForkJoinTask$AdaptedRunnable::get() {
	 return this->$ForkJoinTask::get();
}

$Object* ForkJoinTask$AdaptedRunnable::get(int64_t timeout, $TimeUnit* unit) {
	 return this->$ForkJoinTask::get(timeout, unit);
}

int32_t ForkJoinTask$AdaptedRunnable::hashCode() {
	 return this->$ForkJoinTask::hashCode();
}

bool ForkJoinTask$AdaptedRunnable::equals(Object$* obj) {
	 return this->$ForkJoinTask::equals(obj);
}

$Object* ForkJoinTask$AdaptedRunnable::clone() {
	 return this->$ForkJoinTask::clone();
}

void ForkJoinTask$AdaptedRunnable::finalize() {
	this->$ForkJoinTask::finalize();
}

void ForkJoinTask$AdaptedRunnable::init$($Runnable* runnable, Object$* result) {
	$ForkJoinTask::init$();
	if (runnable == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, runnable, runnable);
	$set(this, result, result);
}

$Object* ForkJoinTask$AdaptedRunnable::getRawResult() {
	return $of(this->result);
}

void ForkJoinTask$AdaptedRunnable::setRawResult(Object$* v) {
	$set(this, result, v);
}

bool ForkJoinTask$AdaptedRunnable::exec() {
	$nc(this->runnable)->run();
	return true;
}

void ForkJoinTask$AdaptedRunnable::run() {
	invoke();
}

$String* ForkJoinTask$AdaptedRunnable::toString() {
	return $str({$($ForkJoinTask::toString()), "[Wrapped task = "_s, this->runnable, "]"_s});
}

ForkJoinTask$AdaptedRunnable::ForkJoinTask$AdaptedRunnable() {
}

$Class* ForkJoinTask$AdaptedRunnable::load$($String* name, bool initialize) {
	$loadClass(ForkJoinTask$AdaptedRunnable, name, initialize, &_ForkJoinTask$AdaptedRunnable_ClassInfo_, allocate$ForkJoinTask$AdaptedRunnable);
	return class$;
}

$Class* ForkJoinTask$AdaptedRunnable::class$ = nullptr;

		} // concurrent
	} // util
} // java