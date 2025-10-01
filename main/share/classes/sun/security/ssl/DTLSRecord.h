#ifndef _sun_security_ssl_DTLSRecord_h_
#define _sun_security_ssl_DTLSRecord_h_
//$ interface sun.security.ssl.DTLSRecord
//$ extends sun.security.ssl.Record

#include <sun/security/ssl/Record.h>

namespace sun {
	namespace security {
		namespace ssl {

class DTLSRecord : public ::sun::security::ssl::Record {
	$interface(DTLSRecord, $NO_CLASS_INIT, ::sun::security::ssl::Record)
public:
	static const int32_t headerSize = 13;
	static const int32_t handshakeHeaderSize = 12;
	static const int32_t headerPlusMaxIVSize = 29; // headerSize + maxIVLength
	static const int32_t maxPlaintextPlusSize = 333; // headerSize + maxIVLength + maxMacSize + maxPadding
	static const int32_t maxRecordSize = 16717; // headerPlusMaxIVSize + maxDataSize + maxPadding + maxMacSize
	static const int32_t minCertPlaintextSize = 28; // headerSize + handshakeHeaderSize + 3
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DTLSRecord_h_