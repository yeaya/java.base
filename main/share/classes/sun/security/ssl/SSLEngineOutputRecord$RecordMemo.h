#ifndef _sun_security_ssl_SSLEngineOutputRecord$RecordMemo_h_
#define _sun_security_ssl_SSLEngineOutputRecord$RecordMemo_h_
//$ class sun.security.ssl.SSLEngineOutputRecord$RecordMemo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace ssl {
			class SSLCipher$SSLWriteCipher;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLEngineOutputRecord$RecordMemo : public ::java::lang::Object {
	$class(SSLEngineOutputRecord$RecordMemo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SSLEngineOutputRecord$RecordMemo();
	void init$();
	int8_t contentType = 0;
	int8_t majorVersion = 0;
	int8_t minorVersion = 0;
	::sun::security::ssl::SSLCipher$SSLWriteCipher* encodeCipher = nullptr;
	$bytes* fragment = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLEngineOutputRecord$RecordMemo_h_