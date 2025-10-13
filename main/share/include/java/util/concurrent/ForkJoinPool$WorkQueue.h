#ifndef _java_util_concurrent_ForkJoinPool$WorkQueue_h_
#define _java_util_concurrent_ForkJoinPool$WorkQueue_h_
//$ class java.util.concurrent.ForkJoinPool$WorkQueue
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BASE")
#undef BASE
#pragma push_macro("INNOCUOUS_ACC")
#undef INNOCUOUS_ACC
#pragma push_macro("QA")
#undef QA
#pragma push_macro("SOURCE")
#undef SOURCE

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
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
		namespace concurrent {
			class ForkJoinPool;
			class ForkJoinPool$ManagedBlocker;
			class ForkJoinTask;
			class ForkJoinWorkerThread;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ForkJoinPool$WorkQueue : public ::java::lang::Object {
	$class(ForkJoinPool$WorkQueue, 0, ::java::lang::Object)
public:
	ForkJoinPool$WorkQueue();
	void init$(::java::util::concurrent::ForkJoinWorkerThread* owner, bool isInnocuous);
	void init$(int32_t config);
	static bool casSlotToNull($Array<::java::util::concurrent::ForkJoinTask>* a, int32_t i, ::java::util::concurrent::ForkJoinTask* c);
	bool externalTryUnpush(::java::util::concurrent::ForkJoinTask* task);
	static ::java::util::concurrent::ForkJoinTask* getAndClearSlot($Array<::java::util::concurrent::ForkJoinTask>* a, int32_t i);
	int32_t getPoolIndex();
	static ::java::util::concurrent::ForkJoinTask* getSlot($Array<::java::util::concurrent::ForkJoinTask>* a, int32_t i);
	void growArray();
	void helpAsyncBlocker(::java::util::concurrent::ForkJoinPool$ManagedBlocker* blocker);
	int32_t helpComplete(::java::util::concurrent::ForkJoinTask* task, bool owned, int32_t limit);
	void initializeInnocuousWorker();
	bool isApparentlyUnblocked();
	bool isEmpty();
	bool lockedPush(::java::util::concurrent::ForkJoinTask* task);
	::java::util::concurrent::ForkJoinTask* nextLocalTask(int32_t cfg);
	::java::util::concurrent::ForkJoinTask* nextLocalTask();
	::java::util::concurrent::ForkJoinTask* peek();
	::java::util::concurrent::ForkJoinTask* pop();
	void push(::java::util::concurrent::ForkJoinTask* task, ::java::util::concurrent::ForkJoinPool* pool);
	int32_t queueSize();
	void setBaseOpaque(int32_t b);
	static void setSlotVolatile($Array<::java::util::concurrent::ForkJoinTask>* a, int32_t i, ::java::util::concurrent::ForkJoinTask* v);
	void topLevelExec(::java::util::concurrent::ForkJoinTask* task, ::java::util::concurrent::ForkJoinPool$WorkQueue* q);
	bool tryLock();
	::java::util::concurrent::ForkJoinTask* tryPoll();
	bool tryRemove(::java::util::concurrent::ForkJoinTask* task, bool owned);
	bool tryUnpush(::java::util::concurrent::ForkJoinTask* task);
	$volatile(int32_t) phase = 0;
	int32_t stackPred = 0;
	int32_t config = 0;
	int32_t base = 0;
	$Array<::java::util::concurrent::ForkJoinTask>* array = nullptr;
	::java::util::concurrent::ForkJoinWorkerThread* owner = nullptr;
	int32_t top = 0;
	$volatile(int32_t) source = 0;
	int32_t nsteals = 0;
	static ::java::lang::invoke::VarHandle* QA;
	static ::java::lang::invoke::VarHandle* SOURCE;
	static ::java::lang::invoke::VarHandle* BASE;
	static ::java::security::AccessControlContext* INNOCUOUS_ACC;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("BASE")
#pragma pop_macro("INNOCUOUS_ACC")
#pragma pop_macro("QA")
#pragma pop_macro("SOURCE")

#endif // _java_util_concurrent_ForkJoinPool$WorkQueue_h_