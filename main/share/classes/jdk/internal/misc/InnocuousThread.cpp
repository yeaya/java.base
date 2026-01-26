#include <jdk/internal/misc/InnocuousThread.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/ThreadGroup.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jdk/internal/misc/InnocuousThread$1.h>
#include <jdk/internal/misc/InnocuousThread$2.h>
#include <jdk/internal/misc/InnocuousThread$3.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ACC
#undef CONTEXTCLASSLOADER
#undef INHERITABLE_THREAD_LOCALS
#undef INHERITEDACCESSCONTROLCONTEXT
#undef INNOCUOUSTHREADGROUP
#undef THREAD_LOCALS
#undef UNSAFE

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $InnocuousThread$1 = ::jdk::internal::misc::InnocuousThread$1;
using $InnocuousThread$2 = ::jdk::internal::misc::InnocuousThread$2;
using $InnocuousThread$3 = ::jdk::internal::misc::InnocuousThread$3;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace jdk {
	namespace internal {
		namespace misc {

$FieldInfo _InnocuousThread_FieldInfo_[] = {
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InnocuousThread, UNSAFE)},
	{"THREAD_LOCALS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InnocuousThread, THREAD_LOCALS)},
	{"INHERITABLE_THREAD_LOCALS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InnocuousThread, INHERITABLE_THREAD_LOCALS)},
	{"INNOCUOUSTHREADGROUP", "Ljava/lang/ThreadGroup;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InnocuousThread, INNOCUOUSTHREADGROUP)},
	{"ACC", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InnocuousThread, ACC)},
	{"INHERITEDACCESSCONTROLCONTEXT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InnocuousThread, INHERITEDACCESSCONTROLCONTEXT)},
	{"CONTEXTCLASSLOADER", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InnocuousThread, CONTEXTCLASSLOADER)},
	{"threadNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InnocuousThread, threadNumber)},
	{"hasRun", "Z", nullptr, $PRIVATE | $VOLATILE, $field(InnocuousThread, hasRun)},
	{}
};

$MethodInfo _InnocuousThread_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE, $method(InnocuousThread, init$, void, $ThreadGroup*, $Runnable*, $String*, $ClassLoader*)},
	{"createThread", "(Ljava/lang/String;Ljava/lang/Runnable;Ljava/lang/ClassLoader;I)Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticMethod(InnocuousThread, createThread, $Thread*, $String*, $Runnable*, $ClassLoader*, int32_t)},
	{"eraseThreadLocals", "()V", nullptr, $PUBLIC | $FINAL, $method(InnocuousThread, eraseThreadLocals, void)},
	{"newName", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(InnocuousThread, newName, $String*)},
	{"newSystemThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC | $STATIC, $staticMethod(InnocuousThread, newSystemThread, $Thread*, $Runnable*)},
	{"newSystemThread", "(Ljava/lang/String;Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC | $STATIC, $staticMethod(InnocuousThread, newSystemThread, $Thread*, $String*, $Runnable*)},
	{"newSystemThread", "(Ljava/lang/String;Ljava/lang/Runnable;I)Ljava/lang/Thread;", nullptr, $PUBLIC | $STATIC, $staticMethod(InnocuousThread, newSystemThread, $Thread*, $String*, $Runnable*, int32_t)},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC | $STATIC, $staticMethod(InnocuousThread, newThread, $Thread*, $Runnable*)},
	{"newThread", "(Ljava/lang/String;Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC | $STATIC, $staticMethod(InnocuousThread, newThread, $Thread*, $String*, $Runnable*)},
	{"newThread", "(Ljava/lang/String;Ljava/lang/Runnable;I)Ljava/lang/Thread;", nullptr, $PUBLIC | $STATIC, $staticMethod(InnocuousThread, newThread, $Thread*, $String*, $Runnable*, int32_t)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(InnocuousThread, run, void)},
	{"setContextClassLoader", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $virtualMethod(InnocuousThread, setContextClassLoader, void, $ClassLoader*)},
	{"setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V", nullptr, $PUBLIC, $virtualMethod(InnocuousThread, setUncaughtExceptionHandler, void, $Thread$UncaughtExceptionHandler*)},
	{}
};

$InnerClassInfo _InnocuousThread_InnerClassesInfo_[] = {
	{"jdk.internal.misc.InnocuousThread$3", nullptr, nullptr, 0},
	{"jdk.internal.misc.InnocuousThread$2", nullptr, nullptr, 0},
	{"jdk.internal.misc.InnocuousThread$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InnocuousThread_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.misc.InnocuousThread",
	"java.lang.Thread",
	nullptr,
	_InnocuousThread_FieldInfo_,
	_InnocuousThread_MethodInfo_,
	nullptr,
	nullptr,
	_InnocuousThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.misc.InnocuousThread$3,jdk.internal.misc.InnocuousThread$2,jdk.internal.misc.InnocuousThread$1"
};

$Object* allocate$InnocuousThread($Class* clazz) {
	return $of($alloc(InnocuousThread));
}

$Unsafe* InnocuousThread::UNSAFE = nullptr;
int64_t InnocuousThread::THREAD_LOCALS = 0;
int64_t InnocuousThread::INHERITABLE_THREAD_LOCALS = 0;
$ThreadGroup* InnocuousThread::INNOCUOUSTHREADGROUP = nullptr;
$AccessControlContext* InnocuousThread::ACC = nullptr;
int64_t InnocuousThread::INHERITEDACCESSCONTROLCONTEXT = 0;
int64_t InnocuousThread::CONTEXTCLASSLOADER = 0;
$AtomicInteger* InnocuousThread::threadNumber = nullptr;

$String* InnocuousThread::newName() {
	$init(InnocuousThread);
	return $str({"InnocuousThread-"_s, $$str($nc(InnocuousThread::threadNumber)->getAndIncrement())});
}

$Thread* InnocuousThread::newThread($Runnable* target) {
	$init(InnocuousThread);
	return newThread($(newName()), target);
}

$Thread* InnocuousThread::newThread($String* name, $Runnable* target) {
	$init(InnocuousThread);
	return newThread(name, target, -1);
}

$Thread* InnocuousThread::newThread($String* name, $Runnable* target, int32_t priority) {
	$init(InnocuousThread);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return createThread(name, target, $($ClassLoader::getSystemClassLoader()), priority);
	}
	return $cast($Thread, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($InnocuousThread$1, name, target, priority))));
}

$Thread* InnocuousThread::newSystemThread($Runnable* target) {
	$init(InnocuousThread);
	return newSystemThread($(newName()), target);
}

$Thread* InnocuousThread::newSystemThread($String* name, $Runnable* target) {
	$init(InnocuousThread);
	return newSystemThread(name, target, -1);
}

$Thread* InnocuousThread::newSystemThread($String* name, $Runnable* target, int32_t priority) {
	$init(InnocuousThread);
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return createThread(name, target, nullptr, priority);
	}
	return $cast($Thread, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($InnocuousThread$2, name, target, priority))));
}

