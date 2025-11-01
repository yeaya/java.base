#ifndef _jdk_internal_logger_BootstrapLogger_h_
#define _jdk_internal_logger_BootstrapLogger_h_
//$ class jdk.internal.logger.BootstrapLogger
//$ extends java.lang.System$Logger
//$ implements sun.util.logging.PlatformLogger$Bridge,sun.util.logging.PlatformLogger$ConfigurableBridge

#include <java/lang/Array.h>
#include <java/lang/System$Logger.h>
#include <sun/util/logging/PlatformLogger$Bridge.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge.h>

namespace java {
	namespace lang {
		class System$Logger$Level;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Map;
		class ResourceBundle;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BooleanSupplier;
			class Supplier;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace logger {
			class BootstrapLogger$LogEvent;
			class LazyLoggers$LazyLoggerAccessor;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger$ConfigurableBridge$LoggerConfiguration;
			class PlatformLogger$Level;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class $export BootstrapLogger : public ::java::lang::System$Logger, public ::sun::util::logging::PlatformLogger$Bridge, public ::sun::util::logging::PlatformLogger$ConfigurableBridge {
	$class(BootstrapLogger, 0, ::java::lang::System$Logger, ::sun::util::logging::PlatformLogger$Bridge, ::sun::util::logging::PlatformLogger$ConfigurableBridge)
public:
	BootstrapLogger();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor* holder);
	static void awaitPendingTasks();
	bool checkBootstrapping();
	static ::java::lang::System$Logger* createSurrogateLogger(::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor* a);
	void flush(::jdk::internal::logger::BootstrapLogger$LogEvent* event);
	static ::java::lang::System$Logger* getLogger(::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor* accessor);
	virtual ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration* getLoggerConfiguration() override;
	virtual $String* getName() override;
	static bool isAlive();
	static bool isBooted();
	virtual bool isEnabled() override;
	virtual bool isLoggable(::java::lang::System$Logger$Level* level) override;
	virtual bool isLoggable(::sun::util::logging::PlatformLogger$Level* level) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* key, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* format, $ObjectArray* params) override;
	virtual void log(::java::lang::System$Logger$Level* level, $String* msg, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, $String* format, $ObjectArray* params) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier) override;
	virtual void log(::java::lang::System$Logger$Level* level, Object$* obj) override;
	virtual void log(::java::lang::System$Logger$Level* level, $String* msg) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier, $Throwable* thrown) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg, $Throwable* thrown) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg, $ObjectArray* params) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, ::java::util::function::Supplier* msgSupplier) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $Throwable* thrown, ::java::util::function::Supplier* msgSupplier) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::function::Supplier* msgSupplier) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $ObjectArray* params) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $Throwable* thrown) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Throwable* thrown, ::java::util::function::Supplier* msgSupplier) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::ResourceBundle* bundle, $String* msg, $ObjectArray* params) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, ::java::util::ResourceBundle* bundle, $String* msg, $ObjectArray* params) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown) override;
	void push(::jdk::internal::logger::BootstrapLogger$LogEvent* log);
	static void redirectTemporaryLoggers();
	static ::java::util::Map* releaseSurrogateLoggers();
	virtual $String* toString() override;
	static bool useLazyLoggers();
	static bool useSurrogateLoggers();
	static bool $assertionsDisabled;
	::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor* holder = nullptr;
	static $volatile(::java::util::function::BooleanSupplier*) isBooted$;
	static $volatile(bool) logManagerConfigured;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_BootstrapLogger_h_