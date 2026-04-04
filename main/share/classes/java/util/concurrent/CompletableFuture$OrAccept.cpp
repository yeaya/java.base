#include <java/util/concurrent/CompletableFuture$OrAccept.h>
#include <java/util/concurrent/CompletableFuture$AltResult.h>
#include <java/util/concurrent/CompletableFuture$BiCompletion.h>
#include <java/util/concurrent/CompletableFuture$UniCompletion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$AltResult = ::java::util::concurrent::CompletableFuture$AltResult;
using $CompletableFuture$BiCompletion = ::java::util::concurrent::CompletableFuture$BiCompletion;
using $Executor = ::java::util::concurrent::Executor;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$OrAccept::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $CompletableFuture* snd, $Consumer* fn) {
	$CompletableFuture$BiCompletion::init$(executor, dep, src, snd);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$OrAccept::tryFire(int32_t mode) {
	$useLocalObjectStack();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($CompletableFuture, b, nullptr);
	$var($Object, r, nullptr);
	$var($Throwable, x, nullptr);
	$var($Consumer, f, nullptr);
	bool var$0 = ($assign(a, this->src)) == nullptr || ($assign(b, this->snd)) == nullptr;
	if (!var$0) {
		bool var$1 = ($assign(r, $nc(a)->result)) == nullptr;
		var$0 = var$1 && ($assign(r, $nc(b)->result)) == nullptr;
	}
	if (var$0 || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr) {
		return nullptr;
	}
	bool tryComplete$break = false;
	for (;;) {
		if ($nc(d)->result == nullptr) {
			try {
				if (mode <= 0 && !claim()) {
					return nullptr;
				}
				if ($instanceOf($CompletableFuture$AltResult, r)) {
					if (($assign(x, $cast($CompletableFuture$AltResult, r)->ex)) != nullptr) {
						d->completeThrowable(x, r);
						tryComplete$break = true;
						break;
					}
					$assign(r, nullptr);
				}
				$var($Object, t, r);
				$nc(f)->accept(t);
				d->completeNull();
			} catch ($Throwable& ex) {
				d->completeThrowable(ex);
			}
		}
		break;
	}
	$set(this, src, nullptr);
	$set(this, snd, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return d->postFire(a, b, mode);
}

CompletableFuture$OrAccept::CompletableFuture$OrAccept() {
}

$Class* CompletableFuture$OrAccept::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fn", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<-TT;>;", 0, $field(CompletableFuture$OrAccept, fn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Consumer;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TU;>;Ljava/util/function/Consumer<-TT;>;)V", 0, $method(CompletableFuture$OrAccept, init$, void, $Executor*, $CompletableFuture*, $CompletableFuture*, $CompletableFuture*, $Consumer*)},
		{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", $FINAL, $virtualMethod(CompletableFuture$OrAccept, tryFire, $CompletableFuture*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$OrAccept", "java.util.concurrent.CompletableFuture", "OrAccept", $STATIC | $FINAL},
		{"java.util.concurrent.CompletableFuture$BiCompletion", "java.util.concurrent.CompletableFuture", "BiCompletion", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$OrAccept",
		"java.util.concurrent.CompletableFuture$BiCompletion",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;U:TT;>Ljava/util/concurrent/CompletableFuture$BiCompletion<TT;TU;Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$OrAccept, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CompletableFuture$OrAccept));
	});
	return class$;
}

$Class* CompletableFuture$OrAccept::class$ = nullptr;

		} // concurrent
	} // util
} // java