$Thread* InnocuousThread::createThread($String* name, $Runnable* target, $ClassLoader* loader, int32_t priority) {
	$init(InnocuousThread);
	$var($Thread, t, $new(InnocuousThread, InnocuousThread::INNOCUOUSTHREADGROUP, target, name, loader));
	if (priority >= 0) {
		t->setPriority(priority);
	}
	return t;
}

void InnocuousThread::init$($ThreadGroup* group, $Runnable* target, $String* name, $ClassLoader* tccl) {
	$Thread::init$(group, target, name, 0, false);
	$nc(InnocuousThread::UNSAFE)->putReferenceRelease(this, InnocuousThread::INHERITEDACCESSCONTROLCONTEXT, InnocuousThread::ACC);
	$nc(InnocuousThread::UNSAFE)->putReferenceRelease(this, InnocuousThread::CONTEXTCLASSLOADER, tccl);
}

void InnocuousThread::setUncaughtExceptionHandler($Thread$UncaughtExceptionHandler* x) {
}

void InnocuousThread::setContextClassLoader($ClassLoader* cl) {
	if (cl == nullptr) {
		$Thread::setContextClassLoader(nullptr);
	} else {
		$throwNew($SecurityException, "setContextClassLoader"_s);
	}
}

void InnocuousThread::eraseThreadLocals() {
	$nc(InnocuousThread::UNSAFE)->putReference(this, InnocuousThread::THREAD_LOCALS, nullptr);
	$nc(InnocuousThread::UNSAFE)->putReference(this, InnocuousThread::INHERITABLE_THREAD_LOCALS, nullptr);
}

