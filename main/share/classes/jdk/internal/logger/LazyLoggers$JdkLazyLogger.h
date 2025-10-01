#ifndef _jdk_internal_logger_LazyLoggers$JdkLazyLogger_h_
#define _jdk_internal_logger_LazyLoggers$JdkLazyLogger_h_
//$ class jdk.internal.logger.LazyLoggers$JdkLazyLogger
//$ extends jdk.internal.logger.LazyLoggers$LazyLoggerWrapper

#include <jdk/internal/logger/LazyLoggers$LazyLoggerWrapper.h>

namespace java {
	namespace lang {
		class Module;
		class Void;
	}
}
namespace jdk {
	namespace internal {
		namespace logger {
			class LazyLoggers$LazyLoggerAccessor;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class LazyLoggers$JdkLazyLogger : public ::jdk::internal::logger::LazyLoggers$LazyLoggerWrapper {
	$class(LazyLoggers$JdkLazyLogger, $NO_CLASS_INIT, ::jdk::internal::logger::LazyLoggers$LazyLoggerWrapper)
public:
	LazyLoggers$JdkLazyLogger();
	void init$($String* name, ::java::lang::Module* module);
	void init$(::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor* holder, ::java::lang::Void* unused);
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_LazyLoggers$JdkLazyLogger_h_