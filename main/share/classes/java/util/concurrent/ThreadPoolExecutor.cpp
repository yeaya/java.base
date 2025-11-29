#include <java/util/concurrent/ThreadPoolExecutor.h>

#include <java/lang/IllegalThreadStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/Thread$State.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/AbstractExecutorService.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/RejectedExecutionHandler.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/ThreadPoolExecutor$AbortPolicy.h>
#include <java/util/concurrent/ThreadPoolExecutor$Worker.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <jcpp.h>

#undef COUNT_BITS
#undef COUNT_MASK
#undef NANOSECONDS
#undef NEW
#undef ONLY_ONE
#undef RUNNING
#undef SHUTDOWN
#undef STOP
#undef TERMINATED
#undef TIDYING

using $RunnableArray = $Array<::java::lang::Runnable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalThreadStateException = ::java::lang::IllegalThreadStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Thread$State = ::java::lang::Thread$State;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $AbstractExecutorService = ::java::util::concurrent::AbstractExecutorService;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;
using $RejectedExecutionHandler = ::java::util::concurrent::RejectedExecutionHandler;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $ThreadPoolExecutor$AbortPolicy = ::java::util::concurrent::ThreadPoolExecutor$AbortPolicy;
using $ThreadPoolExecutor$Worker = ::java::util::concurrent::ThreadPoolExecutor$Worker;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Condition = ::java::util::concurrent::locks::Condition;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;

