#include <java/util/concurrent/CompletableFuture$OrRun.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CompletableFuture$AltResult.h>
#include <java/util/concurrent/CompletableFuture$BiCompletion.h>
#include <java/util/concurrent/CompletableFuture$UniCompletion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$AltResult = ::java::util::concurrent::CompletableFuture$AltResult;
using $CompletableFuture$BiCompletion = ::java::util::concurrent::CompletableFuture$BiCompletion;
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$OrRun_FieldInfo_[] = {
	{"fn", "Ljava/lang/Runnable;", nullptr, 0, $field(CompletableFuture$OrRun, fn)},
	{}
};

$MethodInfo _CompletableFuture$OrRun_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/lang/Runnable;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TU;>;Ljava/lang/Runnable;)V", 0, $method(static_cast<void(CompletableFuture$OrRun::*)($Executor*,$CompletableFuture*,$CompletableFuture*,$CompletableFuture*,$Runnable*)>(&CompletableFuture$OrRun::init$))},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$OrRun_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$OrRun", "java.util.concurrent.CompletableFuture", "OrRun", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$BiCompletion", "java.util.concurrent.CompletableFuture", "BiCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$OrRun_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$OrRun",
	"java.util.concurrent.CompletableFuture$BiCompletion",
	nullptr,
	_CompletableFuture$OrRun_FieldInfo_,
	_CompletableFuture$OrRun_MethodInfo_,
	"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$BiCompletion<TT;TU;Ljava/lang/Void;>;",
	nullptr,
	_CompletableFuture$OrRun_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$OrRun($Class* clazz) {
	return $of($alloc(CompletableFuture$OrRun));
}

void CompletableFuture$OrRun::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $CompletableFuture* snd, $Runnable* fn) {
	$CompletableFuture$BiCompletion::init$(executor, dep, src, snd);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$OrRun::tryFire(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($CompletableFuture, b, nullptr);
	$var($Object, r, nullptr);
	$var($Throwable, x, nullptr);
	$var($Runnable, f, nullptr);
	bool var$0 = ($assign(a, this->src)) == nullptr || ($assign(b, this->snd)) == nullptr;
	if (!var$0) {
		bool var$1 = ($assign(r, $nc(a)->result)) == nullptr;
		var$0 = (var$1 && ($assign(r, $nc(b)->result)) == nullptr);
	}
	if (var$0 || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr) {
		return nullptr;
	}
	if ($nc(d)->result == nullptr) {
		try {
			if (mode <= 0 && !claim()) {
				return nullptr;
			} else if ($instanceOf($CompletableFuture$AltResult, r) && ($assign(x, $nc(($cast($CompletableFuture$AltResult, r)))->ex)) != nullptr) {
				d->completeThrowable(x, r);
			} else {
				$nc(f)->run();
				d->completeNull();
			}
		} catch ($Throwable&) {
			$var($Throwable, ex, $catch());
			d->completeThrowable(ex);
		}
	}
	$set(this, src, nullptr);
	$set(this, snd, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return $nc(d)->postFire(a, b, mode);
}

CompletableFuture$OrRun::CompletableFuture$OrRun() {
}

$Class* CompletableFuture$OrRun::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$OrRun, name, initialize, &_CompletableFuture$OrRun_ClassInfo_, allocate$CompletableFuture$OrRun);
	return class$;
}

$Class* CompletableFuture$OrRun::class$ = nullptr;

		} // concurrent
	} // util
} // java