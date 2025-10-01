#ifndef _sun_security_validator_CADistrustPolicy$2_h_
#define _sun_security_validator_CADistrustPolicy$2_h_
//$ class sun.security.validator.CADistrustPolicy$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace validator {

class CADistrustPolicy$2 : public ::java::security::PrivilegedAction {
	$class(CADistrustPolicy$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	CADistrustPolicy$2();
	void init$();
	virtual $Object* run() override;
};

		} // validator
	} // security
} // sun

#endif // _sun_security_validator_CADistrustPolicy$2_h_