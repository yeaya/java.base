#ifndef _java_util_concurrent_CompletableFuture$MinimalStage_h_
#define _java_util_concurrent_CompletableFuture$MinimalStage_h_
//$ class java.util.concurrent.CompletableFuture$MinimalStage
//$ extends java.util.concurrent.CompletableFuture

#include <java/util/concurrent/CompletableFuture.h>

namespace java {
	namespace lang {
		class Runnable;
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletionStage;
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

class $import CompletableFuture$MinimalStage : public ::java::util::concurrent::CompletableFuture {
	$class(CompletableFuture$MinimalStage, $NO_CLASS_INIT, ::java::util::concurrent::CompletableFuture)
public:
	CompletableFuture$MinimalStage();
	void init$();
	void init$(Object$* r);
	virtual ::java::util::concurrent::CompletionStage* acceptEither(::java::util::concurrent::CompletionStage* other, ::java::util::function::Consumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* acceptEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Consumer* action, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* acceptEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Consumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* applyToEither(::java::util::concurrent::CompletionStage* other, ::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* applyToEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* applyToEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Function* fn) override;
	virtual bool cancel(bool mayInterruptIfRunning) override;
	virtual bool complete(Object$* value) override;
	virtual ::java::util::concurrent::CompletableFuture* completeAsync(::java::util::function::Supplier* supplier, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletableFuture* completeAsync(::java::util::function::Supplier* supplier) override;
	virtual bool completeExceptionally($Throwable* ex) override;
	virtual ::java::util::concurrent::CompletableFuture* completeOnTimeout(Object$* value, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::concurrent::CompletionStage* exceptionally(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* exceptionallyAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* exceptionallyAsync(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* exceptionallyCompose(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* exceptionallyComposeAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* exceptionallyComposeAsync(::java::util::function::Function* fn) override;
	virtual $Object* get() override;
	virtual $Object* get(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual $Object* getNow(Object$* valueIfAbsent) override;
	virtual int32_t getNumberOfDependents() override;
	virtual ::java::util::concurrent::CompletionStage* handle(::java::util::function::BiFunction* fn) override;
	virtual ::java::util::concurrent::CompletionStage* handleAsync(::java::util::function::BiFunction* fn, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* handleAsync(::java::util::function::BiFunction* fn) override;
	virtual bool isCancelled() override;
	virtual bool isCompletedExceptionally() override;
	virtual bool isDone() override;
	virtual $Object* join() override;
	virtual ::java::util::concurrent::CompletableFuture* newIncompleteFuture() override;
	virtual void obtrudeException($Throwable* ex) override;
	virtual void obtrudeValue(Object$* value) override;
	virtual ::java::util::concurrent::CompletableFuture* orTimeout(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::util::concurrent::CompletionStage* runAfterBoth(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletionStage* runAfterBothAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* runAfterBothAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletionStage* runAfterEither(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletionStage* runAfterEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* runAfterEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenAccept(::java::util::function::Consumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenAcceptAsync(::java::util::function::Consumer* action, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* thenAcceptAsync(::java::util::function::Consumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenAcceptBoth(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiConsumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenAcceptBothAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiConsumer* action, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* thenAcceptBothAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiConsumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenApply(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenApplyAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* thenApplyAsync(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenCombine(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiFunction* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenCombineAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiFunction* fn, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* thenCombineAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiFunction* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenCompose(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenComposeAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* thenComposeAsync(::java::util::function::Function* fn) override;
	virtual ::java::util::concurrent::CompletionStage* thenRun(::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletionStage* thenRunAsync(::java::lang::Runnable* action, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* thenRunAsync(::java::lang::Runnable* action) override;
	virtual ::java::util::concurrent::CompletableFuture* toCompletableFuture() override;
	virtual ::java::util::concurrent::CompletionStage* whenComplete(::java::util::function::BiConsumer* action) override;
	virtual ::java::util::concurrent::CompletionStage* whenCompleteAsync(::java::util::function::BiConsumer* action, ::java::util::concurrent::Executor* executor) override;
	virtual ::java::util::concurrent::CompletionStage* whenCompleteAsync(::java::util::function::BiConsumer* action) override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$MinimalStage_h_