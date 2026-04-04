#include <java/util/concurrent/CompletableFuture$UniCompletion.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/CompletableFuture$Completion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$Completion = ::java::util::concurrent::CompletableFuture$Completion;
using $Executor = ::java::util::concurrent::Executor;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$UniCompletion::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src) {
	$CompletableFuture$Completion::init$();
	$set(this, executor, executor);
	$set(this, dep, dep);
	$set(this, src, src);
}

bool CompletableFuture$UniCompletion::claim() {
	$var($Executor, e, this->executor);
	if (compareAndSetForkJoinTaskTag((int16_t)0, (int16_t)1)) {
		if (e == nullptr) {
			return true;
		}
		$set(this, executor, nullptr);
		$nc(e)->execute(this);
	}
	return false;
}

bool CompletableFuture$UniCompletion::isLive() {
	return this->dep != nullptr;
}

CompletableFuture$UniCompletion::CompletableFuture$UniCompletion() {
}

$Class* CompletableFuture$UniCompletion::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"executor", "Ljava/util/concurrent/Executor;", nullptr, 0, $field(CompletableFuture$UniCompletion, executor)},
		{"dep", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<TV;>;", 0, $field(CompletableFuture$UniCompletion, dep)},
		{"src", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<TT;>;", 0, $field(CompletableFuture$UniCompletion, src)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TV;>;Ljava/util/concurrent/CompletableFuture<TT;>;)V", 0, $method(CompletableFuture$UniCompletion, init$, void, $Executor*, $CompletableFuture*, $CompletableFuture*)},
		{"claim", "()Z", nullptr, $FINAL, $method(CompletableFuture$UniCompletion, claim, bool)},
		{"isLive", "()Z", nullptr, $FINAL, $virtualMethod(CompletableFuture$UniCompletion, isLive, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
		{"java.util.concurrent.CompletableFuture$Completion", "java.util.concurrent.CompletableFuture", "Completion", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.concurrent.CompletableFuture$UniCompletion",
		"java.util.concurrent.CompletableFuture$Completion",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$Completion;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$UniCompletion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CompletableFuture$UniCompletion));
	});
	return class$;
}

$Class* CompletableFuture$UniCompletion::class$ = nullptr;

		} // concurrent
	} // util
} // java