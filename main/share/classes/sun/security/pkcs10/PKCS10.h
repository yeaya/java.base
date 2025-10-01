#ifndef _sun_security_pkcs10_PKCS10_h_
#define _sun_security_pkcs10_PKCS10_h_
//$ class sun.security.pkcs10.PKCS10
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace security {
		class PrivateKey;
		class PublicKey;
	}
}
namespace sun {
	namespace security {
		namespace pkcs10 {
			class PKCS10Attributes;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class X500Name;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs10 {

class PKCS10 : public ::java::lang::Object {
	$class(PKCS10, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PKCS10();
	void init$(::java::security::PublicKey* publicKey);
	void init$(::java::security::PublicKey* publicKey, ::sun::security::pkcs10::PKCS10Attributes* attributes);
	void init$($bytes* data);
	virtual void encodeAndSign(::sun::security::x509::X500Name* subject, ::java::security::PrivateKey* key, $String* algorithm);
	virtual bool equals(Object$* other) override;
	virtual ::sun::security::pkcs10::PKCS10Attributes* getAttributes();
	virtual $bytes* getEncoded();
	virtual $String* getSigAlg();
	virtual ::sun::security::x509::X500Name* getSubjectName();
	virtual ::java::security::PublicKey* getSubjectPublicKeyInfo();
	virtual int32_t hashCode() override;
	virtual void print(::java::io::PrintStream* out);
	virtual $String* toString() override;
	::sun::security::x509::X500Name* subject = nullptr;
	::java::security::PublicKey* subjectPublicKeyInfo = nullptr;
	$String* sigAlg = nullptr;
	::sun::security::pkcs10::PKCS10Attributes* attributeSet = nullptr;
	$bytes* encoded = nullptr;
};

		} // pkcs10
	} // security
} // sun

#endif // _sun_security_pkcs10_PKCS10_h_