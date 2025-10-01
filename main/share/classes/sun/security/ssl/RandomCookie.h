#ifndef _sun_security_ssl_RandomCookie_h_
#define _sun_security_ssl_RandomCookie_h_
//$ class sun.security.ssl.RandomCookie
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class SecureRandom;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class RandomCookie : public ::java::lang::Object {
	$class(RandomCookie, 0, ::java::lang::Object)
public:
	RandomCookie();
	void init$(::java::security::SecureRandom* generator);
	void init$(::sun::security::ssl::HandshakeContext* context);
	void init$(::java::nio::ByteBuffer* m);
	void init$($bytes* randomBytes);
	bool isHelloRetryRequest();
	bool isT11Downgrade();
	bool isT12Downgrade();
	bool isVersionDowngrade(::sun::security::ssl::HandshakeContext* context);
	virtual $String* toString() override;
	$bytes* randomBytes = nullptr;
	static $bytes* hrrRandomBytes;
	static $bytes* t12Protection;
	static $bytes* t11Protection;
	static ::sun::security::ssl::RandomCookie* hrrRandom;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_RandomCookie_h_