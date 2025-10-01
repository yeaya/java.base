#ifndef _sun_security_pkcs_SigningCertificateInfo_h_
#define _sun_security_pkcs_SigningCertificateInfo_h_
//$ class sun.security.pkcs.SigningCertificateInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace pkcs {
			class ESSCertId;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs {

class $import SigningCertificateInfo : public ::java::lang::Object {
	$class(SigningCertificateInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SigningCertificateInfo();
	void init$($bytes* ber);
	virtual void parse($bytes* bytes);
	virtual $String* toString() override;
	$bytes* ber = nullptr;
	$Array<::sun::security::pkcs::ESSCertId>* certId = nullptr;
};

		} // pkcs
	} // security
} // sun

#endif // _sun_security_pkcs_SigningCertificateInfo_h_