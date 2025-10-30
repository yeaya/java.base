#include <java/lang/Thread.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/IllegalThreadStateException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/Thread$1.h>
#include <java/lang/Thread$Caches.h>
#include <java/lang/Thread$State.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/lang/Thread$WeakClassKey.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ThreadLocal$ThreadLocalMap.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jdk/internal/misc/TerminatingThreadLocal.h>
#include <jdk/internal/misc/VM.h>
#include <jdk/internal/reflect/Reflection.h>
#include <sun/nio/ch/Interruptible.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#include "Platform.h"

#undef EMPTY_STACK_TRACE
#undef GET_STACK_TRACE_PERMISSION
#undef MAX_PRIORITY
#undef MAX_VALUE
#undef MIN_PRIORITY
#undef MODIFY_THREADGROUP_PERMISSION
#undef NANOSECONDS
#undef NORM_PRIORITY
#undef REGISTRY
#undef STOP_THREAD_PERMISSION
#undef SUBCLASS_IMPLEMENTATION_PERMISSION

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $ThreadArray = $Array<::java::lang::Thread>;
using $StackTraceElementArray2 = $Array<::java::lang::StackTraceElement, 2>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalThreadStateException = ::java::lang::IllegalThreadStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $Thread$1 = ::java::lang::Thread$1;
using $Thread$Caches = ::java::lang::Thread$Caches;
using $Thread$State = ::java::lang::Thread$State;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $Thread$WeakClassKey = ::java::lang::Thread$WeakClassKey;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $ThreadLocal$ThreadLocalMap = ::java::lang::ThreadLocal$ThreadLocalMap;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $TerminatingThreadLocal = ::jdk::internal::misc::TerminatingThreadLocal;
using $VM = ::jdk::internal::misc::VM;
using $Reflection = ::jdk::internal::reflect::Reflection;
using $Interruptible = ::sun::nio::ch::Interruptible;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace lang {

$NamedAttribute Thread_Attribute_var$0[] = {
	{"value", 's', "tlr"},
	{}
};

$CompoundAttribute _Thread_FieldAnnotations_threadLocalRandomSeed[] = {
	{"Ljdk/internal/vm/annotation/Contended;", Thread_Attribute_var$0},
	{}
};

$NamedAttribute Thread_Attribute_var$1[] = {
	{"value", 's', "tlr"},
	{}
};

$CompoundAttribute _Thread_FieldAnnotations_threadLocalRandomProbe[] = {
	{"Ljdk/internal/vm/annotation/Contended;", Thread_Attribute_var$1},
	{}
};

$NamedAttribute Thread_Attribute_var$2[] = {
	{"value", 's', "tlr"},
	{}
};

$CompoundAttribute _Thread_FieldAnnotations_threadLocalRandomSecondarySeed[] = {
	{"Ljdk/internal/vm/annotation/Contended;", Thread_Attribute_var$2},
	{}
};

$NamedAttribute Thread_Attribute_var$3[] = {
	{"since", 's', "17"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Thread_MethodAnnotations_checkAccess14[] = {
	{"Ljava/lang/Deprecated;", Thread_Attribute_var$3},
	{}
};

$NamedAttribute Thread_Attribute_var$4[] = {
	{"since", 's', "1.2"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Thread_MethodAnnotations_countStackFrames17[] = {
	{"Ljava/lang/Deprecated;", Thread_Attribute_var$4},
	{}
};

$CompoundAttribute _Thread_MethodAnnotations_currentThread18[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Thread_MethodAnnotations_getContextClassLoader25[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _Thread_MethodAnnotations_onSpinWait48[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$NamedAttribute Thread_Attribute_var$5[] = {
	{"since", 's', "1.2"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Thread_MethodAnnotations_resume51[] = {
	{"Ljava/lang/Deprecated;", Thread_Attribute_var$5},
	{}
};

$NamedAttribute Thread_Attribute_var$6[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _Thread_MethodAnnotations_stop66[] = {
	{"Ljava/lang/Deprecated;", Thread_Attribute_var$6},
	{}
};

$NamedAttribute Thread_Attribute_var$7[] = {
	{"since", 's', "1.2"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Thread_MethodAnnotations_suspend68[] = {
	{"Ljava/lang/Deprecated;", Thread_Attribute_var$7},
	{}
};

$FieldInfo _Thread_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(Thread, name)},
	{"priority", "I", nullptr, $PRIVATE, $field(Thread, priority)},
	{"daemon", "Z", nullptr, $PRIVATE, $field(Thread, daemon)},
	{"interrupted", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Thread, interrupted$)},
	{"stillborn", "Z", nullptr, $PRIVATE, $field(Thread, stillborn)},
	{"eetop", "J", nullptr, $PRIVATE, $field(Thread, eetop)},
	{"target", "Ljava/lang/Runnable;", nullptr, $PRIVATE, $field(Thread, target)},
	{"group", "Ljava/lang/ThreadGroup;", nullptr, $PRIVATE, $field(Thread, group)},
	{"contextClassLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(Thread, contextClassLoader)},
	{"inheritedAccessControlContext", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE, $field(Thread, inheritedAccessControlContext)},
	{"threadInitNumber", "I", nullptr, $PRIVATE | $STATIC, $staticField(Thread, threadInitNumber)},
	{"threadLocals", "Ljava/lang/ThreadLocal$ThreadLocalMap;", nullptr, 0, $field(Thread, threadLocals)},
	{"inheritableThreadLocals", "Ljava/lang/ThreadLocal$ThreadLocalMap;", nullptr, 0, $field(Thread, inheritableThreadLocals)},
	{"stackSize", "J", nullptr, $PRIVATE | $FINAL, $field(Thread, stackSize)},
	{"tid", "J", nullptr, $PRIVATE | $FINAL, $field(Thread, tid)},
	{"threadSeqNumber", "J", nullptr, $PRIVATE | $STATIC, $staticField(Thread, threadSeqNumber)},
	{"threadStatus", "I", nullptr, $PRIVATE | $VOLATILE, $field(Thread, threadStatus)},
	{"parkBlocker", "Ljava/lang/Object;", nullptr, $VOLATILE, $field(Thread, parkBlocker)},
	{"blocker", "Lsun/nio/ch/Interruptible;", nullptr, $PRIVATE | $VOLATILE, $field(Thread, blocker)},
	{"blockerLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Thread, blockerLock)},
	{"MIN_PRIORITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Thread, MIN_PRIORITY)},
	{"NORM_PRIORITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Thread, NORM_PRIORITY)},
	{"MAX_PRIORITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Thread, MAX_PRIORITY)},
	{"EMPTY_STACK_TRACE", "[Ljava/lang/StackTraceElement;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Thread, EMPTY_STACK_TRACE)},
	{"uncaughtExceptionHandler", "Ljava/lang/Thread$UncaughtExceptionHandler;", nullptr, $PRIVATE | $VOLATILE, $field(Thread, uncaughtExceptionHandler)},
	{"defaultUncaughtExceptionHandler", "Ljava/lang/Thread$UncaughtExceptionHandler;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Thread, defaultUncaughtExceptionHandler)},
	{"threadLocalRandomSeed", "J", nullptr, 0, $field(Thread, threadLocalRandomSeed), _Thread_FieldAnnotations_threadLocalRandomSeed},
	{"threadLocalRandomProbe", "I", nullptr, 0, $field(Thread, threadLocalRandomProbe), _Thread_FieldAnnotations_threadLocalRandomProbe},
	{"threadLocalRandomSecondarySeed", "I", nullptr, 0, $field(Thread, threadLocalRandomSecondarySeed), _Thread_FieldAnnotations_threadLocalRandomSecondarySeed},
	{"pendingAsyncException", "Ljava/lang/Throwable;", nullptr, 2, $field(Thread, pendingAsyncException)},
	{}
};

$MethodInfo _Thread_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JLjava/security/AccessControlContext;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Thread::*)($ThreadGroup*,$Runnable*,$String*,int64_t,$AccessControlContext*,bool)>(&Thread::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Thread::*)()>(&Thread::init$))},
	{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(Thread::*)($Runnable*)>(&Thread::init$))},
	{"<init>", "(Ljava/lang/Runnable;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(static_cast<void(Thread::*)($Runnable*,$AccessControlContext*)>(&Thread::init$))},
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(Thread::*)($ThreadGroup*,$Runnable*)>(&Thread::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Thread::*)($String*)>(&Thread::init$))},
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Thread::*)($ThreadGroup*,$String*)>(&Thread::init$))},
	{"<init>", "(Ljava/lang/Runnable;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Thread::*)($Runnable*,$String*)>(&Thread::init$))},
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Thread::*)($ThreadGroup*,$Runnable*,$String*)>(&Thread::init$))},
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V", nullptr, $PUBLIC, $method(static_cast<void(Thread::*)($ThreadGroup*,$Runnable*,$String*,int64_t)>(&Thread::init$))},
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V", nullptr, $PUBLIC, $method(static_cast<void(Thread::*)($ThreadGroup*,$Runnable*,$String*,int64_t,bool)>(&Thread::init$))},
	{"activeCount", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&Thread::activeCount))},
	{"auditSubclass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*)>(&Thread::auditSubclass))},
	{"blockedOn", "(Lsun/nio/ch/Interruptible;)V", nullptr, $STATIC, $method(static_cast<void(*)($Interruptible*)>(&Thread::blockedOn))},
	{"checkAccess", "()V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<void(Thread::*)()>(&Thread::checkAccess)), nullptr, nullptr, _Thread_MethodAnnotations_checkAccess14},
	{"clearInterruptEvent", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Thread::clearInterruptEvent))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.lang.CloneNotSupportedException"},
	{"countStackFrames", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Thread_MethodAnnotations_countStackFrames17},
	{"currentThread", "()Ljava/lang/Thread;", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<Thread*(*)()>(&Thread::currentThread)), nullptr, nullptr, _Thread_MethodAnnotations_currentThread18},
	{"dispatchUncaughtException", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(static_cast<void(Thread::*)($Throwable*)>(&Thread::dispatchUncaughtException))},
	{"dumpStack", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Thread::dumpStack))},
	{"dumpThreads", "([Ljava/lang/Thread;)[[Ljava/lang/StackTraceElement;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StackTraceElementArray2*(*)($ThreadArray*)>(&Thread::dumpThreads))},
	{"enumerate", "([Ljava/lang/Thread;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ThreadArray*)>(&Thread::enumerate))},
	{"exit", "()V", nullptr, $PRIVATE, $method(static_cast<void(Thread::*)()>(&Thread::exit))},
	{"getAllStackTraces", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Thread;[Ljava/lang/StackTraceElement;>;", $PUBLIC | $STATIC, $method(static_cast<$Map*(*)()>(&Thread::getAllStackTraces))},
	{"getContextClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Thread_MethodAnnotations_getContextClassLoader25},
	{"getDefaultUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Thread$UncaughtExceptionHandler*(*)()>(&Thread::getDefaultUncaughtExceptionHandler))},
	{"getId", "()J", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(Thread::*)()>(&Thread::getName))},
	{"getPriority", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Thread::*)()>(&Thread::getPriority))},
	{"getStackTrace", "()[Ljava/lang/StackTraceElement;", nullptr, $PUBLIC},
	{"getState", "()Ljava/lang/Thread$State;", nullptr, $PUBLIC},
	{"getThreadGroup", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ThreadGroup*(Thread::*)()>(&Thread::getThreadGroup))},
	{"getThreads", "()[Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$ThreadArray*(*)()>(&Thread::getThreads))},
	{"getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;", nullptr, $PUBLIC},
	{"holdsLock", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<bool(*)(Object$*)>(&Thread::holdsLock))},
	{"interrupt", "()V", nullptr, $PUBLIC},
	{"interrupt0", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Thread::*)()>(&Thread::interrupt0))},
	{"interrupted", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&Thread::interrupted))},
	{"isAlive", "()Z", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(static_cast<bool(Thread::*)()>(&Thread::isAlive))},
	{"isCCLOverridden", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*)>(&Thread::isCCLOverridden))},
	{"isDaemon", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Thread::*)()>(&Thread::isDaemon))},
	{"isInterrupted", "()Z", nullptr, $PUBLIC},
	{"join", "(J)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Thread::*)(int64_t)>(&Thread::join)), "java.lang.InterruptedException"},
	{"join", "(JI)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Thread::*)(int64_t,int32_t)>(&Thread::join)), "java.lang.InterruptedException"},
	{"join", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Thread::*)()>(&Thread::join)), "java.lang.InterruptedException"},
	{"nextThreadID", "()J", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<int64_t(*)()>(&Thread::nextThreadID))},
	{"nextThreadNum", "()I", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<int32_t(*)()>(&Thread::nextThreadNum))},
	{"onSpinWait", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Thread::onSpinWait)), nullptr, nullptr, _Thread_MethodAnnotations_onSpinWait48},
	{"processQueue", "(Ljava/lang/ref/ReferenceQueue;Ljava/util/concurrent/ConcurrentMap;)V", "(Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;Ljava/util/concurrent/ConcurrentMap<+Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;*>;)V", $STATIC, $method(static_cast<void(*)($ReferenceQueue*,$ConcurrentMap*)>(&Thread::processQueue))},
	{"registerNatives", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Thread::registerNatives))},
	{"resume", "()V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<void(Thread::*)()>(&Thread::resume)), nullptr, nullptr, _Thread_MethodAnnotations_resume51},
	{"resume0", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Thread::*)()>(&Thread::resume0))},
	{"run", "()V", nullptr, $PUBLIC},
	{"setContextClassLoader", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC},
	{"setDaemon", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Thread::*)(bool)>(&Thread::setDaemon))},
	{"setDefaultUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Thread$UncaughtExceptionHandler*)>(&Thread::setDefaultUncaughtExceptionHandler))},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Thread::*)($String*)>(&Thread::setName))},
	{"setNativeName", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Thread::*)($String*)>(&Thread::setNativeName))},
	{"setPriority", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Thread::*)(int32_t)>(&Thread::setPriority))},
	{"setPriority0", "(I)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Thread::*)(int32_t)>(&Thread::setPriority0))},
	{"setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V", nullptr, $PUBLIC},
	{"sleep", "(J)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&Thread::sleep)), "java.lang.InterruptedException"},
	{"sleep", "(JI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t,int32_t)>(&Thread::sleep)), "java.lang.InterruptedException"},
	{"start", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"start0", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Thread::*)()>(&Thread::start0))},
	{"stop", "()V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<void(Thread::*)()>(&Thread::stop)), nullptr, nullptr, _Thread_MethodAnnotations_stop66},
	{"stop0", "(Ljava/lang/Object;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Thread::*)(Object$*)>(&Thread::stop0))},
	{"suspend", "()V", nullptr, $PUBLIC | $FINAL | $DEPRECATED, $method(static_cast<void(Thread::*)()>(&Thread::suspend)), nullptr, nullptr, _Thread_MethodAnnotations_suspend68},
	{"suspend0", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(Thread::*)()>(&Thread::suspend0))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"yield", "()V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Thread::yield))},
	{}
};

#define _METHOD_INDEX_clearInterruptEvent 15
#define _METHOD_INDEX_currentThread 18
#define _METHOD_INDEX_dumpThreads 21
#define _METHOD_INDEX_getThreads 33
#define _METHOD_INDEX_holdsLock 35
#define _METHOD_INDEX_interrupt0 37
#define _METHOD_INDEX_isAlive 39
#define _METHOD_INDEX_registerNatives 50
#define _METHOD_INDEX_resume0 52
#define _METHOD_INDEX_setNativeName 58
#define _METHOD_INDEX_setPriority0 60
#define _METHOD_INDEX_sleep 62
#define _METHOD_INDEX_start0 65
#define _METHOD_INDEX_stop0 67
#define _METHOD_INDEX_suspend0 69
#define _METHOD_INDEX_yield 71

$InnerClassInfo _Thread_InnerClassesInfo_[] = {
	{"java.lang.Thread$WeakClassKey", "java.lang.Thread", "WeakClassKey", $STATIC},
	{"java.lang.Thread$UncaughtExceptionHandler", "java.lang.Thread", "UncaughtExceptionHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.lang.Thread$State", "java.lang.Thread", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.lang.Thread$Caches", "java.lang.Thread", "Caches", $PRIVATE | $STATIC},
	{"java.lang.Thread$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Thread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Thread",
	"java.lang.Object",
	"java.lang.Runnable",
	_Thread_FieldInfo_,
	_Thread_MethodInfo_,
	nullptr,
	nullptr,
	_Thread_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.Thread$WeakClassKey,java.lang.Thread$UncaughtExceptionHandler,java.lang.Thread$State,java.lang.Thread$Caches,java.lang.Thread$1"
};

$Object* allocate$Thread($Class* clazz) {
	return $of($alloc(Thread));
}

int32_t Thread::threadInitNumber = 0;
int64_t Thread::threadSeqNumber = 0;
$StackTraceElementArray* Thread::EMPTY_STACK_TRACE = nullptr;
$volatile($Thread$UncaughtExceptionHandler*) Thread::defaultUncaughtExceptionHandler = nullptr;

void Thread::registerNatives() {
}

int32_t Thread::nextThreadNum() {
	$load(Thread);
	$synchronized(class$) {
		return Thread::threadInitNumber++;
	}
}

int64_t Thread::nextThreadID() {
	$load(Thread);
	$synchronized(class$) {
		return ++Thread::threadSeqNumber;
	}
}

void Thread::blockedOn($Interruptible* b) {
	$var(Thread, me, Thread::currentThread());
	$synchronized(me->blockerLock) {
		$set(me, blocker, b);
	}
}

Thread* Thread::currentThread() {
	return Platform::JVM_CurrentThread();
}

void Thread::yield() {
	Platform::JVM_Yield();
}

void Thread::sleep(int64_t millis) {
	Platform::JVM_Sleep(millis);
}

void Thread::sleep(int64_t millis, int32_t nanos) {
	if (millis < 0) {
		$throwNew($IllegalArgumentException, "timeout value is negative"_s);
	}
	if (nanos < 0 || nanos > 0x000F423F) {
		$throwNew($IllegalArgumentException, "nanosecond timeout value out of range"_s);
	}
	if (nanos > 0 && millis < $Long::MAX_VALUE) {
		++millis;
	}
	sleep(millis);
}

void Thread::onSpinWait() {
}

void Thread::init$($ThreadGroup* g$renamed, $Runnable* target, $String* name, int64_t stackSize, $AccessControlContext* acc, bool inheritThreadLocals) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, g, g$renamed);
	$beforeCallerSensitive();
	this->daemon = false;
	this->stillborn = false;
	$set(this, threadLocals, nullptr);
	$set(this, inheritableThreadLocals, nullptr);
	$set(this, blockerLock, $new($Object));
	if (name == nullptr) {
		$throwNew($NullPointerException, "name cannot be null"_s);
	}
	$set(this, name, name);
	$var(Thread, parent, currentThread());
	$var($SecurityManager, security, $System::getSecurityManager());
	if (g == nullptr) {
		if (security != nullptr) {
			$assign(g, security->getThreadGroup());
		}
		if (g == nullptr) {
			$assign(g, parent->getThreadGroup());
		}
	}
	$nc(g)->checkAccess();
	if (security != nullptr) {
		if (isCCLOverridden($of(this)->getClass())) {
			$init($SecurityConstants);
			security->checkPermission($SecurityConstants::SUBCLASS_IMPLEMENTATION_PERMISSION);
		}
	}
	g->addUnstarted();
	$set(this, group, g);
	this->daemon = parent->isDaemon();
	this->priority = parent->getPriority();
	if (security == nullptr || isCCLOverridden($of(parent)->getClass())) {
		$set(this, contextClassLoader, parent->getContextClassLoader());
	} else {
		$set(this, contextClassLoader, parent->contextClassLoader);
	}
	$set(this, inheritedAccessControlContext, acc != nullptr ? acc : $AccessController::getContext());
	$set(this, target, target);
	setPriority(this->priority);
	if (inheritThreadLocals && parent->inheritableThreadLocals != nullptr) {
		$set(this, inheritableThreadLocals, $ThreadLocal::createInheritedMap(parent->inheritableThreadLocals));
	}
	this->stackSize = stackSize;
	this->tid = nextThreadID();
}

$Object* Thread::clone() {
	$throwNew($CloneNotSupportedException);
	$shouldNotReachHere();
}

void Thread::init$() {
	$useLocalCurrentObjectStackCache();
	Thread::init$(nullptr, nullptr, $$str({"Thread-"_s, $$str(nextThreadNum())}), 0);
}

void Thread::init$($Runnable* target) {
	$useLocalCurrentObjectStackCache();
	Thread::init$(nullptr, target, $$str({"Thread-"_s, $$str(nextThreadNum())}), 0);
}

void Thread::init$($Runnable* target, $AccessControlContext* acc) {
	$useLocalCurrentObjectStackCache();
	Thread::init$(nullptr, target, $$str({"Thread-"_s, $$str(nextThreadNum())}), 0, acc, false);
}

void Thread::init$($ThreadGroup* group, $Runnable* target) {
	$useLocalCurrentObjectStackCache();
	Thread::init$(group, target, $$str({"Thread-"_s, $$str(nextThreadNum())}), 0);
}

void Thread::init$($String* name) {
	Thread::init$(nullptr, nullptr, name, 0);
}

void Thread::init$($ThreadGroup* group, $String* name) {
	Thread::init$(group, nullptr, name, 0);
}

void Thread::init$($Runnable* target, $String* name) {
	Thread::init$(nullptr, target, name, 0);
}

void Thread::init$($ThreadGroup* group, $Runnable* target, $String* name) {
	Thread::init$(group, target, name, 0);
}

void Thread::init$($ThreadGroup* group, $Runnable* target, $String* name, int64_t stackSize) {
	Thread::init$(group, target, name, stackSize, nullptr, true);
}

void Thread::init$($ThreadGroup* group, $Runnable* target, $String* name, int64_t stackSize, bool inheritThreadLocals) {
	Thread::init$(group, target, name, stackSize, nullptr, inheritThreadLocals);
}

void Thread::start() {
	$synchronized(this) {
		if (this->threadStatus != 0) {
			$throwNew($IllegalThreadStateException);
		}
		$nc(this->group)->add(this);
		bool started = false;
		{
			$var($Throwable, var$0, nullptr);
			try {
				start0();
				started = true;
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				try {
					if (!started) {
						$nc(this->group)->threadStartFailed(this);
					}
				} catch ($Throwable& ignore) {
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void Thread::start0() {
	Platform::JVM_StartThread(this);
}

void Thread::run() {
	if (this->target != nullptr) {
		$nc(this->target)->run();
	}
}

void Thread::exit() {
	$init($TerminatingThreadLocal);
	if (this->threadLocals != nullptr && $nc($TerminatingThreadLocal::REGISTRY)->isPresent()) {
		$TerminatingThreadLocal::threadTerminated();
	}
	if (this->group != nullptr) {
		$nc(this->group)->threadTerminated(this);
		$set(this, group, nullptr);
	}
	$set(this, target, nullptr);
	$set(this, threadLocals, nullptr);
	$set(this, inheritableThreadLocals, nullptr);
	$set(this, inheritedAccessControlContext, nullptr);
	$set(this, blocker, nullptr);
	$set(this, uncaughtExceptionHandler, nullptr);
}

void Thread::stop() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		checkAccess();
		if (this != Thread::currentThread()) {
			$init($SecurityConstants);
			security->checkPermission($SecurityConstants::STOP_THREAD_PERMISSION);
		}
	}
	if (this->threadStatus != 0) {
		resume();
	}
	stop0($$new($ThreadDeath));
}

void Thread::interrupt() {
	if (this != Thread::currentThread()) {
		checkAccess();
		$synchronized(this->blockerLock) {
			$var($Interruptible, b, this->blocker);
			if (b != nullptr) {
				this->interrupted$ = true;
				interrupt0();
				b->interrupt(this);
				return;
			}
		}
	}
	this->interrupted$ = true;
	interrupt0();
}

bool Thread::interrupted() {
	$var(Thread, t, currentThread());
	bool interrupted = t->interrupted$;
	if (interrupted) {
		t->interrupted$ = false;
		clearInterruptEvent();
	}
	return interrupted;
}

bool Thread::isInterrupted() {
	return this->interrupted$;
}

bool Thread::isAlive() {
	return Platform::JVM_IsThreadAlive(this);
}

void Thread::suspend() {
	checkAccess();
	suspend0();
}

void Thread::resume() {
	checkAccess();
	resume0();
}

void Thread::setPriority(int32_t newPriority) {
	$var($ThreadGroup, g, nullptr);
	checkAccess();
	if (newPriority > Thread::MAX_PRIORITY || newPriority < Thread::MIN_PRIORITY) {
		$throwNew($IllegalArgumentException);
	}
	if (($assign(g, getThreadGroup())) != nullptr) {
		if (newPriority > $nc(g)->getMaxPriority()) {
			newPriority = g->getMaxPriority();
		}
		setPriority0(this->priority = newPriority);
	}
}

int32_t Thread::getPriority() {
	return this->priority;
}

void Thread::setName($String* name) {
	$synchronized(this) {
		checkAccess();
		if (name == nullptr) {
			$throwNew($NullPointerException, "name cannot be null"_s);
		}
		$set(this, name, name);
		if (this->threadStatus != 0) {
			setNativeName(name);
		}
	}
}

$String* Thread::getName() {
	return this->name;
}

$ThreadGroup* Thread::getThreadGroup() {
	return this->group;
}

int32_t Thread::activeCount() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(currentThread()))->getThreadGroup()))->activeCount();
}

int32_t Thread::enumerate($ThreadArray* tarray) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(currentThread()))->getThreadGroup()))->enumerate(tarray);
}

