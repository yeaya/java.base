#include <java/util/concurrent/ForkJoinWorkerThread.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ForkJoinPool$WorkQueue.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$WorkQueue = ::java::util::concurrent::ForkJoinPool$WorkQueue;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ForkJoinWorkerThread_FieldInfo_[] = {
	{"pool", "Ljava/util/concurrent/ForkJoinPool;", nullptr, $FINAL, $field(ForkJoinWorkerThread, pool)},
	{"workQueue", "Ljava/util/concurrent/ForkJoinPool$WorkQueue;", nullptr, $FINAL, $field(ForkJoinWorkerThread, workQueue)},
	{}
};

$MethodInfo _ForkJoinWorkerThread_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/util/concurrent/ForkJoinPool;ZZ)V", nullptr, 0, $method(static_cast<void(ForkJoinWorkerThread::*)($ThreadGroup*,$ForkJoinPool*,bool,bool)>(&ForkJoinWorkerThread::init$))},
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/util/concurrent/ForkJoinPool;)V", nullptr, 0, $method(static_cast<void(ForkJoinWorkerThread::*)($ThreadGroup*,$ForkJoinPool*)>(&ForkJoinWorkerThread::init$))},
	{"<init>", "(Ljava/util/concurrent/ForkJoinPool;)V", nullptr, $PROTECTED, $method(static_cast<void(ForkJoinWorkerThread::*)($ForkJoinPool*)>(&ForkJoinWorkerThread::init$))},
	{"getPool", "()Ljava/util/concurrent/ForkJoinPool;", nullptr, $PUBLIC},
	{"getPoolIndex", "()I", nullptr, $PUBLIC},
	{"onStart", "()V", nullptr, $PROTECTED},
	{"onTermination", "(Ljava/lang/Throwable;)V", nullptr, $PROTECTED},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ForkJoinWorkerThread_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread", "java.util.concurrent.ForkJoinWorkerThread", "InnocuousForkJoinWorkerThread", $STATIC | $FINAL},
	{}
};

$ClassInfo _ForkJoinWorkerThread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ForkJoinWorkerThread",
	"java.lang.Thread",
	nullptr,
	_ForkJoinWorkerThread_FieldInfo_,
	_ForkJoinWorkerThread_MethodInfo_,
	nullptr,
	nullptr,
	_ForkJoinWorkerThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread,java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1"
};

$Object* allocate$ForkJoinWorkerThread($Class* clazz) {
	return $of($alloc(ForkJoinWorkerThread));
}

void ForkJoinWorkerThread::init$($ThreadGroup* group, $ForkJoinPool* pool, bool useSystemClassLoader, bool isInnocuous) {
	$beforeCallerSensitive();
	$Thread::init$(group, nullptr, $($nc(pool)->nextWorkerThreadName()), 0);
	$var($Thread$UncaughtExceptionHandler, handler, $nc(($assignField(this, pool, pool)))->ueh);
	$set(this, workQueue, $new($ForkJoinPool$WorkQueue, this, isInnocuous));
	$Thread::setDaemon(true);
	if (handler != nullptr) {
		$Thread::setUncaughtExceptionHandler(handler);
	}
	if (useSystemClassLoader) {
		$Thread::setContextClassLoader($($ClassLoader::getSystemClassLoader()));
	}
}

void ForkJoinWorkerThread::init$($ThreadGroup* group, $ForkJoinPool* pool) {
	ForkJoinWorkerThread::init$(group, pool, false, false);
}

void ForkJoinWorkerThread::init$($ForkJoinPool* pool) {
	ForkJoinWorkerThread::init$(nullptr, pool, false, false);
}

$ForkJoinPool* ForkJoinWorkerThread::getPool() {
	return this->pool;
}

int32_t ForkJoinWorkerThread::getPoolIndex() {
	return $nc(this->workQueue)->getPoolIndex();
}

void ForkJoinWorkerThread::onStart() {
}

void ForkJoinWorkerThread::onTermination($Throwable* exception) {
}

void ForkJoinWorkerThread::run() {
	$var($Throwable, exception, nullptr);
	$var($ForkJoinPool, p, this->pool);
	$var($ForkJoinPool$WorkQueue, w, this->workQueue);
	if (p != nullptr && w != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					p->registerWorker(w);
					onStart();
					p->runWorker(w);
				} catch ($Throwable&) {
					$var($Throwable, ex, $catch());
					$assign(exception, ex);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				{
					$var($Throwable, var$1, nullptr);
					try {
						try {
							onTermination(exception);
						} catch ($Throwable&) {
							$var($Throwable, ex, $catch());
							if (exception == nullptr) {
								$assign(exception, ex);
							}
						}
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						p->deregisterWorker(this, exception);
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

ForkJoinWorkerThread::ForkJoinWorkerThread() {
}

$Class* ForkJoinWorkerThread::load$($String* name, bool initialize) {
	$loadClass(ForkJoinWorkerThread, name, initialize, &_ForkJoinWorkerThread_ClassInfo_, allocate$ForkJoinWorkerThread);
	return class$;
}

$Class* ForkJoinWorkerThread::class$ = nullptr;

		} // concurrent
	} // util
} // java