#include <java/util/concurrent/Executors$DelegatedExecutorService.h>

#include <java/lang/Runnable.h>
#include <java/lang/ref/Reference.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Reference = ::java::lang::ref::Reference;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Future = ::java::util::concurrent::Future;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Executors$DelegatedExecutorService_FieldInfo_[] = {
	{"e", "Ljava/util/concurrent/ExecutorService;", nullptr, $PRIVATE | $FINAL, $field(Executors$DelegatedExecutorService, e)},
	{}
};

$MethodInfo _Executors$DelegatedExecutorService_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ExecutorService;)V", nullptr, 0, $method(Executors$DelegatedExecutorService, init$, void, $ExecutorService*)},
	{"awaitTermination", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, awaitTermination, bool, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, execute, void, $Runnable*)},
	{"invokeAll", "(Ljava/util/Collection;)Ljava/util/List;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<+Ljava/util/concurrent/Callable<TT;>;>;)Ljava/util/List<Ljava/util/concurrent/Future<TT;>;>;", $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, invokeAll, $List*, $Collection*), "java.lang.InterruptedException"},
	{"invokeAll", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<+Ljava/util/concurrent/Callable<TT;>;>;JLjava/util/concurrent/TimeUnit;)Ljava/util/List<Ljava/util/concurrent/Future<TT;>;>;", $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, invokeAll, $List*, $Collection*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"invokeAny", "(Ljava/util/Collection;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<+Ljava/util/concurrent/Callable<TT;>;>;)TT;", $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, invokeAny, $Object*, $Collection*), "java.lang.InterruptedException,java.util.concurrent.ExecutionException"},
	{"invokeAny", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<+Ljava/util/concurrent/Callable<TT;>;>;JLjava/util/concurrent/TimeUnit;)TT;", $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, invokeAny, $Object*, $Collection*, int64_t, $TimeUnit*), "java.lang.InterruptedException,java.util.concurrent.ExecutionException,java.util.concurrent.TimeoutException"},
	{"isShutdown", "()Z", nullptr, $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, isShutdown, bool)},
	{"isTerminated", "()Z", nullptr, $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, isTerminated, bool)},
	{"shutdown", "()V", nullptr, $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, shutdown, void)},
	{"shutdownNow", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Runnable;>;", $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, shutdownNow, $List*)},
	{"submit", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future<*>;", $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, submit, $Future*, $Runnable*)},
	{"submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)Ljava/util/concurrent/Future<TT;>;", $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, submit, $Future*, $Callable*)},
	{"submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", "<T:Ljava/lang/Object;>(Ljava/lang/Runnable;TT;)Ljava/util/concurrent/Future<TT;>;", $PUBLIC, $virtualMethod(Executors$DelegatedExecutorService, submit, $Future*, $Runnable*, Object$*)},
	{}
};

$InnerClassInfo _Executors$DelegatedExecutorService_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$DelegatedExecutorService", "java.util.concurrent.Executors", "DelegatedExecutorService", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Executors$DelegatedExecutorService_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.Executors$DelegatedExecutorService",
	"java.lang.Object",
	"java.util.concurrent.ExecutorService",
	_Executors$DelegatedExecutorService_FieldInfo_,
	_Executors$DelegatedExecutorService_MethodInfo_,
	nullptr,
	nullptr,
	_Executors$DelegatedExecutorService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$DelegatedExecutorService($Class* clazz) {
	return $of($alloc(Executors$DelegatedExecutorService));
}

void Executors$DelegatedExecutorService::init$($ExecutorService* executor) {
	$set(this, e, executor);
}

void Executors$DelegatedExecutorService::execute($Runnable* command) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->e)->execute(command);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Executors$DelegatedExecutorService::shutdown() {
	$nc(this->e)->shutdown();
}

$List* Executors$DelegatedExecutorService::shutdownNow() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($List, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->e)->shutdownNow());
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
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

bool Executors$DelegatedExecutorService::isShutdown() {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = $nc(this->e)->isShutdown();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
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

bool Executors$DelegatedExecutorService::isTerminated() {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = $nc(this->e)->isTerminated();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
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

bool Executors$DelegatedExecutorService::awaitTermination(int64_t timeout, $TimeUnit* unit) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = $nc(this->e)->awaitTermination(timeout, unit);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
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

$Future* Executors$DelegatedExecutorService::submit($Runnable* task) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($Future, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->e)->submit(task));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
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

$Future* Executors$DelegatedExecutorService::submit($Callable* task) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($Future, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->e)->submit(task));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
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

$Future* Executors$DelegatedExecutorService::submit($Runnable* task, Object$* result) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($Future, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->e)->submit(task, result));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
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

$List* Executors$DelegatedExecutorService::invokeAll($Collection* tasks) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($List, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->e)->invokeAll(tasks));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
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

$List* Executors$DelegatedExecutorService::invokeAll($Collection* tasks, int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($List, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->e)->invokeAll(tasks, timeout, unit));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
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

$Object* Executors$DelegatedExecutorService::invokeAny($Collection* tasks) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->e)->invokeAny(tasks));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
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

$Object* Executors$DelegatedExecutorService::invokeAny($Collection* tasks, int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->e)->invokeAny(tasks, timeout, unit));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(this);
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

Executors$DelegatedExecutorService::Executors$DelegatedExecutorService() {
}

$Class* Executors$DelegatedExecutorService::load$($String* name, bool initialize) {
	$loadClass(Executors$DelegatedExecutorService, name, initialize, &_Executors$DelegatedExecutorService_ClassInfo_, allocate$Executors$DelegatedExecutorService);
	return class$;
}

$Class* Executors$DelegatedExecutorService::class$ = nullptr;

		} // concurrent
	} // util
} // java