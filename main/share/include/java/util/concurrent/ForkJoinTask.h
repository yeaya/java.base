#ifndef _java_util_concurrent_ForkJoinTask_h_
#define _java_util_concurrent_ForkJoinTask_h_
//$ class java.util.concurrent.ForkJoinTask
//$ extends java.util.concurrent.Future
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/concurrent/Future.h>

#pragma push_macro("ABNORMAL")
#undef ABNORMAL
#pragma push_macro("AUX")
#undef AUX
#pragma push_macro("DONE")
#undef DONE
#pragma push_macro("SMASK")
#undef SMASK
#pragma push_macro("STATUS")
#undef STATUS
#pragma push_macro("THROWN")
#undef THROWN
#pragma push_macro("UNCOMPENSATE")
#undef UNCOMPENSATE

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class Runnable;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class ForkJoinPool;
			class ForkJoinTask$Aux;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ForkJoinTask : public ::java::util::concurrent::Future, public ::java::io::Serializable {
	$class(ForkJoinTask, 0, ::java::util::concurrent::Future, ::java::io::Serializable)
public:
	ForkJoinTask();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::java::util::concurrent::ForkJoinTask* adapt(::java::lang::Runnable* runnable);
	static ::java::util::concurrent::ForkJoinTask* adapt(::java::lang::Runnable* runnable, Object$* result);
	static ::java::util::concurrent::ForkJoinTask* adapt(::java::util::concurrent::Callable* callable);
	static ::java::util::concurrent::ForkJoinTask* adaptInterruptible(::java::util::concurrent::Callable* callable);
	int32_t awaitDone(::java::util::concurrent::ForkJoinPool* pool, bool ran, bool interruptible, bool timed, int64_t nanos);
	void awaitPoolInvoke(::java::util::concurrent::ForkJoinPool* pool);
	void awaitPoolInvoke(::java::util::concurrent::ForkJoinPool* pool, int64_t nanos);
	virtual bool cancel(bool mayInterruptIfRunning) override;
	static void cancelIgnoringExceptions(::java::util::concurrent::Future* t);
	bool casAux(::java::util::concurrent::ForkJoinTask$Aux* c, ::java::util::concurrent::ForkJoinTask$Aux* v);
	bool casStatus(int32_t c, int32_t v);
	bool compareAndSetForkJoinTaskTag(int16_t expect, int16_t update);
	virtual void complete(Object$* value);
	virtual void completeExceptionally($Throwable* ex);
	int32_t doExec();
	virtual bool exec() {return false;}
	::java::util::concurrent::ForkJoinTask* fork();
	virtual $Object* get() override;
	virtual $Object* get(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	int32_t getAndBitwiseOrStatus(int32_t v);
	$Throwable* getException(int32_t s);
	$Throwable* getException();
	$Object* getForPoolInvoke(::java::util::concurrent::ForkJoinPool* pool);
	$Object* getForPoolInvoke(::java::util::concurrent::ForkJoinPool* pool, int64_t nanos);
	int16_t getForkJoinTaskTag();
	static ::java::util::concurrent::ForkJoinPool* getPool();
	static int32_t getQueuedTaskCount();
	virtual $Object* getRawResult() {return nullptr;}
	static int32_t getSurplusQueuedTaskCount();
	$Throwable* getThrowableException();
	static void helpQuiesce();
	static bool inForkJoinPool();
	$Object* invoke();
	static void invokeAll(::java::util::concurrent::ForkJoinTask* t1, ::java::util::concurrent::ForkJoinTask* t2);
	static void invokeAll($Array<::java::util::concurrent::ForkJoinTask>* tasks);
	static ::java::util::Collection* invokeAll(::java::util::Collection* tasks);
	virtual bool isCancelled() override;
	bool isCompletedAbnormally();
	bool isCompletedNormally();
	virtual bool isDone() override;
	static bool isExceptionalStatus(int32_t s);
	$Object* join();
	$Object* joinForPoolInvoke(::java::util::concurrent::ForkJoinPool* pool);
	static ::java::util::concurrent::ForkJoinTask* peekNextLocalTask();
	static ::java::util::concurrent::ForkJoinTask* pollNextLocalTask();
	static ::java::util::concurrent::ForkJoinTask* pollSubmission();
	static ::java::util::concurrent::ForkJoinTask* pollTask();
	void quietlyComplete();
	void quietlyInvoke();
	void quietlyJoin();
	void readObject(::java::io::ObjectInputStream* s);
	virtual void reinitialize();
	void reportException(int32_t s);
	void reportExecutionException(int32_t s);
	static void rethrow($Throwable* ex);
	int32_t setDone();
	int16_t setForkJoinTaskTag(int16_t newValue);
	virtual void setRawResult(Object$* value) {}
	void signalWaiters();
	virtual $String* toString() override;
	int32_t trySetCancelled();
	virtual int32_t trySetException($Throwable* ex);
	int32_t trySetThrown($Throwable* ex);
	virtual bool tryUnfork();
	static void uncheckedThrow($Throwable* t);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t DONE = 0x80000000; // 1 << 31
	static const int32_t ABNORMAL = 65536; // 1 << 16
	static const int32_t THROWN = 131072; // 1 << 17
	static const int32_t SMASK = 0x0000FFFF;
	static const int32_t UNCOMPENSATE = 65536; // 1 << 16
	$volatile(int32_t) status = 0;
	$volatile(::java::util::concurrent::ForkJoinTask$Aux*) aux = nullptr;
	static ::java::lang::invoke::VarHandle* STATUS;
	static ::java::lang::invoke::VarHandle* AUX;
	static const int64_t serialVersionUID = (int64_t)0x94D6A336567902B1;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("ABNORMAL")
#pragma pop_macro("AUX")
#pragma pop_macro("DONE")
#pragma pop_macro("SMASK")
#pragma pop_macro("STATUS")
#pragma pop_macro("THROWN")
#pragma pop_macro("UNCOMPENSATE")

#endif // _java_util_concurrent_ForkJoinTask_h_