int32_t Thread::countStackFrames() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void Thread::join(int64_t millis) {
	$synchronized(this) {
		if (millis > 0) {
			if (isAlive()) {
				int64_t startTime = $System::nanoTime();
				int64_t delay = millis;
				bool var$0 = false;
				do {
					$of(this)->wait(delay);
					var$0 = isAlive();
				$init($TimeUnit);
				} while (var$0 && (delay = millis - $TimeUnit::NANOSECONDS->toMillis($System::nanoTime() - startTime)) > 0);
			}
		} else if (millis == 0) {
			while (isAlive()) {
				$of(this)->wait(0);
			}
		} else {
			$throwNew($IllegalArgumentException, "timeout value is negative"_s);
		}
	}
}

void Thread::join(int64_t millis, int32_t nanos) {
	$synchronized(this) {
		if (millis < 0) {
			$throwNew($IllegalArgumentException, "timeout value is negative"_s);
		}
		if (nanos < 0 || nanos > 0x000F423F) {
			$throwNew($IllegalArgumentException, "nanosecond timeout value out of range"_s);
		}
		if (nanos > 0 && millis < $Long::MAX_VALUE) {
			++millis;
		}
		join(millis);
	}
}

void Thread::join() {
	join(0);
}

void Thread::dumpStack() {
	$$new($Exception, "Stack trace"_s)->printStackTrace();
}

