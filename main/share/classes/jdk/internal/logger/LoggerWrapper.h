#ifndef _jdk_internal_logger_LoggerWrapper_h_
#define _jdk_internal_logger_LoggerWrapper_h_
//$ class jdk.internal.logger.LoggerWrapper
//$ extends jdk.internal.logger.AbstractLoggerWrapper

#include <java/lang/Array.h>
#include <jdk/internal/logger/AbstractLoggerWrapper.h>

namespace java {
	namespace lang {
		class System$Logger;
		class System$Logger$Level;
		class Throwable;
		class Void;
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
			class PlatformLogger$Bridge;
			class PlatformLogger$ConfigurableBridge$LoggerConfiguration;
			class PlatformLogger$Level;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class $export LoggerWrapper : public ::jdk::internal::logger::AbstractLoggerWrapper {
	$class(LoggerWrapper, $NO_CLASS_INIT, ::jdk::internal::logger::AbstractLoggerWrapper)
public:
	LoggerWrapper();
	void init$(::java::lang::System$Logger* wrapped);
	void init$(::java::lang::System$Logger* wrapped, ::java::lang::Void* unused);
	virtual ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration* getLoggerConfiguration() override;
	virtual bool isEnabled() override;
	virtual bool isLoggable(::sun::util::logging::PlatformLogger$Level* level) override;
	virtual bool isLoggable(::java::lang::System$Logger$Level* level) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $Throwable* thrown, ::java::util::function::Supplier* msgSupplier) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, ::java::util::function::Supplier* msgSupplier) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg, $ObjectArray* params) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg, $Throwable* thrown) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* format, $ObjectArray* params) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* key, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, $String* format, $ObjectArray* params) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, $String* msg, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, Object$* obj) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier) override;
	virtual void log(::java::lang::System$Logger$Level* level, $String* msg) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Throwable* thrown, ::java::util::function::Supplier* msgSupplier) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $Throwable* thrown) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $ObjectArray* params) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::function::Supplier* msgSupplier) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, ::java::util::ResourceBundle* bundle, $String* msg, $ObjectArray* params) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::ResourceBundle* bundle, $String* msg, $ObjectArray* params) override;
	virtual ::sun::util::logging::PlatformLogger$Bridge* platformProxy() override;
	virtual ::java::lang::System$Logger* wrapped() override;
	::java::lang::System$Logger* wrapped$ = nullptr;
	::sun::util::logging::PlatformLogger$Bridge* platformProxy$ = nullptr;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_LoggerWrapper_h_