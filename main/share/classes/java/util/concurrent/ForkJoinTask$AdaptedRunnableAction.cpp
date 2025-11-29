#include <java/util/concurrent/ForkJoinTask$AdaptedRunnableAction.h>

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
using $Void = ::java::lang::Void;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ForkJoinTask$AdaptedRunnableAction_FieldInfo_[] = {
	{"runnable", "Ljava/lang/Runnable;", nullptr, $FINAL, $field(ForkJoinTask$AdaptedRunnableAction, runnable)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ForkJoinTask$AdaptedRunnableAction, serialVersionUID)},
	{}
};

$MethodInfo _ForkJoinTask$AdaptedRunnableAction_MethodInfo_[] = {
	{"*cancel", "(Z)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Runnable;)V", nullptr, 0, $method(static_cast<void(ForkJoinTask$AdaptedRunnableAction::*)($Runnable*)>(&ForkJoinTask$AdaptedRunnableAction::init$))},
	{"exec", "()Z", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Void;", nullptr, $PUBLIC | $FINAL},
	{"*isCancelled", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*isDone", "()Z", nullptr, $PUBLIC | $FINAL},
	{"run", "()V", nullptr, $PUBLIC | $FINAL},
	{"setRawResult", "(Ljava/lang/Void;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(ForkJoinTask$AdaptedRunnableAction::*)($Void*)>(&ForkJoinTask$AdaptedRunnableAction::setRawResult))},
	{"setRawResult", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ForkJoinTask$AdaptedRunnableAction_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinTask$AdaptedRunnableAction", "java.util.concurrent.ForkJoinTask", "AdaptedRunnableAction", $STATIC | $FINAL},
	{}
};

$ClassInfo _ForkJoinTask$AdaptedRunnableAction_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ForkJoinTask$AdaptedRunnableAction",
	"java.util.concurrent.ForkJoinTask",
	"java.util.concurrent.RunnableFuture",
	_ForkJoinTask$AdaptedRunnableAction_FieldInfo_,
	_ForkJoinTask$AdaptedRunnableAction_MethodInfo_,
	"Ljava/util/concurrent/ForkJoinTask<Ljava/lang/Void;>;Ljava/util/concurrent/RunnableFuture<Ljava/lang/Void;>;",
	nullptr,
	_ForkJoinTask$AdaptedRunnableAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinTask"
};

$Object* allocate$ForkJoinTask$AdaptedRunnableAction($Class* clazz) {
	return $of($alloc(ForkJoinTask$AdaptedRunnableAction));
}

bool ForkJoinTask$AdaptedRunnableAction::cancel(bool mayInterruptIfRunning) {
	 return this->$ForkJoinTask::cancel(mayInterruptIfRunning);
}

bool ForkJoinTask$AdaptedRunnableAction::isDone() {
	 return this->$ForkJoinTask::isDone();
}

bool ForkJoinTask$AdaptedRunnableAction::isCancelled() {
	 return this->$ForkJoinTask::isCancelled();
}

$Object* ForkJoinTask$AdaptedRunnableAction::get() {
	 return this->$ForkJoinTask::get();
}

$Object* ForkJoinTask$AdaptedRunnableAction::get(int64_t timeout, $TimeUnit* unit) {
	 return this->$ForkJoinTask::get(timeout, unit);
}

int32_t ForkJoinTask$AdaptedRunnableAction::hashCode() {
	 return this->$ForkJoinTask::hashCode();
}

bool ForkJoinTask$AdaptedRunnableAction::equals(Object$* obj) {
	 return this->$ForkJoinTask::equals(obj);
}

$Object* ForkJoinTask$AdaptedRunnableAction::clone() {
	 return this->$ForkJoinTask::clone();
}

void ForkJoinTask$AdaptedRunnableAction::finalize() {
	this->$ForkJoinTask::finalize();
}

void ForkJoinTask$AdaptedRunnableAction::init$($Runnable* runnable) {
	$ForkJoinTask::init$();
	if (runnable == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, runnable, runnable);
}

$Object* ForkJoinTask$AdaptedRunnableAction::getRawResult() {
	return $of(nullptr);
}

void ForkJoinTask$AdaptedRunnableAction::setRawResult($Void* v) {
}

bool ForkJoinTask$AdaptedRunnableAction::exec() {
	$nc(this->runnable)->run();
	return true;
}

void ForkJoinTask$AdaptedRunnableAction::run() {
	invoke();
}

$String* ForkJoinTask$AdaptedRunnableAction::toString() {
	return $str({$($ForkJoinTask::toString()), "[Wrapped task = "_s, this->runnable, "]"_s});
}

void ForkJoinTask$AdaptedRunnableAction::setRawResult(Object$* v) {
	this->setRawResult($cast($Void, v));
}

ForkJoinTask$AdaptedRunnableAction::ForkJoinTask$AdaptedRunnableAction() {
}

$Class* ForkJoinTask$AdaptedRunnableAction::load$($String* name, bool initialize) {
	$loadClass(ForkJoinTask$AdaptedRunnableAction, name, initialize, &_ForkJoinTask$AdaptedRunnableAction_ClassInfo_, allocate$ForkJoinTask$AdaptedRunnableAction);
	return class$;
}

$Class* ForkJoinTask$AdaptedRunnableAction::class$ = nullptr;

		} // concurrent
	} // util
} // java