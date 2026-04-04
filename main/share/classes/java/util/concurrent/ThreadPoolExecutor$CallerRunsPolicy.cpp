#include <java/util/concurrent/ThreadPoolExecutor$CallerRunsPolicy.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;

namespace java {
	namespace util {
		namespace concurrent {

void ThreadPoolExecutor$CallerRunsPolicy::init$() {
}

void ThreadPoolExecutor$CallerRunsPolicy::rejectedExecution($Runnable* r, $ThreadPoolExecutor* e) {
	if (!$nc(e)->isShutdown()) {
		$nc(r)->run();
	}
}

ThreadPoolExecutor$CallerRunsPolicy::ThreadPoolExecutor$CallerRunsPolicy() {
}

$Class* ThreadPoolExecutor$CallerRunsPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadPoolExecutor$CallerRunsPolicy, init$, void)},
		{"rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", nullptr, $PUBLIC, $virtualMethod(ThreadPoolExecutor$CallerRunsPolicy, rejectedExecution, void, $Runnable*, $ThreadPoolExecutor*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy", "java.util.concurrent.ThreadPoolExecutor", "CallerRunsPolicy", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy",
		"java.lang.Object",
		"java.util.concurrent.RejectedExecutionHandler",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ThreadPoolExecutor"
	};
	$loadClass(ThreadPoolExecutor$CallerRunsPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadPoolExecutor$CallerRunsPolicy);
	});
	return class$;
}

$Class* ThreadPoolExecutor$CallerRunsPolicy::class$ = nullptr;

		} // concurrent
	} // util
} // java