#ifndef _sun_security_ssl_SSLTransport_h_
#define _sun_security_ssl_SSLTransport_h_
//$ interface sun.security.ssl.SSLTransport
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
			class Plaintext;
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLTransport : public ::java::lang::Object {
	$interface(SSLTransport, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static ::sun::security::ssl::Plaintext* decode(::sun::security::ssl::TransportContext* context, $Array<::java::nio::ByteBuffer>* srcs, int32_t srcsOffset, int32_t srcsLength, $Array<::java::nio::ByteBuffer>* dsts, int32_t dstsOffset, int32_t dstsLength);
	virtual $String* getPeerHost() {return nullptr;}
	virtual int32_t getPeerPort() {return 0;}
	virtual void shutdown();
	virtual bool useDelegatedTask() {return false;}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLTransport_h_