namespace java {
	namespace util {
		namespace concurrent {

$NamedAttribute ThreadPoolExecutor_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _ThreadPoolExecutor_MethodAnnotations_finalize20[] = {
	{"Ljava/lang/Deprecated;", ThreadPoolExecutor_Attribute_var$0},
	{}
};

$FieldInfo _ThreadPoolExecutor_FieldInfo_[] = {
	{"ctl", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $FINAL, $field(ThreadPoolExecutor, ctl)},
	{"COUNT_BITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadPoolExecutor, COUNT_BITS)},
	{"COUNT_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadPoolExecutor, COUNT_MASK)},
	{"RUNNING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadPoolExecutor, RUNNING)},
	{"SHUTDOWN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadPoolExecutor, SHUTDOWN)},
	{"STOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadPoolExecutor, STOP)},
	{"TIDYING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadPoolExecutor, TIDYING)},
	{"TERMINATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadPoolExecutor, TERMINATED)},
	{"workQueue", "Ljava/util/concurrent/BlockingQueue;", "Ljava/util/concurrent/BlockingQueue<Ljava/lang/Runnable;>;", $PRIVATE | $FINAL, $field(ThreadPoolExecutor, workQueue)},
	{"mainLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(ThreadPoolExecutor, mainLock)},
	{"workers", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/util/concurrent/ThreadPoolExecutor$Worker;>;", $PRIVATE | $FINAL, $field(ThreadPoolExecutor, workers)},
	{"termination", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $FINAL, $field(ThreadPoolExecutor, termination)},
	{"largestPoolSize", "I", nullptr, $PRIVATE, $field(ThreadPoolExecutor, largestPoolSize)},
	{"completedTaskCount", "J", nullptr, $PRIVATE, $field(ThreadPoolExecutor, completedTaskCount)},
	{"threadFactory", "Ljava/util/concurrent/ThreadFactory;", nullptr, $PRIVATE | $VOLATILE, $field(ThreadPoolExecutor, threadFactory)},
	{"handler", "Ljava/util/concurrent/RejectedExecutionHandler;", nullptr, $PRIVATE | $VOLATILE, $field(ThreadPoolExecutor, handler)},
	{"keepAliveTime", "J", nullptr, $PRIVATE | $VOLATILE, $field(ThreadPoolExecutor, keepAliveTime)},
	{"allowCoreThreadTimeOut", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ThreadPoolExecutor, allowCoreThreadTimeOut$)},
	{"corePoolSize", "I", nullptr, $PRIVATE | $VOLATILE, $field(ThreadPoolExecutor, corePoolSize)},
	{"maximumPoolSize", "I", nullptr, $PRIVATE | $VOLATILE, $field(ThreadPoolExecutor, maximumPoolSize)},
	{"defaultHandler", "Ljava/util/concurrent/RejectedExecutionHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadPoolExecutor, defaultHandler)},
	{"shutdownPerm", "Ljava/lang/RuntimePermission;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ThreadPoolExecutor, shutdownPerm)},
	{"ONLY_ONE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadPoolExecutor, ONLY_ONE)},
	{}
};

$MethodInfo _ThreadPoolExecutor_MethodInfo_[] = {
	{"<init>", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue<Ljava/lang/Runnable;>;)V", $PUBLIC, $method(static_cast<void(ThreadPoolExecutor::*)(int32_t,int32_t,int64_t,$TimeUnit*,$BlockingQueue*)>(&ThreadPoolExecutor::init$))},
	{"<init>", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue<Ljava/lang/Runnable;>;Ljava/util/concurrent/ThreadFactory;)V", $PUBLIC, $method(static_cast<void(ThreadPoolExecutor::*)(int32_t,int32_t,int64_t,$TimeUnit*,$BlockingQueue*,$ThreadFactory*)>(&ThreadPoolExecutor::init$))},
	{"<init>", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue<Ljava/lang/Runnable;>;Ljava/util/concurrent/RejectedExecutionHandler;)V", $PUBLIC, $method(static_cast<void(ThreadPoolExecutor::*)(int32_t,int32_t,int64_t,$TimeUnit*,$BlockingQueue*,$RejectedExecutionHandler*)>(&ThreadPoolExecutor::init$))},
	{"<init>", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V", "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue<Ljava/lang/Runnable;>;Ljava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V", $PUBLIC, $method(static_cast<void(ThreadPoolExecutor::*)(int32_t,int32_t,int64_t,$TimeUnit*,$BlockingQueue*,$ThreadFactory*,$RejectedExecutionHandler*)>(&ThreadPoolExecutor::init$))},
	{"addWorker", "(Ljava/lang/Runnable;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(ThreadPoolExecutor::*)($Runnable*,bool)>(&ThreadPoolExecutor::addWorker))},
	{"addWorkerFailed", "(Ljava/util/concurrent/ThreadPoolExecutor$Worker;)V", nullptr, $PRIVATE, $method(static_cast<void(ThreadPoolExecutor::*)($ThreadPoolExecutor$Worker*)>(&ThreadPoolExecutor::addWorkerFailed))},
	{"advanceRunState", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ThreadPoolExecutor::*)(int32_t)>(&ThreadPoolExecutor::advanceRunState))},
	{"afterExecute", "(Ljava/lang/Runnable;Ljava/lang/Throwable;)V", nullptr, $PROTECTED},
	{"allowCoreThreadTimeOut", "(Z)V", nullptr, $PUBLIC},
	{"allowsCoreThreadTimeOut", "()Z", nullptr, $PUBLIC},
	{"awaitTermination", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"beforeExecute", "(Ljava/lang/Thread;Ljava/lang/Runnable;)V", nullptr, $PROTECTED},
	{"checkShutdownAccess", "()V", nullptr, $PRIVATE, $method(static_cast<void(ThreadPoolExecutor::*)()>(&ThreadPoolExecutor::checkShutdownAccess))},
	{"compareAndDecrementWorkerCount", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(ThreadPoolExecutor::*)(int32_t)>(&ThreadPoolExecutor::compareAndDecrementWorkerCount))},
	{"compareAndIncrementWorkerCount", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(ThreadPoolExecutor::*)(int32_t)>(&ThreadPoolExecutor::compareAndIncrementWorkerCount))},
	{"ctlOf", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&ThreadPoolExecutor::ctlOf))},
	{"decrementWorkerCount", "()V", nullptr, $PRIVATE, $method(static_cast<void(ThreadPoolExecutor::*)()>(&ThreadPoolExecutor::decrementWorkerCount))},
	{"drainQueue", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Runnable;>;", $PRIVATE, $method(static_cast<$List*(ThreadPoolExecutor::*)()>(&ThreadPoolExecutor::drainQueue))},
	{"ensurePrestart", "()V", nullptr, 0},
	{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"finalize", "()V", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _ThreadPoolExecutor_MethodAnnotations_finalize20},
	{"getActiveCount", "()I", nullptr, $PUBLIC},
	{"getCompletedTaskCount", "()J", nullptr, $PUBLIC},
	{"getCorePoolSize", "()I", nullptr, $PUBLIC},
	{"getKeepAliveTime", "(Ljava/util/concurrent/TimeUnit;)J", nullptr, $PUBLIC},
	{"getLargestPoolSize", "()I", nullptr, $PUBLIC},
	{"getMaximumPoolSize", "()I", nullptr, $PUBLIC},
	{"getPoolSize", "()I", nullptr, $PUBLIC},
	{"getQueue", "()Ljava/util/concurrent/BlockingQueue;", "()Ljava/util/concurrent/BlockingQueue<Ljava/lang/Runnable;>;", $PUBLIC},
	{"getRejectedExecutionHandler", "()Ljava/util/concurrent/RejectedExecutionHandler;", nullptr, $PUBLIC},
	{"getTask", "()Ljava/lang/Runnable;", nullptr, $PRIVATE, $method(static_cast<$Runnable*(ThreadPoolExecutor::*)()>(&ThreadPoolExecutor::getTask))},
	{"getTaskCount", "()J", nullptr, $PUBLIC},
	{"getThreadFactory", "()Ljava/util/concurrent/ThreadFactory;", nullptr, $PUBLIC},
	{"interruptIdleWorkers", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(ThreadPoolExecutor::*)(bool)>(&ThreadPoolExecutor::interruptIdleWorkers))},
	{"interruptIdleWorkers", "()V", nullptr, $PRIVATE, $method(static_cast<void(ThreadPoolExecutor::*)()>(&ThreadPoolExecutor::interruptIdleWorkers))},
	{"interruptWorkers", "()V", nullptr, $PRIVATE, $method(static_cast<void(ThreadPoolExecutor::*)()>(&ThreadPoolExecutor::interruptWorkers))},
	{"isRunning", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&ThreadPoolExecutor::isRunning))},
	{"isShutdown", "()Z", nullptr, $PUBLIC},
	{"isStopped", "()Z", nullptr, 0},
	{"isTerminated", "()Z", nullptr, $PUBLIC},
	{"isTerminating", "()Z", nullptr, $PUBLIC},
	{"onShutdown", "()V", nullptr, 0},
	{"prestartAllCoreThreads", "()I", nullptr, $PUBLIC},
	{"prestartCoreThread", "()Z", nullptr, $PUBLIC},
	{"processWorkerExit", "(Ljava/util/concurrent/ThreadPoolExecutor$Worker;Z)V", nullptr, $PRIVATE, $method(static_cast<void(ThreadPoolExecutor::*)($ThreadPoolExecutor$Worker*,bool)>(&ThreadPoolExecutor::processWorkerExit))},
	{"purge", "()V", nullptr, $PUBLIC},
	{"reject", "(Ljava/lang/Runnable;)V", nullptr, $FINAL, $method(static_cast<void(ThreadPoolExecutor::*)($Runnable*)>(&ThreadPoolExecutor::reject))},
	{"remove", "(Ljava/lang/Runnable;)Z", nullptr, $PUBLIC},
	{"runStateAtLeast", "(II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&ThreadPoolExecutor::runStateAtLeast))},
	{"runStateLessThan", "(II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&ThreadPoolExecutor::runStateLessThan))},
	{"runStateOf", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ThreadPoolExecutor::runStateOf))},
	{"runWorker", "(Ljava/util/concurrent/ThreadPoolExecutor$Worker;)V", nullptr, $FINAL, $method(static_cast<void(ThreadPoolExecutor::*)($ThreadPoolExecutor$Worker*)>(&ThreadPoolExecutor::runWorker))},
	{"setCorePoolSize", "(I)V", nullptr, $PUBLIC},
	{"setKeepAliveTime", "(JLjava/util/concurrent/TimeUnit;)V", nullptr, $PUBLIC},
	{"setMaximumPoolSize", "(I)V", nullptr, $PUBLIC},
	{"setRejectedExecutionHandler", "(Ljava/util/concurrent/RejectedExecutionHandler;)V", nullptr, $PUBLIC},
	{"setThreadFactory", "(Ljava/util/concurrent/ThreadFactory;)V", nullptr, $PUBLIC},
	{"shutdown", "()V", nullptr, $PUBLIC},
	{"shutdownNow", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Runnable;>;", $PUBLIC},
	{"terminated", "()V", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryTerminate", "()V", nullptr, $FINAL, $method(static_cast<void(ThreadPoolExecutor::*)()>(&ThreadPoolExecutor::tryTerminate))},
	{"workerCountOf", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ThreadPoolExecutor::workerCountOf))},
	{}
};

$InnerClassInfo _ThreadPoolExecutor_InnerClassesInfo_[] = {
	{"java.util.concurrent.ThreadPoolExecutor$DiscardOldestPolicy", "java.util.concurrent.ThreadPoolExecutor", "DiscardOldestPolicy", $PUBLIC | $STATIC},
	{"java.util.concurrent.ThreadPoolExecutor$DiscardPolicy", "java.util.concurrent.ThreadPoolExecutor", "DiscardPolicy", $PUBLIC | $STATIC},
	{"java.util.concurrent.ThreadPoolExecutor$AbortPolicy", "java.util.concurrent.ThreadPoolExecutor", "AbortPolicy", $PUBLIC | $STATIC},
	{"java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy", "java.util.concurrent.ThreadPoolExecutor", "CallerRunsPolicy", $PUBLIC | $STATIC},
	{"java.util.concurrent.ThreadPoolExecutor$Worker", "java.util.concurrent.ThreadPoolExecutor", "Worker", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _ThreadPoolExecutor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ThreadPoolExecutor",
	"java.util.concurrent.AbstractExecutorService",
	nullptr,
	_ThreadPoolExecutor_FieldInfo_,
	_ThreadPoolExecutor_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadPoolExecutor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.ThreadPoolExecutor$DiscardOldestPolicy,java.util.concurrent.ThreadPoolExecutor$DiscardPolicy,java.util.concurrent.ThreadPoolExecutor$AbortPolicy,java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy,java.util.concurrent.ThreadPoolExecutor$Worker"
};

$Object* allocate$ThreadPoolExecutor($Class* clazz) {
	return $of($alloc(ThreadPoolExecutor));
}

$RejectedExecutionHandler* ThreadPoolExecutor::defaultHandler = nullptr;
$RuntimePermission* ThreadPoolExecutor::shutdownPerm = nullptr;

int32_t ThreadPoolExecutor::runStateOf(int32_t c) {
	$init(ThreadPoolExecutor);
	return (int32_t)(c & (uint32_t)~ThreadPoolExecutor::COUNT_MASK);
}

int32_t ThreadPoolExecutor::workerCountOf(int32_t c) {
	$init(ThreadPoolExecutor);
	return (int32_t)(c & (uint32_t)ThreadPoolExecutor::COUNT_MASK);
}

int32_t ThreadPoolExecutor::ctlOf(int32_t rs, int32_t wc) {
	$init(ThreadPoolExecutor);
	return rs | wc;
}

bool ThreadPoolExecutor::runStateLessThan(int32_t c, int32_t s) {
	$init(ThreadPoolExecutor);
	return c < s;
}

bool ThreadPoolExecutor::runStateAtLeast(int32_t c, int32_t s) {
	$init(ThreadPoolExecutor);
	return c >= s;
}

bool ThreadPoolExecutor::isRunning(int32_t c) {
	$init(ThreadPoolExecutor);
	return c < ThreadPoolExecutor::SHUTDOWN;
}

bool ThreadPoolExecutor::compareAndIncrementWorkerCount(int32_t expect) {
	return $nc(this->ctl)->compareAndSet(expect, expect + 1);
}

bool ThreadPoolExecutor::compareAndDecrementWorkerCount(int32_t expect) {
	return $nc(this->ctl)->compareAndSet(expect, expect - 1);
}

void ThreadPoolExecutor::decrementWorkerCount() {
	$nc(this->ctl)->addAndGet(-1);
}

void ThreadPoolExecutor::advanceRunState(int32_t targetState) {
	for (;;) {
		int32_t c = $nc(this->ctl)->get();
		bool var$0 = runStateAtLeast(c, targetState);
		if (var$0 || $nc(this->ctl)->compareAndSet(c, ctlOf(targetState, workerCountOf(c)))) {
			break;
		}
	}
}

void ThreadPoolExecutor::tryTerminate() {
	$useLocalCurrentObjectStackCache();
	for (;;) {
		int32_t c = $nc(this->ctl)->get();
		bool var$1 = isRunning(c);
		bool var$0 = var$1 || runStateAtLeast(c, ThreadPoolExecutor::TIDYING);
		if (!var$0) {
			bool var$2 = runStateLessThan(c, ThreadPoolExecutor::STOP);
			var$0 = (var$2 && !$nc(this->workQueue)->isEmpty());
		}
		if (var$0) {
			return;
		}
		if (workerCountOf(c) != 0) {
			interruptIdleWorkers(ThreadPoolExecutor::ONLY_ONE);
			return;
		}
		$var($ReentrantLock, mainLock, this->mainLock);
		$nc(mainLock)->lock();
		{
			$var($Throwable, var$3, nullptr);
			bool return$4 = false;
			try {
				if ($nc(this->ctl)->compareAndSet(c, ctlOf(ThreadPoolExecutor::TIDYING, 0))) {
					{
						$var($Throwable, var$5, nullptr);
						try {
							terminated();
						} catch ($Throwable& var$6) {
							$assign(var$5, var$6);
						} /*finally*/ {
							$nc(this->ctl)->set(ctlOf(ThreadPoolExecutor::TERMINATED, 0));
							$nc(this->termination)->signalAll();
						}
						if (var$5 != nullptr) {
							$throw(var$5);
						}
					}
					return$4 = true;
					goto $finally;
				}
			} catch ($Throwable& var$7) {
				$assign(var$3, var$7);
			} $finally: {
				mainLock->unlock();
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
			if (return$4) {
				return;
			}
		}
	}
}

void ThreadPoolExecutor::checkShutdownAccess() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission(ThreadPoolExecutor::shutdownPerm);
		{
			$var($Iterator, i$, $nc(this->workers)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ThreadPoolExecutor$Worker, w, $cast($ThreadPoolExecutor$Worker, i$->next()));
				security->checkAccess($nc(w)->thread);
			}
		}
	}
}

void ThreadPoolExecutor::interruptWorkers() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->workers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ThreadPoolExecutor$Worker, w, $cast($ThreadPoolExecutor$Worker, i$->next()));
			$nc(w)->interruptIfStarted();
		}
	}
}

void ThreadPoolExecutor::interruptIdleWorkers(bool onlyOne) {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($Iterator, i$, $nc(this->workers)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ThreadPoolExecutor$Worker, w, $cast($ThreadPoolExecutor$Worker, i$->next()));
					{
						$var($Thread, t, $nc(w)->thread);
						bool var$1 = !$nc(t)->isInterrupted();
						if (var$1 && w->tryLock()) {
							{
								$var($Throwable, var$2, nullptr);
								try {
									try {
										t->interrupt();
									} catch ($SecurityException& ignore) {
									}
								} catch ($Throwable& var$3) {
									$assign(var$2, var$3);
								} /*finally*/ {
									w->unlock();
								}
								if (var$2 != nullptr) {
									$throw(var$2);
								}
							}
						}
						if (onlyOne) {
							break;
						}
					}
				}
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} /*finally*/ {
			mainLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ThreadPoolExecutor::interruptIdleWorkers() {
	interruptIdleWorkers(false);
}

void ThreadPoolExecutor::reject($Runnable* command) {
	$nc(this->handler)->rejectedExecution(command, this);
}

void ThreadPoolExecutor::onShutdown() {
}

$List* ThreadPoolExecutor::drainQueue() {
	$useLocalCurrentObjectStackCache();
	$var($BlockingQueue, q, this->workQueue);
	$var($ArrayList, taskList, $new($ArrayList));
	$nc(q)->drainTo(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(taskList))));
	if (!q->isEmpty()) {
		{
			$var($RunnableArray, arr$, $fcast($RunnableArray, q->toArray($$new($RunnableArray, 0))));
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Runnable, r, arr$->get(i$));
				{
					if (q->remove(r)) {
						taskList->add(r);
					}
				}
			}
		}
	}
	return taskList;
}

