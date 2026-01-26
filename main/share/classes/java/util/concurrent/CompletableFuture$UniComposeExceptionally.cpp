#include <java/util/concurrent/CompletableFuture$UniComposeExceptionally.h>

#include <java/util/concurrent/CompletableFuture$AltResult.h>
#include <java/util/concurrent/CompletableFuture$Completion.h>
#include <java/util/concurrent/CompletableFuture$UniCompletion.h>
#include <java/util/concurrent/CompletableFuture$UniRelay.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$AltResult = ::java::util::concurrent::CompletableFuture$AltResult;
using $CompletableFuture$Completion = ::java::util::concurrent::CompletableFuture$Completion;
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $CompletableFuture$UniRelay = ::java::util::concurrent::CompletableFuture$UniRelay;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Executor = ::java::util::concurrent::Executor;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$UniComposeExceptionally_FieldInfo_[] = {
	{"fn", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/lang/Throwable;+Ljava/util/concurrent/CompletionStage<TT;>;>;", 0, $field(CompletableFuture$UniComposeExceptionally, fn)},
	{}
};

$MethodInfo _CompletableFuture$UniComposeExceptionally_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Function;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/function/Function<Ljava/lang/Throwable;+Ljava/util/concurrent/CompletionStage<TT;>;>;)V", 0, $method(CompletableFuture$UniComposeExceptionally, init$, void, $Executor*, $CompletableFuture*, $CompletableFuture*, $Function*)},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<TT;>;", $FINAL, $virtualMethod(CompletableFuture$UniComposeExceptionally, tryFire, $CompletableFuture*, int32_t)},
	{}
};

$InnerClassInfo _CompletableFuture$UniComposeExceptionally_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$UniComposeExceptionally", "java.util.concurrent.CompletableFuture", "UniComposeExceptionally", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$UniComposeExceptionally_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$UniComposeExceptionally",
	"java.util.concurrent.CompletableFuture$UniCompletion",
	nullptr,
	_CompletableFuture$UniComposeExceptionally_FieldInfo_,
	_CompletableFuture$UniComposeExceptionally_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;TT;>;",
	nullptr,
	_CompletableFuture$UniComposeExceptionally_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$UniComposeExceptionally($Class* clazz) {
	return $of($alloc(CompletableFuture$UniComposeExceptionally));
}

void CompletableFuture$UniComposeExceptionally::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $Function* fn) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$UniComposeExceptionally::tryFire(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($Function, f, nullptr);
	$var($Object, r, nullptr);
	$var($Throwable, x, nullptr);
	bool var$0 = ($assign(a, this->src)) == nullptr;
	if (var$0 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr) {
		return nullptr;
	}
	if ($nc(d)->result == nullptr) {
		if (($instanceOf($CompletableFuture$AltResult, r)) && ($assign(x, $nc(($cast($CompletableFuture$AltResult, r)))->ex)) != nullptr) {
			try {
				if (mode <= 0 && !claim()) {
					return nullptr;
				}
				$var($CompletableFuture, g, $nc(($cast($CompletionStage, $($nc(f)->apply(x)))))->toCompletableFuture());
				if (($assign(r, $nc(g)->result)) != nullptr) {
					d->completeRelay(r);
				} else {
					g->unipush($$new($CompletableFuture$UniRelay, d, g));
					if (d->result == nullptr) {
						return nullptr;
					}
				}
			} catch ($Throwable& ex) {
				d->completeThrowable(ex);
			}
		} else {
			d->internalComplete(r);
		}
	}
	$set(this, src, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return $nc(d)->postFire(a, mode);
}

CompletableFuture$UniComposeExceptionally::CompletableFuture$UniComposeExceptionally() {
}

$Class* CompletableFuture$UniComposeExceptionally::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$UniComposeExceptionally, name, initialize, &_CompletableFuture$UniComposeExceptionally_ClassInfo_, allocate$CompletableFuture$UniComposeExceptionally);
	return class$;
}

$Class* CompletableFuture$UniComposeExceptionally::class$ = nullptr;

		} // concurrent
	} // util
} // java