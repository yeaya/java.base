#ifndef _sun_security_util_AbstractAlgorithmConstraints$1_h_
#define _sun_security_util_AbstractAlgorithmConstraints$1_h_
//$ class sun.security.util.AbstractAlgorithmConstraints$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace util {

class AbstractAlgorithmConstraints$1 : public ::java::security::PrivilegedAction {
	$class(AbstractAlgorithmConstraints$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AbstractAlgorithmConstraints$1();
	void init$($String* val$propertyName);
	virtual $Object* run() override;
	$String* val$propertyName = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_AbstractAlgorithmConstraints$1_h_