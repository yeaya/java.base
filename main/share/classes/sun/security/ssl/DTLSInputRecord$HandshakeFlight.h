#ifndef _sun_security_ssl_DTLSInputRecord$HandshakeFlight_h_
#define _sun_security_ssl_DTLSInputRecord$HandshakeFlight_h_
//$ class sun.security.ssl.DTLSInputRecord$HandshakeFlight
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

#pragma push_macro("HF_UNKNOWN")
#undef HF_UNKNOWN

namespace java {
	namespace util {
		class HashMap;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class DTLSInputRecord$HandshakeFlight : public ::java::lang::Cloneable {
	$class(DTLSInputRecord$HandshakeFlight, 0, ::java::lang::Cloneable)
public:
	DTLSInputRecord$HandshakeFlight();
	void init$();
	virtual $Object* clone() override;
	bool isRetransmitOf(::sun::security::ssl::DTLSInputRecord$HandshakeFlight* hs);
	static int8_t HF_UNKNOWN;
	int8_t handshakeType = 0;
	int32_t flightEpoch = 0;
	int32_t minMessageSeq = 0;
	int32_t maxMessageSeq = 0;
	int32_t maxRecordEpoch = 0;
	int64_t maxRecordSeq = 0;
	::java::util::HashMap* holesMap = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("HF_UNKNOWN")

#endif // _sun_security_ssl_DTLSInputRecord$HandshakeFlight_h_