#ifndef _sun_security_ssl_X509Authentication_h_
#define _sun_security_ssl_X509Authentication_h_
//$ class sun.security.ssl.X509Authentication
//$ extends java.lang.Enum
//$ implements sun.security.ssl.SSLAuthentication

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <sun/security/ssl/SSLAuthentication.h>

#pragma push_macro("DSA")
#undef DSA
#pragma push_macro("EC")
#undef EC
#pragma push_macro("EDDSA")
#undef EDDSA
#pragma push_macro("RSA")
#undef RSA
#pragma push_macro("RSASSA_PSS")
#undef RSASSA_PSS
#pragma push_macro("RSA_OR_PSS")
#undef RSA_OR_PSS

namespace java {
	namespace util {
		class Map$Entry;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
			class SSLHandshake;
			class SSLPossession;
			class SSLPossessionGenerator;
			class SignatureScheme;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class X509Authentication : public ::java::lang::Enum, public ::sun::security::ssl::SSLAuthentication {
	$class(X509Authentication, 0, ::java::lang::Enum, ::sun::security::ssl::SSLAuthentication)
public:
	X509Authentication();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::sun::security::ssl::X509Authentication>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* keyType, ::sun::security::ssl::SSLPossessionGenerator* possessionGenerator);
	virtual ::sun::security::ssl::SSLPossession* createPossession(::sun::security::ssl::HandshakeContext* handshakeContext) override;
	virtual $Array<::java::util::Map$Entry>* getHandshakeProducers(::sun::security::ssl::HandshakeContext* handshakeContext) override;
	virtual $Array<::sun::security::ssl::SSLHandshake>* getRelatedHandshakers(::sun::security::ssl::HandshakeContext* handshakeContext) override;
	virtual $String* toString() override;
	static ::sun::security::ssl::X509Authentication* valueOf($String* name);
	static ::sun::security::ssl::X509Authentication* valueOf(::sun::security::ssl::SignatureScheme* signatureScheme);
	static $Array<::sun::security::ssl::X509Authentication>* values();
	static ::sun::security::ssl::X509Authentication* RSA;
	static ::sun::security::ssl::X509Authentication* RSASSA_PSS;
	static ::sun::security::ssl::X509Authentication* RSA_OR_PSS;
	static ::sun::security::ssl::X509Authentication* DSA;
	static ::sun::security::ssl::X509Authentication* EC;
	static ::sun::security::ssl::X509Authentication* EDDSA;
	static $Array<::sun::security::ssl::X509Authentication>* $VALUES;
	$String* keyType = nullptr;
	::sun::security::ssl::SSLPossessionGenerator* possessionGenerator = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DSA")
#pragma pop_macro("EC")
#pragma pop_macro("EDDSA")
#pragma pop_macro("RSA")
#pragma pop_macro("RSASSA_PSS")
#pragma pop_macro("RSA_OR_PSS")

#endif // _sun_security_ssl_X509Authentication_h_