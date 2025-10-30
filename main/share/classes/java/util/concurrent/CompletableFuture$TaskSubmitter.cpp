#include <java/util/concurrent/CompletableFuture$TaskSubmitter.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/Executor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Executor = ::java::util::concurrent::Executor;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CompletableFuture$TaskSubmitter_FieldInfo_[] = {
	{"executor", "Ljava/util/concurrent/Executor;", nullptr, $FINAL, $field(CompletableFuture$TaskSubmitter, executor)},
	{"action", "Ljava/lang/Runnable;", nullptr, $FINAL, $field(CompletableFuture$TaskSubmitter, action)},
	{}
};

$MethodInfo _CompletableFuture$TaskSubmitter_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)V", nullptr, 0, $method(static_cast<void(CompletableFuture$TaskSubmitter::*)($Executor*,$Runnable*)>(&CompletableFuture$TaskSubmitter::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CompletableFuture$TaskSubmitter_InnerClassesInfo_[] = {
	{"java.util.concurrent.CompletableFuture$TaskSubmitter", "java.util.concurrent.CompletableFuture", "TaskSubmitter", $STATIC | $FINAL},
	{}
};

$ClassInfo _CompletableFuture$TaskSubmitter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CompletableFuture$TaskSubmitter",
	"java.lang.Object",
	"java.lang.Runnable",
	_CompletableFuture$TaskSubmitter_FieldInfo_,
	_CompletableFuture$TaskSubmitter_MethodInfo_,
	nullptr,
	nullptr,
	_CompletableFuture$TaskSubmitter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CompletableFuture"
};

$Object* allocate$CompletableFuture$TaskSubmitter($Class* clazz) {
	return $of($alloc(CompletableFuture$TaskSubmitter));
}

void CompletableFuture$TaskSubmitter::init$($Executor* executor, $Runnable* action) {
	$set(this, executor, executor);
	$set(this, action, action);
}

void CompletableFuture$TaskSubmitter::run() {
	$nc(this->executor)->execute(this->action);
}

CompletableFuture$TaskSubmitter::CompletableFuture$TaskSubmitter() {
}

$Class* CompletableFuture$TaskSubmitter::load$($String* name, bool initialize) {
	$loadClass(CompletableFuture$TaskSubmitter, name, initialize, &_CompletableFuture$TaskSubmitter_ClassInfo_, allocate$CompletableFuture$TaskSubmitter);
	return class$;
}

$Class* CompletableFuture$TaskSubmitter::class$ = nullptr;

		} // concurrent
	} // util
} // java