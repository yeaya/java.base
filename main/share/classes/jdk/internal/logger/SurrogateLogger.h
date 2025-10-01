#ifndef _jdk_internal_logger_SurrogateLogger_h_
#define _jdk_internal_logger_SurrogateLogger_h_
//$ class jdk.internal.logger.SurrogateLogger
//$ extends jdk.internal.logger.SimpleConsoleLogger

#include <jdk/internal/logger/SimpleConsoleLogger.h>

#pragma push_macro("JUL_DEFAULT_LEVEL")
#undef JUL_DEFAULT_LEVEL

namespace java {
	namespace lang {
		class StackWalker$StackFrame;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger$Level;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class $export SurrogateLogger : public ::jdk::internal::logger::SimpleConsoleLogger {
	$class(SurrogateLogger, 0, ::jdk::internal::logger::SimpleConsoleLogger)
public:
	SurrogateLogger();
	void init$($String* name);
	virtual ::sun::util::logging::PlatformLogger$Level* defaultPlatformLevel() override;
	static $String* getSimpleFormat(::java::util::function::Function* defaultPropertyGetter);
	virtual $String* getSimpleFormatString() override;
	static bool isFilteredFrame(::java::lang::StackWalker$StackFrame* st);
	using ::jdk::internal::logger::SimpleConsoleLogger::log;
	static ::jdk::internal::logger::SurrogateLogger* makeSurrogateLogger($String* name);
	static ::sun::util::logging::PlatformLogger$Level* JUL_DEFAULT_LEVEL;
	static $volatile($String*) simpleFormatString;
};

		} // logger
	} // internal
} // jdk

#pragma pop_macro("JUL_DEFAULT_LEVEL")

#endif // _jdk_internal_logger_SurrogateLogger_h_