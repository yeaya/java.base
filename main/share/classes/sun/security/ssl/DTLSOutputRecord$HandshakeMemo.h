#ifndef _sun_security_ssl_DTLSOutputRecord$HandshakeMemo_h_
#define _sun_security_ssl_DTLSOutputRecord$HandshakeMemo_h_
//$ class sun.security.ssl.DTLSOutputRecord$HandshakeMemo
//$ extends sun.security.ssl.DTLSOutputRecord$RecordMemo

#include <sun/security/ssl/DTLSOutputRecord$RecordMemo.h>

namespace sun {
	namespace security {
		namespace ssl {

class DTLSOutputRecord$HandshakeMemo : public ::sun::security::ssl::DTLSOutputRecord$RecordMemo {
	$class(DTLSOutputRecord$HandshakeMemo, $NO_CLASS_INIT, ::sun::security::ssl::DTLSOutputRecord$RecordMemo)
public:
	DTLSOutputRecord$HandshakeMemo();
	void init$();
	int8_t handshakeType = 0;
	int32_t messageSequence = 0;
	int32_t acquireOffset = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DTLSOutputRecord$HandshakeMemo_h_