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

$MethodInfo _ThreadPoolExecutor$CallerRunsPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadPoolExecutor$CallerRunsPolicy, init$, void)},
	{"rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", nullptr, $PUBLIC, $virtualMethod(ThreadPoolExecutor$CallerRunsPolicy, rejectedExecution, void, $Runnable*, $ThreadPoolExecutor*)},
	{}
};

$InnerClassInfo _ThreadPoolExecutor$CallerRunsPolicy_InnerClassesInfo_[] = {
	{"java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy", "java.util.concurrent.ThreadPoolExecutor", "CallerRunsPolicy", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ThreadPoolExecutor$CallerRunsPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy",
	"java.lang.Object",
	"java.util.concurrent.RejectedExecutionHandler",
	nullptr,
	_ThreadPoolExecutor$CallerRunsPolicy_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadPoolExecutor$CallerRunsPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ThreadPoolExecutor"
};

$Object* allocate$ThreadPoolExecutor$CallerRunsPolicy($Class* clazz) {
	return $of($alloc(ThreadPoolExecutor$CallerRunsPolicy));
}

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
	$loadClass(ThreadPoolExecutor$CallerRunsPolicy, name, initialize, &_ThreadPoolExecutor$CallerRunsPolicy_ClassInfo_, allocate$ThreadPoolExecutor$CallerRunsPolicy);
	return class$;
}

$Class* ThreadPoolExecutor$CallerRunsPolicy::class$ = nullptr;

		} // concurrent
	} // util
} // java