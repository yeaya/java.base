#ifndef _jdk_internal_logger_SimpleConsoleLogger_h_
#define _jdk_internal_logger_SimpleConsoleLogger_h_
//$ class jdk.internal.logger.SimpleConsoleLogger
//$ extends sun.util.logging.PlatformLogger$ConfigurableBridge$LoggerConfiguration
//$ implements java.lang.System$Logger,sun.util.logging.PlatformLogger$Bridge,sun.util.logging.PlatformLogger$ConfigurableBridge

#include <java/lang/Array.h>
#include <java/lang/System$Logger.h>
#include <sun/util/logging/PlatformLogger$Bridge.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge.h>

#pragma push_macro("DEFAULT_LEVEL")
#undef DEFAULT_LEVEL
#pragma push_macro("DEFAULT_PLATFORM_LEVEL")
#undef DEFAULT_PLATFORM_LEVEL

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Enum;
		class System$Logger$Level;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
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

class $export SimpleConsoleLogger : public ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration, public ::java::lang::System$Logger, public ::sun::util::logging::PlatformLogger$Bridge, public ::sun::util::logging::PlatformLogger$ConfigurableBridge {
	$class(SimpleConsoleLogger, 0, ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration, ::java::lang::System$Logger, ::sun::util::logging::PlatformLogger$Bridge, ::sun::util::logging::PlatformLogger$ConfigurableBridge)
public:
	SimpleConsoleLogger();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name, bool usePlatformLevel);
	virtual ::sun::util::logging::PlatformLogger$Level* defaultPlatformLevel();
	::sun::util::logging::PlatformLogger$Level* effectiveLevel();
	$String* format(::java::lang::Enum* level, $String* msg, $Throwable* thrown, $String* callerInfo);
	$String* getCallerInfo();
	$String* getCallerInfo($String* sourceClassName, $String* sourceMethodName);
	static ::java::lang::System$Logger$Level* getDefaultLevel();
	virtual ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration* getLoggerConfiguration() override;
	virtual $String* getName() override;
	virtual ::sun::util::logging::PlatformLogger$Level* getPlatformLevel() override;
	virtual $String* getSimpleFormatString();
	static $String* getString(::java::util::ResourceBundle* bundle, $String* key);
	virtual bool isEnabled() override;
	virtual bool isLoggable(::java::lang::System$Logger$Level* level) override;
	virtual bool isLoggable(::sun::util::logging::PlatformLogger$Level* level) override;
	using ::java::lang::System$Logger::log;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* key, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* format, $ObjectArray* params) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg, $Throwable* thrown) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg, $ObjectArray* params) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, ::java::util::function::Supplier* msgSupplier) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $Throwable* thrown, ::java::util::function::Supplier* msgSupplier) override;
	::java::lang::Enum* logLevel(::sun::util::logging::PlatformLogger$Level* level);
	::java::lang::Enum* logLevel(::java::lang::System$Logger$Level* level);
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::function::Supplier* msgSupplier) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $ObjectArray* params) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $Throwable* thrown) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Throwable* thrown, ::java::util::function::Supplier* msgSupplier) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::ResourceBundle* bundle, $String* key, $ObjectArray* params) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::ResourceBundle* bundle, $String* key, $Throwable* thrown) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, ::java::util::ResourceBundle* bundle, $String* key, $ObjectArray* params) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, ::java::util::ResourceBundle* bundle, $String* key, $Throwable* thrown) override;
	static ::jdk::internal::logger::SimpleConsoleLogger* makeSimpleLogger($String* name);
	static ::java::io::PrintStream* outputStream();
	void publish($String* callerInfo, ::java::lang::Enum* level, $String* msg);
	void publish($String* callerInfo, ::java::lang::Enum* level, $String* msg, $Throwable* thrown);
	void publish($String* callerInfo, ::java::lang::Enum* level, $String* msg, $ObjectArray* params);
	virtual void setPlatformLevel(::sun::util::logging::PlatformLogger$Level* newLevel) override;
	virtual $String* toString() override;
	$String* toString($Throwable* thrown);
	static ::java::lang::System$Logger$Level* DEFAULT_LEVEL;
	static ::sun::util::logging::PlatformLogger$Level* DEFAULT_PLATFORM_LEVEL;
	$String* name = nullptr;
	$volatile(::sun::util::logging::PlatformLogger$Level*) level = nullptr;
	bool usePlatformLevel = false;
};

		} // logger
	} // internal
} // jdk

#pragma pop_macro("DEFAULT_LEVEL")
#pragma pop_macro("DEFAULT_PLATFORM_LEVEL")

#endif // _jdk_internal_logger_SimpleConsoleLogger_h_