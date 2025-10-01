#ifndef _sun_security_ssl_Authenticator_h_
#define _sun_security_ssl_Authenticator_h_
//$ class sun.security.ssl.Authenticator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite$MacAlg;
			class ProtocolVersion;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Authenticator : public ::java::lang::Object {
	$class(Authenticator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Authenticator();
	void init$($bytes* block);
	virtual $bytes* acquireAuthenticationBytes(int8_t type, int32_t length, $bytes* sequence);
	void increaseSequenceNumber();
	static ::sun::security::ssl::Authenticator* nullDtlsMac();
	static ::sun::security::ssl::Authenticator* nullTlsMac();
	virtual bool seqNumIsHuge() {return false;}
	virtual bool seqNumOverflow() {return false;}
	$bytes* sequenceNumber();
	virtual void setEpochNumber(int32_t epoch);
	static int64_t toLong($bytes* recordEnS);
	static ::sun::security::ssl::Authenticator* valueOf(::sun::security::ssl::ProtocolVersion* protocolVersion);
	static ::sun::security::ssl::Authenticator* valueOf(::sun::security::ssl::ProtocolVersion* protocolVersion, ::sun::security::ssl::CipherSuite$MacAlg* macAlg, ::javax::crypto::SecretKey* key);
	$bytes* block = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Authenticator_h_