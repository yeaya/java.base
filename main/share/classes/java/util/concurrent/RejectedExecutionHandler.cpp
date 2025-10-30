#include <java/util/concurrent/RejectedExecutionHandler.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _RejectedExecutionHandler_MethodInfo_[] = {
	{"rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RejectedExecutionHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.RejectedExecutionHandler",
	nullptr,
	nullptr,
	nullptr,
	_RejectedExecutionHandler_MethodInfo_
};

$Object* allocate$RejectedExecutionHandler($Class* clazz) {
	return $of($alloc(RejectedExecutionHandler));
}

$Class* RejectedExecutionHandler::load$($String* name, bool initialize) {
	$loadClass(RejectedExecutionHandler, name, initialize, &_RejectedExecutionHandler_ClassInfo_, allocate$RejectedExecutionHandler);
	return class$;
}

$Class* RejectedExecutionHandler::class$ = nullptr;

		} // concurrent
	} // util
} // java