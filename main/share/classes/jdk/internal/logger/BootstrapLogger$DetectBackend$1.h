#ifndef _jdk_internal_logger_BootstrapLogger$DetectBackend$1_h_
#define _jdk_internal_logger_BootstrapLogger$DetectBackend$1_h_
//$ class jdk.internal.logger.BootstrapLogger$DetectBackend$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace logger {

class BootstrapLogger$DetectBackend$1 : public ::java::security::PrivilegedAction {
	$class(BootstrapLogger$DetectBackend$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	BootstrapLogger$DetectBackend$1();
	void init$();
	virtual $Object* run() override;
};

		} // logger
	} // internal
} // jdk

#endif // _jdk_internal_logger_BootstrapLogger$DetectBackend$1_h_