#ifndef _java_util_concurrent_CompletionStage_h_
#define _java_util_concurrent_CompletionStage_h_
//$ interface java.util.concurrent.CompletionStage
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Runnable;
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CompletableFuture;
			class Executor;
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
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletionStage : public ::java::lang::Object {
	$interface(CompletionStage, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::concurrent::CompletionStage* acceptEither(::java::util::concurrent::CompletionStage* other, ::java::util::function::Consumer* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* acceptEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Consumer* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* acceptEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Consumer* action, ::java::util::concurrent::Executor* executor) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* applyToEither(::java::util::concurrent::CompletionStage* other, ::java::util::function::Function* fn) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* applyToEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Function* fn) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* applyToEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* exceptionally(::java::util::function::Function* fn) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* exceptionallyAsync(::java::util::function::Function* fn);
	virtual ::java::util::concurrent::CompletionStage* exceptionallyAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor);
	virtual ::java::util::concurrent::CompletionStage* exceptionallyCompose(::java::util::function::Function* fn);
	virtual ::java::util::concurrent::CompletionStage* exceptionallyComposeAsync(::java::util::function::Function* fn);
	virtual ::java::util::concurrent::CompletionStage* exceptionallyComposeAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor);
	virtual ::java::util::concurrent::CompletionStage* handle(::java::util::function::BiFunction* fn) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* handleAsync(::java::util::function::BiFunction* fn) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* handleAsync(::java::util::function::BiFunction* fn, ::java::util::concurrent::Executor* executor) {return nullptr;}
	static $Object* lambda$exceptionallyAsync$0(::java::util::function::Function* fn, Object$* r1, $Throwable* ex1);
	::java::util::concurrent::CompletionStage* lambda$exceptionallyAsync$1(::java::util::function::Function* fn, Object$* r, $Throwable* ex);
	::java::util::concurrent::CompletionStage* lambda$exceptionallyAsync$3(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor, Object$* r, $Throwable* ex);
	::java::util::concurrent::CompletionStage* lambda$exceptionallyCompose$4(::java::util::function::Function* fn, Object$* r, $Throwable* ex);
	static ::java::util::concurrent::CompletionStage* lambda$exceptionallyComposeAsync$5(::java::util::function::Function* fn, Object$* r1, $Throwable* ex1);
	::java::util::concurrent::CompletionStage* lambda$exceptionallyComposeAsync$6(::java::util::function::Function* fn, Object$* r, $Throwable* ex);
	::java::util::concurrent::CompletionStage* lambda$exceptionallyComposeAsync$8(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor, Object$* r, $Throwable* ex);
	virtual ::java::util::concurrent::CompletionStage* runAfterBoth(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* runAfterBothAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* runAfterBothAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action, ::java::util::concurrent::Executor* executor) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* runAfterEither(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* runAfterEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* runAfterEitherAsync(::java::util::concurrent::CompletionStage* other, ::java::lang::Runnable* action, ::java::util::concurrent::Executor* executor) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenAccept(::java::util::function::Consumer* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenAcceptAsync(::java::util::function::Consumer* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenAcceptAsync(::java::util::function::Consumer* action, ::java::util::concurrent::Executor* executor) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenAcceptBoth(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiConsumer* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenAcceptBothAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiConsumer* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenAcceptBothAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiConsumer* action, ::java::util::concurrent::Executor* executor) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenApply(::java::util::function::Function* fn) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenApplyAsync(::java::util::function::Function* fn) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenApplyAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenCombine(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiFunction* fn) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenCombineAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiFunction* fn) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenCombineAsync(::java::util::concurrent::CompletionStage* other, ::java::util::function::BiFunction* fn, ::java::util::concurrent::Executor* executor) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenCompose(::java::util::function::Function* fn) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenComposeAsync(::java::util::function::Function* fn) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenComposeAsync(::java::util::function::Function* fn, ::java::util::concurrent::Executor* executor) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenRun(::java::lang::Runnable* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenRunAsync(::java::lang::Runnable* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* thenRunAsync(::java::lang::Runnable* action, ::java::util::concurrent::Executor* executor) {return nullptr;}
	virtual ::java::util::concurrent::CompletableFuture* toCompletableFuture() {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* whenComplete(::java::util::function::BiConsumer* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* whenCompleteAsync(::java::util::function::BiConsumer* action) {return nullptr;}
	virtual ::java::util::concurrent::CompletionStage* whenCompleteAsync(::java::util::function::BiConsumer* action, ::java::util::concurrent::Executor* executor) {return nullptr;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletionStage_h_