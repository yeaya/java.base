#include <java/util/concurrent/CompletableFuture$UniAccept.h>
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

void CompletableFuture$UniAccept::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $Consumer* fn) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$UniAccept::tryFire(int32_t mode) {
	$useLocalObjectStack();
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
				if (($assign(x, $cast($CompletableFuture$AltResult, r)->ex)) != nullptr) {
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
			} catch ($Throwable& ex) {
				d->completeThrowable(ex);
			}
		}
		break;
	}
	$set(this, src, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return d->postFire(a, mode);
}

CompletableFuture$UniAccept::CompletableFuture$UniAccept() {
}

$Class* CompletableFuture$UniAccept::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fn", "Ljava/util/function/Consumer;", "Ljava/util/function/Consumer<-TT;>;", 0, $field(CompletableFuture$UniAccept, fn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Consumer;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/function/Consumer<-TT;>;)V", 0, $method(CompletableFuture$UniAccept, init$, void, $Executor*, $CompletableFuture*, $CompletableFuture*, $Consumer*)},
		{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", $FINAL, $virtualMethod(CompletableFuture$UniAccept, tryFire, $CompletableFuture*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$UniAccept", "java.util.concurrent.CompletableFuture", "UniAccept", $STATIC | $FINAL},
		{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$UniAccept",
		"java.util.concurrent.CompletableFuture$UniCompletion",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$UniAccept, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CompletableFuture$UniAccept));
	});
	return class$;
}

$Class* CompletableFuture$UniAccept::class$ = nullptr;

		} // concurrent
	} // util
} // java