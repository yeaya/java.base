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

$Class* RejectedExecutionHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RejectedExecutionHandler, rejectedExecution, void, $Runnable*, $ThreadPoolExecutor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.RejectedExecutionHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RejectedExecutionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RejectedExecutionHandler);
	});
	return class$;
}

$Class* RejectedExecutionHandler::class$ = nullptr;

		} // concurrent
	} // util
} // java