void Thread::setDaemon(bool on) {
	checkAccess();
	if (isAlive()) {
		$throwNew($IllegalThreadStateException);
	}
	this->daemon = on;
}

bool Thread::isDaemon() {
	return this->daemon;
}

void Thread::checkAccess() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkAccess(this);
	}
}

$String* Thread::toString() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, group, getThreadGroup());
	if (group != nullptr) {
		$var($String, var$3, $$str({"Thread["_s, $(getName()), ","_s}));
		$var($String, var$2, $$concat(var$3, $$str(getPriority())));
		$var($String, var$1, $$concat(var$2, ","));
		$var($String, var$0, $$concat(var$1, $(group->getName())));
		return $concat(var$0, "]");
	} else {
		$var($String, var$5, $$str({"Thread["_s, $(getName()), ","_s}));
		$var($String, var$4, $$concat(var$5, $$str(getPriority())));
		return $concat(var$4, ",]");
	}
}

$ClassLoader* Thread::getContextClassLoader() {
	if (this->contextClassLoader == nullptr) {
		return nullptr;
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$ClassLoader::checkClassLoaderPermission(this->contextClassLoader, $Reflection::getCallerClass());
	}
	return this->contextClassLoader;
}

void Thread::setContextClassLoader($ClassLoader* cl) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "setContextClassLoader"_s));
	}
	$set(this, contextClassLoader, cl);
}

