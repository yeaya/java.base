#ifndef _sun_security_ssl_DTLSInputRecord$HandshakeFragment_h_
#define _sun_security_ssl_DTLSInputRecord$HandshakeFragment_h_
//$ class sun.security.ssl.DTLSInputRecord$HandshakeFragment
//$ extends sun.security.ssl.DTLSInputRecord$RecordFragment

#include <java/lang/Array.h>
#include <sun/security/ssl/DTLSInputRecord$RecordFragment.h>

namespace sun {
	namespace security {
		namespace ssl {

class DTLSInputRecord$HandshakeFragment : public ::sun::security::ssl::DTLSInputRecord$RecordFragment {
	$class(DTLSInputRecord$HandshakeFragment, $NO_CLASS_INIT, ::sun::security::ssl::DTLSInputRecord$RecordFragment)
public:
	DTLSInputRecord$HandshakeFragment();
	void init$($bytes* fragment, int8_t contentType, int8_t majorVersion, int8_t minorVersion, $bytes* recordEnS, int32_t recordEpoch, int64_t recordSeq, int8_t handshakeType, int32_t messageLength, int32_t messageSeq, int32_t fragmentOffset, int32_t fragmentLength);
	virtual int32_t compareTo(::sun::security::ssl::DTLSInputRecord$RecordFragment* o) override;
	virtual int32_t compareTo(Object$* o) override;
	int8_t handshakeType = 0;
	int32_t messageSeq = 0;
	int32_t messageLength = 0;
	int32_t fragmentOffset = 0;
	int32_t fragmentLength = 0;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DTLSInputRecord$HandshakeFragment_h_