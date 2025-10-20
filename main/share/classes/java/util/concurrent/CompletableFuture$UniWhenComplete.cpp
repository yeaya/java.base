#include <java/util/concurrent/CompletableFuture$UniWhenComplete.h>

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

$FieldInfo _CompletableFuture$UniWhenComplete_FieldInfo_[] = {
	{"fn", "Ljava/util/function/BiConsumer;", "Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;", 0, $field(CompletableFuture$UniWhenComplete, fn)},
	{}
};

$MethodInfo _CompletableFuture$UniWhenComplete_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/BiConsumer;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/concurrent/CompletableFuture<TT;>;Ljava/util/function/BiConsumer<-TT;-Ljava/lang/Throwable;>;)V", 0, $method(static_cast<void(CompletableFuture$UniWhenComplete::*)($Executor*,$CompletableFuture*,$CompletableFuture*,$BiConsumer*)>(&CompletableFuture$UniWhenComplete::init$))},
	{"tryFire", "(I)Ljava/util/concurrent/CompletableFuture;", "(I)Ljava/util/concurrent/CompletableFuture<TT;>;", $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$UniWhenComplete_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$UniWhenComplete", "java.util.concurrent.CompletableFuture", "UniWhenComplete", $STATIC | $FINAL},
	{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$UniWhenComplete_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$UniWhenComplete",
	"java.util.concurrent.CompletableFuture$UniCompletion",
	nullptr,
	_CompletableFuture$UniWhenComplete_FieldInfo_,
	_CompletableFuture$UniWhenComplete_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$UniCompletion<TT;TT;>;",
	nullptr,
	_CompletableFuture$UniWhenComplete_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$UniWhenComplete($Class* clazz) {
	return $of($alloc(CompletableFuture$UniWhenComplete));
}

void CompletableFuture$UniWhenComplete::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src, $BiConsumer* fn) {
	$CompletableFuture$UniCompletion::init$(executor, dep, src);
	$set(this, fn, fn);
}

$CompletableFuture* CompletableFuture$UniWhenComplete::tryFire(int32_t mode) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(CompletableFuture$UniWhenComplete, name, initialize, &_CompletableFuture$UniWhenComplete_ClassInfo_, allocate$CompletableFuture$UniWhenComplete);
	return class$;
}

$Class* CompletableFuture$UniWhenComplete::class$ = nullptr;

		} // concurrent
	} // util
} // java