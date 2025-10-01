#ifndef _javax_net_ssl_SSLEngineResult_h_
#define _javax_net_ssl_SSLEngineResult_h_
//$ class javax.net.ssl.SSLEngineResult
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace net {
		namespace ssl {
			class SSLEngineResult$HandshakeStatus;
			class SSLEngineResult$Status;
		}
	}
}

namespace javax {
	namespace net {
		namespace ssl {

class $import SSLEngineResult : public ::java::lang::Object {
	$class(SSLEngineResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SSLEngineResult();
	void init$(::javax::net::ssl::SSLEngineResult$Status* status, ::javax::net::ssl::SSLEngineResult$HandshakeStatus* handshakeStatus, int32_t bytesConsumed, int32_t bytesProduced);
	void init$(::javax::net::ssl::SSLEngineResult$Status* status, ::javax::net::ssl::SSLEngineResult$HandshakeStatus* handshakeStatus, int32_t bytesConsumed, int32_t bytesProduced, int64_t sequenceNumber);
	int32_t bytesConsumed();
	int32_t bytesProduced();
	::javax::net::ssl::SSLEngineResult$HandshakeStatus* getHandshakeStatus();
	::javax::net::ssl::SSLEngineResult$Status* getStatus();
	int64_t sequenceNumber();
	virtual $String* toString() override;
	::javax::net::ssl::SSLEngineResult$Status* status = nullptr;
	::javax::net::ssl::SSLEngineResult$HandshakeStatus* handshakeStatus = nullptr;
	int32_t bytesConsumed$ = 0;
	int32_t bytesProduced$ = 0;
	int64_t sequenceNumber$ = 0;
};

		} // ssl
	} // net
} // javax

#endif // _javax_net_ssl_SSLEngineResult_h_