#ifndef _jdk_internal_logger_LazyLoggers$LazyLoggerAccessor_h_
#define _jdk_internal_logger_LazyLoggers$LazyLoggerAccessor_h_
//$ class jdk.internal.logger.LazyLoggers$LazyLoggerAccessor
//$ extends jdk.internal.logger.LazyLoggers$LoggerAccessor

#include <jdk/internal/logger/LazyLoggers$LoggerAccessor.h>

namespace java {
	namespace lang {
		class Module;
		class System$Logger;
		class Void;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace logger {
			class BootstrapLogger;
			class LazyLoggers$LazyLoggerFactories;
			class SimpleConsoleLogger;
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

class $export LazyLoggers$LazyLoggerAccessor : public ::jdk::internal::logger::LazyLoggers$LoggerAccessor {
	$class(LazyLoggers$LazyLoggerAccessor, 0, ::jdk::internal::logger::LazyLoggers$LoggerAccessor)
public:
	LazyLoggers$LazyLoggerAccessor();
	void init$($String* name, ::jdk::internal::logger::LazyLoggers$LazyLoggerFactories* factories, ::java::lang::Module* module);
	void init$($String* name, ::jdk::internal::logger::LazyLoggers$LazyLoggerFactories* factories, ::java::lang::Module* module, ::java::lang::Void* unused);
	::java::lang::System$Logger* createLogger();
	::java::lang::System$Logger* getConcreteLogger(::jdk::internal::logger::BootstrapLogger* bootstrap);
	::sun::util::logging::PlatformLogger$Bridge* getConcretePlatformLogger(::jdk::internal::logger::BootstrapLogger* bootstrap);
	virtual $String* getLoggerName() override;
	static ::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor* makeAccessor($String* name, ::jdk::internal::logger::LazyLoggers$LazyLoggerFactories* factories, ::java::lang::Module* module);
	virtual ::sun::util::logging::PlatformLogger$Bridge* platform() override;
	void release(::jdk::internal::logger::SimpleConsoleLogger* temporary, bool replace);
	void setWrappedIfNotSet(::java::lang::System$Logger* wrapped);
	virtual ::java::lang::System$Logger* wrapped() override;
	static bool $assertionsDisabled;
	::jdk::internal::logger::LazyLoggers$LazyLoggerFactories* factories = nullptr;
	::java::lang::ref::WeakReference* moduleRef = nullptr;
	$String* name = nullptr;
	$volatile(::java::lang::System$Logger*) w = nullptr;
	$volatile(::sun::util::logging::PlatformLogger$Bridge*) p = nullptr;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_LazyLoggers$LazyLoggerAccessor_h_