bool Thread::holdsLock(Object$* obj) {
	return Platform::JVM_HoldsLock(obj);
}

$StackTraceElementArray* Thread::getStackTrace() {
	$useLocalCurrentObjectStackCache();
	if (this != Thread::currentThread()) {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			$init($SecurityConstants);
			security->checkPermission($SecurityConstants::GET_STACK_TRACE_PERMISSION);
		}
		if (!isAlive()) {
			return Thread::EMPTY_STACK_TRACE;
		}
		$var($StackTraceElementArray2, stackTraceArray, dumpThreads($$new($ThreadArray, {this})));
		$var($StackTraceElementArray, stackTrace, $nc(stackTraceArray)->get(0));
		if (stackTrace == nullptr) {
			$assign(stackTrace, Thread::EMPTY_STACK_TRACE);
		}
		return stackTrace;
	} else {
		return ($$new($Exception))->getStackTrace();
	}
}

$Map* Thread::getAllStackTraces() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($SecurityConstants);
		security->checkPermission($SecurityConstants::GET_STACK_TRACE_PERMISSION);
		security->checkPermission($SecurityConstants::MODIFY_THREADGROUP_PERMISSION);
	}
	$var($ThreadArray, threads, getThreads());
	$var($StackTraceElementArray2, traces, dumpThreads(threads));
	$var($Map, m, $new($HashMap, $nc(threads)->length));
	for (int32_t i = 0; i < $nc(threads)->length; ++i) {
		$var($StackTraceElementArray, stackTrace, $nc(traces)->get(i));
		if (stackTrace != nullptr) {
			m->put(threads->get(i), stackTrace);
		}
	}
	return m;
}

