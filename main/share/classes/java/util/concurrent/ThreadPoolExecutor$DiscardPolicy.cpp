#include <java/util/concurrent/ThreadPoolExecutor$DiscardPolicy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RejectedExecutionHandler = ::java::util::concurrent::RejectedExecutionHandler;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _ThreadPoolExecutor$DiscardPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ThreadPoolExecutor$DiscardPolicy::*)()>(&ThreadPoolExecutor$DiscardPolicy::init$))},
	{"rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ThreadPoolExecutor$DiscardPolicy_InnerClassesInfo_[] = {
	{"java.util.concurrent.ThreadPoolExecutor$DiscardPolicy", "java.util.concurrent.ThreadPoolExecutor", "DiscardPolicy", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ThreadPoolExecutor$DiscardPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ThreadPoolExecutor$DiscardPolicy",
	"java.lang.Object",
	"java.util.concurrent.RejectedExecutionHandler",
	nullptr,
	_ThreadPoolExecutor$DiscardPolicy_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadPoolExecutor$DiscardPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ThreadPoolExecutor"
};

$Object* allocate$ThreadPoolExecutor$DiscardPolicy($Class* clazz) {
	return $of($alloc(ThreadPoolExecutor$DiscardPolicy));
}

void ThreadPoolExecutor$DiscardPolicy::init$() {
}

void ThreadPoolExecutor$DiscardPolicy::rejectedExecution($Runnable* r, $ThreadPoolExecutor* e) {
}

ThreadPoolExecutor$DiscardPolicy::ThreadPoolExecutor$DiscardPolicy() {
}

$Class* ThreadPoolExecutor$DiscardPolicy::load$($String* name, bool initialize) {
	$loadClass(ThreadPoolExecutor$DiscardPolicy, name, initialize, &_ThreadPoolExecutor$DiscardPolicy_ClassInfo_, allocate$ThreadPoolExecutor$DiscardPolicy);
	return class$;
}

$Class* ThreadPoolExecutor$DiscardPolicy::class$ = nullptr;

		} // concurrent
	} // util
} // java