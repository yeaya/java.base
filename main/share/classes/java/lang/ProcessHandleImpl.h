#ifndef _java_lang_ProcessHandleImpl_h_
#define _java_lang_ProcessHandleImpl_h_
//$ class java.lang.ProcessHandleImpl
//$ extends java.lang.ProcessHandle

#include <java/lang/Array.h>
#include <java/lang/ProcessHandle.h>

#pragma push_macro("STARTTIME_ANY")
#undef STARTTIME_ANY
#pragma push_macro("STARTTIME_PROCESS_UNKNOWN")
#undef STARTTIME_PROCESS_UNKNOWN
#pragma push_macro("REAPER_DEFAULT_STACKSIZE")
#undef REAPER_DEFAULT_STACKSIZE
#pragma push_macro("NOT_A_CHILD")
#undef NOT_A_CHILD

namespace java {
	namespace lang {
		class Integer;
		class ProcessHandle$Info;
		class Runnable;
		class Thread;
		class ThreadGroup;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
			class ConcurrentMap;
			class Executor;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace lang {

class ProcessHandleImpl : public ::java::lang::ProcessHandle {
	$class(ProcessHandleImpl, 0, ::java::lang::ProcessHandle)
public:
	ProcessHandleImpl();
	void init$(int64_t pid, int64_t startTime);
	virtual ::java::util::stream::Stream* children() override;
	static ::java::util::stream::Stream* children(int64_t pid);
	virtual int32_t compareTo(::java::lang::ProcessHandle* other) override;
	virtual int32_t compareTo(Object$* other) override;
	static ::java::util::concurrent::CompletableFuture* completion(int64_t pid, bool shouldReap);
	static ::java::lang::ProcessHandleImpl* current();
	virtual ::java::util::stream::Stream* descendants() override;
	virtual bool destroy() override;
	static bool destroy0(int64_t pid, int64_t startTime, bool forcibly);
	virtual bool destroyForcibly() override;
	bool destroyProcess(bool force);
	virtual bool equals(Object$* obj) override;
	static ::java::util::Optional* get(int64_t pid);
	static int64_t getCurrentPid0();
	static ::java::lang::ProcessHandleImpl* getInternal(int64_t pid);
	static int32_t getProcessPids0(int64_t pid, $longs* pids, $longs* ppids, $longs* starttimes);
	virtual int32_t hashCode() override;
	virtual ::java::lang::ProcessHandle$Info* info() override;
	static void initNative();
	virtual bool isAlive() override;
	static int64_t isAlive0(int64_t pid);
	bool lambda$children$3(::java::lang::ProcessHandle* ph);
	static ::java::lang::ProcessHandle* lambda$children$4($longs* cpids, $longs* stimes, int32_t i);
	::java::lang::ProcessHandle* lambda$onExit$2(::java::lang::Integer* exitStatus, $Throwable* unusedThrowable);
	static $Thread* lambda$static$0(::java::lang::ThreadGroup* systemThreadGroup, int64_t stackSize, ::java::lang::Runnable* grimReaper);
	static ::java::util::concurrent::Executor* lambda$static$1();
	virtual ::java::util::concurrent::CompletableFuture* onExit() override;
	virtual ::java::util::Optional* parent() override;
	static int64_t parent0(int64_t pid, int64_t startTime);
	virtual int64_t pid() override;
	virtual bool supportsNormalTermination() override;
	static void swap($longs* array, int32_t x, int32_t y);
	virtual $String* toString() override;
	static int32_t waitForProcessExit0(int64_t pid, bool reapvalue);
	static int64_t REAPER_DEFAULT_STACKSIZE;
	static const int32_t NOT_A_CHILD = (-2);
	static ::java::lang::ProcessHandleImpl* current$;
	static ::java::util::concurrent::ConcurrentMap* completions;
	static ::java::util::concurrent::Executor* processReaperExecutor;
	int64_t pid$ = 0;
	int64_t startTime = 0;
	static const int64_t STARTTIME_ANY = (int64_t)0;
	static const int64_t STARTTIME_PROCESS_UNKNOWN = (-1);
};

	} // lang
} // java

#pragma pop_macro("STARTTIME_ANY")
#pragma pop_macro("STARTTIME_PROCESS_UNKNOWN")
#pragma pop_macro("REAPER_DEFAULT_STACKSIZE")
#pragma pop_macro("NOT_A_CHILD")

#endif // _java_lang_ProcessHandleImpl_h_