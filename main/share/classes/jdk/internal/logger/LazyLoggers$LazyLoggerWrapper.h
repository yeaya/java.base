#ifndef _jdk_internal_logger_LazyLoggers$LazyLoggerWrapper_h_
#define _jdk_internal_logger_LazyLoggers$LazyLoggerWrapper_h_
//$ class jdk.internal.logger.LazyLoggers$LazyLoggerWrapper
//$ extends jdk.internal.logger.AbstractLoggerWrapper

#include <jdk/internal/logger/AbstractLoggerWrapper.h>

namespace java {
	namespace lang {
		class System$Logger;
		class Void;
	}
}
namespace jdk {
	namespace internal {
		namespace logger {
			class LazyLoggers$LazyLoggerAccessor;
			class LazyLoggers$LoggerAccessor;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger$Bridge;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class LazyLoggers$LazyLoggerWrapper : public ::jdk::internal::logger::AbstractLoggerWrapper {
	$class(LazyLoggers$LazyLoggerWrapper, $NO_CLASS_INIT, ::jdk::internal::logger::AbstractLoggerWrapper)
public:
	LazyLoggers$LazyLoggerWrapper();
	void init$(::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor* loggerSinkSupplier);
	void init$(::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor* loggerSinkSupplier, ::java::lang::Void* unused);
	virtual ::sun::util::logging::PlatformLogger$Bridge* platformProxy() override;
	virtual ::java::lang::System$Logger* wrapped() override;
	::jdk::internal::logger::LazyLoggers$LoggerAccessor* loggerAccessor = nullptr;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_LazyLoggers$LazyLoggerWrapper_h_