#ifndef _jdk_internal_logger_LoggerFinderLoader_h_
#define _jdk_internal_logger_LoggerFinderLoader_h_
//$ class jdk.internal.logger.LoggerFinderLoader
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CLASSLOADER_PERMISSION")
#undef CLASSLOADER_PERMISSION
#pragma push_macro("LOGGERFINDER_PERMISSION")
#undef LOGGERFINDER_PERMISSION
#pragma push_macro("READ_PERMISSION")
#undef READ_PERMISSION

namespace java {
	namespace lang {
		class RuntimePermission;
		class System$LoggerFinder;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace jdk {
	namespace internal {
		namespace logger {
			class LoggerFinderLoader$ErrorPolicy;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class $export LoggerFinderLoader : public ::java::lang::Object {
	$class(LoggerFinderLoader, 0, ::java::lang::Object)
public:
	LoggerFinderLoader();
	void init$();
	static ::jdk::internal::logger::LoggerFinderLoader$ErrorPolicy* configurationErrorPolicy();
	static bool ensureSingletonProvider();
	static ::java::util::Iterator* findLoggerFinderProviders();
	static ::java::lang::System$LoggerFinder* getLoggerFinder();
	static ::java::util::Iterator* lambda$findLoggerFinderProviders$0();
	static ::java::util::Iterator* lambda$loadDefaultImplementation$1();
	static ::java::lang::System$LoggerFinder* loadDefaultImplementation();
	static ::java::lang::System$LoggerFinder* loadLoggerFinder();
	static ::java::lang::System$LoggerFinder* service();
	static $volatile(::java::lang::System$LoggerFinder*) service$;
	static $Object* lock;
	static ::java::security::Permission* CLASSLOADER_PERMISSION;
	static ::java::security::Permission* READ_PERMISSION;
	static ::java::lang::RuntimePermission* LOGGERFINDER_PERMISSION;
};

		} // logger
	} // internal
} // jdk

#pragma pop_macro("CLASSLOADER_PERMISSION")
#pragma pop_macro("LOGGERFINDER_PERMISSION")
#pragma pop_macro("READ_PERMISSION")

#endif // _jdk_internal_logger_LoggerFinderLoader_h_