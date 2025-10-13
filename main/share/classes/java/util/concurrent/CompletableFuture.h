#ifndef _java_util_concurrent_CompletableFuture_h_
#define _java_util_concurrent_CompletableFuture_h_
//$ class java.util.concurrent.CompletableFuture
//$ extends java.util.concurrent.Future
//$ implements java.util.concurrent.CompletionStage

#include <java/lang/Array.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Future.h>

#pragma push_macro("ASYNC")
#undef ASYNC
#pragma push_macro("ASYNC_POOL")
#undef ASYNC_POOL
#pragma push_macro("NESTED")
#undef NESTED
#pragma push_macro("NEXT")
#undef NEXT
#pragma push_macro("NIL")
#undef NIL
#pragma push_macro("RESULT")
#undef RESULT
#pragma push_macro("STACK")
#undef STACK
#pragma push_macro("SYNC")
#undef SYNC
#pragma push_macro("USE_COMMON_POOL")
#undef USE_COMMON_POOL

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
		namespace concurrent {
			class CompletableFuture$AltResult;
			class CompletableFuture$BiAccept;
			class CompletableFuture$BiApply;
			class CompletableFuture$BiCompletion;
			class CompletableFuture$BiRun;
			class CompletableFuture$Completion;
			class CompletableFuture$MinimalStage;
			class CompletableFuture$UniExceptionally;
			class CompletableFuture$UniHandle;
			class CompletableFuture$UniWhenComplete;
			class Executor;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
			class Consumer;
			class Function;
			class Supplier;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture : public ::java::util::concurrent::Future, public ::java::util::concurrent::CompletionStage {
	$class(CompletableFuture, 0, ::java::util::concurrent::Future, ::java::util::concurrent::CompletionStage)
public:
	CompletableFuture();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(Object$* r);
	virtual ::java::util::concurrent::CompletionStage* acceptEither(::java::util::concurrent::CompletionStage* other, ::java::util::function::Consumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* acceptEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Consumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* acceptEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Consumer* action, ::java::util::concurrent::Executor* executor) override;
	static ::java::util::concurrent::CompletableFuture* allOf($Array<::java::util::concurrent::CompletableFuture>* cfs);
	static ::java::util::concurrent::CompletableFuture* andTree($Array<::java::util::concurrent::CompletableFuture>* cfs, int32_t lo, int32_t hi);
	static ::java::util::concurrent::CompletableFuture* anyOf($Array<::java::util::concurrent::CompletableFuture>* cfs);
	virtual ::java::util::concurrent::CompletionStage* applyToEither(::java::util::concurrent::CompletionStage* other, ::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* applyToEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* applyToEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) override;
	static ::java::util::concurrent::CompletableFuture* asyncRunStage(::java::util::concurrent::Executor* e, ::java::lang::Runnable* f);
	static ::java::util::concurrent::CompletableFuture* asyncSupplyStage(::java::util::concurrent::Executor* e, ::java::util::function::Supplier* f);
	bool biAccept(Object$* r, Object$* s, ::java::util::function::BiConsumer* f, ::java::util::concurrent::CompletableFuture$BiAccept* c);
	::java::util::concurrent::CompletableFuture* biAcceptStage(::java::util::concurrent::Executor* e, ::java::util::concurrent::CompletionStage* o, ::java::util::function::BiConsumer* f);
	bool biApply(Object$* r, Object$* s, ::java::util::function::BiFunction* f, ::java::util::concurrent::CompletableFuture$BiApply* c);
	::java::util::concurrent::CompletableFuture* biApplyStage(::java::util::concurrent::Executor* e, ::java::util::concurrent::CompletionStage* o, ::java::util::function::BiFunction* f);
	bool biRun(Object$* r, Object$* s, ::java::lang::Runnable* f, ::java::util::concurrent::CompletableFuture$BiRun* c);
	::java::util::concurrent::CompletableFuture* biRunStage(::java::util::concurrent::Executor* e, ::java::util::concurrent::CompletionStage* o, ::java::lang::Runnable* f);
	void bipush(::java::util::concurrent::CompletableFuture* b, ::java::util::concurrent::CompletableFuture$BiCompletion* c);
	virtual bool cancel(bool mayInterruptIfRunning) override;
	void cleanStack();
	virtual bool complete(Object$* value);
	virtual ::java::util::concurrent::CompletableFuture* completeAsync(::java::util::function::Supplier* supplier, ::java::util::concurrent::Executor* executor);
	virtual ::java::util::concurrent::CompletableFuture* completeAsync(::java::util::function::Supplier* supplier);
	virtual bool completeExceptionally($Throwable* ex);
	bool completeNull();
	virtual ::java::util::concurrent::CompletableFuture* completeOnTimeout(Object$* value, int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	bool completeRelay(Object$* r);
	bool completeThrowable($Throwable* x);
	bool completeThrowable($Throwable* x, Object$* r);
	bool completeValue(Object$* t);
	static ::java::util::concurrent::CompletableFuture* completedFuture(Object$* value);
	static ::java::util::concurrent::CompletionStage* completedStage(Object$* value);
	virtual ::java::util::concurrent::CompletableFuture* copy();
	virtual ::java::util::concurrent::Executor* defaultExecutor();
	static ::java::util::concurrent::Executor* delayedExecutor(int64_t delay, ::java::util::concurrent::TimeUnit* unit, ::java::util::concurrent::Executor* executor);
	static ::java::util::concurrent::Executor* delayedExecutor(int64_t delay, ::java::util::concurrent::TimeUnit* unit);
	virtual $Object* encodeOutcome(Object$* t, $Throwable* x);
	static $Object* encodeRelay(Object$* r);
	static ::java::util::concurrent::CompletableFuture$AltResult* encodeThrowable($Throwable* x);
	static $Object* encodeThrowable($Throwable* x, Object$* r);
	$Object* encodeValue(Object$* t);
	virtual ::java::util::concurrent::CompletionStage* exceptionally(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* exceptionallyAsync(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* exceptionallyAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* exceptionallyCompose(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* exceptionallyComposeAsync(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* exceptionallyComposeAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) override;
	static ::java::util::concurrent::CompletableFuture* failedFuture($Throwable* ex);
	static ::java::util::concurrent::CompletionStage* failedStage($Throwable* ex);
	virtual $Object* get() override;
	virtual $Object* get(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* getNow(Object$* valueIfAbsent);
	virtual int32_t getNumberOfDependents();
	virtual ::java::util::concurrent::CompletionStage* handle(::java::util::function::BiFunction* fn) override;
	virtual ::java::util::concurrent::CompletionStage* handleAsync(::java::util::function::BiFunction* fn) override;
	virtual ::java::util::concurrent::CompletionStage* handleAsync(::java::util::function::BiFunction* fn, ::java::util::concurrent::Executor* executor) override;
	bool internalComplete(Object$* r);
	virtual bool isCancelled() override;
	virtual bool isCompletedExceptionally();
	virtual bool isDone() override;
	virtual $Object* join();
	virtual ::java::util::concurrent::CompletionStage* minimalCompletionStage();
	virtual ::java::util::concurrent::CompletableFuture* newIncompleteFuture();
	virtual void obtrudeException($Throwable* ex);
	virtual void obtrudeValue(Object$* value);
	::java::util::concurrent::CompletableFuture* orAcceptStage(::java::util::concurrent::Executor* e, ::java::util::concurrent::CompletionStage* o, ::java::util::function::Consumer* f);
	::java::util::concurrent::CompletableFuture* orApplyStage(::java::util::concurrent::Executor* e, ::java::util::concurrent::CompletionStage* o, ::java::util::function::Function* f);
	::java::util::concurrent::CompletableFuture* orRunStage(::java::util::concurrent::Executor* e, ::java::util::concurrent::CompletionStage* o, ::java::lang::Runnable* f);
	virtual ::java::util::concurrent::CompletableFuture* orTimeout(int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	void orpush(::java::util::concurrent::CompletableFuture* b, ::java::util::concurrent::CompletableFuture$BiCompletion* c);
	void postComplete();
	::java::util::concurrent::CompletableFuture* postFire(::java::util::concurrent::CompletableFuture* a, int32_t mode);
	::java::util::concurrent::CompletableFuture* postFire(::java::util::concurrent::CompletableFuture* a, ::java::util::concurrent::CompletableFuture* b, int32_t mode);
	void pushStack(::java::util::concurrent::CompletableFuture$Completion* c);
	static $Object* reportGet(Object$* r);
	static $Object* reportJoin(Object$* r);
	virtual ::java::util::concurrent::CompletionStage* runAfterBoth(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletionStage* runAfterBothAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletionStage* runAfterBothAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* runAfterEither(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletionStage* runAfterEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletionStage* runAfterEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action, ::java::util::concurrent::Executor* executor) override;
	static ::java::util::concurrent::CompletableFuture* runAsync(::java::lang::Runnable* runnable);
	static ::java::util::concurrent::CompletableFuture* runAsync(::java::lang::Runnable* runnable, ::java::util::concurrent::Executor* executor);
	static ::java::util::concurrent::Executor* screenExecutor(::java::util::concurrent::Executor* e);
	static ::java::util::concurrent::CompletableFuture* supplyAsync(::java::util::function::Supplier* supplier);
	static ::java::util::concurrent::CompletableFuture* supplyAsync(::java::util::function::Supplier* supplier, ::java::util::concurrent::Executor* executor);
	virtual ::java::util::concurrent::CompletionStage* thenAccept(::java::util::function::Consumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenAcceptAsync(::java::util::function::Consumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenAcceptAsync(::java::util::function::Consumer* action, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* thenAcceptBoth(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiConsumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenAcceptBothAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiConsumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenAcceptBothAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiConsumer* action, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* thenApply(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenApplyAsync(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenApplyAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* thenCombine(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiFunction* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenCombineAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiFunction* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenCombineAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiFunction* fn, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* thenCompose(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenComposeAsync(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenComposeAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* thenRun(::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenRunAsync(::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenRunAsync(::java::lang::Runnable* action, ::java::util::concurrent::Executor* executor) override;
	$Object* timedGet(int64_t nanos);
	virtual ::java::util::concurrent::CompletableFuture* toCompletableFuture() override;
	virtual $String* toString() override;
	bool tryPushStack(::java::util::concurrent::CompletableFuture$Completion* c);
	::java::util::concurrent::CompletableFuture* uniAcceptNow(Object$* r, ::java::util::concurrent::Executor* e, ::java::util::function::Consumer* f);
	::java::util::concurrent::CompletableFuture* uniAcceptStage(::java::util::concurrent::Executor* e, ::java::util::function::Consumer* f);
	::java::util::concurrent::CompletableFuture* uniApplyNow(Object$* r, ::java::util::concurrent::Executor* e, ::java::util::function::Function* f);
	::java::util::concurrent::CompletableFuture* uniApplyStage(::java::util::concurrent::Executor* e, ::java::util::function::Function* f);
	::java::util::concurrent::CompletableFuture$MinimalStage* uniAsMinimalStage();
	::java::util::concurrent::CompletableFuture* uniComposeExceptionallyStage(::java::util::concurrent::Executor* e, ::java::util::function::Function* f);
	::java::util::concurrent::CompletableFuture* uniComposeStage(::java::util::concurrent::Executor* e, ::java::util::function::Function* f);
	static ::java::util::concurrent::CompletableFuture* uniCopyStage(::java::util::concurrent::CompletableFuture* src);
	bool uniExceptionally(Object$* r, ::java::util::function::Function* f, ::java::util::concurrent::CompletableFuture$UniExceptionally* c);
	::java::util::concurrent::CompletableFuture* uniExceptionallyStage(::java::util::concurrent::Executor* e, ::java::util::function::Function* f);
	bool uniHandle(Object$* r, ::java::util::function::BiFunction* f, ::java::util::concurrent::CompletableFuture$UniHandle* c);
	::java::util::concurrent::CompletableFuture* uniHandleStage(::java::util::concurrent::Executor* e, ::java::util::function::BiFunction* f);
	::java::util::concurrent::CompletableFuture* uniRunNow(Object$* r, ::java::util::concurrent::Executor* e, ::java::lang::Runnable* f);
	::java::util::concurrent::CompletableFuture* uniRunStage(::java::util::concurrent::Executor* e, ::java::lang::Runnable* f);
	bool uniWhenComplete(Object$* r, ::java::util::function::BiConsumer* f, ::java::util::concurrent::CompletableFuture$UniWhenComplete* c);
	::java::util::concurrent::CompletableFuture* uniWhenCompleteStage(::java::util::concurrent::Executor* e, ::java::util::function::BiConsumer* f);
	void unipush(::java::util::concurrent::CompletableFuture$Completion* c);
	$Object* waitingGet(bool interruptible);
	virtual ::java::util::concurrent::CompletionStage* whenComplete(::java::util::function::BiConsumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* whenCompleteAsync(::java::util::function::BiConsumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* whenCompleteAsync(::java::util::function::BiConsumer* action, ::java::util::concurrent::Executor* executor) override;
	$volatile($Object*) result = nullptr;
	$volatile(::java::util::concurrent::CompletableFuture$Completion*) stack = nullptr;
	static ::java::util::concurrent::CompletableFuture$AltResult* NIL;
	static bool USE_COMMON_POOL;
	static ::java::util::concurrent::Executor* ASYNC_POOL;
	static const int32_t SYNC = 0;
	static const int32_t ASYNC = 1;
	static const int32_t NESTED = (-1);
	static ::java::lang::invoke::VarHandle* RESULT;
	static ::java::lang::invoke::VarHandle* STACK;
	static ::java::lang::invoke::VarHandle* NEXT;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("ASYNC")
#pragma pop_macro("ASYNC_POOL")
#pragma pop_macro("NESTED")
#pragma pop_macro("NEXT")
#pragma pop_macro("NIL")
#pragma pop_macro("RESULT")
#pragma pop_macro("STACK")
#pragma pop_macro("SYNC")
#pragma pop_macro("USE_COMMON_POOL")

#endif // _java_util_concurrent_CompletableFuture_h_