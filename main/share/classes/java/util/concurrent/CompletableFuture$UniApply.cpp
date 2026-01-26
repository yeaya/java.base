#include <java/util/concurrent/CompletableFuture$UniApply.h>

#include <java/util/concurrent/CompletableFuture$AltResult.h>
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
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$UniApply_FieldInfo_[] = {
	{"fn", "Ljava/util/function/Function;", "Ljava/util/function/Function<-TT;+TV;>;", 0, $field(CompletableFuture$UniApply, fn)},
	{}
};

$MethodInfo _CompletableFuture$UniApply_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Function;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TV;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/function/Function<-TT;+TV;>;)V", 0, $method(CompletableFuture$UniApply, init$, void, $Executor*, $CompletableFuture*, $CompletableFuture*, $Function*)},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<TV;>;", $FINAL, $virtualMethod(CompletableFuture$UniApply, tryFire, $CompletableFuture*, int32_t)},
	{}
};

$InnerClassInfo _CompletableFuture$UniApply_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$UniApply", "java.util.concurrent.CompletableFuture", "UniApply", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$UniApply_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$UniApply",
	"java.util.concurrent.CompletableFuture$UniCompletion",
	nullptr,
	_CompletableFuture$UniApply_FieldInfo_,
	_CompletableFuture$UniApply_MethodInfo_,
	"<T:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;TV;>;",
	nullptr,
	_CompletableFuture$UniApply_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$UniApply($Class* clazz) {
	return $of($alloc(CompletableFuture$UniApply));
}

void CompletableFuture$UniApply::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $Function* fn) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$UniApply::tryFire(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($Object, r, nullptr);
	$var($Throwable, x, nullptr);
	$var($Function, f, nullptr);
	bool var$0 = ($assign(a, this->src)) == nullptr;
	if (var$0 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr) {
		return nullptr;
	}
	bool tryComplete$break = false;
	for (;;) {
		if ($nc(d)->result == nullptr) {
			if ($instanceOf($CompletableFuture$AltResult, r)) {
				if (($assign(x, $nc(($cast($CompletableFuture$AltResult, r)))->ex)) != nullptr) {
					d->completeThrowable(x, r);
					tryComplete$break = true;
					break;
				}
				$assign(r, nullptr);
			}
			try {
				if (mode <= 0 && !claim()) {
					return nullptr;
				} else {
					$var($Object, t, r);
					d->completeValue($($nc(f)->apply(t)));
				}
			} catch ($Throwable& ex) {
				d->completeThrowable(ex);
			}
		}
		break;
	}
	$set(this, src, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return $nc(d)->postFire(a, mode);
}

CompletableFuture$UniApply::CompletableFuture$UniApply() {
}

$Class* CompletableFuture$UniApply::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$UniApply, name, initialize, &_CompletableFuture$UniApply_ClassInfo_, allocate$CompletableFuture$UniApply);
	return class$;
}

$Class* CompletableFuture$UniApply::class$ = nullptr;

		} // concurrent
	} // util
} // java