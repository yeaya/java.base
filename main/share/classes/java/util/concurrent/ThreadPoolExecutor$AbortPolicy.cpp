#include <java/util/concurrent/ThreadPoolExecutor$AbortPolicy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/RejectedExecutionException.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RejectedExecutionException = ::java::util::concurrent::RejectedExecutionException;
using $RejectedExecutionHandler = ::java::util::concurrent::RejectedExecutionHandler;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ThreadPoolExecutor$AbortPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ThreadPoolExecutor$AbortPolicy::*)()>(&ThreadPoolExecutor$AbortPolicy::init$))},
	{"rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ThreadPoolExecutor$AbortPolicy_InnerClassesInfo_[] = {
	{"java.util.concurrent.ThreadPoolExecutor$AbortPolicy", "java.util.concurrent.ThreadPoolExecutor", "AbortPolicy", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ThreadPoolExecutor$AbortPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ThreadPoolExecutor$AbortPolicy",
	"java.lang.Object",
	"java.util.concurrent.RejectedExecutionHandler",
	nullptr,
	_ThreadPoolExecutor$AbortPolicy_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadPoolExecutor$AbortPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ThreadPoolExecutor"
};

$Object* allocate$ThreadPoolExecutor$AbortPolicy($Class* clazz) {
	return $of($alloc(ThreadPoolExecutor$AbortPolicy));
}

void ThreadPoolExecutor$AbortPolicy::init$() {
}

void ThreadPoolExecutor$AbortPolicy::rejectedExecution($Runnable* r, $ThreadPoolExecutor* e) {
	$var($String, var$0, $$str({"Task "_s, $($nc($of(r))->toString()), " rejected from "_s}));
	$throwNew($RejectedExecutionException, $$concat(var$0, $($nc(e)->toString())));
}

ThreadPoolExecutor$AbortPolicy::ThreadPoolExecutor$AbortPolicy() {
}

$Class* ThreadPoolExecutor$AbortPolicy::load$($String* name, bool initialize) {
	$loadClass(ThreadPoolExecutor$AbortPolicy, name, initialize, &_ThreadPoolExecutor$AbortPolicy_ClassInfo_, allocate$ThreadPoolExecutor$AbortPolicy);
	return class$;
}

$Class* ThreadPoolExecutor$AbortPolicy::class$ = nullptr;

		} // concurrent
	} // util
} // java