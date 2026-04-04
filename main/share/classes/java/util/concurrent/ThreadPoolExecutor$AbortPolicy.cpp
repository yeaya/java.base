#include <java/util/concurrent/ThreadPoolExecutor$AbortPolicy.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/RejectedExecutionException.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RejectedExecutionException = ::java::util::concurrent::RejectedExecutionException;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;

namespace java {
	namespace util {
		namespace concurrent {

void ThreadPoolExecutor$AbortPolicy::init$() {
}

void ThreadPoolExecutor$AbortPolicy::rejectedExecution($Runnable* r, $ThreadPoolExecutor* e) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("Task "_s);
	var$0->append($($nc($of(r))->toString()));
	var$0->append(" rejected from "_s);
	var$0->append($($nc(e)->toString()));
	$throwNew($RejectedExecutionException, $$str(var$0));
}

ThreadPoolExecutor$AbortPolicy::ThreadPoolExecutor$AbortPolicy() {
}

$Class* ThreadPoolExecutor$AbortPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadPoolExecutor$AbortPolicy, init$, void)},
		{"rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", nullptr, $PUBLIC, $virtualMethod(ThreadPoolExecutor$AbortPolicy, rejectedExecution, void, $Runnable*, $ThreadPoolExecutor*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ThreadPoolExecutor$AbortPolicy", "java.util.concurrent.ThreadPoolExecutor", "AbortPolicy", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.ThreadPoolExecutor$AbortPolicy",
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
	$loadClass(ThreadPoolExecutor$AbortPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadPoolExecutor$AbortPolicy);
	});
	return class$;
}

$Class* ThreadPoolExecutor$AbortPolicy::class$ = nullptr;

		} // concurrent
	} // util
} // java