#include <java/util/concurrent/CompletableFuture$UniRun.h>

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
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$UniRun_FieldInfo_[] = {
	{"fn", "Ljava/lang/Runnable;", nullptr, 0, $field(CompletableFuture$UniRun, fn)},
	{}
};

$MethodInfo _CompletableFuture$UniRun_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/lang/Runnable;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/lang/Runnable;)V", 0, $method(static_cast<void(CompletableFuture$UniRun::*)($Executor*,$CompletableFuture*,$CompletableFuture*,$Runnable*)>(&CompletableFuture$UniRun::init$))},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$UniRun_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$UniRun", "java.util.concurrent.CompletableFuture", "UniRun", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$UniRun_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$UniRun",
	"java.util.concurrent.CompletableFuture$UniCompletion",
	nullptr,
	_CompletableFuture$UniRun_FieldInfo_,
	_CompletableFuture$UniRun_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;Ljava/lang/Void;>;",
	nullptr,
	_CompletableFuture$UniRun_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$UniRun($Class* clazz) {
	return $of($alloc(CompletableFuture$UniRun));
}

void CompletableFuture$UniRun::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $Runnable* fn) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$UniRun::tryFire(int32_t mode) {
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($Object, r, nullptr);
	$var($Throwable, x, nullptr);
	$var($Runnable, f, nullptr);
	bool var$0 = ($assign(a, this->src)) == nullptr;
	if (var$0 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr) {
		return nullptr;
	}
	if ($nc(d)->result == nullptr) {
		if ($instanceOf($CompletableFuture$AltResult, r) && ($assign(x, $nc(($cast($CompletableFuture$AltResult, r)))->ex)) != nullptr) {
			d->completeThrowable(x, r);
		} else {
			try {
				if (mode <= 0 && !claim()) {
					return nullptr;
				} else {
					$nc(f)->run();
					d->completeNull();
				}
			} catch ($Throwable&) {
				$var($Throwable, ex, $catch());
				d->completeThrowable(ex);
			}
		}
	}
	$set(this, src, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return $nc(d)->postFire(a, mode);
}

CompletableFuture$UniRun::CompletableFuture$UniRun() {
}

$Class* CompletableFuture$UniRun::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$UniRun, name, initialize, &_CompletableFuture$UniRun_ClassInfo_, allocate$CompletableFuture$UniRun);
	return class$;
}

$Class* CompletableFuture$UniRun::class$ = nullptr;

		} // concurrent
	} // util
} // java