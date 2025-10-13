#ifndef _sun_security_validator_CADistrustPolicy_h_
#define _sun_security_validator_CADistrustPolicy_h_
//$ class sun.security.validator.CADistrustPolicy
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("POLICIES")
#undef POLICIES
#pragma push_macro("SYMANTEC_TLS")
#undef SYMANTEC_TLS

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class EnumSet;
	}
}

namespace sun {
	namespace security {
		namespace validator {

class CADistrustPolicy : public ::java::lang::Enum {
	$class(CADistrustPolicy, 0, ::java::lang::Enum)
public:
	CADistrustPolicy();
	static $Array<::sun::security::validator::CADistrustPolicy>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual void checkDistrust($String* variant, $Array<::java::security::cert::X509Certificate>* chain) {}
	static ::java::util::EnumSet* parseProperty();
	static ::sun::security::validator::CADistrustPolicy* valueOf($String* name);
	static $Array<::sun::security::validator::CADistrustPolicy>* values();
	static ::sun::security::validator::CADistrustPolicy* SYMANTEC_TLS;
	static $Array<::sun::security::validator::CADistrustPolicy>* $VALUES;
	static ::java::util::EnumSet* POLICIES;
};

		} // validator
	} // security
} // sun

#pragma pop_macro("POLICIES")
#pragma pop_macro("SYMANTEC_TLS")

#endif // _sun_security_validator_CADistrustPolicy_h_