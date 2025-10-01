#ifndef _java_security_cert_Certificate$CertificateRep_h_
#define _java_security_cert_Certificate$CertificateRep_h_
//$ class java.security.cert.Certificate$CertificateRep
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace security {
		namespace cert {

class $import Certificate$CertificateRep : public ::java::io::Serializable {
	$class(Certificate$CertificateRep, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	Certificate$CertificateRep();
	void init$($String* type, $bytes* data);
	virtual $Object* readResolve();
	static const int64_t serialVersionUID = (int64_t)0x89276A9DC9AE3C0C;
	$String* type = nullptr;
	$bytes* data = nullptr;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_Certificate$CertificateRep_h_