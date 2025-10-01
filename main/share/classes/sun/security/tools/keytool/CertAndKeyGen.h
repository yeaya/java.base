#ifndef _sun_security_tools_keytool_CertAndKeyGen_h_
#define _sun_security_tools_keytool_CertAndKeyGen_h_
//$ class sun.security.tools.keytool.CertAndKeyGen
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class KeyPairGenerator;
		class PrivateKey;
		class PublicKey;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Date;
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class CertificateExtensions;
			class X500Name;
			class X509Key;
		}
	}
}

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

class CertAndKeyGen : public ::java::lang::Object {
	$class(CertAndKeyGen, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertAndKeyGen();
	void init$($String* keyType, $String* sigAlg);
	void init$($String* keyType, $String* sigAlg, $String* providerName);
	void init$($String* keyType, $String* sigAlg, $String* providerName, ::java::security::PrivateKey* signerPrivateKey, ::sun::security::x509::X500Name* signerSubjectName);
	void generate($String* name);
	void generate(int32_t keyBits);
	void generateInternal();
	::java::security::PrivateKey* getPrivateKey();
	::sun::security::x509::X509Key* getPublicKey();
	::java::security::PublicKey* getPublicKeyAnyway();
	::java::security::cert::X509Certificate* getSelfCertificate(::sun::security::x509::X500Name* myname, ::java::util::Date* firstDate, int64_t validity);
	::java::security::cert::X509Certificate* getSelfCertificate(::sun::security::x509::X500Name* myname, ::java::util::Date* firstDate, int64_t validity, ::sun::security::x509::CertificateExtensions* ext);
	::java::security::cert::X509Certificate* getSelfCertificate(::sun::security::x509::X500Name* myname, int64_t validity);
	void setRandom(::java::security::SecureRandom* generator);
	::java::security::SecureRandom* prng = nullptr;
	$String* keyType = nullptr;
	$String* sigAlg = nullptr;
	::java::security::KeyPairGenerator* keyGen = nullptr;
	::java::security::PublicKey* publicKey = nullptr;
	::java::security::PrivateKey* privateKey = nullptr;
	bool signerFlag = false;
	::java::security::PrivateKey* signerPrivateKey = nullptr;
	::sun::security::x509::X500Name* signerSubjectName = nullptr;
};

			} // keytool
		} // tools
	} // security
} // sun

#endif // _sun_security_tools_keytool_CertAndKeyGen_h_