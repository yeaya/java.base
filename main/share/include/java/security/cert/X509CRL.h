#ifndef _java_security_cert_X509CRL_h_
#define _java_security_cert_X509CRL_h_
//$ class java.security.cert.X509CRL
//$ extends java.security.cert.CRL
//$ implements java.security.cert.X509Extension

#include <java/lang/Array.h>
#include <java/security/cert/CRL.h>
#include <java/security/cert/X509Extension.h>

#pragma push_macro("X509CRL")
#undef X509CRL

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
	namespace security {
		namespace cert {
			class X509CRLEntry;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class Set;
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

class $import X509CRL : public ::java::security::cert::CRL, public ::java::security::cert::X509Extension {
	$class(X509CRL, $NO_CLASS_INIT, ::java::security::cert::CRL, ::java::security::cert::X509Extension)
public:
	X509CRL();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	virtual bool equals(Object$* other) override;
	virtual $bytes* getEncoded() {return nullptr;}
	virtual ::java::security::Principal* getIssuerDN() {return nullptr;}
	virtual ::javax::security::auth::x500::X500Principal* getIssuerX500Principal();
	virtual ::java::util::Date* getNextUpdate() {return nullptr;}
	virtual ::java::security::cert::X509CRLEntry* getRevokedCertificate(::java::math::BigInteger* serialNumber) {return nullptr;}
	virtual ::java::security::cert::X509CRLEntry* getRevokedCertificate(::java::security::cert::X509Certificate* certificate);
	virtual ::java::util::Set* getRevokedCertificates() {return nullptr;}
	virtual $String* getSigAlgName() {return nullptr;}
	virtual $String* getSigAlgOID() {return nullptr;}
	virtual $bytes* getSigAlgParams() {return nullptr;}
	virtual $bytes* getSignature() {return nullptr;}
	virtual $bytes* getTBSCertList() {return nullptr;}
	virtual ::java::util::Date* getThisUpdate() {return nullptr;}
	virtual int32_t getVersion() {return 0;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual void verify(::java::security::PublicKey* key) {}
	virtual void verify(::java::security::PublicKey* key, $String* sigProvider) {}
	virtual void verify(::java::security::PublicKey* key, ::java::security::Provider* sigProvider);
	::javax::security::auth::x500::X500Principal* issuerPrincipal = nullptr;
};

		} // cert
	} // security
} // java

#pragma pop_macro("X509CRL")

#endif // _java_security_cert_X509CRL_h_