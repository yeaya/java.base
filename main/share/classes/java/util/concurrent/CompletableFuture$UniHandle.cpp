#include <java/util/concurrent/CompletableFuture$UniHandle.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $CompletableFuture$UniCompletion = ::java::util::concurrent::CompletableFuture$UniCompletion;
using $Executor = ::java::util::concurrent::Executor;
using $BiFunction = ::java::util::function::BiFunction;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$UniHandle_FieldInfo_[] = {
	{"fn", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<-TT;Ljava/lang/Throwable;+TV;>;", 0, $field(CompletableFuture$UniHandle, fn)},
	{}
};

$MethodInfo _CompletableFuture$UniHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/BiFunction;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TV;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/function/BiFunction<-TT;Ljava/lang/Throwable;+TV;>;)V", 0, $method(static_cast<void(CompletableFuture$UniHandle::*)($Executor*,$CompletableFuture*,$CompletableFuture*,$BiFunction*)>(&CompletableFuture$UniHandle::init$))},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<TV;>;", $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$UniHandle_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$UniHandle", "java.util.concurrent.CompletableFuture", "UniHandle", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$UniHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$UniHandle",
	"java.util.concurrent.CompletableFuture$UniCompletion",
	nullptr,
	_CompletableFuture$UniHandle_FieldInfo_,
	_CompletableFuture$UniHandle_MethodInfo_,
	"<T:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;TV;>;",
	nullptr,
	_CompletableFuture$UniHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$UniHandle($Class* clazz) {
	return $of($alloc(CompletableFuture$UniHandle));
}

void CompletableFuture$UniHandle::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $BiFunction* fn) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$UniHandle::tryFire(int32_t mode) {
	$var($CompletableFuture, d, nullptr);
	$var($CompletableFuture, a, nullptr);
	$var($Object, r, nullptr);
	$var($BiFunction, f, nullptr);
	bool var$1 = ($assign(a, this->src)) == nullptr;
	bool var$0 = var$1 || ($assign(r, $nc(a)->result)) == nullptr || ($assign(d, this->dep)) == nullptr || ($assign(f, this->fn)) == nullptr;
	if (var$0 || !$nc(d)->uniHandle(r, f, mode > 0 ? (CompletableFuture$UniHandle*)nullptr : this)) {
		return nullptr;
	}
	$set(this, src, nullptr);
	$set(this, dep, nullptr);
	$set(this, fn, nullptr);
	return $nc(d)->postFire(a, mode);
}

CompletableFuture$UniHandle::CompletableFuture$UniHandle() {
}

$Class* CompletableFuture$UniHandle::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$UniHandle, name, initialize, &_CompletableFuture$UniHandle_ClassInfo_, allocate$CompletableFuture$UniHandle);
	return class$;
}

$Class* CompletableFuture$UniHandle::class$ = nullptr;

		} // concurrent
	} // util
} // java