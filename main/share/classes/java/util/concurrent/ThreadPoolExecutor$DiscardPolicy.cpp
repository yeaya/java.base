#include <java/util/concurrent/ThreadPoolExecutor$DiscardPolicy.h>
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

void ThreadPoolExecutor$DiscardPolicy::init$() {
}

void ThreadPoolExecutor$DiscardPolicy::rejectedExecution($Runnable* r, $ThreadPoolExecutor* e) {
}

ThreadPoolExecutor$DiscardPolicy::ThreadPoolExecutor$DiscardPolicy() {
}

$Class* ThreadPoolExecutor$DiscardPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadPoolExecutor$DiscardPolicy, init$, void)},
		{"rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", nullptr, $PUBLIC, $virtualMethod(ThreadPoolExecutor$DiscardPolicy, rejectedExecution, void, $Runnable*, $ThreadPoolExecutor*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ThreadPoolExecutor$DiscardPolicy", "java.util.concurrent.ThreadPoolExecutor", "DiscardPolicy", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.ThreadPoolExecutor$DiscardPolicy",
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
	$loadClass(ThreadPoolExecutor$DiscardPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadPoolExecutor$DiscardPolicy);
	});
	return class$;
}

$Class* ThreadPoolExecutor$DiscardPolicy::class$ = nullptr;

		} // concurrent
	} // util
} // java