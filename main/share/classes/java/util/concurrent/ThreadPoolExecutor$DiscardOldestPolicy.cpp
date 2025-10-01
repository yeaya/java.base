#include <java/util/concurrent/ThreadPoolExecutor$DiscardOldestPolicy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Queue = ::java::util::Queue;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $RejectedExecutionHandler = ::java::util::concurrent::RejectedExecutionHandler;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ThreadPoolExecutor$DiscardOldestPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ThreadPoolExecutor$DiscardOldestPolicy::*)()>(&ThreadPoolExecutor$DiscardOldestPolicy::init$))},
	{"rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ThreadPoolExecutor$DiscardOldestPolicy_InnerClassesInfo_[] = {
	{"java.util.concurrent.ThreadPoolExecutor$DiscardOldestPolicy", "java.util.concurrent.ThreadPoolExecutor", "DiscardOldestPolicy", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ThreadPoolExecutor$DiscardOldestPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ThreadPoolExecutor$DiscardOldestPolicy",
	"java.lang.Object",
	"java.util.concurrent.RejectedExecutionHandler",
	nullptr,
	_ThreadPoolExecutor$DiscardOldestPolicy_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadPoolExecutor$DiscardOldestPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ThreadPoolExecutor"
};

$Object* allocate$ThreadPoolExecutor$DiscardOldestPolicy($Class* clazz) {
	return $of($alloc(ThreadPoolExecutor$DiscardOldestPolicy));
}

void ThreadPoolExecutor$DiscardOldestPolicy::init$() {
}

void ThreadPoolExecutor$DiscardOldestPolicy::rejectedExecution($Runnable* r, $ThreadPoolExecutor* e) {
	if (!$nc(e)->isShutdown()) {
		$nc($(e->getQueue()))->poll();
		e->execute(r);
	}
}

ThreadPoolExecutor$DiscardOldestPolicy::ThreadPoolExecutor$DiscardOldestPolicy() {
}

$Class* ThreadPoolExecutor$DiscardOldestPolicy::load$($String* name, bool initialize) {
	$loadClass(ThreadPoolExecutor$DiscardOldestPolicy, name, initialize, &_ThreadPoolExecutor$DiscardOldestPolicy_ClassInfo_, allocate$ThreadPoolExecutor$DiscardOldestPolicy);
	return class$;
}

$Class* ThreadPoolExecutor$DiscardOldestPolicy::class$ = nullptr;

		} // concurrent
	} // util
} // java