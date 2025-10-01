#ifndef _sun_security_ssl_ServerHandshakeContext_h_
#define _sun_security_ssl_ServerHandshakeContext_h_
//$ class sun.security.ssl.ServerHandshakeContext
//$ extends sun.security.ssl.HandshakeContext

#include <sun/security/ssl/HandshakeContext.h>

#pragma push_macro("DEFAULT_STATUS_RESP_DELAY")
#undef DEFAULT_STATUS_RESP_DELAY

namespace java {
	namespace security {
		class AlgorithmConstraints;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CertificateMessage$CertificateEntry;
			class SSLContextImpl;
			class SSLPossession;
			class StatusResponseManager$StaplingParameters;
			class TransportContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ServerHandshakeContext : public ::sun::security::ssl::HandshakeContext {
	$class(ServerHandshakeContext, 0, ::sun::security::ssl::HandshakeContext)
public:
	ServerHandshakeContext();
	void init$(::sun::security::ssl::SSLContextImpl* sslContext, ::sun::security::ssl::TransportContext* conContext);
	virtual void kickstart() override;
	static bool rejectClientInitiatedRenego;
	static ::java::security::AlgorithmConstraints* legacyAlgorithmConstraints;
	::sun::security::ssl::SSLPossession* interimAuthn = nullptr;
	::sun::security::ssl::StatusResponseManager$StaplingParameters* stapleParams = nullptr;
	::sun::security::ssl::CertificateMessage$CertificateEntry* currentCertEntry = nullptr;
	static const int64_t DEFAULT_STATUS_RESP_DELAY = (int64_t)5000;
	int64_t statusRespTimeout = 0;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("DEFAULT_STATUS_RESP_DELAY")

#endif // _sun_security_ssl_ServerHandshakeContext_h_