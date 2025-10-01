#ifndef _sun_security_ssl_DTLSInputRecord$DTLSReassembler_h_
#define _sun_security_ssl_DTLSInputRecord$DTLSReassembler_h_
//$ class sun.security.ssl.DTLSInputRecord$DTLSReassembler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Set;
		class TreeSet;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class DTLSInputRecord;
			class DTLSInputRecord$HandshakeFlight;
			class DTLSInputRecord$HandshakeFragment;
			class DTLSInputRecord$RecordFragment;
			class Plaintext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class DTLSInputRecord$DTLSReassembler : public ::java::lang::Object {
	$class(DTLSInputRecord$DTLSReassembler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DTLSInputRecord$DTLSReassembler();
	void init$(::sun::security::ssl::DTLSInputRecord* this$0, int32_t handshakeEpoch);
	::sun::security::ssl::Plaintext* acquireCachedMessage();
	::sun::security::ssl::Plaintext* acquireHandshakeMessage();
	::sun::security::ssl::Plaintext* acquirePlaintext();
	void bufferFragment(::sun::security::ssl::DTLSInputRecord$RecordFragment* rf);
	void cleanUpRetransmit(::sun::security::ssl::DTLSInputRecord$RecordFragment* rf);
	void expectingFinishFlight();
	bool flightIsReady();
	void handshakeHashing(::sun::security::ssl::DTLSInputRecord$HandshakeFragment* hsFrag, ::sun::security::ssl::Plaintext* plaintext);
	bool hasCompleted(int8_t handshakeType);
	bool hasCompleted(::java::util::Set* fragments, int32_t presentMsgSeq, int32_t endMsgSeq);
	bool hasFinishedMessage(::java::util::Set* fragments);
	bool isDesirable(::sun::security::ssl::DTLSInputRecord$RecordFragment* rf);
	bool isEmpty();
	bool needClientVerify(::java::util::Set* fragments);
	void queueUpChangeCipherSpec(::sun::security::ssl::DTLSInputRecord$RecordFragment* rf);
	void queueUpFragment(::sun::security::ssl::DTLSInputRecord$RecordFragment* rf);
	void queueUpHandshake(::sun::security::ssl::DTLSInputRecord$HandshakeFragment* hsf);
	void resetHandshakeFlight(::sun::security::ssl::DTLSInputRecord$HandshakeFlight* prev);
	::sun::security::ssl::DTLSInputRecord* this$0 = nullptr;
	int32_t handshakeEpoch = 0;
	::java::util::TreeSet* bufferedFragments = nullptr;
	::sun::security::ssl::DTLSInputRecord$HandshakeFlight* handshakeFlight = nullptr;
	::sun::security::ssl::DTLSInputRecord$HandshakeFlight* precedingFlight = nullptr;
	int32_t nextRecordEpoch = 0;
	int64_t nextRecordSeq = 0;
	bool expectCCSFlight = false;
	bool flightIsReady$ = false;
	bool needToCheckFlight = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_DTLSInputRecord$DTLSReassembler_h_