void InnocuousThread::run() {
	if ($equals($Thread::currentThread(), this) && !this->hasRun) {
		this->hasRun = true;
		$Thread::run();
	}
}

void clinit$InnocuousThread($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(InnocuousThread::threadNumber, $new($AtomicInteger, 1));
	{
		try {
			$assignStatic(InnocuousThread::ACC, $new($AccessControlContext, $$new($ProtectionDomainArray, {$$new($ProtectionDomain, nullptr, nullptr)})));
			$assignStatic(InnocuousThread::UNSAFE, $Unsafe::getUnsafe());
			$Class* tk = $Thread::class$;
			$load($ThreadGroup);
			$Class* gk = $ThreadGroup::class$;
			InnocuousThread::THREAD_LOCALS = $nc(InnocuousThread::UNSAFE)->objectFieldOffset(tk, "threadLocals"_s);
			InnocuousThread::INHERITABLE_THREAD_LOCALS = $nc(InnocuousThread::UNSAFE)->objectFieldOffset(tk, "inheritableThreadLocals"_s);
			InnocuousThread::INHERITEDACCESSCONTROLCONTEXT = $nc(InnocuousThread::UNSAFE)->objectFieldOffset(tk, "inheritedAccessControlContext"_s);
			InnocuousThread::CONTEXTCLASSLOADER = $nc(InnocuousThread::UNSAFE)->objectFieldOffset(tk, "contextClassLoader"_s);
			int64_t tg = $nc(InnocuousThread::UNSAFE)->objectFieldOffset(tk, "group"_s);
			int64_t gp = $nc(InnocuousThread::UNSAFE)->objectFieldOffset(gk, "parent"_s);
			$var($ThreadGroup, group, $cast($ThreadGroup, $nc(InnocuousThread::UNSAFE)->getReference($($Thread::currentThread()), tg)));
			while (group != nullptr) {
				$var($ThreadGroup, parent, $cast($ThreadGroup, $nc(InnocuousThread::UNSAFE)->getReference(group, gp)));
				if (parent == nullptr) {
					break;
				}
				$assign(group, parent);
			}
			$var($ThreadGroup, root, group);
			if ($System::getSecurityManager() == nullptr) {
				$assignStatic(InnocuousThread::INNOCUOUSTHREADGROUP, $new($ThreadGroup, root, "InnocuousThreadGroup"_s));
			} else {
				$assignStatic(InnocuousThread::INNOCUOUSTHREADGROUP, $cast($ThreadGroup, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($InnocuousThread$3, root)))));
			}
		} catch ($Exception& e) {
			$throwNew($Error, static_cast<$Throwable*>(e));
		}
	}
}

InnocuousThread::InnocuousThread() {
}

$Class* InnocuousThread::load$($String* name, bool initialize) {
	$loadClass(InnocuousThread, name, initialize, &_InnocuousThread_ClassInfo_, clinit$InnocuousThread, allocate$InnocuousThread);
	return class$;
}

$Class* InnocuousThread::class$ = nullptr;

		} // misc
	} // internal
} // jdk