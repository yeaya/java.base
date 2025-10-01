#ifndef _sun_security_ssl_SSLEngineOutputRecord$HandshakeMemo_h_
#define _sun_security_ssl_SSLEngineOutputRecord$HandshakeMemo_h_
//$ class sun.security.ssl.SSLEngineOutputRecord$HandshakeMemo
//$ extends sun.security.ssl.SSLEngineOutputRecord$RecordMemo

#include <sun/security/ssl/SSLEngineOutputRecord$RecordMemo.h>

namespace sun {
	namespace security {
		namespace ssl {

class SSLEngineOutputRecord$HandshakeMemo : public ::sun::security::ssl::SSLEngineOutputRecord$RecordMemo {
	$class(SSLEngineOutputRecord$HandshakeMemo, $NO_CLASS_INIT, ::sun::security::ssl::SSLEngineOutputRecord$RecordMemo)
public:
	SSLEngineOutputRecord$HandshakeMemo();
	void init$();
	int8_t handshakeType = 0;
	int32_t acquireOffset = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLEngineOutputRecord$HandshakeMemo_h_