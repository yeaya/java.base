#ifndef _java_lang_Thread_h_
#define _java_lang_Thread_h_
//$ class java.lang.Thread
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("EMPTY_STACK_TRACE")
#undef EMPTY_STACK_TRACE
#pragma push_macro("MAX_PRIORITY")
#undef MAX_PRIORITY
#pragma push_macro("MIN_PRIORITY")
#undef MIN_PRIORITY
#pragma push_macro("NORM_PRIORITY")
#undef NORM_PRIORITY

namespace java {
	namespace lang {
		class ClassLoader;
		class StackTraceElement;
		class Thread$State;
		class Thread$UncaughtExceptionHandler;
		class ThreadGroup;
		class ThreadLocal$ThreadLocalMap;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class Interruptible;
		}
	}
}

namespace java {
	namespace lang {

class $export Thread : public ::java::lang::Runnable {
	$class(Thread, $PRELOAD | $PREINIT, ::java::lang::Runnable)
public:
	Thread();
	void init$(::java::lang::ThreadGroup* g, ::java::lang::Runnable* target, $String* name, int64_t stackSize, ::java::security::AccessControlContext* acc, bool inheritThreadLocals);
	void init$();
	void init$(::java::lang::Runnable* target);
	void init$(::java::lang::Runnable* target, ::java::security::AccessControlContext* acc);
	void init$(::java::lang::ThreadGroup* group, ::java::lang::Runnable* target);
	void init$($String* name);
	void init$(::java::lang::ThreadGroup* group, $String* name);
	void init$(::java::lang::Runnable* target, $String* name);
	void init$(::java::lang::ThreadGroup* group, ::java::lang::Runnable* target, $String* name);
	void init$(::java::lang::ThreadGroup* group, ::java::lang::Runnable* target, $String* name, int64_t stackSize);
	void init$(::java::lang::ThreadGroup* group, ::java::lang::Runnable* target, $String* name, int64_t stackSize, bool inheritThreadLocals);
	static int32_t activeCount();
	static bool auditSubclass($Class* subcl);
	static void blockedOn(::sun::nio::ch::Interruptible* b);
	void checkAccess();
	static void clearInterruptEvent();
	virtual $Object* clone() override;
	virtual int32_t countStackFrames();
	static $Thread* currentThread();
	void dispatchUncaughtException($Throwable* e);
	static void dumpStack();
	static $Array<::java::lang::StackTraceElement, 2>* dumpThreads($ThreadArray* threads);
	static int32_t enumerate($ThreadArray* tarray);
	void exit();
	static ::java::util::Map* getAllStackTraces();
	virtual ::java::lang::ClassLoader* getContextClassLoader();
	static ::java::lang::Thread$UncaughtExceptionHandler* getDefaultUncaughtExceptionHandler();
	virtual int64_t getId();
	$String* getName();
	int32_t getPriority();
	virtual $Array<::java::lang::StackTraceElement>* getStackTrace();
	virtual ::java::lang::Thread$State* getState();
	::java::lang::ThreadGroup* getThreadGroup();
	static $ThreadArray* getThreads();
	virtual ::java::lang::Thread$UncaughtExceptionHandler* getUncaughtExceptionHandler();
	static bool holdsLock(Object$* obj);
	virtual void interrupt();
	void interrupt0();
	static bool interrupted();
	bool isAlive();
	static bool isCCLOverridden($Class* cl);
	bool isDaemon();
	virtual bool isInterrupted();
	void join(int64_t millis);
	void join(int64_t millis, int32_t nanos);
	void join();
	static int64_t nextThreadID();
	static int32_t nextThreadNum();
	static void onSpinWait();
	static void processQueue(::java::lang::ref::ReferenceQueue* queue, ::java::util::concurrent::ConcurrentMap* map);
	static void registerNatives();
	void resume();
	void resume0();
	virtual void run() override;
	virtual void setContextClassLoader(::java::lang::ClassLoader* cl);
	void setDaemon(bool on);
	static void setDefaultUncaughtExceptionHandler(::java::lang::Thread$UncaughtExceptionHandler* eh);
	void setName($String* name);
	void setNativeName($String* name);
	void setPriority(int32_t newPriority);
	void setPriority0(int32_t newPriority);
	virtual void setUncaughtExceptionHandler(::java::lang::Thread$UncaughtExceptionHandler* eh);
	static void sleep(int64_t millis);
	static void sleep(int64_t millis, int32_t nanos);
	virtual void start();
	void start0();
	void stop();
	void stop0(Object$* o);
	void suspend();
	void suspend0();
	virtual $String* toString() override;
	static void yield();
	$volatile($String*) name = nullptr;
	int32_t priority = 0;
	bool daemon = false;
	$volatile(bool) interrupted$ = false;
	bool stillborn = false;
	int64_t eetop = 0;
	::java::lang::Runnable* target = nullptr;
	::java::lang::ThreadGroup* group = nullptr;
	::java::lang::ClassLoader* contextClassLoader = nullptr;
	::java::security::AccessControlContext* inheritedAccessControlContext = nullptr;
	static int32_t threadInitNumber;
	::java::lang::ThreadLocal$ThreadLocalMap* threadLocals = nullptr;
	::java::lang::ThreadLocal$ThreadLocalMap* inheritableThreadLocals = nullptr;
	int64_t stackSize = 0;
	int64_t tid = 0;
	static int64_t threadSeqNumber;
	$volatile(int32_t) threadStatus = 0;
	$volatile($Object*) parkBlocker = nullptr;
	$volatile(::sun::nio::ch::Interruptible*) blocker = nullptr;
	$Object* blockerLock = nullptr;
	static const int32_t MIN_PRIORITY = 1;
	static const int32_t NORM_PRIORITY = 5;
	static const int32_t MAX_PRIORITY = 10;
	static $Array<::java::lang::StackTraceElement>* EMPTY_STACK_TRACE;
	$volatile(::java::lang::Thread$UncaughtExceptionHandler*) uncaughtExceptionHandler = nullptr;
	static $volatile(::java::lang::Thread$UncaughtExceptionHandler*) defaultUncaughtExceptionHandler;
	int64_t threadLocalRandomSeed = 0;
	int32_t threadLocalRandomProbe = 0;
	int32_t threadLocalRandomSecondarySeed = 0;
	void init$(::java::lang::ThreadGroup* group);
	void park(bool isAbsolute, int64_t time);
	void unpark();

	$volatile(::java::lang::Throwable*) pendingAsyncException = nullptr;
};

	} // lang
} // java

#pragma pop_macro("EMPTY_STACK_TRACE")
#pragma pop_macro("MAX_PRIORITY")
#pragma pop_macro("MIN_PRIORITY")
#pragma pop_macro("NORM_PRIORITY")

#endif // _java_lang_Thread_h_