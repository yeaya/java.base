#ifndef _sun_security_provider_certpath_OCSP$RevocationStatus$CertStatus_h_
#define _sun_security_provider_certpath_OCSP$RevocationStatus$CertStatus_h_
//$ class sun.security.provider.certpath.OCSP$RevocationStatus$CertStatus
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("REVOKED")
#undef REVOKED
#pragma push_macro("UNKNOWN")
#undef UNKNOWN
#pragma push_macro("GOOD")
#undef GOOD

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import OCSP$RevocationStatus$CertStatus : public ::java::lang::Enum {
	$class(OCSP$RevocationStatus$CertStatus, 0, ::java::lang::Enum)
public:
	OCSP$RevocationStatus$CertStatus();
	static $Array<::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus* valueOf($String* name);
	static $Array<::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus>* values();
	static ::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus* GOOD;
	static ::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus* REVOKED;
	static ::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus* UNKNOWN;
	static $Array<::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus>* $VALUES;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("REVOKED")
#pragma pop_macro("UNKNOWN")
#pragma pop_macro("GOOD")

#endif // _sun_security_provider_certpath_OCSP$RevocationStatus$CertStatus_h_