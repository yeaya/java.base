#ifndef _java_security_cert_X509Certificate_h_
#define _java_security_cert_X509Certificate_h_
//$ class java.security.cert.X509Certificate
//$ extends java.security.cert.Certificate
//$ implements java.security.cert.X509Extension

#include <java/lang/Array.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/X509Extension.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class Principal;
		class Provider;
		class PublicKey;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Date;
		class List;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
			}
		}
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import X509Certificate : public ::java::security::cert::Certificate, public ::java::security::cert::X509Extension {
	$class(X509Certificate, $NO_CLASS_INIT, ::java::security::cert::Certificate, ::java::security::cert::X509Extension)
public:
	X509Certificate();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void checkValidity() {}
	virtual void checkValidity(::java::util::Date* date) {}
	virtual int32_t getBasicConstraints() {return 0;}
	virtual ::java::util::List* getExtendedKeyUsage();
	virtual ::java::util::Collection* getIssuerAlternativeNames();
	virtual ::java::security::Principal* getIssuerDN() {return nullptr;}
	virtual $booleans* getIssuerUniqueID() {return nullptr;}
	virtual ::javax::security::auth::x500::X500Principal* getIssuerX500Principal();
	virtual $booleans* getKeyUsage() {return nullptr;}
	virtual ::java::util::Date* getNotAfter() {return nullptr;}
	virtual ::java::util::Date* getNotBefore() {return nullptr;}
	virtual ::java::math::BigInteger* getSerialNumber() {return nullptr;}
	virtual $String* getSigAlgName() {return nullptr;}
	virtual $String* getSigAlgOID() {return nullptr;}
	virtual $bytes* getSigAlgParams() {return nullptr;}
	virtual $bytes* getSignature() {return nullptr;}
	virtual ::java::util::Collection* getSubjectAlternativeNames();
	virtual ::java::security::Principal* getSubjectDN() {return nullptr;}
	virtual $booleans* getSubjectUniqueID() {return nullptr;}
	virtual ::javax::security::auth::x500::X500Principal* getSubjectX500Principal();
	virtual $bytes* getTBSCertificate() {return nullptr;}
	virtual int32_t getVersion() {return 0;}
	using ::java::security::cert::Certificate::verify;
	virtual $String* toString() override;
	virtual void verify(::java::security::PublicKey* key, ::java::security::Provider* sigProvider) override;
	static const int64_t serialVersionUID = (int64_t)0xDD6DBCA837EF9DF8;
	::javax::security::auth::x500::X500Principal* subjectX500Principal = nullptr;
	::javax::security::auth::x500::X500Principal* issuerX500Principal = nullptr;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_X509Certificate_h_