#ifndef _java_security_cert_CertPath$CertPathRep_h_
#define _java_security_cert_CertPath$CertPathRep_h_
//$ class java.security.cert.CertPath$CertPathRep
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace security {
		namespace cert {

class $import CertPath$CertPathRep : public ::java::io::Serializable {
	$class(CertPath$CertPathRep, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	CertPath$CertPathRep();
	void init$($String* type, $bytes* data);
	virtual $Object* readResolve();
	static const int64_t serialVersionUID = (int64_t)0x29D9AE4D46FC6E13;
	$String* type = nullptr;
	$bytes* data = nullptr;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPath$CertPathRep_h_