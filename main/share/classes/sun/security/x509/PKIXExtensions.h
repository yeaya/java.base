#ifndef _sun_security_x509_PKIXExtensions_h_
#define _sun_security_x509_PKIXExtensions_h_
//$ class sun.security.x509.PKIXExtensions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export PKIXExtensions : public ::java::lang::Object {
	$class(PKIXExtensions, 0, ::java::lang::Object)
public:
	PKIXExtensions();
	void init$();
	static ::sun::security::util::ObjectIdentifier* AuthorityKey_Id;
	static ::sun::security::util::ObjectIdentifier* SubjectKey_Id;
	static ::sun::security::util::ObjectIdentifier* KeyUsage_Id;
	static ::sun::security::util::ObjectIdentifier* PrivateKeyUsage_Id;
	static ::sun::security::util::ObjectIdentifier* CertificatePolicies_Id;
	static ::sun::security::util::ObjectIdentifier* PolicyMappings_Id;
	static ::sun::security::util::ObjectIdentifier* SubjectAlternativeName_Id;
	static ::sun::security::util::ObjectIdentifier* IssuerAlternativeName_Id;
	static ::sun::security::util::ObjectIdentifier* SubjectDirectoryAttributes_Id;
	static ::sun::security::util::ObjectIdentifier* BasicConstraints_Id;
	static ::sun::security::util::ObjectIdentifier* NameConstraints_Id;
	static ::sun::security::util::ObjectIdentifier* PolicyConstraints_Id;
	static ::sun::security::util::ObjectIdentifier* CRLDistributionPoints_Id;
	static ::sun::security::util::ObjectIdentifier* CRLNumber_Id;
	static ::sun::security::util::ObjectIdentifier* IssuingDistributionPoint_Id;
	static ::sun::security::util::ObjectIdentifier* DeltaCRLIndicator_Id;
	static ::sun::security::util::ObjectIdentifier* ReasonCode_Id;
	static ::sun::security::util::ObjectIdentifier* HoldInstructionCode_Id;
	static ::sun::security::util::ObjectIdentifier* InvalidityDate_Id;
	static ::sun::security::util::ObjectIdentifier* ExtendedKeyUsage_Id;
	static ::sun::security::util::ObjectIdentifier* InhibitAnyPolicy_Id;
	static ::sun::security::util::ObjectIdentifier* CertificateIssuer_Id;
	static ::sun::security::util::ObjectIdentifier* AuthInfoAccess_Id;
	static ::sun::security::util::ObjectIdentifier* SubjectInfoAccess_Id;
	static ::sun::security::util::ObjectIdentifier* FreshestCRL_Id;
	static ::sun::security::util::ObjectIdentifier* OCSPNoCheck_Id;
	static ::sun::security::util::ObjectIdentifier* OCSPNonce_Id;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_PKIXExtensions_h_