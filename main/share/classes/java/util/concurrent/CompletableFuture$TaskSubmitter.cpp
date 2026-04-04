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
using $Executor = ::java::util::concurrent::Executor;

namespace java {
	namespace util {
		namespace concurrent {

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
	$FieldInfo fieldInfos$$[] = {
		{"executor", "Ljava/util/concurrent/Executor;", nullptr, $FINAL, $field(CompletableFuture$TaskSubmitter, executor)},
		{"action", "Ljava/lang/Runnable;", nullptr, $FINAL, $field(CompletableFuture$TaskSubmitter, action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)V", nullptr, 0, $method(CompletableFuture$TaskSubmitter, init$, void, $Executor*, $Runnable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CompletableFuture$TaskSubmitter, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$TaskSubmitter", "java.util.concurrent.CompletableFuture", "TaskSubmitter", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$TaskSubmitter",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$TaskSubmitter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompletableFuture$TaskSubmitter);
	});
	return class$;
}

$Class* CompletableFuture$TaskSubmitter::class$ = nullptr;

		} // concurrent
	} // util
} // java