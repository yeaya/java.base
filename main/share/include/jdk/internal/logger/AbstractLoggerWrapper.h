#ifndef _jdk_internal_logger_AbstractLoggerWrapper_h_
#define _jdk_internal_logger_AbstractLoggerWrapper_h_
//$ class jdk.internal.logger.AbstractLoggerWrapper
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
			class PlatformLogger$ConfigurableBridge$LoggerConfiguration;
			class PlatformLogger$Level;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class $import AbstractLoggerWrapper : public ::java::lang::System$Logger, public ::sun::util::logging::PlatformLogger$Bridge, public ::sun::util::logging::PlatformLogger$ConfigurableBridge {
	$class(AbstractLoggerWrapper, $NO_CLASS_INIT, ::java::lang::System$Logger, ::sun::util::logging::PlatformLogger$Bridge, ::sun::util::logging::PlatformLogger$ConfigurableBridge)
public:
	AbstractLoggerWrapper();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration* getLoggerConfiguration() override;
	virtual $String* getName() override;
	virtual ::java::lang::System$Logger* getWrapped();
	virtual bool isEnabled() override;
	virtual bool isLoggable(::java::lang::System$Logger$Level* level) override;
	virtual bool isLoggable(::sun::util::logging::PlatformLogger$Level* level) override;
	static $String* lambda$logp$0($String* sClass, $String* sMethod, ::java::util::function::Supplier* msgSupplier);
	virtual void log(::java::lang::System$Logger$Level* level, $String* msg) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier) override;
	virtual void log(::java::lang::System$Logger$Level* level, Object$* obj) override;
	virtual void log(::java::lang::System$Logger$Level* level, $String* msg, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, $String* format, $ObjectArray* params) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* key, $Throwable* thrown) override;
	virtual void log(::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* format, $ObjectArray* params) override;
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
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown) override;
	virtual void logrb(::sun::util::logging::PlatformLogger$Level* level, ::java::util::ResourceBundle* bundle, $String* msg, $ObjectArray* params) override;
	virtual ::sun::util::logging::PlatformLogger$Bridge* platformProxy() {return nullptr;}
	virtual $String* toString() override;
	virtual ::java::lang::System$Logger* wrapped() {return nullptr;}
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_AbstractLoggerWrapper_h_