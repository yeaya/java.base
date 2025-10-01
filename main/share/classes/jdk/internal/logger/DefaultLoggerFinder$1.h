#ifndef _jdk_internal_logger_DefaultLoggerFinder$1_h_
#define _jdk_internal_logger_DefaultLoggerFinder$1_h_
//$ class jdk.internal.logger.DefaultLoggerFinder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Module;
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class DefaultLoggerFinder$1 : public ::java::security::PrivilegedAction {
	$class(DefaultLoggerFinder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DefaultLoggerFinder$1();
	void init$(::java::lang::Module* val$m);
	virtual $Object* run() override;
	::java::lang::Module* val$m = nullptr;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_DefaultLoggerFinder$1_h_