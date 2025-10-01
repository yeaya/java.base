#ifndef _jdk_internal_logger_DefaultLoggerFinder_h_
#define _jdk_internal_logger_DefaultLoggerFinder_h_
//$ class jdk.internal.logger.DefaultLoggerFinder
//$ extends java.lang.System$LoggerFinder

#include <java/lang/System$LoggerFinder.h>

#pragma push_macro("LOGGERFINDER_PERMISSION")
#undef LOGGERFINDER_PERMISSION

namespace java {
	namespace lang {
		class Module;
		class RuntimePermission;
		class System$Logger;
		class Void;
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class $export DefaultLoggerFinder : public ::java::lang::System$LoggerFinder {
	$class(DefaultLoggerFinder, 0, ::java::lang::System$LoggerFinder)
public:
	DefaultLoggerFinder();
	void init$();
	void init$(::java::lang::Void* unused);
	static ::java::lang::Void* checkPermission();
	virtual ::java::lang::System$Logger* demandLoggerFor($String* name, ::java::lang::Module* module);
	virtual ::java::lang::System$Logger* getLocalizedLogger($String* name, ::java::util::ResourceBundle* bundle, ::java::lang::Module* module) override;
	virtual ::java::lang::System$Logger* getLogger($String* name, ::java::lang::Module* module) override;
	static bool isSystem(::java::lang::Module* m);
	static ::java::lang::RuntimePermission* LOGGERFINDER_PERMISSION;
};

		} // logger
	} // internal
} // jdk

#pragma pop_macro("LOGGERFINDER_PERMISSION")

#endif // _jdk_internal_logger_DefaultLoggerFinder_h_