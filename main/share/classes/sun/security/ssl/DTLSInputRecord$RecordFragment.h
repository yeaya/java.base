#ifndef _sun_security_ssl_DTLSInputRecord$RecordFragment_h_
#define _sun_security_ssl_DTLSInputRecord$RecordFragment_h_
//$ class sun.security.ssl.DTLSInputRecord$RecordFragment
//$ extends java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class DTLSInputRecord$RecordFragment : public ::java::lang::Comparable {
	$class(DTLSInputRecord$RecordFragment, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	DTLSInputRecord$RecordFragment();
	void init$(::java::nio::ByteBuffer* fragBuf, int8_t contentType, int8_t majorVersion, int8_t minorVersion, $bytes* recordEnS, int32_t recordEpoch, int64_t recordSeq, bool isCiphertext);
	void init$($bytes* fragment, int8_t contentType, int8_t majorVersion, int8_t minorVersion, $bytes* recordEnS, int32_t recordEpoch, int64_t recordSeq, bool isCiphertext);
	virtual int32_t compareTo(::sun::security::ssl::DTLSInputRecord$RecordFragment* o);
	virtual int32_t compareTo(Object$* o) override;
	virtual int32_t compareToSequence(int32_t epoch, int64_t seq);
	bool isCiphertext = false;
	int8_t contentType = 0;
	int8_t majorVersion = 0;
	int8_t minorVersion = 0;
	int32_t recordEpoch = 0;
	int64_t recordSeq = 0;
	$bytes* recordEnS = nullptr;
	$bytes* fragment = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DTLSInputRecord$RecordFragment_h_