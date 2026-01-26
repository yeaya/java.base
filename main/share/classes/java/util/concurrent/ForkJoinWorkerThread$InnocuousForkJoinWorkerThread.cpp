#include <java/util/concurrent/ForkJoinWorkerThread$InnocuousForkJoinWorkerThread.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/ThreadGroup.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1.h>
#include <java/util/concurrent/ForkJoinWorkerThread.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread;
using $ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1 = ::java::util::concurrent::ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_FieldInfo_[] = {
	{"innocuousThreadGroup", "Ljava/lang/ThreadGroup;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread, innocuousThreadGroup)},
	{}
};

$MethodInfo _ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ForkJoinPool;)V", nullptr, 0, $method(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread, init$, void, $ForkJoinPool*)},
	{"setContextClassLoader", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $virtualMethod(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread, setContextClassLoader, void, $ClassLoader*)},
	{"setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V", nullptr, $PUBLIC, $virtualMethod(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread, setUncaughtExceptionHandler, void, $Thread$UncaughtExceptionHandler*)},
	{}
};

$InnerClassInfo _ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread", "java.util.concurrent.ForkJoinWorkerThread", "InnocuousForkJoinWorkerThread", $STATIC | $FINAL},
	{"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ForkJoinWorkerThread$InnocuousForkJoinWorkerThread",
	"java.util.concurrent.ForkJoinWorkerThread",
	nullptr,
	_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_FieldInfo_,
	_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_MethodInfo_,
	nullptr,
	nullptr,
	_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinWorkerThread"
};

$Object* allocate$ForkJoinWorkerThread$InnocuousForkJoinWorkerThread($Class* clazz) {
	return $of($alloc(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread));
}

$ThreadGroup* ForkJoinWorkerThread$InnocuousForkJoinWorkerThread::innocuousThreadGroup = nullptr;

void ForkJoinWorkerThread$InnocuousForkJoinWorkerThread::init$($ForkJoinPool* pool) {
	$ForkJoinWorkerThread::init$(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread::innocuousThreadGroup, pool, true, true);
}

void ForkJoinWorkerThread$InnocuousForkJoinWorkerThread::setUncaughtExceptionHandler($Thread$UncaughtExceptionHandler* x) {
}

void ForkJoinWorkerThread$InnocuousForkJoinWorkerThread::setContextClassLoader($ClassLoader* cl) {
	$beforeCallerSensitive();
	if (cl != nullptr && $ClassLoader::getSystemClassLoader() != cl) {
		$throwNew($SecurityException, "setContextClassLoader"_s);
	}
}

void clinit$ForkJoinWorkerThread$InnocuousForkJoinWorkerThread($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread::innocuousThreadGroup, $cast($ThreadGroup, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ForkJoinWorkerThread$InnocuousForkJoinWorkerThread$1)))));
}

ForkJoinWorkerThread$InnocuousForkJoinWorkerThread::ForkJoinWorkerThread$InnocuousForkJoinWorkerThread() {
}

$Class* ForkJoinWorkerThread$InnocuousForkJoinWorkerThread::load$($String* name, bool initialize) {
	$loadClass(ForkJoinWorkerThread$InnocuousForkJoinWorkerThread, name, initialize, &_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_ClassInfo_, clinit$ForkJoinWorkerThread$InnocuousForkJoinWorkerThread, allocate$ForkJoinWorkerThread$InnocuousForkJoinWorkerThread);
	return class$;
}

$Class* ForkJoinWorkerThread$InnocuousForkJoinWorkerThread::class$ = nullptr;

		} // concurrent
	} // util
} // java