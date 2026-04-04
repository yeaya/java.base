#include <java/util/concurrent/SubmissionPublisher$ConsumerTask.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/SubmissionPublisher$BufferedSubscription.h>
#include <java/util/concurrent/SubmissionPublisher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $SubmissionPublisher$BufferedSubscription = ::java::util::concurrent::SubmissionPublisher$BufferedSubscription;

namespace java {
	namespace util {
		namespace concurrent {

int32_t SubmissionPublisher$ConsumerTask::hashCode() {
	 return this->$ForkJoinTask::hashCode();
}

bool SubmissionPublisher$ConsumerTask::equals(Object$* obj) {
	 return this->$ForkJoinTask::equals(obj);
}

$Object* SubmissionPublisher$ConsumerTask::clone() {
	 return this->$ForkJoinTask::clone();
}

$String* SubmissionPublisher$ConsumerTask::toString() {
	 return this->$ForkJoinTask::toString();
}

void SubmissionPublisher$ConsumerTask::finalize() {
	this->$ForkJoinTask::finalize();
}

void SubmissionPublisher$ConsumerTask::init$($SubmissionPublisher$BufferedSubscription* consumer) {
	$ForkJoinTask::init$();
	$set(this, consumer, consumer);
}

$Object* SubmissionPublisher$ConsumerTask::getRawResult() {
	return nullptr;
}

void SubmissionPublisher$ConsumerTask::setRawResult($Void* v) {
}

bool SubmissionPublisher$ConsumerTask::exec() {
	$nc(this->consumer)->consume();
	return false;
}

void SubmissionPublisher$ConsumerTask::run() {
	$nc(this->consumer)->consume();
}

void SubmissionPublisher$ConsumerTask::setRawResult(Object$* v) {
	this->setRawResult($cast($Void, v));
}

SubmissionPublisher$ConsumerTask::SubmissionPublisher$ConsumerTask() {
}

$Class* SubmissionPublisher$ConsumerTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"consumer", "Ljava/util/concurrent/SubmissionPublisher$BufferedSubscription;", "Ljava/util/concurrent/SubmissionPublisher$BufferedSubscription<TT;>;", $FINAL, $field(SubmissionPublisher$ConsumerTask, consumer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/concurrent/SubmissionPublisher$BufferedSubscription;)V", "(Ljava/util/concurrent/SubmissionPublisher$BufferedSubscription<TT;>;)V", 0, $method(SubmissionPublisher$ConsumerTask, init$, void, $SubmissionPublisher$BufferedSubscription*)},
		{"exec", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SubmissionPublisher$ConsumerTask, exec, bool)},
		{"getRawResult", "()Ljava/lang/Void;", nullptr, $PUBLIC | $FINAL, $virtualMethod(SubmissionPublisher$ConsumerTask, getRawResult, $Object*)},
		{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SubmissionPublisher$ConsumerTask, run, void)},
		{"setRawResult", "(Ljava/lang/Void;)V", nullptr, $PUBLIC | $FINAL, $method(SubmissionPublisher$ConsumerTask, setRawResult, void, $Void*)},
		{"setRawResult", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SubmissionPublisher$ConsumerTask, setRawResult, void, Object$*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.SubmissionPublisher$ConsumerTask", "java.util.concurrent.SubmissionPublisher", "ConsumerTask", $STATIC | $FINAL},
		{"java.util.concurrent.CompletableFuture$AsynchronousCompletionTask", "java.util.concurrent.CompletableFuture", "AsynchronousCompletionTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.SubmissionPublisher$ConsumerTask",
		"java.util.concurrent.ForkJoinTask",
		"java.lang.Runnable,java.util.concurrent.CompletableFuture$AsynchronousCompletionTask",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/concurrent/ForkJoinTask<Ljava/lang/Void;>;Ljava/lang/Runnable;Ljava/util/concurrent/CompletableFuture$AsynchronousCompletionTask;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.SubmissionPublisher"
	};
	$loadClass(SubmissionPublisher$ConsumerTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SubmissionPublisher$ConsumerTask));
	});
	return class$;
}

$Class* SubmissionPublisher$ConsumerTask::class$ = nullptr;

		} // concurrent
	} // util
} // java