bool Thread::isCCLOverridden($Class* cl) {
	$useLocalCurrentObjectStackCache();
	if (cl == Thread::class$) {
		return false;
	}
	$init($Thread$Caches);
	processQueue($Thread$Caches::subclassAuditsQueue, $Thread$Caches::subclassAudits);
	$var($Thread$WeakClassKey, key, $new($Thread$WeakClassKey, cl, $Thread$Caches::subclassAuditsQueue));
	$var($Boolean, result, $cast($Boolean, $nc($Thread$Caches::subclassAudits)->get(key)));
	if (result == nullptr) {
		$assign(result, $Boolean::valueOf(auditSubclass(cl)));
		$nc($Thread$Caches::subclassAudits)->putIfAbsent(key, result);
	}
	return $nc(result)->booleanValue();
}

bool Thread::auditSubclass($Class* subcl) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Boolean, result, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Thread$1, subcl)))));
	return $nc(result)->booleanValue();
}

$StackTraceElementArray2* Thread::dumpThreads($ThreadArray* threads) {
	return Platform::JVM_DumpThreads(threads);
}

$ThreadArray* Thread::getThreads() {
	return Platform::JVM_GetAllThreads();
}

int64_t Thread::getId() {
	return this->tid;
}

$Thread$State* Thread::getState() {
	return $VM::toThreadState(this->threadStatus);
}

