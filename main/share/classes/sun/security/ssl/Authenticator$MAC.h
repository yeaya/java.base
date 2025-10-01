#ifndef _sun_security_ssl_Authenticator$MAC_h_
#define _sun_security_ssl_Authenticator$MAC_h_
//$ interface sun.security.ssl.Authenticator$MAC
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite$MacAlg;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Authenticator$MAC : public ::java::lang::Object {
	$interface(Authenticator$MAC, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* compute(int8_t type, ::java::nio::ByteBuffer* bb, $bytes* sequence, bool isSimulated) {return nullptr;}
	virtual $bytes* compute(int8_t type, ::java::nio::ByteBuffer* bb, bool isSimulated);
	virtual ::sun::security::ssl::CipherSuite$MacAlg* macAlg() {return nullptr;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Authenticator$MAC_h_