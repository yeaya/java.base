#ifndef _jdk_internal_logger_SimpleConsoleLogger$CallerFinder$1_h_
#define _jdk_internal_logger_SimpleConsoleLogger$CallerFinder$1_h_
//$ class jdk.internal.logger.SimpleConsoleLogger$CallerFinder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace logger {

class SimpleConsoleLogger$CallerFinder$1 : public ::java::security::PrivilegedAction {
	$class(SimpleConsoleLogger$CallerFinder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SimpleConsoleLogger$CallerFinder$1();
	void init$();
	virtual $Object* run() override;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_SimpleConsoleLogger$CallerFinder$1_h_