#include <java/util/concurrent/CompletableFuture$UniExceptionally.h>
#include <java/util/concurrent/CompletableFuture$UniCompletion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$UniExceptionally::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $Function* fn) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$UniExceptionally::tryFire(int32_t mode) {
	$useLocalObjectStack();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($Object, r, nullptr);
	$var($Function, f, nullptr);
	bool var$1 = ($assign(a, this->src)) == nullptr;
	bool var$0 = var$1 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr;
	if (var$0 || !$nc(d)->uniExceptionally(r, f, mode > 0 ? (CompletableFuture$UniExceptionally*)nullptr : this)) {
		return nullptr;
	}
	$set(this, src, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return $nc(d)->postFire(a, mode);
}

CompletableFuture$UniExceptionally::CompletableFuture$UniExceptionally() {
}

$Class* CompletableFuture$UniExceptionally::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fn", "Ljava/util/function/Function;", "Ljava/util/function/Function<-Ljava/lang/Throwable;+TT;>;", 0, $field(CompletableFuture$UniExceptionally, fn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Function;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/function/Function<-Ljava/lang/Throwable;+TT;>;)V", 0, $method(CompletableFuture$UniExceptionally, init$, void, $Executor*, $CompletableFuture*, $CompletableFuture*, $Function*)},
		{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<TT;>;", $FINAL, $virtualMethod(CompletableFuture$UniExceptionally, tryFire, $CompletableFuture*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$UniExceptionally", "java.util.concurrent.CompletableFuture", "UniExceptionally", $STATIC | $FINAL},
		{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$UniExceptionally",
		"java.util.concurrent.CompletableFuture$UniCompletion",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$UniExceptionally, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CompletableFuture$UniExceptionally));
	});
	return class$;
}

$Class* CompletableFuture$UniExceptionally::class$ = nullptr;

		} // concurrent
	} // util
} // java