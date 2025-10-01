#include <java/util/concurrent/CompletableFuture$BiRun.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $CompletableFuture$BiCompletion = ::java::util::concurrent::CompletableFuture$BiCompletion;
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$BiRun_FieldInfo_[] = {
	{"fn", "Ljava/lang/Runnable;", nullptr, 0, $field(CompletableFuture$BiRun, fn)},
	{}
};

$MethodInfo _CompletableFuture$BiRun_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/lang/Runnable;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TU;>;Ljava/lang/Runnable;)V", 0, $method(static_cast<void(CompletableFuture$BiRun::*)($Executor*,$CompletableFuture*,$CompletableFuture*,$CompletableFuture*,$Runnable*)>(&CompletableFuture$BiRun::init$))},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<Ljava/lang/Void;>;", $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$BiRun_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$BiRun", "java.util.concurrent.CompletableFuture", "BiRun", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$BiCompletion", "java.util.concurrent.CompletableFuture", "BiCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$BiRun_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$BiRun",
	"java.util.concurrent.CompletableFuture$BiCompletion",
	nullptr,
	_CompletableFuture$BiRun_FieldInfo_,
	_CompletableFuture$BiRun_MethodInfo_,
	"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$BiCompletion<TT;TU;Ljava/lang/Void;>;",
	nullptr,
	_CompletableFuture$BiRun_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$BiRun($Class* clazz) {
	return $of($alloc(CompletableFuture$BiRun));
}

void CompletableFuture$BiRun::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $CompletableFuture* snd, $Runnable* fn) {
	$CompletableFuture$BiCompletion::init$(executor, dep, src, snd);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$BiRun::tryFire(int32_t mode) {
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($CompletableFuture, b, nullptr);
	$var($Object, r, nullptr);
	$var($Object, s, nullptr);
	$var($Runnable, f, nullptr);
	bool var$2 = ($assign(a, this->src)) == nullptr;
	bool var$1 = var$2 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(b, this->snd)) == nullptr;
	bool var$0 = var$1 || ($assign(s, $nc(b)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr;
	if (var$0 || !$nc(d)->biRun(r, s, f, mode > 0 ? (CompletableFuture$BiRun*)nullptr : this)) {
		return nullptr;
	}
	$set(this, src, nullptr);
	$set(this, snd, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return $nc(d)->postFire(a, b, mode);
}

CompletableFuture$BiRun::CompletableFuture$BiRun() {
}

$Class* CompletableFuture$BiRun::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$BiRun, name, initialize, &_CompletableFuture$BiRun_ClassInfo_, allocate$CompletableFuture$BiRun);
	return class$;
}

$Class* CompletableFuture$BiRun::class$ = nullptr;

		} // concurrent
	} // util
} // java