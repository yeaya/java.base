#ifndef _jdk_internal_logger_LocalizedLoggerWrapper_h_
#define _jdk_internal_logger_LocalizedLoggerWrapper_h_
//$ class jdk.internal.logger.LocalizedLoggerWrapper
//$ extends jdk.internal.logger.LoggerWrapper

#include <java/lang/Array.h>
#include <jdk/internal/logger/LoggerWrapper.h>

namespace java {
	namespace lang {
		class System$Logger;
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

class $import LocalizedLoggerWrapper : public ::jdk::internal::logger::LoggerWrapper {
	$class(LocalizedLoggerWrapper, $NO_CLASS_INIT, ::jdk::internal::logger::LoggerWrapper)
public:
	LocalizedLoggerWrapper();
	void init$(::java::lang::System$Logger* wrapped, ::java::util::ResourceBundle* bundle);
	::java::util::ResourceBundle* getBundle();
	using ::jdk::internal::logger::LoggerWrapper::isLoggable;
	virtual bool isLoggable(::java::lang::System$Logger$Level* level) override;
	using ::jdk::internal::logger::LoggerWrapper::log;
	virtual void log(::java::lang::System$Logger$Level* level, $String* msg) override;
	virtual void log(::java::lang::System$Logger$Level* level, $String* msg, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, $String* format, $ObjectArray* params) override;
	virtual void log(::java::lang::System$Logger$Level* level, Object$* obj) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* format, $ObjectArray* params) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* key, $Throwable* thrown) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg, $Throwable* thrown) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* msg) override;
	virtual void log(::sun::util::logging::PlatformLogger$Level* level, $String* format, $ObjectArray* params) override;
	using ::jdk::internal::logger::LoggerWrapper::logp;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* key) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* key, $Throwable* thrown) override;
	virtual void logp(::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* key, $ObjectArray* params) override;
	::java::util::ResourceBundle* bundle = nullptr;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_LocalizedLoggerWrapper_h_