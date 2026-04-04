#include <java/util/concurrent/Executors$FinalizableDelegatedExecutorService.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors$DelegatedExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors$DelegatedExecutorService = ::java::util::concurrent::Executors$DelegatedExecutorService;

namespace java {
	namespace util {
		namespace concurrent {

void Executors$FinalizableDelegatedExecutorService::init$($ExecutorService* executor) {
	$Executors$DelegatedExecutorService::init$(executor);
}

void Executors$FinalizableDelegatedExecutorService::finalize() {
	$Executors$DelegatedExecutorService::shutdown();
}

Executors$FinalizableDelegatedExecutorService::Executors$FinalizableDelegatedExecutorService() {
}

$Class* Executors$FinalizableDelegatedExecutorService::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ExecutorService;)V", nullptr, 0, $method(Executors$FinalizableDelegatedExecutorService, init$, void, $ExecutorService*)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(Executors$FinalizableDelegatedExecutorService, finalize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Executors$FinalizableDelegatedExecutorService", "java.util.concurrent.Executors", "FinalizableDelegatedExecutorService", $PRIVATE | $STATIC},
		{"java.util.concurrent.Executors$DelegatedExecutorService", "java.util.concurrent.Executors", "DelegatedExecutorService", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.Executors$FinalizableDelegatedExecutorService",
		"java.util.concurrent.Executors$DelegatedExecutorService",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Executors"
	};
	$loadClass(Executors$FinalizableDelegatedExecutorService, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Executors$FinalizableDelegatedExecutorService);
	});
	return class$;
}

$Class* Executors$FinalizableDelegatedExecutorService::class$ = nullptr;

		} // concurrent
	} // util
} // java