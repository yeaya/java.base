#include <java/util/concurrent/CompletableFuture$OrApply.h>

#include <java/util/concurrent/CompletableFuture$AltResult.h>
#include <java/util/concurrent/CompletableFuture$BiCompletion.h>
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
using $CompletableFuture$AltResult = ::java::util::concurrent::CompletableFuture$AltResult;
using $CompletableFuture$BiCompletion = ::java::util::concurrent::CompletableFuture$BiCompletion;
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$OrApply_FieldInfo_[] = {
	{"fn", "Ljava/util/function/Function;", "Ljava/util/function/Function<-TT;+TV;>;", 0, $field(CompletableFuture$OrApply, fn)},
	{}
};

$MethodInfo _CompletableFuture$OrApply_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Function;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TV;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TU;>;Ljava/util/function/Function<-TT;+TV;>;)V", 0, $method(static_cast<void(CompletableFuture$OrApply::*)($Executor*,$CompletableFuture*,$CompletableFuture*,$CompletableFuture*,$Function*)>(&CompletableFuture$OrApply::init$))},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<TV;>;", $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$OrApply_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$OrApply", "java.util.concurrent.CompletableFuture", "OrApply", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$BiCompletion", "java.util.concurrent.CompletableFuture", "BiCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$OrApply_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$OrApply",
	"java.util.concurrent.CompletableFuture$BiCompletion",
	nullptr,
	_CompletableFuture$OrApply_FieldInfo_,
	_CompletableFuture$OrApply_MethodInfo_,
	"<T:Ljava/lang/Object;U:TT;V:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$BiCompletion<TT;TU;TV;>;",
	nullptr,
	_CompletableFuture$OrApply_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$OrApply($Class* clazz) {
	return $of($alloc(CompletableFuture$OrApply));
}

void CompletableFuture$OrApply::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $CompletableFuture* snd, $Function* fn) {
	$CompletableFuture$BiCompletion::init$(executor, dep, src, snd);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$OrApply::tryFire(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($CompletableFuture, b, nullptr);
	$var($Object, r, nullptr);
	$var($Throwable, x, nullptr);
	$var($Function, f, nullptr);
	bool var$0 = ($assign(a, this->src)) == nullptr || ($assign(b, this->snd)) == nullptr;
	if (!var$0) {
		bool var$1 = ($assign(r, $nc(a)->result)) == nullptr;
		var$0 = (var$1 && ($assign(r, $nc(b)->result)) == nullptr);
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
					if (($assign(x, $nc(($cast($CompletableFuture$AltResult, r)))->ex)) != nullptr) {
						d->completeThrowable(x, r);
						tryComplete$break = true;
						break;
					}
					$assign(r, nullptr);
				}
				$var($Object, t, r);
				d->completeValue($($nc(f)->apply(t)));
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
	return $nc(d)->postFire(a, b, mode);
}

CompletableFuture$OrApply::CompletableFuture$OrApply() {
}

$Class* CompletableFuture$OrApply::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$OrApply, name, initialize, &_CompletableFuture$OrApply_ClassInfo_, allocate$CompletableFuture$OrApply);
	return class$;
}

$Class* CompletableFuture$OrApply::class$ = nullptr;

		} // concurrent
	} // util
} // java