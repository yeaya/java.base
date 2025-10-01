#ifndef _jdk_internal_logger_BootstrapLogger$LogEvent_h_
#define _jdk_internal_logger_BootstrapLogger$LogEvent_h_
//$ class jdk.internal.logger.BootstrapLogger$LogEvent
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class System$Logger;
		class System$Logger$Level;
		class Throwable;
		class Void;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
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
namespace jdk {
	namespace internal {
		namespace logger {
			class BootstrapLogger;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger$Bridge;
			class PlatformLogger$Level;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class $export BootstrapLogger$LogEvent : public ::java::lang::Object {
	$class(BootstrapLogger$LogEvent, 0, ::java::lang::Object)
public:
	BootstrapLogger$LogEvent();
	void init$(::jdk::internal::logger::BootstrapLogger* bootstrap, ::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown, $ObjectArray* params);
	void init$(::jdk::internal::logger::BootstrapLogger* bootstrap, ::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier, $Throwable* thrown, $ObjectArray* params);
	void init$(::jdk::internal::logger::BootstrapLogger* bootstrap, ::sun::util::logging::PlatformLogger$Level* platformLevel, $String* sourceClass, $String* sourceMethod, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown, $ObjectArray* params);
	void init$(::jdk::internal::logger::BootstrapLogger* bootstrap, ::sun::util::logging::PlatformLogger$Level* platformLevel, $String* sourceClass, $String* sourceMethod, ::java::util::function::Supplier* msgSupplier, $Throwable* thrown, $ObjectArray* params);
	static void lambda$log$0(::jdk::internal::logger::BootstrapLogger$LogEvent* log, ::java::lang::System$Logger* logger);
	static ::java::lang::Void* lambda$log$1(::jdk::internal::logger::BootstrapLogger$LogEvent* log, ::java::lang::System$Logger* logger);
	static void lambda$log$2(::jdk::internal::logger::BootstrapLogger$LogEvent* log, ::java::lang::System$Logger* logger);
	static ::java::lang::Void* lambda$log$3(::jdk::internal::logger::BootstrapLogger$LogEvent* log, ::sun::util::logging::PlatformLogger$Bridge* logger);
	void log(::java::lang::System$Logger* logger);
	void log(::sun::util::logging::PlatformLogger$Bridge* logger);
	static void log(::jdk::internal::logger::BootstrapLogger$LogEvent* log, ::java::lang::System$Logger* logger);
	static void log(::jdk::internal::logger::BootstrapLogger$LogEvent* log, ::sun::util::logging::PlatformLogger$Bridge* logger);
	static void log(::jdk::internal::logger::BootstrapLogger$LogEvent* event);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* valueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* key, $Throwable* thrown);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* valueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::java::lang::System$Logger$Level* level, ::java::util::ResourceBundle* bundle, $String* format, $ObjectArray* params);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* valueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier, $Throwable* thrown);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* valueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::java::lang::System$Logger$Level* level, ::java::util::function::Supplier* msgSupplier);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* valueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::sun::util::logging::PlatformLogger$Level* level, $String* msg);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* valueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::sun::util::logging::PlatformLogger$Level* level, $String* msg, $Throwable* thrown);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* valueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::sun::util::logging::PlatformLogger$Level* level, $String* msg, $ObjectArray* params);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* valueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::sun::util::logging::PlatformLogger$Level* level, ::java::util::function::Supplier* msgSupplier);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* valueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::ResourceBundle* bundle, $String* msg, $ObjectArray* params);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* valueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::ResourceBundle* bundle, $String* msg, $Throwable* thrown);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* valueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::sun::util::logging::PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, ::java::util::function::Supplier* msgSupplier, $Throwable* thrown);
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* vaueOf(::jdk::internal::logger::BootstrapLogger* bootstrap, ::sun::util::logging::PlatformLogger$Level* level, ::java::util::function::Supplier* msgSupplier, $Throwable* thrown);
	static bool $assertionsDisabled;
	::java::lang::System$Logger$Level* level = nullptr;
	::sun::util::logging::PlatformLogger$Level* platformLevel = nullptr;
	::jdk::internal::logger::BootstrapLogger* bootstrap = nullptr;
	::java::util::ResourceBundle* bundle = nullptr;
	$String* msg = nullptr;
	$Throwable* thrown = nullptr;
	$ObjectArray* params = nullptr;
	::java::util::function::Supplier* msgSupplier = nullptr;
	$String* sourceClass = nullptr;
	$String* sourceMethod = nullptr;
	int64_t timeMillis = 0;
	int64_t nanoAdjustment = 0;
	::java::security::AccessControlContext* acc = nullptr;
	::jdk::internal::logger::BootstrapLogger$LogEvent* next = nullptr;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_BootstrapLogger$LogEvent_h_