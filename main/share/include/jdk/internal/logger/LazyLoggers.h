#ifndef _jdk_internal_logger_LazyLoggers_h_
#define _jdk_internal_logger_LazyLoggers_h_
//$ class jdk.internal.logger.LazyLoggers
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOGGERFINDER_PERMISSION")
#undef LOGGERFINDER_PERMISSION

namespace java {
	namespace lang {
		class Module;
		class RuntimePermission;
		class System$Logger;
		class System$LoggerFinder;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace logger {
			class LazyLoggers$LazyLoggerFactories;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class $import LazyLoggers : public ::java::lang::Object {
	$class(LazyLoggers, 0, ::java::lang::Object)
public:
	LazyLoggers();
	void init$();
	static ::java::lang::System$LoggerFinder* accessLoggerFinder();
	static ::java::lang::System$Logger* getLazyLogger($String* name, ::java::lang::Module* module);
	static ::java::lang::System$Logger* getLogger($String* name, ::java::lang::Module* module);
	static ::java::lang::System$Logger* getLoggerFromFinder($String* name, ::java::lang::Module* module);
	static ::java::lang::System$Logger* lambda$getLoggerFromFinder$0($String* name, ::java::lang::Module* module);
	static ::java::lang::RuntimePermission* LOGGERFINDER_PERMISSION;
	static $volatile(::java::lang::System$LoggerFinder*) provider;
	static ::java::util::function::BiFunction* loggerSupplier;
	static ::jdk::internal::logger::LazyLoggers$LazyLoggerFactories* factories;
};

		} // logger
	} // internal
} // jdk

#pragma pop_macro("LOGGERFINDER_PERMISSION")

#endif // _jdk_internal_logger_LazyLoggers_h_