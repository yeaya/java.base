#ifndef _java_util_concurrent_Executors$FinalizableDelegatedExecutorService_h_
#define _java_util_concurrent_Executors$FinalizableDelegatedExecutorService_h_
//$ class java.util.concurrent.Executors$FinalizableDelegatedExecutorService
//$ extends java.util.concurrent.Executors$DelegatedExecutorService

#include <java/util/concurrent/Executors$DelegatedExecutorService.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$FinalizableDelegatedExecutorService : public ::java::util::concurrent::Executors$DelegatedExecutorService {
	$class(Executors$FinalizableDelegatedExecutorService, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::util::concurrent::Executors$DelegatedExecutorService)
public:
	Executors$FinalizableDelegatedExecutorService();
	void init$(::java::util::concurrent::ExecutorService* executor);
	virtual void finalize() override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$FinalizableDelegatedExecutorService_h_