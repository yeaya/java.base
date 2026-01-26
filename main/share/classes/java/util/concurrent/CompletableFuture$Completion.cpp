#include <java/util/concurrent/CompletableFuture$Completion.h>

#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$Completion_FieldInfo_[] = {
	{"next", "Ljava/util/concurrent/CompletableFuture$Completion;", nullptr, $VOLATILE, $field(CompletableFuture$Completion, next)},
	{}
};

$MethodInfo _CompletableFuture$Completion_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(CompletableFuture$Completion, init$, void)},
	{"exec", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(CompletableFuture$Completion, exec, bool)},
	{"getRawResult", "()Ljava/lang/Void;", nullptr, $PUBLIC | $FINAL, $virtualMethod(CompletableFuture$Completion, getRawResult, $Object*)},
	{"isLive", "()Z", nullptr, $ABSTRACT, $virtualMethod(CompletableFuture$Completion, isLive, bool)},
	{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(CompletableFuture$Completion, run, void)},
	{"setRawResult", "(Ljava/lang/Void;)V", nullptr, $PUBLIC | $FINAL, $method(CompletableFuture$Completion, setRawResult, void, $Void*)},
	{"setRawResult", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CompletableFuture$Completion, setRawResult, void, Object$*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<*>;", $ABSTRACT, $virtualMethod(CompletableFuture$Completion, tryFire, $CompletableFuture*, int32_t)},
	{}
};

$InnerClassInfo _CompletableFuture$Completion_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$Completion", "java.util.concurrent.CompletableFuture", "Completion", $STATIC | $ABSTRACT},
	{"java.util.concurrent.CompletableFuture$AsynchronousCompletionTask", "java.util.concurrent.CompletableFuture", "AsynchronousCompletionTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$Completion_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.CompletableFuture$Completion",
	"java.util.concurrent.ForkJoinTask",
	"java.lang.Runnable,java.util.concurrent.CompletableFuture$AsynchronousCompletionTask",
	_CompletableFuture$Completion_FieldInfo_,
	_CompletableFuture$Completion_MethodInfo_,
	"Ljava/util/concurrent/ForkJoinTask<Ljava/lang/Void;>;Ljava/lang/Runnable;Ljava/util/concurrent/CompletableFuture$AsynchronousCompletionTask;",
	nullptr,
	_CompletableFuture$Completion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$Completion($Class* clazz) {
	return $of($alloc(CompletableFuture$Completion));
}

int32_t CompletableFuture$Completion::hashCode() {
	 return this->$ForkJoinTask::hashCode();
}

bool CompletableFuture$Completion::equals(Object$* obj) {
	 return this->$ForkJoinTask::equals(obj);
}

$Object* CompletableFuture$Completion::clone() {
	 return this->$ForkJoinTask::clone();
}

$String* CompletableFuture$Completion::toString() {
	 return this->$ForkJoinTask::toString();
}

void CompletableFuture$Completion::finalize() {
	this->$ForkJoinTask::finalize();
}

void CompletableFuture$Completion::init$() {
	$ForkJoinTask::init$();
}

void CompletableFuture$Completion::run() {
	tryFire(1);
}

bool CompletableFuture$Completion::exec() {
	tryFire(1);
	return false;
}

$Object* CompletableFuture$Completion::getRawResult() {
	return $of(nullptr);
}

void CompletableFuture$Completion::setRawResult($Void* v) {
}

void CompletableFuture$Completion::setRawResult(Object$* v) {
	this->setRawResult($cast($Void, v));
}

CompletableFuture$Completion::CompletableFuture$Completion() {
}

$Class* CompletableFuture$Completion::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$Completion, name, initialize, &_CompletableFuture$Completion_ClassInfo_, allocate$CompletableFuture$Completion);
	return class$;
}

$Class* CompletableFuture$Completion::class$ = nullptr;

		} // concurrent
	} // util
} // java