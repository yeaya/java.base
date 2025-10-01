#ifndef _sun_security_ssl_SSLRecord_h_
#define _sun_security_ssl_SSLRecord_h_
//$ interface sun.security.ssl.SSLRecord
//$ extends sun.security.ssl.Record

#include <java/lang/Array.h>
#include <sun/security/ssl/Record.h>

namespace sun {
	namespace security {
		namespace ssl {

class SSLRecord : public ::sun::security::ssl::Record {
	$interface(SSLRecord, 0, ::sun::security::ssl::Record)
public:
	static const int32_t headerSize = 5;
	static const int32_t handshakeHeaderSize = 4;
	static const int32_t headerPlusMaxIVSize = 21; // headerSize + maxIVLength
	static const int32_t maxPlaintextPlusSize = 325; // headerSize + maxIVLength + maxMacSize + maxPadding
	static const int32_t maxRecordSize = 16709; // headerPlusMaxIVSize + maxDataSize + maxPadding + maxMacSize
	static const int32_t maxLargeRecordSize = 33093; // maxRecordSize + maxDataSize
	static $bytes* v2NoCipher;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLRecord_h_