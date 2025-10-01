#ifndef _javax_security_cert_X509Certificate_h_
#define _javax_security_cert_X509Certificate_h_
//$ class javax.security.cert.X509Certificate
//$ extends javax.security.cert.Certificate

#include <java/lang/Array.h>
#include <javax/security/cert/Certificate.h>

#pragma push_macro("X509_PROVIDER")
#undef X509_PROVIDER

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class Principal;
	}
}
namespace java {
	namespace util {
		class Date;
	}
}

namespace javax {
	namespace security {
		namespace cert {

class $import X509Certificate : public ::javax::security::cert::Certificate {
	$class(X509Certificate, 0, ::javax::security::cert::Certificate)
public:
	X509Certificate();
	void init$();
	virtual void checkValidity() {}
	virtual void checkValidity(::java::util::Date* date) {}
	static ::javax::security::cert::X509Certificate* getInst(Object$* value);
	static ::javax::security::cert::X509Certificate* getInstance(::java::io::InputStream* inStream);
	static ::javax::security::cert::X509Certificate* getInstance($bytes* certData);
	virtual ::java::security::Principal* getIssuerDN() {return nullptr;}
	virtual ::java::util::Date* getNotAfter() {return nullptr;}
	virtual ::java::util::Date* getNotBefore() {return nullptr;}
	virtual ::java::math::BigInteger* getSerialNumber() {return nullptr;}
	virtual $String* getSigAlgName() {return nullptr;}
	virtual $String* getSigAlgOID() {return nullptr;}
	virtual $bytes* getSigAlgParams() {return nullptr;}
	virtual ::java::security::Principal* getSubjectDN() {return nullptr;}
	virtual int32_t getVersion() {return 0;}
	static $String* X509_PROVIDER;
	static $String* X509Provider;
};

		} // cert
	} // security
} // javax

#pragma pop_macro("X509_PROVIDER")

#endif // _javax_security_cert_X509Certificate_h_