bool ThreadPoolExecutor::addWorker($Runnable* firstTask, bool core) {
	$useLocalCurrentObjectStackCache();
	bool retry$continue = false;
	bool retry$break = false;
	for (int32_t c = $nc(this->ctl)->get();;) {
		bool var$0 = runStateAtLeast(c, ThreadPoolExecutor::SHUTDOWN);
		if (var$0) {
			bool var$1 = runStateAtLeast(c, ThreadPoolExecutor::STOP) || firstTask != nullptr;
			var$0 = (var$1 || $nc(this->workQueue)->isEmpty());
		}
		if (var$0) {
			return false;
		}
		for (;;) {
			if (workerCountOf(c) >= ((int32_t)((core ? $cast(int32_t, this->corePoolSize) : $cast(int32_t, this->maximumPoolSize)) & (uint32_t)ThreadPoolExecutor::COUNT_MASK))) {
				return false;
			}
			if (compareAndIncrementWorkerCount(c)) {
				retry$break = true;
				break;
			}
			c = $nc(this->ctl)->get();
			if (runStateAtLeast(c, ThreadPoolExecutor::SHUTDOWN)) {
				retry$continue = true;
				break;
			}
		}
		if (retry$continue) {
			retry$continue = false;
			continue;
		}
		if (retry$break) {
			break;
		}
	}
	bool workerStarted = false;
	bool workerAdded = false;
	$var($ThreadPoolExecutor$Worker, w, nullptr);
	{
		$var($Throwable, var$2, nullptr);
		try {
			$assign(w, $new($ThreadPoolExecutor$Worker, this, firstTask));
			$var($Thread, t, w->thread);
			if (t != nullptr) {
				$var($ReentrantLock, mainLock, this->mainLock);
				$nc(mainLock)->lock();
				{
					$var($Throwable, var$3, nullptr);
					try {
						int32_t c = $nc(this->ctl)->get();
						bool var$4 = isRunning(c);
						if (var$4 || (runStateLessThan(c, ThreadPoolExecutor::STOP) && firstTask == nullptr)) {
							$init($Thread$State);
							if (t->getState() != $Thread$State::NEW) {
								$throwNew($IllegalThreadStateException);
							}
							$nc(this->workers)->add(w);
							workerAdded = true;
							int32_t s = $nc(this->workers)->size();
							if (s > this->largestPoolSize) {
								this->largestPoolSize = s;
							}
						}
					} catch ($Throwable& var$5) {
						$assign(var$3, var$5);
					} /*finally*/ {
						mainLock->unlock();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
				}
				if (workerAdded) {
					t->start();
					workerStarted = true;
				}
			}
		} catch ($Throwable& var$6) {
			$assign(var$2, var$6);
		} /*finally*/ {
			if (!workerStarted) {
				addWorkerFailed(w);
			}
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
	return workerStarted;
}

void ThreadPoolExecutor::addWorkerFailed($ThreadPoolExecutor$Worker* w) {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (w != nullptr) {
				$nc(this->workers)->remove(w);
			}
			decrementWorkerCount();
			tryTerminate();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			mainLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ThreadPoolExecutor::processWorkerExit($ThreadPoolExecutor$Worker* w, bool completedAbruptly) {
	$useLocalCurrentObjectStackCache();
	if (completedAbruptly) {
		decrementWorkerCount();
	}
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->completedTaskCount += $nc(w)->completedTasks;
			$nc(this->workers)->remove(w);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			mainLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	tryTerminate();
	int32_t c = $nc(this->ctl)->get();
	if (runStateLessThan(c, ThreadPoolExecutor::STOP)) {
		if (!completedAbruptly) {
			int32_t min = this->allowCoreThreadTimeOut$ ? 0 : $cast(int32_t, this->corePoolSize);
			if (min == 0 && !$nc(this->workQueue)->isEmpty()) {
				min = 1;
			}
			if (workerCountOf(c) >= min) {
				return;
			}
		}
		addWorker(nullptr, false);
	}
}

$Runnable* ThreadPoolExecutor::getTask() {
	$useLocalCurrentObjectStackCache();
	bool timedOut = false;
	for (;;) {
		int32_t c = $nc(this->ctl)->get();
		bool var$0 = runStateAtLeast(c, ThreadPoolExecutor::SHUTDOWN);
		if (var$0) {
			bool var$1 = runStateAtLeast(c, ThreadPoolExecutor::STOP);
			var$0 = (var$1 || $nc(this->workQueue)->isEmpty());
		}
		if (var$0) {
			decrementWorkerCount();
			return nullptr;
		}
		int32_t wc = workerCountOf(c);
		bool timed = this->allowCoreThreadTimeOut$ || wc > this->corePoolSize;
		if ((wc > this->maximumPoolSize || (timed && timedOut)) && (wc > 1 || $nc(this->workQueue)->isEmpty())) {
			if (compareAndDecrementWorkerCount(c)) {
				return nullptr;
			}
			continue;
		}
		try {
			$init($TimeUnit);
			$var($Runnable, r, timed ? $cast($Runnable, $nc(this->workQueue)->poll(this->keepAliveTime, $TimeUnit::NANOSECONDS)) : $cast($Runnable, $nc(this->workQueue)->take()));
			if (r != nullptr) {
				return r;
			}
			timedOut = true;
		} catch ($InterruptedException& retry) {
			timedOut = false;
		}
	}
	$shouldNotReachHere();
}

void ThreadPoolExecutor::runWorker($ThreadPoolExecutor$Worker* w) {
	$useLocalCurrentObjectStackCache();
	$var($Thread, wt, $Thread::currentThread());
	$var($Runnable, task, $nc(w)->firstTask);
	$set(w, firstTask, nullptr);
	w->unlock();
	bool completedAbruptly = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			while (task != nullptr || ($assign(task, getTask())) != nullptr) {
				w->lock();
				bool var$2 = runStateAtLeast($nc(this->ctl)->get(), ThreadPoolExecutor::STOP);
				if (!var$2) {
					bool var$3 = $Thread::interrupted();
					var$2 = (var$3 && runStateAtLeast($nc(this->ctl)->get(), ThreadPoolExecutor::STOP));
				}
				bool var$1 = (var$2);
				if (var$1 && !wt->isInterrupted()) {
					wt->interrupt();
				}
				{
					$var($Throwable, var$4, nullptr);
					try {
						beforeExecute(wt, task);
						try {
							$nc(task)->run();
							afterExecute(task, nullptr);
						} catch ($Throwable& ex) {
							afterExecute(task, ex);
							$throw(ex);
						}
					} catch ($Throwable& var$5) {
						$assign(var$4, var$5);
					} /*finally*/ {
						$assign(task, nullptr);
						++w->completedTasks;
						w->unlock();
					}
					if (var$4 != nullptr) {
						$throw(var$4);
					}
				}
			}
			completedAbruptly = false;
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} /*finally*/ {
			processWorkerExit(w, completedAbruptly);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ThreadPoolExecutor::init$(int32_t corePoolSize, int32_t maximumPoolSize, int64_t keepAliveTime, $TimeUnit* unit, $BlockingQueue* workQueue) {
	ThreadPoolExecutor::init$(corePoolSize, maximumPoolSize, keepAliveTime, unit, workQueue, $($Executors::defaultThreadFactory()), ThreadPoolExecutor::defaultHandler);
}

void ThreadPoolExecutor::init$(int32_t corePoolSize, int32_t maximumPoolSize, int64_t keepAliveTime, $TimeUnit* unit, $BlockingQueue* workQueue, $ThreadFactory* threadFactory) {
	ThreadPoolExecutor::init$(corePoolSize, maximumPoolSize, keepAliveTime, unit, workQueue, threadFactory, ThreadPoolExecutor::defaultHandler);
}

void ThreadPoolExecutor::init$(int32_t corePoolSize, int32_t maximumPoolSize, int64_t keepAliveTime, $TimeUnit* unit, $BlockingQueue* workQueue, $RejectedExecutionHandler* handler) {
	ThreadPoolExecutor::init$(corePoolSize, maximumPoolSize, keepAliveTime, unit, workQueue, $($Executors::defaultThreadFactory()), handler);
}

void ThreadPoolExecutor::init$(int32_t corePoolSize, int32_t maximumPoolSize, int64_t keepAliveTime, $TimeUnit* unit, $BlockingQueue* workQueue, $ThreadFactory* threadFactory, $RejectedExecutionHandler* handler) {
	$AbstractExecutorService::init$();
	$set(this, ctl, $new($AtomicInteger, ctlOf(ThreadPoolExecutor::RUNNING, 0)));
	$set(this, mainLock, $new($ReentrantLock));
	$set(this, workers, $new($HashSet));
	$set(this, termination, $nc(this->mainLock)->newCondition());
	if (corePoolSize < 0 || maximumPoolSize <= 0 || maximumPoolSize < corePoolSize || keepAliveTime < 0) {
		$throwNew($IllegalArgumentException);
	}
	if (workQueue == nullptr || threadFactory == nullptr || handler == nullptr) {
		$throwNew($NullPointerException);
	}
	this->corePoolSize = corePoolSize;
	this->maximumPoolSize = maximumPoolSize;
	$set(this, workQueue, workQueue);
	this->keepAliveTime = $nc(unit)->toNanos(keepAliveTime);
	$set(this, threadFactory, threadFactory);
	$set(this, handler, handler);
}

void ThreadPoolExecutor::execute($Runnable* command) {
	if (command == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t c = $nc(this->ctl)->get();
	if (workerCountOf(c) < this->corePoolSize) {
		if (addWorker(command, true)) {
			return;
		}
		c = $nc(this->ctl)->get();
	}
	bool var$0 = isRunning(c);
	if (var$0 && $nc(this->workQueue)->offer(command)) {
		int32_t recheck = $nc(this->ctl)->get();
		bool var$1 = !isRunning(recheck);
		if (var$1 && remove(command)) {
			reject(command);
		} else if (workerCountOf(recheck) == 0) {
			addWorker(nullptr, false);
		}
	} else if (!addWorker(command, false)) {
		reject(command);
	}
}

void ThreadPoolExecutor::shutdown() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			checkShutdownAccess();
			advanceRunState(ThreadPoolExecutor::SHUTDOWN);
			interruptIdleWorkers();
			onShutdown();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			mainLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	tryTerminate();
}

$List* ThreadPoolExecutor::shutdownNow() {
	$useLocalCurrentObjectStackCache();
	$var($List, tasks, nullptr);
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			checkShutdownAccess();
			advanceRunState(ThreadPoolExecutor::STOP);
			interruptWorkers();
			$assign(tasks, drainQueue());
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			mainLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	tryTerminate();
	return tasks;
}

bool ThreadPoolExecutor::isShutdown() {
	return runStateAtLeast($nc(this->ctl)->get(), ThreadPoolExecutor::SHUTDOWN);
}

bool ThreadPoolExecutor::isStopped() {
	return runStateAtLeast($nc(this->ctl)->get(), ThreadPoolExecutor::STOP);
}

bool ThreadPoolExecutor::isTerminating() {
	int32_t c = $nc(this->ctl)->get();
	bool var$0 = runStateAtLeast(c, ThreadPoolExecutor::SHUTDOWN);
	return var$0 && runStateLessThan(c, ThreadPoolExecutor::TERMINATED);
}

bool ThreadPoolExecutor::isTerminated() {
	return runStateAtLeast($nc(this->ctl)->get(), ThreadPoolExecutor::TERMINATED);
}

bool ThreadPoolExecutor::awaitTermination(int64_t timeout, $TimeUnit* unit) {
	$useLocalCurrentObjectStackCache();
	int64_t nanos = $nc(unit)->toNanos(timeout);
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			while (runStateLessThan($nc(this->ctl)->get(), ThreadPoolExecutor::TERMINATED)) {
				if (nanos <= (int64_t)0) {
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
				nanos = $nc(this->termination)->awaitNanos(nanos);
			}
			var$2 = true;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			mainLock->unlock();
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

void ThreadPoolExecutor::finalize() {
}

void ThreadPoolExecutor::setThreadFactory($ThreadFactory* threadFactory) {
	if (threadFactory == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, threadFactory, threadFactory);
}

$ThreadFactory* ThreadPoolExecutor::getThreadFactory() {
	return this->threadFactory;
}

void ThreadPoolExecutor::setRejectedExecutionHandler($RejectedExecutionHandler* handler) {
	if (handler == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, handler, handler);
}

$RejectedExecutionHandler* ThreadPoolExecutor::getRejectedExecutionHandler() {
	return this->handler;
}

void ThreadPoolExecutor::setCorePoolSize(int32_t corePoolSize) {
	if (corePoolSize < 0 || this->maximumPoolSize < corePoolSize) {
		$throwNew($IllegalArgumentException);
	}
	int32_t delta = corePoolSize - this->corePoolSize;
	this->corePoolSize = corePoolSize;
	if (workerCountOf($nc(this->ctl)->get()) > corePoolSize) {
		interruptIdleWorkers();
	} else if (delta > 0) {
		int32_t k = $Math::min(delta, $nc(this->workQueue)->size());
		while (k-- > 0 && addWorker(nullptr, true)) {
			if ($nc(this->workQueue)->isEmpty()) {
				break;
			}
		}
	}
}

int32_t ThreadPoolExecutor::getCorePoolSize() {
	return this->corePoolSize;
}

bool ThreadPoolExecutor::prestartCoreThread() {
	bool var$0 = workerCountOf($nc(this->ctl)->get()) < this->corePoolSize;
	return var$0 && addWorker(nullptr, true);
}

void ThreadPoolExecutor::ensurePrestart() {
	int32_t wc = workerCountOf($nc(this->ctl)->get());
	if (wc < this->corePoolSize) {
		addWorker(nullptr, true);
	} else if (wc == 0) {
		addWorker(nullptr, false);
	}
}

int32_t ThreadPoolExecutor::prestartAllCoreThreads() {
	int32_t n = 0;
	while (addWorker(nullptr, true)) {
		++n;
	}
	return n;
}

bool ThreadPoolExecutor::allowsCoreThreadTimeOut() {
	return this->allowCoreThreadTimeOut$;
}

void ThreadPoolExecutor::allowCoreThreadTimeOut(bool value) {
	if (value && this->keepAliveTime <= 0) {
		$throwNew($IllegalArgumentException, "Core threads must have nonzero keep alive times"_s);
	}
	if (value != this->allowCoreThreadTimeOut$) {
		this->allowCoreThreadTimeOut$ = value;
		if (value) {
			interruptIdleWorkers();
		}
	}
}

void ThreadPoolExecutor::setMaximumPoolSize(int32_t maximumPoolSize) {
	if (maximumPoolSize <= 0 || maximumPoolSize < this->corePoolSize) {
		$throwNew($IllegalArgumentException);
	}
	this->maximumPoolSize = maximumPoolSize;
	if (workerCountOf($nc(this->ctl)->get()) > maximumPoolSize) {
		interruptIdleWorkers();
	}
}

int32_t ThreadPoolExecutor::getMaximumPoolSize() {
	return this->maximumPoolSize;
}

void ThreadPoolExecutor::setKeepAliveTime(int64_t time, $TimeUnit* unit) {
	if (time < 0) {
		$throwNew($IllegalArgumentException);
	}
	if (time == 0 && allowsCoreThreadTimeOut()) {
		$throwNew($IllegalArgumentException, "Core threads must have nonzero keep alive times"_s);
	}
	int64_t keepAliveTime = $nc(unit)->toNanos(time);
	int64_t delta = keepAliveTime - this->keepAliveTime;
	this->keepAliveTime = keepAliveTime;
	if (delta < 0) {
		interruptIdleWorkers();
	}
}

int64_t ThreadPoolExecutor::getKeepAliveTime($TimeUnit* unit) {
	$init($TimeUnit);
	return $nc(unit)->convert(this->keepAliveTime, $TimeUnit::NANOSECONDS);
}

$BlockingQueue* ThreadPoolExecutor::getQueue() {
	return this->workQueue;
}

bool ThreadPoolExecutor::remove($Runnable* task) {
	bool removed = $nc(this->workQueue)->remove(task);
	tryTerminate();
	return removed;
}

void ThreadPoolExecutor::purge() {
	$useLocalCurrentObjectStackCache();
	$var($BlockingQueue, q, this->workQueue);
	try {
		$var($Iterator, it, $nc(q)->iterator());
		while ($nc(it)->hasNext()) {
			$var($Runnable, r, $cast($Runnable, it->next()));
			if ($instanceOf($Future, r) && $nc(($cast($Future, r)))->isCancelled()) {
				it->remove();
			}
		}
	} catch ($ConcurrentModificationException& fallThrough) {
		{
			$var($ObjectArray, arr$, $nc(q)->toArray());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, r, arr$->get(i$));
				if ($instanceOf($Future, r) && $nc(($cast($Future, r)))->isCancelled()) {
					q->remove(r);
				}
			}
		}
	}
	tryTerminate();
}

int32_t ThreadPoolExecutor::getPoolSize() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = runStateAtLeast($nc(this->ctl)->get(), ThreadPoolExecutor::TIDYING) ? 0 : $nc(this->workers)->size();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			mainLock->unlock();
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

int32_t ThreadPoolExecutor::getActiveCount() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t n = 0;
			{
				$var($Iterator, i$, $nc(this->workers)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ThreadPoolExecutor$Worker, w, $cast($ThreadPoolExecutor$Worker, i$->next()));
					if ($nc(w)->isLocked()) {
						++n;
					}
				}
			}
			var$2 = n;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			mainLock->unlock();
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

int32_t ThreadPoolExecutor::getLargestPoolSize() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = this->largestPoolSize;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			mainLock->unlock();
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

int64_t ThreadPoolExecutor::getTaskCount() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int64_t n = this->completedTaskCount;
			{
				$var($Iterator, i$, $nc(this->workers)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ThreadPoolExecutor$Worker, w, $cast($ThreadPoolExecutor$Worker, i$->next()));
					{
						n += $nc(w)->completedTasks;
						if (w->isLocked()) {
							++n;
						}
					}
				}
			}
			var$2 = n + $nc(this->workQueue)->size();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			mainLock->unlock();
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

int64_t ThreadPoolExecutor::getCompletedTaskCount() {
	$useLocalCurrentObjectStackCache();
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int64_t n = this->completedTaskCount;
			{
				$var($Iterator, i$, $nc(this->workers)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ThreadPoolExecutor$Worker, w, $cast($ThreadPoolExecutor$Worker, i$->next()));
					n += $nc(w)->completedTasks;
				}
			}
			var$2 = n;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			mainLock->unlock();
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

$String* ThreadPoolExecutor::toString() {
	$useLocalCurrentObjectStackCache();
	int64_t ncompleted = 0;
	int32_t nworkers = 0;
	int32_t nactive = 0;
	$var($ReentrantLock, mainLock, this->mainLock);
	$nc(mainLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			ncompleted = this->completedTaskCount;
			nactive = 0;
			nworkers = $nc(this->workers)->size();
			{
				$var($Iterator, i$, $nc(this->workers)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($ThreadPoolExecutor$Worker, w, $cast($ThreadPoolExecutor$Worker, i$->next()));
					{
						ncompleted += $nc(w)->completedTasks;
						if (w->isLocked()) {
							++nactive;
						}
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			mainLock->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	int32_t c = $nc(this->ctl)->get();
	$var($String, runState, isRunning(c) ? "Running"_s : runStateAtLeast(c, ThreadPoolExecutor::TERMINATED) ? "Terminated"_s : "Shutting down"_s);
	$var($String, var$5, $$str({$($AbstractExecutorService::toString()), "["_s, runState, ", pool size = "_s, $$str(nworkers), ", active threads = "_s, $$str(nactive), ", queued tasks = "_s}));
	$var($String, var$4, $$concat(var$5, $$str($nc(this->workQueue)->size())));
	$var($String, var$3, $$concat(var$4, ", completed tasks = "));
	$var($String, var$2, $$concat(var$3, $$str(ncompleted)));
	return $concat(var$2, "]");
}

void ThreadPoolExecutor::beforeExecute($Thread* t, $Runnable* r) {
}

void ThreadPoolExecutor::afterExecute($Runnable* r, $Throwable* t) {
}

void ThreadPoolExecutor::terminated() {
}

void clinit$ThreadPoolExecutor($Class* class$) {
	$assignStatic(ThreadPoolExecutor::defaultHandler, $new($ThreadPoolExecutor$AbortPolicy));
	$assignStatic(ThreadPoolExecutor::shutdownPerm, $new($RuntimePermission, "modifyThread"_s));
}

ThreadPoolExecutor::ThreadPoolExecutor() {
}

$Class* ThreadPoolExecutor::load$($String* name, bool initialize) {
	$loadClass(ThreadPoolExecutor, name, initialize, &_ThreadPoolExecutor_ClassInfo_, clinit$ThreadPoolExecutor, allocate$ThreadPoolExecutor);
	return class$;
}

$Class* ThreadPoolExecutor::class$ = nullptr;

		} // concurrent
	} // util
} // java