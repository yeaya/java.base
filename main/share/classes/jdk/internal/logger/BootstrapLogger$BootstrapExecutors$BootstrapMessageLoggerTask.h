#ifndef _jdk_internal_logger_BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask_h_
#define _jdk_internal_logger_BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask_h_
//$ class jdk.internal.logger.BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask : public ::java::lang::Runnable {
	$class(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask();
	void init$(::java::util::concurrent::ExecutorService* owner, ::java::lang::Runnable* r);
	virtual void run() override;
	::java::util::concurrent::ExecutorService* owner = nullptr;
	::java::lang::Runnable* run$ = nullptr;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask_h_