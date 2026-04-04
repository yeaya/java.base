#include <java/util/concurrent/CompletableFuture$BiRelay.h>
#include <java/util/concurrent/CompletableFuture$AltResult.h>
#include <java/util/concurrent/CompletableFuture$BiCompletion.h>
#include <java/util/concurrent/CompletableFuture$UniCompletion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$AltResult = ::java::util::concurrent::CompletableFuture$AltResult;
using $CompletableFuture$BiCompletion = ::java::util::concurrent::CompletableFuture$BiCompletion;
using $Executor = ::java::util::concurrent::Executor;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$BiRelay::init$($CompletableFuture* dep, $CompletableFuture* src, $CompletableFuture* snd) {
	$CompletableFuture$BiCompletion::init$(nullptr, dep, src, snd);
}

$CompletableFuture* CompletableFuture$BiRelay::tryFire(int32_t mode) {
	$useLocalObjectStack();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($CompletableFuture, b, nullptr);
	$var($Object, r, nullptr);
	$var($Object, s, nullptr);
	$var($Object, z, nullptr);
	$var($Throwable, x, nullptr);
	bool var$1 = ($assign(a, this->src)) == nullptr;
	bool var$0 = var$1 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(b, this->snd)) == nullptr;
	if (var$0 || ($assign(s, $nc(b)->result)) == nullptr || ($assign(d, this->dep)) == nullptr) {
		return nullptr;
	}
	if ($nc(d)->result == nullptr) {
		bool var$2 = $instanceOf($CompletableFuture$AltResult, r) && ($assign(x, $nc($$cast($CompletableFuture$AltResult, ($assign(z, r))))->ex)) != nullptr;
		if (var$2 || ($instanceOf($CompletableFuture$AltResult, s) && ($assign(x, $nc($$cast($CompletableFuture$AltResult, ($assign(z, s))))->ex)) != nullptr)) {
			d->completeThrowable(x, z);
		} else {
			d->completeNull();
		}
	}
	$set(this, src, nullptr);
	$set(this, snd, nullptr);
	$set(this, dep, nullptr);
	return d->postFire(a, b, mode);
}

CompletableFuture$BiRelay::CompletableFuture$BiRelay() {
}

$Class* CompletableFuture$BiRelay::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;)V", "(Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TU;>;)V", 0, $method(CompletableFuture$BiRelay, init$, void, $CompletableFuture*, $CompletableFuture*, $CompletableFuture*)},
		{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", $FINAL, $virtualMethod(CompletableFuture$BiRelay, tryFire, $CompletableFuture*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$BiRelay", "java.util.concurrent.CompletableFuture", "BiRelay", $STATIC | $FINAL},
		{"java.util.concurrent.CompletableFuture$BiCompletion", "java.util.concurrent.CompletableFuture", "BiCompletion", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$BiRelay",
		"java.util.concurrent.CompletableFuture$BiCompletion",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$BiCompletion<TT;TU;Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$BiRelay, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CompletableFuture$BiRelay));
	});
	return class$;
}

$Class* CompletableFuture$BiRelay::class$ = nullptr;

		} // concurrent
	} // util
} // java