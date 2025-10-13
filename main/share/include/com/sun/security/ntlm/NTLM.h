#ifndef _com_sun_security_ntlm_NTLM_h_
#define _com_sun_security_ntlm_NTLM_h_
//$ class com.sun.security.ntlm.NTLM
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("NTLM")
#undef NTLM

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {
				class Version;
			}
		}
	}
}
namespace java {
	namespace security {
		class MessageDigest;
	}
}
namespace javax {
	namespace crypto {
		class Cipher;
		class Mac;
		class SecretKeyFactory;
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

class $import NTLM : public ::java::lang::Object {
	$class(NTLM, 0, ::java::lang::Object)
public:
	NTLM();
	void init$($String* version);
	virtual $bytes* calcLMHash($bytes* pwb);
	virtual $bytes* calcNTHash($bytes* pw);
	virtual $bytes* calcResponse($bytes* key, $bytes* text);
	virtual $bytes* calcV2($bytes* nthash, $String* text, $bytes* blob, $bytes* challenge);
	virtual void debug($String* format, $ObjectArray* args);
	virtual void debug($bytes* bytes);
	static $bytes* getP1($chars* password);
	static $bytes* getP2($chars* password);
	virtual $bytes* hmacMD5($bytes* key, $bytes* text);
	virtual $bytes* makeDesKey($bytes* input, int32_t off);
	static $bytes* ntlm2LM($bytes* nonce);
	virtual $bytes* ntlm2NTLM($bytes* ntlmHash, $bytes* nonce, $bytes* challenge);
	static bool $assertionsDisabled;
	::javax::crypto::SecretKeyFactory* fac = nullptr;
	::javax::crypto::Cipher* cipher = nullptr;
	::java::security::MessageDigest* md4 = nullptr;
	::javax::crypto::Mac* hmac = nullptr;
	::java::security::MessageDigest* md5 = nullptr;
	static bool DEBUG;
	::com::sun::security::ntlm::Version* v = nullptr;
	bool writeLM = false;
	bool writeNTLM = false;
};

			} // ntlm
		} // security
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("NTLM")

#endif // _com_sun_security_ntlm_NTLM_h_