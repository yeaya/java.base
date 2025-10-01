#include <java/util/concurrent/CompletableFuture$UniCompletion.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CompletableFuture$Completion.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletableFuture$Completion = ::java::util::concurrent::CompletableFuture$Completion;
using $Executor = ::java::util::concurrent::Executor;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$UniCompletion_FieldInfo_[] = {
	{"executor", "Ljava/util/concurrent/Executor;", nullptr, 0, $field(CompletableFuture$UniCompletion, executor)},
	{"dep", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<TV;>;", 0, $field(CompletableFuture$UniCompletion, dep)},
	{"src", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<TT;>;", 0, $field(CompletableFuture$UniCompletion, src)},
	{}
};

$MethodInfo _CompletableFuture$UniCompletion_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;)V", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture<TV;>;Ljava/util/concurrent/CompletableFuture<TT;>;)V", 0, $method(static_cast<void(CompletableFuture$UniCompletion::*)($Executor*,$CompletableFuture*,$CompletableFuture*)>(&CompletableFuture$UniCompletion::init$))},
	{"claim", "()Z", nullptr, $FINAL, $method(static_cast<bool(CompletableFuture$UniCompletion::*)()>(&CompletableFuture$UniCompletion::claim))},
	{"isLive", "()Z", nullptr, $FINAL},
	{}
};

$InnerClassInfo _CompletableFuture$UniCompletion_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$UniCompletion", "java.util.concurrent.CompletableFuture", "UniCompletion", $STATIC | $ABSTRACT},
	{"java.util.concurrent.CompletableFuture$Completion", "java.util.concurrent.CompletableFuture", "Completion", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CompletableFuture$UniCompletion_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.CompletableFuture$UniCompletion",
	"java.util.concurrent.CompletableFuture$Completion",
	nullptr,
	_CompletableFuture$UniCompletion_FieldInfo_,
	_CompletableFuture$UniCompletion_MethodInfo_,
	"<T:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture$Completion;",
	nullptr,
	_CompletableFuture$UniCompletion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$UniCompletion($Class* clazz) {
	return $of($alloc(CompletableFuture$UniCompletion));
}

void CompletableFuture$UniCompletion::init$($Executor* executor, $CompletableFuture* dep, $CompletableFuture* src) {
	$CompletableFuture$Completion::init$();
	$set(this, executor, executor);
	$set(this, dep, dep);
	$set(this, src, src);
}

bool CompletableFuture$UniCompletion::claim() {
	$var($Executor, e, this->executor);
	if (compareAndSetForkJoinTaskTag((int16_t)0, (int16_t)1)) {
		if (e == nullptr) {
			return true;
		}
		$set(this, executor, nullptr);
		$nc(e)->execute(this);
	}
	return false;
}

bool CompletableFuture$UniCompletion::isLive() {
	return this->dep != nullptr;
}

CompletableFuture$UniCompletion::CompletableFuture$UniCompletion() {
}

$Class* CompletableFuture$UniCompletion::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$UniCompletion, name, initialize, &_CompletableFuture$UniCompletion_ClassInfo_, allocate$CompletableFuture$UniCompletion);
	return class$;
}

$Class* CompletableFuture$UniCompletion::class$ = nullptr;

		} // concurrent
	} // util
} // java