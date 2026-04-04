#include <java/util/concurrent/ThreadPoolExecutor$DiscardOldestPolicy.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/BlockingQueue.h>
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

void ThreadPoolExecutor$DiscardOldestPolicy::init$() {
}

void ThreadPoolExecutor$DiscardOldestPolicy::rejectedExecution($Runnable* r, $ThreadPoolExecutor* e) {
	if (!$nc(e)->isShutdown()) {
		$$nc(e->getQueue())->poll();
		e->execute(r);
	}
}

ThreadPoolExecutor$DiscardOldestPolicy::ThreadPoolExecutor$DiscardOldestPolicy() {
}

$Class* ThreadPoolExecutor$DiscardOldestPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadPoolExecutor$DiscardOldestPolicy, init$, void)},
		{"rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", nullptr, $PUBLIC, $virtualMethod(ThreadPoolExecutor$DiscardOldestPolicy, rejectedExecution, void, $Runnable*, $ThreadPoolExecutor*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ThreadPoolExecutor$DiscardOldestPolicy", "java.util.concurrent.ThreadPoolExecutor", "DiscardOldestPolicy", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.ThreadPoolExecutor$DiscardOldestPolicy",
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
	$loadClass(ThreadPoolExecutor$DiscardOldestPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadPoolExecutor$DiscardOldestPolicy);
	});
	return class$;
}

$Class* ThreadPoolExecutor$DiscardOldestPolicy::class$ = nullptr;

		} // concurrent
	} // util
} // java