#ifndef _jdk_internal_logger_BootstrapLogger$BootstrapExecutors$1_h_
#define _jdk_internal_logger_BootstrapLogger$BootstrapExecutors$1_h_
//$ class jdk.internal.logger.BootstrapLogger$BootstrapExecutors$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
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
			class BootstrapLogger$BootstrapExecutors;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class BootstrapLogger$BootstrapExecutors$1 : public ::java::security::PrivilegedAction {
	$class(BootstrapLogger$BootstrapExecutors$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	BootstrapLogger$BootstrapExecutors$1();
	void init$(::jdk::internal::logger::BootstrapLogger$BootstrapExecutors* this$0, ::java::util::concurrent::ExecutorService* val$owner, ::java::lang::Runnable* val$r);
	virtual $Object* run() override;
	::jdk::internal::logger::BootstrapLogger$BootstrapExecutors* this$0 = nullptr;
	::java::lang::Runnable* val$r = nullptr;
	::java::util::concurrent::ExecutorService* val$owner = nullptr;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_BootstrapLogger$BootstrapExecutors$1_h_