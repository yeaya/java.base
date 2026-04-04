#include <java/util/concurrent/CompletableFuture$UniRelay.h>
#include <java/util/concurrent/CompletableFuture$UniCompletion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$UniRelay::init$($CompletableFuture* dep, $CompletableFuture* src) {
	$CompletableFuture$UniCompletion::init$(nullptr, dep, src);
}

$CompletableFuture* CompletableFuture$UniRelay::tryFire(int32_t mode) {
	$useLocalObjectStack();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($Object, r, nullptr);
	bool var$0 = ($assign(a, this->src)) == nullptr;
	if (var$0 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(d, this->dep)) == nullptr) {
		return nullptr;
	}
	if ($nc(d)->result == nullptr) {
		d->completeRelay(r);
	}
	$set(this, src, nullptr);
	$set(this, dep, nullptr);
	return d->postFire(a, mode);
}

CompletableFuture$UniRelay::CompletableFuture$UniRelay() {
}

$Class* CompletableFuture$UniRelay::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;)V", "(Ljava/util/concurrent/CompletableFuture<TU;>;Ljava/util/concurrent/CompletableFuture<TT;>;)V", 0, $method(CompletableFuture$UniRelay, init$, void, $CompletableFuture*, $CompletableFuture*)},
		{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<TU;>;", $FINAL, $virtualMethod(CompletableFuture$UniRelay, tryFire, $CompletableFuture*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$UniRelay", "java.util.concurrent.CompletableFuture", "UniRelay", $STATIC | $FINAL},
		{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$UniRelay",
		"java.util.concurrent.CompletableFuture$UniCompletion",
		nullptr,
		nullptr,
		methodInfos$$,
		"<U:Ljava/lang/Object;T:TU;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;TU;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$UniRelay, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CompletableFuture$UniRelay));
	});
	return class$;
}

$Class* CompletableFuture$UniRelay::class$ = nullptr;

		} // concurrent
	} // util
} // java