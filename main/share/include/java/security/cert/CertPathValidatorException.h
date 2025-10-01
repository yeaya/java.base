#ifndef _java_security_cert_CertPathValidatorException_h_
#define _java_security_cert_CertPathValidatorException_h_
//$ class java.security.cert.CertPathValidatorException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPath;
			class CertPathValidatorException$Reason;
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import CertPathValidatorException : public ::java::security::GeneralSecurityException {
	$class(CertPathValidatorException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	CertPathValidatorException();
	void init$();
	void init$($String* msg);
	void init$($Throwable* cause);
	void init$($String* msg, $Throwable* cause);
	void init$($String* msg, $Throwable* cause, ::java::security::cert::CertPath* certPath, int32_t index);
	void init$($String* msg, $Throwable* cause, ::java::security::cert::CertPath* certPath, int32_t index, ::java::security::cert::CertPathValidatorException$Reason* reason);
	virtual ::java::security::cert::CertPath* getCertPath();
	virtual int32_t getIndex();
	virtual ::java::security::cert::CertPathValidatorException$Reason* getReason();
	void readObject(::java::io::ObjectInputStream* stream);
	static const int64_t serialVersionUID = (int64_t)0xD536581C9D044A6D;
	int32_t index = 0;
	::java::security::cert::CertPath* certPath = nullptr;
	::java::security::cert::CertPathValidatorException$Reason* reason = nullptr;
	CertPathValidatorException(const CertPathValidatorException& e);
	CertPathValidatorException wrapper$();
	virtual void throwWrapper$() override;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPathValidatorException_h_