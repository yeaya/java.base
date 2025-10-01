#include <java/util/concurrent/Executors$DelegatedScheduledExecutorService.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors$DelegatedExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/ScheduledExecutorService.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Executors$DelegatedExecutorService = ::java::util::concurrent::Executors$DelegatedExecutorService;
using $Future = ::java::util::concurrent::Future;
using $ScheduledExecutorService = ::java::util::concurrent::ScheduledExecutorService;
using $ScheduledFuture = ::java::util::concurrent::ScheduledFuture;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Executors$DelegatedScheduledExecutorService_FieldInfo_[] = {
	{"e", "Ljava/util/concurrent/ScheduledExecutorService;", nullptr, $PRIVATE | $FINAL, $field(Executors$DelegatedScheduledExecutorService, e)},
	{}
};

$MethodInfo _Executors$DelegatedScheduledExecutorService_MethodInfo_[] = {
	{"*awaitTermination", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/concurrent/ScheduledExecutorService;)V", nullptr, 0, $method(static_cast<void(Executors$DelegatedScheduledExecutorService::*)($ScheduledExecutorService*)>(&Executors$DelegatedScheduledExecutorService::init$))},
	{"*invokeAll", "(Ljava/util/Collection;)Ljava/util/List;", nullptr, $PUBLIC},
	{"*invokeAll", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;", nullptr, $PUBLIC},
	{"*invokeAny", "(Ljava/util/Collection;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*invokeAny", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*isShutdown", "()Z", nullptr, $PUBLIC},
	{"*isTerminated", "()Z", nullptr, $PUBLIC},
	{"schedule", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<*>;", $PUBLIC},
	{"schedule", "(Ljava/util/concurrent/Callable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "<V:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TV;>;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<TV;>;", $PUBLIC},
	{"scheduleAtFixedRate", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<*>;", $PUBLIC},
	{"scheduleWithFixedDelay", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture<*>;", $PUBLIC},
	{"*shutdown", "()V", nullptr, $PUBLIC},
	{"*shutdownNow", "()Ljava/util/List;", nullptr, $PUBLIC},
	{"*submit", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;", nullptr, $PUBLIC},
	{"*submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", nullptr, $PUBLIC},
	{"*submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Executors$DelegatedScheduledExecutorService_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$DelegatedScheduledExecutorService", "java.util.concurrent.Executors", "DelegatedScheduledExecutorService", $PRIVATE | $STATIC},
	{"java.util.concurrent.Executors$DelegatedExecutorService", "java.util.concurrent.Executors", "DelegatedExecutorService", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Executors$DelegatedScheduledExecutorService_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.Executors$DelegatedScheduledExecutorService",
	"java.util.concurrent.Executors$DelegatedExecutorService",
	"java.util.concurrent.ScheduledExecutorService",
	_Executors$DelegatedScheduledExecutorService_FieldInfo_,
	_Executors$DelegatedScheduledExecutorService_MethodInfo_,
	nullptr,
	nullptr,
	_Executors$DelegatedScheduledExecutorService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$DelegatedScheduledExecutorService($Class* clazz) {
	return $of($alloc(Executors$DelegatedScheduledExecutorService));
}

void Executors$DelegatedScheduledExecutorService::execute($Runnable* command) {
	this->$Executors$DelegatedExecutorService::execute(command);
}

void Executors$DelegatedScheduledExecutorService::shutdown() {
	this->$Executors$DelegatedExecutorService::shutdown();
}

$List* Executors$DelegatedScheduledExecutorService::shutdownNow() {
	 return this->$Executors$DelegatedExecutorService::shutdownNow();
}

bool Executors$DelegatedScheduledExecutorService::isShutdown() {
	 return this->$Executors$DelegatedExecutorService::isShutdown();
}

bool Executors$DelegatedScheduledExecutorService::isTerminated() {
	 return this->$Executors$DelegatedExecutorService::isTerminated();
}

bool Executors$DelegatedScheduledExecutorService::awaitTermination(int64_t timeout, $TimeUnit* unit) {
	 return this->$Executors$DelegatedExecutorService::awaitTermination(timeout, unit);
}

$Future* Executors$DelegatedScheduledExecutorService::submit($Runnable* task) {
	 return this->$Executors$DelegatedExecutorService::submit(task);
}

$Future* Executors$DelegatedScheduledExecutorService::submit($Callable* task) {
	 return this->$Executors$DelegatedExecutorService::submit(task);
}

$Future* Executors$DelegatedScheduledExecutorService::submit($Runnable* task, Object$* result) {
	 return this->$Executors$DelegatedExecutorService::submit(task, result);
}

$List* Executors$DelegatedScheduledExecutorService::invokeAll($Collection* tasks) {
	 return this->$Executors$DelegatedExecutorService::invokeAll(tasks);
}

$List* Executors$DelegatedScheduledExecutorService::invokeAll($Collection* tasks, int64_t timeout, $TimeUnit* unit) {
	 return this->$Executors$DelegatedExecutorService::invokeAll(tasks, timeout, unit);
}

$Object* Executors$DelegatedScheduledExecutorService::invokeAny($Collection* tasks) {
	 return this->$Executors$DelegatedExecutorService::invokeAny(tasks);
}

$Object* Executors$DelegatedScheduledExecutorService::invokeAny($Collection* tasks, int64_t timeout, $TimeUnit* unit) {
	 return this->$Executors$DelegatedExecutorService::invokeAny(tasks, timeout, unit);
}

int32_t Executors$DelegatedScheduledExecutorService::hashCode() {
	 return this->$Executors$DelegatedExecutorService::hashCode();
}

bool Executors$DelegatedScheduledExecutorService::equals(Object$* obj) {
	 return this->$Executors$DelegatedExecutorService::equals(obj);
}

$Object* Executors$DelegatedScheduledExecutorService::clone() {
	 return this->$Executors$DelegatedExecutorService::clone();
}

$String* Executors$DelegatedScheduledExecutorService::toString() {
	 return this->$Executors$DelegatedExecutorService::toString();
}

void Executors$DelegatedScheduledExecutorService::finalize() {
	this->$Executors$DelegatedExecutorService::finalize();
}

void Executors$DelegatedScheduledExecutorService::init$($ScheduledExecutorService* executor) {
	$Executors$DelegatedExecutorService::init$(executor);
	$set(this, e, executor);
}

$ScheduledFuture* Executors$DelegatedScheduledExecutorService::schedule($Runnable* command, int64_t delay, $TimeUnit* unit) {
	return $nc(this->e)->schedule(command, delay, unit);
}

$ScheduledFuture* Executors$DelegatedScheduledExecutorService::schedule($Callable* callable, int64_t delay, $TimeUnit* unit) {
	return $nc(this->e)->schedule(callable, delay, unit);
}

$ScheduledFuture* Executors$DelegatedScheduledExecutorService::scheduleAtFixedRate($Runnable* command, int64_t initialDelay, int64_t period, $TimeUnit* unit) {
	return $nc(this->e)->scheduleAtFixedRate(command, initialDelay, period, unit);
}

$ScheduledFuture* Executors$DelegatedScheduledExecutorService::scheduleWithFixedDelay($Runnable* command, int64_t initialDelay, int64_t delay, $TimeUnit* unit) {
	return $nc(this->e)->scheduleWithFixedDelay(command, initialDelay, delay, unit);
}

Executors$DelegatedScheduledExecutorService::Executors$DelegatedScheduledExecutorService() {
}

$Class* Executors$DelegatedScheduledExecutorService::load$($String* name, bool initialize) {
	$loadClass(Executors$DelegatedScheduledExecutorService, name, initialize, &_Executors$DelegatedScheduledExecutorService_ClassInfo_, allocate$Executors$DelegatedScheduledExecutorService);
	return class$;
}

$Class* Executors$DelegatedScheduledExecutorService::class$ = nullptr;

		} // concurrent
	} // util
} // java