#include <java/util/concurrent/CompletableFuture$UniCompose.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _CompletableFuture$UniCompose_FieldInfo_[] = {
	{"fn", "Ljava/util/function/Function;", "Ljava/util/function/Function<-TT;+Ljava/util/concurrent/CompletionStage<TV;>;>;", 0, $field(CompletableFuture$UniCompose, fn)},
	{}
};

$MethodInfo _CompletableFuture$UniCompose_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Function;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TV;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/function/Function<-TT;+Ljava/util/concurrent/CompletionStage<TV;>;>;)V", 0, $method(static_cast<void(CompletableFuture$UniCompose::*)($Executor*,$CompletableFuture*,$CompletableFuture*,$Function*)>(&CompletableFuture$UniCompose::init$))},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<TV;>;", $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$UniCompose_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$UniCompose", "java.util.concurrent.CompletableFuture", "UniCompose", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$UniCompose_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$UniCompose",
	"java.util.concurrent.CompletableFuture$UniCompletion",
	nullptr,
	_CompletableFuture$UniCompose_FieldInfo_,
	_CompletableFuture$UniCompose_MethodInfo_,
	"<T:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;TV;>;",
	nullptr,
	_CompletableFuture$UniCompose_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$UniCompose($Class* clazz) {
	return $of($alloc(CompletableFuture$UniCompose));
}

void CompletableFuture$UniCompose::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $Function* fn) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$UniCompose::tryFire(int32_t mode) {
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
				}
				$var($Object, t, r);
				$var($CompletableFuture, g, $nc(($cast($CompletionStage, $($nc(f)->apply(t)))))->toCompletableFuture());
				if (($assign(r, $nc(g)->result)) != nullptr) {
					d->completeRelay(r);
				} else {
					g->unipush($$new($CompletableFuture$UniRelay, d, g));
					if (d->result == nullptr) {
						return nullptr;
					}
				}
			} catch ($Throwable&) {
				$var($Throwable, ex, $catch());
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

CompletableFuture$UniCompose::CompletableFuture$UniCompose() {
}

$Class* CompletableFuture$UniCompose::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$UniCompose, name, initialize, &_CompletableFuture$UniCompose_ClassInfo_, allocate$CompletableFuture$UniCompose);
	return class$;
}

$Class* CompletableFuture$UniCompose::class$ = nullptr;

		} // concurrent
	} // util
} // java