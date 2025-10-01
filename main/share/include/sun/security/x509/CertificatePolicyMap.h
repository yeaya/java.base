#ifndef _sun_security_x509_CertificatePolicyMap_h_
#define _sun_security_x509_CertificatePolicyMap_h_
//$ class sun.security.x509.CertificatePolicyMap
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {
			class DerOutputStream;
			class DerValue;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class CertificatePolicyId;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import CertificatePolicyMap : public ::java::lang::Object {
	$class(CertificatePolicyMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertificatePolicyMap();
	void init$(::sun::security::x509::CertificatePolicyId* issuer, ::sun::security::x509::CertificatePolicyId* subject);
	void init$(::sun::security::util::DerValue* val);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual ::sun::security::x509::CertificatePolicyId* getIssuerIdentifier();
	virtual ::sun::security::x509::CertificatePolicyId* getSubjectIdentifier();
	virtual $String* toString() override;
	::sun::security::x509::CertificatePolicyId* issuerDomain = nullptr;
	::sun::security::x509::CertificatePolicyId* subjectDomain = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_CertificatePolicyMap_h_