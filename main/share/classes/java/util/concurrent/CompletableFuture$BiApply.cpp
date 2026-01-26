#include <java/util/concurrent/CompletableFuture$BiApply.h>

#include <java/util/concurrent/CompletableFuture$BiCompletion.h>
#include <java/util/concurrent/CompletableFuture$UniCompletion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/function/BiFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$BiCompletion = ::java::util::concurrent::CompletableFuture$BiCompletion;
using $Executor = ::java::util::concurrent::Executor;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$BiApply_FieldInfo_[] = {
	{"fn", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<-TT;-TU;+TV;>;", 0, $field(CompletableFuture$BiApply, fn)},
	{}
};

$MethodInfo _CompletableFuture$BiApply_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/BiFunction;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TV;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TU;>;Ljava/util/function/BiFunction<-TT;-TU;+TV;>;)V", 0, $method(CompletableFuture$BiApply, init$, void, $Executor*, $CompletableFuture*, $CompletableFuture*, $CompletableFuture*, $BiFunction*)},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<TV;>;", $FINAL, $virtualMethod(CompletableFuture$BiApply, tryFire, $CompletableFuture*, int32_t)},
	{}
};

$InnerClassInfo _CompletableFuture$BiApply_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$BiApply", "java.util.concurrent.CompletableFuture", "BiApply", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$BiCompletion", "java.util.concurrent.CompletableFuture", "BiCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$BiApply_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$BiApply",
	"java.util.concurrent.CompletableFuture$BiCompletion",
	nullptr,
	_CompletableFuture$BiApply_FieldInfo_,
	_CompletableFuture$BiApply_MethodInfo_,
	"<T:Ljava/lang/Object;U:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$BiCompletion<TT;TU;TV;>;",
	nullptr,
	_CompletableFuture$BiApply_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$BiApply($Class* clazz) {
	return $of($alloc(CompletableFuture$BiApply));
}

void CompletableFuture$BiApply::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $CompletableFuture* snd, $BiFunction* fn) {
	$CompletableFuture$BiCompletion::init$(executor, dep, src, snd);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$BiApply::tryFire(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($CompletableFuture, b, nullptr);
	$var($Object, r, nullptr);
	$var($Object, s, nullptr);
	$var($BiFunction, f, nullptr);
	bool var$2 = ($assign(a, this->src)) == nullptr;
	bool var$1 = var$2 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(b, this->snd)) == nullptr;
	bool var$0 = var$1 || ($assign(s, $nc(b)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr;
	if (var$0 || !$nc(d)->biApply(r, s, f, mode > 0 ? (CompletableFuture$BiApply*)nullptr : this)) {
		return nullptr;
	}
	$set(this, src, nullptr);
	$set(this, snd, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return $nc(d)->postFire(a, b, mode);
}

CompletableFuture$BiApply::CompletableFuture$BiApply() {
}

$Class* CompletableFuture$BiApply::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$BiApply, name, initialize, &_CompletableFuture$BiApply_ClassInfo_, allocate$CompletableFuture$BiApply);
	return class$;
}

$Class* CompletableFuture$BiApply::class$ = nullptr;

		} // concurrent
	} // util
} // java