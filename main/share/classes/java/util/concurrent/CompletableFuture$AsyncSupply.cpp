#include <java/util/concurrent/CompletableFuture$AsyncSupply.h>

#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $Supplier = ::java::util::function::Supplier;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$AsyncSupply_FieldInfo_[] = {
	{"dep", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<TT;>;", 0, $field(CompletableFuture$AsyncSupply, dep)},
	{"fn", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<+TT;>;", 0, $field(CompletableFuture$AsyncSupply, fn)},
	{}
};

$MethodInfo _CompletableFuture$AsyncSupply_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Supplier;)V", "(Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/function/Supplier<+TT;>;)V", 0, $method(static_cast<void(CompletableFuture$AsyncSupply::*)($CompletableFuture*,$Supplier*)>(&CompletableFuture$AsyncSupply::init$))},
	{"exec", "()Z", nullptr, $PUBLIC | $FINAL},
	{"getRawResult", "()Ljava/lang/Void;", nullptr, $PUBLIC | $FINAL},
	{"run", "()V", nullptr, $PUBLIC},
	{"setRawResult", "(Ljava/lang/Void;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(CompletableFuture$AsyncSupply::*)($Void*)>(&CompletableFuture$AsyncSupply::setRawResult))},
	{"setRawResult", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CompletableFuture$AsyncSupply_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$AsyncSupply", "java.util.concurrent.CompletableFuture", "AsyncSupply", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$AsynchronousCompletionTask", "java.util.concurrent.CompletableFuture", "AsynchronousCompletionTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$AsyncSupply_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$AsyncSupply",
	"java.util.concurrent.ForkJoinTask",
	"java.lang.Runnable,java.util.concurrent.CompletableFuture$AsynchronousCompletionTask",
	_CompletableFuture$AsyncSupply_FieldInfo_,
	_CompletableFuture$AsyncSupply_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/ForkJoinTask<Ljava/lang/Void;>;Ljava/lang/Runnable;Ljava/util/concurrent/CompletableFuture$AsynchronousCompletionTask;",
	nullptr,
	_CompletableFuture$AsyncSupply_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$AsyncSupply($Class* clazz) {
	return $of($alloc(CompletableFuture$AsyncSupply));
}

int32_t CompletableFuture$AsyncSupply::hashCode() {
	 return this->$ForkJoinTask::hashCode();
}

bool CompletableFuture$AsyncSupply::equals(Object$* obj) {
	 return this->$ForkJoinTask::equals(obj);
}

$Object* CompletableFuture$AsyncSupply::clone() {
	 return this->$ForkJoinTask::clone();
}

$String* CompletableFuture$AsyncSupply::toString() {
	 return this->$ForkJoinTask::toString();
}

void CompletableFuture$AsyncSupply::finalize() {
	this->$ForkJoinTask::finalize();
}

void CompletableFuture$AsyncSupply::init$($CompletableFuture* dep, $Supplier* fn) {
	$ForkJoinTask::init$();
	$set(this, dep, dep);
	$set(this, fn, fn);
}

$Object* CompletableFuture$AsyncSupply::getRawResult() {
	return $of(nullptr);
}

void CompletableFuture$AsyncSupply::setRawResult($Void* v) {
}

bool CompletableFuture$AsyncSupply::exec() {
	run();
	return false;
}

void CompletableFuture$AsyncSupply::run() {
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture, d, nullptr);
	$var($Supplier, f, nullptr);
	if (($assign(d, this->dep)) != nullptr && ($assign(f, this->fn)) != nullptr) {
		$set(this, dep, nullptr);
		$set(this, fn, nullptr);
		if ($nc(d)->result == nullptr) {
			try {
				d->completeValue($($nc(f)->get()));
			} catch ($Throwable& ex) {
				d->completeThrowable(ex);
			}
		}
		$nc(d)->postComplete();
	}
}

void CompletableFuture$AsyncSupply::setRawResult(Object$* v) {
	this->setRawResult($cast($Void, v));
}

CompletableFuture$AsyncSupply::CompletableFuture$AsyncSupply() {
}

$Class* CompletableFuture$AsyncSupply::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$AsyncSupply, name, initialize, &_CompletableFuture$AsyncSupply_ClassInfo_, allocate$CompletableFuture$AsyncSupply);
	return class$;
}

$Class* CompletableFuture$AsyncSupply::class$ = nullptr;

		} // concurrent
	} // util
} // java