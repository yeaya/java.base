#include <java/util/concurrent/CompletableFuture$UniExceptionally.h>

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
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;
using $Function = ::java::util::function::Function;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$UniExceptionally_FieldInfo_[] = {
	{"fn", "Ljava/util/function/Function;", "Ljava/util/function/Function<-Ljava/lang/Throwable;+TT;>;", 0, $field(CompletableFuture$UniExceptionally, fn)},
	{}
};

$MethodInfo _CompletableFuture$UniExceptionally_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Function;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/function/Function<-Ljava/lang/Throwable;+TT;>;)V", 0, $method(static_cast<void(CompletableFuture$UniExceptionally::*)($Executor*,$CompletableFuture*,$CompletableFuture*,$Function*)>(&CompletableFuture$UniExceptionally::init$))},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<TT;>;", $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$UniExceptionally_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$UniExceptionally", "java.util.concurrent.CompletableFuture", "UniExceptionally", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$UniExceptionally_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$UniExceptionally",
	"java.util.concurrent.CompletableFuture$UniCompletion",
	nullptr,
	_CompletableFuture$UniExceptionally_FieldInfo_,
	_CompletableFuture$UniExceptionally_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;TT;>;",
	nullptr,
	_CompletableFuture$UniExceptionally_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$UniExceptionally($Class* clazz) {
	return $of($alloc(CompletableFuture$UniExceptionally));
}

void CompletableFuture$UniExceptionally::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $Function* fn) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$UniExceptionally::tryFire(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($Object, r, nullptr);
	$var($Function, f, nullptr);
	bool var$1 = ($assign(a, this->src)) == nullptr;
	bool var$0 = var$1 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr;
	if (var$0 || !$nc(d)->uniExceptionally(r, f, mode > 0 ? (CompletableFuture$UniExceptionally*)nullptr : this)) {
		return nullptr;
	}
	$set(this, src, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return $nc(d)->postFire(a, mode);
}

CompletableFuture$UniExceptionally::CompletableFuture$UniExceptionally() {
}

$Class* CompletableFuture$UniExceptionally::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$UniExceptionally, name, initialize, &_CompletableFuture$UniExceptionally_ClassInfo_, allocate$CompletableFuture$UniExceptionally);
	return class$;
}

$Class* CompletableFuture$UniExceptionally::class$ = nullptr;

		} // concurrent
	} // util
} // java