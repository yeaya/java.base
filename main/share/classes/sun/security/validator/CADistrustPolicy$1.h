#ifndef _sun_security_validator_CADistrustPolicy$1_h_
#define _sun_security_validator_CADistrustPolicy$1_h_
//$ class sun.security.validator.CADistrustPolicy$1
//$ extends sun.security.validator.CADistrustPolicy

#include <java/lang/Array.h>
#include <sun/security/validator/CADistrustPolicy.h>

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}

namespace sun {
	namespace security {
		namespace validator {

class CADistrustPolicy$1 : public ::sun::security::validator::CADistrustPolicy {
	$class(CADistrustPolicy$1, $NO_CLASS_INIT, ::sun::security::validator::CADistrustPolicy)
public:
	CADistrustPolicy$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual void checkDistrust($String* variant, $Array<::java::security::cert::X509Certificate>* chain) override;
};

		} // validator
	} // security
} // sun

#endif // _sun_security_validator_CADistrustPolicy$1_h_