void Thread::setDefaultUncaughtExceptionHandler($Thread$UncaughtExceptionHandler* eh) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "setDefaultUncaughtExceptionHandler"_s));
	}
	$assignStatic(Thread::defaultUncaughtExceptionHandler, eh);
}

$Thread$UncaughtExceptionHandler* Thread::getDefaultUncaughtExceptionHandler() {
	return Thread::defaultUncaughtExceptionHandler;
}

$Thread$UncaughtExceptionHandler* Thread::getUncaughtExceptionHandler() {
	return this->uncaughtExceptionHandler != nullptr ? $cast($Thread$UncaughtExceptionHandler, this->uncaughtExceptionHandler) : static_cast<$Thread$UncaughtExceptionHandler*>(this->group);
}

void Thread::setUncaughtExceptionHandler($Thread$UncaughtExceptionHandler* eh) {
	checkAccess();
	$set(this, uncaughtExceptionHandler, eh);
}

void Thread::dispatchUncaughtException($Throwable* e) {
	$nc($(getUncaughtExceptionHandler()))->uncaughtException(this, e);
}

void Thread::processQueue($ReferenceQueue* queue, $ConcurrentMap* map) {
	$var($Reference, ref, nullptr);
	while (($assign(ref, $nc(queue)->poll())) != nullptr) {
		$nc(map)->remove(ref);
	}
}

