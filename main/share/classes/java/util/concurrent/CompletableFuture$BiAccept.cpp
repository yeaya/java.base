#include <java/util/concurrent/CompletableFuture$BiAccept.h>
#include <java/util/concurrent/CompletableFuture$BiCompletion.h>
#include <java/util/concurrent/CompletableFuture$UniCompletion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/function/BiConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$BiCompletion = ::java::util::concurrent::CompletableFuture$BiCompletion;
using $Executor = ::java::util::concurrent::Executor;
using $BiConsumer = ::java::util::function::BiConsumer;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$BiAccept::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $CompletableFuture* snd, $BiConsumer* fn) {
	$CompletableFuture$BiCompletion::init$(executor, dep, src, snd);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$BiAccept::tryFire(int32_t mode) {
	$useLocalObjectStack();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($CompletableFuture, b, nullptr);
	$var($Object, r, nullptr);
	$var($Object, s, nullptr);
	$var($BiConsumer, f, nullptr);
	bool var$2 = ($assign(a, this->src)) == nullptr;
	bool var$1 = var$2 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(b, this->snd)) == nullptr;
	bool var$0 = var$1 || ($assign(s, $nc(b)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr;
	if (var$0 || !$nc(d)->biAccept(r, s, f, mode > 0 ? (CompletableFuture$BiAccept*)nullptr : this)) {
		return nullptr;
	}
	$set(this, src, nullptr);
	$set(this, snd, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return $nc(d)->postFire(a, b, mode);
}

CompletableFuture$BiAccept::CompletableFuture$BiAccept() {
}

$Class* CompletableFuture$BiAccept::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fn", "Ljava/util/function/BiConsumer;", "Ljava/util/function/BiConsumer<-TT;-TU;>;", 0, $field(CompletableFuture$BiAccept, fn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/BiConsumer;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TU;>;Ljava/util/function/BiConsumer<-TT;-TU;>;)V", 0, $method(CompletableFuture$BiAccept, init$, void, $Executor*, $CompletableFuture*, $CompletableFuture*, $CompletableFuture*, $BiConsumer*)},
		{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", $FINAL, $virtualMethod(CompletableFuture$BiAccept, tryFire, $CompletableFuture*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$BiAccept", "java.util.concurrent.CompletableFuture", "BiAccept", $STATIC | $FINAL},
		{"java.util.concurrent.CompletableFuture$BiCompletion", "java.util.concurrent.CompletableFuture", "BiCompletion", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$BiAccept",
		"java.util.concurrent.CompletableFuture$BiCompletion",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$BiCompletion<TT;TU;Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$BiAccept, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CompletableFuture$BiAccept));
	});
	return class$;
}

$Class* CompletableFuture$BiAccept::class$ = nullptr;

		} // concurrent
	} // util
} // java