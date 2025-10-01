#ifndef _jdk_internal_logger_LazyLoggers$LoggerAccessor_h_
#define _jdk_internal_logger_LazyLoggers$LoggerAccessor_h_
//$ interface jdk.internal.logger.LazyLoggers$LoggerAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class System$Logger;
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

class $export LazyLoggers$LoggerAccessor : public ::java::lang::Object {
	$interface(LazyLoggers$LoggerAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getLoggerName() {return nullptr;}
	virtual ::sun::util::logging::PlatformLogger$Bridge* platform() {return nullptr;}
	virtual ::java::lang::System$Logger* wrapped() {return nullptr;}
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_LazyLoggers$LoggerAccessor_h_