void Thread::setPriority0(int32_t newPriority) {
	Platform::JVM_SetThreadPriority(this, newPriority);
}

void Thread::stop0(Object$* obj) {
	Platform::JVM_StopThread(this, obj);
}

void Thread::suspend0() {
	Platform::JVM_SuspendThread(this);
}

void Thread::resume0() {
	Platform::JVM_ResumeThread(this);
}

void Thread::interrupt0() {
	Platform::JVM_Interrupt(this);
}

void Thread::clearInterruptEvent() {
	Platform::clearInterruptEvent();
}

void Thread::setNativeName($String* name) {
	Platform::JVM_SetNativeThreadName(this, name);
}

void clinit$Thread($Class* class$) {
	{
		Thread::registerNatives();
	}
	$assignStatic(Thread::EMPTY_STACK_TRACE, $new($StackTraceElementArray, 0));
}

Thread::Thread() {
}

void Thread::park(bool isAbsolute, int64_t time) {
	Platform::park(this, isAbsolute, time);
}

void Thread::unpark() {
	Platform::unpark(this);
}

void Thread::init$(::java::lang::ThreadGroup* group) {
	Runnable::init$();
	this->stackSize = 0;
	threadSeqNumber++;
	this->tid = threadSeqNumber;
	this->daemon = false;
	this->stillborn = false;
	this->threadLocals = (ThreadLocal$ThreadLocalMap*)nullptr;
	this->inheritableThreadLocals = (ThreadLocal$ThreadLocalMap*)nullptr;
	$set(this, blockerLock, $alloc<Object>());
	Thread::threadInitNumber++;

	group->addUnstarted();
	$set(this, group, group);
	this->daemon = false;
	this->priority = NORM_PRIORITY;

	$set(this, inheritedAccessControlContext, $AccessController::getContext());
	setPriority0(this->priority);
}

$Class* Thread::load$($String* name, bool initialize) {
	$loadClass(Thread, name, initialize, &_Thread_ClassInfo_, clinit$Thread, allocate$Thread);
	return class$;
}

$Class* Thread::class$ = nullptr;

	} // lang
} // java