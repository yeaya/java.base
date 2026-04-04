#include <java/util/concurrent/CompletableFuture$UniWhenComplete.h>
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
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;
using $BiConsumer = ::java::util::function::BiConsumer;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$UniWhenComplete::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $BiConsumer* fn) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$UniWhenComplete::tryFire(int32_t mode) {
	$useLocalObjectStack();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($Object, r, nullptr);
	$var($BiConsumer, f, nullptr);
	bool var$1 = ($assign(a, this->src)) == nullptr;
	bool var$0 = var$1 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr;
	if (var$0 || !$nc(d)->uniWhenComplete(r, f, mode > 0 ? (CompletableFuture$UniWhenComplete*)nullptr : this)) {
		return nullptr;
	}
	$set(this, src, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return $nc(d)->postFire(a, mode);
}

CompletableFuture$UniWhenComplete::CompletableFuture$UniWhenComplete() {
}

$Class* CompletableFuture$UniWhenComplete::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fn", "Ljava/util/function/BiConsumer;", "Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;", 0, $field(CompletableFuture$UniWhenComplete, fn)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/BiConsumer;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)V", 0, $method(CompletableFuture$UniWhenComplete, init$, void, $Executor*, $CompletableFuture*, $CompletableFuture*, $BiConsumer*)},
		{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<TT;>;", $FINAL, $virtualMethod(CompletableFuture$UniWhenComplete, tryFire, $CompletableFuture*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$UniWhenComplete", "java.util.concurrent.CompletableFuture", "UniWhenComplete", $STATIC | $FINAL},
		{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$UniWhenComplete",
		"java.util.concurrent.CompletableFuture$UniCompletion",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$UniWhenComplete, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CompletableFuture$UniWhenComplete));
	});
	return class$;
}

$Class* CompletableFuture$UniWhenComplete::class$ = nullptr;

		} // concurrent
	} // util
} // java