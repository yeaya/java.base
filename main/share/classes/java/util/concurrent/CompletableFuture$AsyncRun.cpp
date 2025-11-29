#include <java/util/concurrent/CompletableFuture$AsyncRun.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$AsyncRun_FieldInfo_[] = {
	{"dep", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", 0, $field(CompletableFuture$AsyncRun, dep)},
	{"fn", "Ljava/lang/Runnable;", nullptr, 0, $field(CompletableFuture$AsyncRun, fn)},
	{}
};

$MethodInfo _CompletableFuture$AsyncRun_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/concurrent/CompletableFuture;Ljava/lang/Runnable;)V", "(Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;Ljava/lang/Runnable;)V", 0, $method(static_cast<void(CompletableFuture$AsyncRun::*)($CompletableFuture*,$Runnable*)>(&CompletableFuture$AsyncRun::init$))},
	{"exec", "()Z", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Void;", nullptr, $PUBLIC | $FINAL},
	{"run", "()V", nullptr, $PUBLIC},
	{"setRawResult", "(Ljava/lang/Void;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CompletableFuture$AsyncRun::*)($Void*)>(&CompletableFuture$AsyncRun::setRawResult))},
	{"setRawResult", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CompletableFuture$AsyncRun_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$AsyncRun", "java.util.concurrent.CompletableFuture", "AsyncRun", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$AsynchronousCompletionTask", "java.util.concurrent.CompletableFuture", "AsynchronousCompletionTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$AsyncRun_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$AsyncRun",
	"java.util.concurrent.ForkJoinTask",
	"java.lang.Runnable,java.util.concurrent.CompletableFuture$AsynchronousCompletionTask",
	_CompletableFuture$AsyncRun_FieldInfo_,
	_CompletableFuture$AsyncRun_MethodInfo_,
	"Ljava/util/concurrent/ForkJoinTask<Ljava/lang/Void;>;Ljava/lang/Runnable;Ljava/util/concurrent/CompletableFuture$AsynchronousCompletionTask;",
	nullptr,
	_CompletableFuture$AsyncRun_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$AsyncRun($Class* clazz) {
	return $of($alloc(CompletableFuture$AsyncRun));
}

int32_t CompletableFuture$AsyncRun::hashCode() {
	 return this->$ForkJoinTask::hashCode();
}

bool CompletableFuture$AsyncRun::equals(Object$* obj) {
	 return this->$ForkJoinTask::equals(obj);
}

$Object* CompletableFuture$AsyncRun::clone() {
	 return this->$ForkJoinTask::clone();
}

$String* CompletableFuture$AsyncRun::toString() {
	 return this->$ForkJoinTask::toString();
}

void CompletableFuture$AsyncRun::finalize() {
	this->$ForkJoinTask::finalize();
}

void CompletableFuture$AsyncRun::init$($CompletableFuture* dep, $Runnable* fn) {
	$ForkJoinTask::init$();
	$set(this, dep, dep);
	$set(this, fn, fn);
}

$Object* CompletableFuture$AsyncRun::getRawResult() {
	return $of(nullptr);
}

void CompletableFuture$AsyncRun::setRawResult($Void* v) {
}

bool CompletableFuture$AsyncRun::exec() {
	run();
	return false;
}

void CompletableFuture$AsyncRun::run() {
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture, d, nullptr);
	$var($Runnable, f, nullptr);
	if (($assign(d, this->dep)) != nullptr && ($assign(f, this->fn)) != nullptr) {
		$set(this, dep, nullptr);
		$set(this, fn, nullptr);
		if ($nc(d)->result == nullptr) {
			try {
				$nc(f)->run();
				d->completeNull();
			} catch ($Throwable& ex) {
				d->completeThrowable(ex);
			}
		}
		$nc(d)->postComplete();
	}
}

void CompletableFuture$AsyncRun::setRawResult(Object$* v) {
	this->setRawResult($cast($Void, v));
}

CompletableFuture$AsyncRun::CompletableFuture$AsyncRun() {
}

$Class* CompletableFuture$AsyncRun::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$AsyncRun, name, initialize, &_CompletableFuture$AsyncRun_ClassInfo_, allocate$CompletableFuture$AsyncRun);
	return class$;
}

$Class* CompletableFuture$AsyncRun::class$ = nullptr;

		} // concurrent
	} // util
} // java