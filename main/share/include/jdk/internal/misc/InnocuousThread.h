#ifndef _jdk_internal_misc_InnocuousThread_h_
#define _jdk_internal_misc_InnocuousThread_h_
//$ class jdk.internal.misc.InnocuousThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

#pragma push_macro("INHERITEDACCESSCONTROLCONTEXT")
#undef INHERITEDACCESSCONTROLCONTEXT
#pragma push_macro("ACC")
#undef ACC
#pragma push_macro("CONTEXTCLASSLOADER")
#undef CONTEXTCLASSLOADER
#pragma push_macro("THREAD_LOCALS")
#undef THREAD_LOCALS
#pragma push_macro("INHERITABLE_THREAD_LOCALS")
#undef INHERITABLE_THREAD_LOCALS
#pragma push_macro("UNSAFE")
#undef UNSAFE
#pragma push_macro("INNOCUOUSTHREADGROUP")
#undef INNOCUOUSTHREADGROUP

namespace java {
	namespace lang {
		class ClassLoader;
		class Runnable;
		class Thread$UncaughtExceptionHandler;
		class ThreadGroup;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class $import InnocuousThread : public ::java::lang::Thread {
	$class(InnocuousThread, 0, ::java::lang::Thread)
public:
	InnocuousThread();
	void init$(::java::lang::ThreadGroup* group, ::java::lang::Runnable* target, $String* name, ::java::lang::ClassLoader* tccl);
	static $Thread* createThread($String* name, ::java::lang::Runnable* target, ::java::lang::ClassLoader* loader, int32_t priority);
	void eraseThreadLocals();
	static $String* newName();
	static $Thread* newSystemThread(::java::lang::Runnable* target);
	static $Thread* newSystemThread($String* name, ::java::lang::Runnable* target);
	static $Thread* newSystemThread($String* name, ::java::lang::Runnable* target, int32_t priority);
	static $Thread* newThread(::java::lang::Runnable* target);
	static $Thread* newThread($String* name, ::java::lang::Runnable* target);
	static $Thread* newThread($String* name, ::java::lang::Runnable* target, int32_t priority);
	virtual void run() override;
	virtual void setContextClassLoader(::java::lang::ClassLoader* cl) override;
	virtual void setUncaughtExceptionHandler(::java::lang::Thread$UncaughtExceptionHandler* x) override;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static int64_t THREAD_LOCALS;
	static int64_t INHERITABLE_THREAD_LOCALS;
	static ::java::lang::ThreadGroup* INNOCUOUSTHREADGROUP;
	static ::java::security::AccessControlContext* ACC;
	static int64_t INHERITEDACCESSCONTROLCONTEXT;
	static int64_t CONTEXTCLASSLOADER;
	static ::java::util::concurrent::atomic::AtomicInteger* threadNumber;
	$volatile(bool) hasRun = false;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("INHERITEDACCESSCONTROLCONTEXT")
#pragma pop_macro("ACC")
#pragma pop_macro("CONTEXTCLASSLOADER")
#pragma pop_macro("THREAD_LOCALS")
#pragma pop_macro("INHERITABLE_THREAD_LOCALS")
#pragma pop_macro("UNSAFE")
#pragma pop_macro("INNOCUOUSTHREADGROUP")

#endif // _jdk_internal_misc_InnocuousThread_h_