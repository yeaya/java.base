#include <java/util/concurrent/CompletableFuture$ThreadPerTaskExecutor.h>
#include <java/lang/Runnable.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {
		namespace concurrent {

void CompletableFuture$ThreadPerTaskExecutor::init$() {
}

void CompletableFuture$ThreadPerTaskExecutor::execute($Runnable* r) {
	$Objects::requireNonNull(r);
	$$new($Thread, r)->start();
}

CompletableFuture$ThreadPerTaskExecutor::CompletableFuture$ThreadPerTaskExecutor() {
}

$Class* CompletableFuture$ThreadPerTaskExecutor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CompletableFuture$ThreadPerTaskExecutor, init$, void)},
		{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(CompletableFuture$ThreadPerTaskExecutor, execute, void, $Runnable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CompletableFuture$ThreadPerTaskExecutor", "java.util.concurrent.CompletableFuture", "ThreadPerTaskExecutor", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CompletableFuture$ThreadPerTaskExecutor",
		"java.lang.Object",
		"java.util.concurrent.Executor",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CompletableFuture"
	};
	$loadClass(CompletableFuture$ThreadPerTaskExecutor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompletableFuture$ThreadPerTaskExecutor);
	});
	return class$;
}

$Class* CompletableFuture$ThreadPerTaskExecutor::class$ = nullptr;

		} // concurrent
	} // util
} // java