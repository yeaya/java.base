#include <java/util/concurrent/CompletableFuture$UniAccept.h>

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
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$UniAccept_FieldInfo_[] = {
	{"fn", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<-TT;>;", 0, $field(CompletableFuture$UniAccept, fn)},
	{}
};

$MethodInfo _CompletableFuture$UniAccept_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Consumer;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/function/Consumer<-TT;>;)V", 0, $method(static_cast<void(CompletableFuture$UniAccept::*)($Executor*,$CompletableFuture*,$CompletableFuture*,$Consumer*)>(&CompletableFuture$UniAccept::init$))},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$UniAccept_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$UniAccept", "java.util.concurrent.CompletableFuture", "UniAccept", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$UniAccept_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$UniAccept",
	"java.util.concurrent.CompletableFuture$UniCompletion",
	nullptr,
	_CompletableFuture$UniAccept_FieldInfo_,
	_CompletableFuture$UniAccept_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;Ljava/lang/Void;>;",
	nullptr,
	_CompletableFuture$UniAccept_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$UniAccept($Class* clazz) {
	return $of($alloc(CompletableFuture$UniAccept));
}

void CompletableFuture$UniAccept::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $Consumer* fn) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$UniAccept::tryFire(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($Object, r, nullptr);
	$var($Throwable, x, nullptr);
	$var($Consumer, f, nullptr);
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
					$nc(f)->accept(t);
					d->completeNull();
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

CompletableFuture$UniAccept::CompletableFuture$UniAccept() {
}

$Class* CompletableFuture$UniAccept::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$UniAccept, name, initialize, &_CompletableFuture$UniAccept_ClassInfo_, allocate$CompletableFuture$UniAccept);
	return class$;
}

$Class* CompletableFuture$UniAccept::class$ = nullptr;

		} // concurrent
	} // util
} // java